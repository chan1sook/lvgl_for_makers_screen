#include "main.h"
#include "mockup.h"

#include <Arduino.h>
#include <Wire.h>
#include <HTTPClient.h>

#include <SPI.h>
#include <TFT_eSPI.h>
#include "FT62XXTouchScreen.h"
#include "Adafruit_SHTC3.h"
#include "Sensesiot.h"

#include <WiFi.h>
#include <EEPROM.h>

TFT_eSPI tft = TFT_eSPI();
FT62XXTouchScreen touchScreen = FT62XXTouchScreen(TFT_WIDTH, PIN_SDA, PIN_SCL);

#include "esp_freertos_hooks.h"
#include "ui/ui.h"

static const uint16_t screenWidth = 480;
static const uint16_t screenHeight = 320;

static lv_disp_draw_buf_t disp_buf;
static lv_color_t buf[screenWidth * 10];

static void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p);
static void touchpad_read(lv_indev_drv_t *drv, lv_indev_data_t *data);

static void lv_tick_task(void *arg);
static void lv_handler_task(void *arg);
static void update_screen_task(void *arg);

esp_timer_handle_t ticker_timer;
esp_timer_handle_t handler_timer;
esp_timer_handle_t update_screen_timer;
const esp_timer_create_args_t ticker_timer_args = {
    .callback = &lv_tick_task,
    .name = "lv_tick_task"};
const esp_timer_create_args_t ticker_handler_args = {
    .callback = &lv_handler_task,
    .name = "lv_handler_task"};
const esp_timer_create_args_t update_screen_args = {
    .callback = &update_screen_task,
    .name = "update_screen_task"};

double temp = NAN;
double humid = NAN;
uint8_t ledStatus = LOW;

unsigned long readDataTs;
unsigned long sendDataTs;
#define READ_DATA_DELAY (1000)
#define SEND_DATA_DELAY (2000)

// Define here
String ssid = "WIFI_SSID";
String wifiPw = "WIFI_PASSWORD";
String siotUid = "SENSESIOT_USERID";
String siotDevKey = "SENSESIOT_DEVKEY";
uint8_t tempSlot = 1;
uint8_t humidSlot = 2;
uint8_t ledCtrlSlot = 1;

SensesiotClient protocol = SensesiotClient(siotUid, siotDevKey);
enum connect_state
{
  NO_CONNECT,
  WIFI_CONNECTED,
  MQTT_FAILED,
  MQTT_CONNECTED,
};
connect_state connectingState = NO_CONNECT;

lv_obj_t *textareaRef;

static void beginWifi();
static void controlLedTo(uint8_t state);
void controlLedToggle();
void toggleLedWithProtocol();

static void onControlCallback(uint8_t slot, const char *data);

static double getTemp();
static double getHumidity();

void setup()
{
  Serial.begin(115200);

  beginWifi();

  lv_init();
  ESP_ERROR_CHECK(esp_timer_create(&ticker_timer_args, &ticker_timer));
  ESP_ERROR_CHECK(esp_timer_start_periodic(ticker_timer, portTICK_RATE_MS * 1000));

  // Enable TFT
  tft.begin();
  tft.setRotation(1);

  // Enable Backlight
  pinMode(TFT_BL, OUTPUT);
  digitalWrite(TFT_BL, 1);

  // Start TouchScreen
  touchScreen.begin();

  // Display Buffer
  lv_disp_draw_buf_init(&disp_buf, buf, NULL, screenWidth * 10);

  /*Initialize the display*/
  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv);
  disp_drv.hor_res = screenWidth;
  disp_drv.ver_res = screenHeight;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &disp_buf;
  lv_disp_drv_register(&disp_drv);

  // Init Touchscreen
  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = touchpad_read;
  lv_indev_drv_register(&indev_drv);

  ui_init();

  readDataTs = millis();
  sendDataTs = millis();

  ESP_ERROR_CHECK(esp_timer_create(&ticker_handler_args, &handler_timer));
  ESP_ERROR_CHECK(esp_timer_start_periodic(handler_timer, 10 * portTICK_RATE_MS * 1000));

  ESP_ERROR_CHECK(esp_timer_create(&update_screen_args, &update_screen_timer));
  ESP_ERROR_CHECK(esp_timer_start_periodic(update_screen_timer, 100 * portTICK_RATE_MS * 1000));
}

void loop()
{
  protocol.loop();

  if (protocol.wifiStatus() == WL_CONNECTED)
  {
    if (connectingState == NO_CONNECT)
    {
      connectingState = WIFI_CONNECTED;
      protocol.connectMqtt();
    }
    else if (!protocol.ready())
    {
      connectingState = MQTT_FAILED;
      protocol.connectMqtt();
    }
    else if ((connectingState == WIFI_CONNECTED || connectingState == MQTT_FAILED) && protocol.ready())
    {
      connectingState = MQTT_CONNECTED;

      protocol.subscribeControl(ledCtrlSlot);
      protocol.retainControl(ledCtrlSlot);
    }
  }
  else if (protocol.wifiStatus() != WL_DISCONNECTED && protocol.wifiStatus() != WL_IDLE_STATUS)
  {
    beginWifi();
  }

  if (millis() - readDataTs >= SEND_DATA_DELAY)
  {
    temp = getTemp();
    humid = getHumidity();
    readDataTs = millis();
  }

  if (millis() - sendDataTs >= SEND_DATA_DELAY && connectingState == MQTT_CONNECTED)
  {
    sendDataTs = millis();

    if (!isnan(temp))
    {
      protocol.setData(tempSlot, temp);
    }
    if (!isnan(humid))
    {
      protocol.setData(humidSlot, humid);
    }
  }

  delay(5);
}

static void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);

  tft.startWrite();
  tft.setAddrWindow(area->x1, area->y1, w, h);
  tft.pushColors(&color_p->full, w * h, true);
  tft.endWrite();

  lv_disp_flush_ready(disp);
}

static void touchpad_read(lv_indev_drv_t *drv, lv_indev_data_t *data)
{
  TouchPoint touchPos = touchScreen.read();
  if (touchPos.touched)
  {
    data->state = LV_INDEV_STATE_PR;
    data->point.x = touchPos.xPos;
    data->point.y = touchPos.yPos;
  }
  else
  {
    data->state = LV_INDEV_STATE_REL;
  }
}

static void lv_tick_task(void *arg)
{
  lv_tick_inc(portTICK_RATE_MS);
}

static void lv_handler_task(void *arg)
{
  lv_task_handler();
}

static void update_screen_task(void *arg)
{
  if (lv_scr_act() == ui_ScreenLvglMakerCourse)
  {
    lv_label_set_text(ui_LabelTemp, isnan(temp) ? "-" : String(temp, 1).c_str());
    lv_label_set_text(ui_LabelHumid, isnan(humid) ? "-" : String(humid, 1).c_str());

    bool isLedOn = ledStatus == HIGH;
    lv_label_set_text(ui_LabelCtrlState, isLedOn ? "ON" : "OFF");

    lv_obj_set_style_bg_color(ui_PanelCtrlLed, isLedOn ? lv_color_hex(0x127517) : lv_color_hex(0xC71E1E), LV_PART_MAIN | LV_STATE_DEFAULT);
  }
}

static void beginWifi()
{
  protocol.setUserid(siotUid);
  protocol.setDevicekey(siotDevKey);
  protocol.setControlCallback(onControlCallback);
  protocol.begin(ssid.c_str(), wifiPw.length() > 0 ? wifiPw.c_str() : NULL);

  connectingState = NO_CONNECT;
}

static void controlLedTo(uint8_t state)
{
  ledStatus = state;
}

void controlLedToggle()
{
  controlLedTo(ledStatus == HIGH ? LOW : HIGH);
}

void toggleLedWithProtocol()
{
  controlLedToggle();
  protocol.setControl(ledCtrlSlot, ledStatus ? CONTROL_STATE_ON : CONTROL_STATE_OFF);
}

static void onControlCallback(uint8_t slot, const char *data)
{
  String dataStr = String(data);

  if (slot == ledCtrlSlot)
  {
    if (dataStr.equals("on"))
    {
      controlLedTo(HIGH);
    }
    else if (dataStr.equals("off"))
    {
      controlLedTo(LOW);
    }
    else if (dataStr.equals(""))
    {
      controlLedToggle();
    }
  }
}

static double getTemp()
{
  double t1 = millis() * 0.001;
  double temp = 20 + (10 * __dRandomT(t1));
  return temp;
}
static double getHumidity()
{
  double t1 = millis() * 0.001 + 50000;
  double humid = 50 + (50 * __dRandomT(t1));
  return humid;
}