// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.2.0
// PROJECT: Lvgl_for_makers

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_ScreenLvglMakerCourse;
lv_obj_t * ui_LabelTitle;
lv_obj_t * ui_PanelTemp;
lv_obj_t * ui_LabelTempTitle;
lv_obj_t * ui_LabelTemp;
lv_obj_t * ui_PanelHumid;
lv_obj_t * ui_LabelHumidTitle;
lv_obj_t * ui_LabelHumid;
lv_obj_t * ui_PanelCtrl;
lv_obj_t * ui_LabelCtrlTitle;
lv_obj_t * ui_LabelCtrlState;
lv_obj_t * ui_PanelCtrlLed;
void ui_event_ButtonCtrlToggle(lv_event_t * e);
lv_obj_t * ui_ButtonCtrlToggle;
lv_obj_t * ui_LabelCtrlToggle;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_ButtonCtrlToggle(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        toggleLedFn(e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_ScreenLvglMakerCourse_screen_init(void)
{
    ui_ScreenLvglMakerCourse = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenLvglMakerCourse, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LabelTitle = lv_label_create(ui_ScreenLvglMakerCourse);
    lv_obj_set_width(ui_LabelTitle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelTitle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelTitle, 45);
    lv_obj_set_y(ui_LabelTitle, -134);
    lv_obj_set_align(ui_LabelTitle, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_LabelTitle, "LVGL w/SquareLine + SensesIoT");

    ui_PanelTemp = lv_obj_create(ui_ScreenLvglMakerCourse);
    lv_obj_set_width(ui_PanelTemp, 388);
    lv_obj_set_height(ui_PanelTemp, 50);
    lv_obj_set_x(ui_PanelTemp, -6);
    lv_obj_set_y(ui_PanelTemp, -84);
    lv_obj_set_align(ui_PanelTemp, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PanelTemp, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PanelTemp, lv_color_hex(0xFFF2BB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PanelTemp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelTempTitle = lv_label_create(ui_PanelTemp);
    lv_obj_set_width(ui_LabelTempTitle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelTempTitle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelTempTitle, 3);
    lv_obj_set_y(ui_LabelTempTitle, -1);
    lv_obj_set_align(ui_LabelTempTitle, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_LabelTempTitle, "Temperature");

    ui_LabelTemp = lv_label_create(ui_PanelTemp);
    lv_obj_set_width(ui_LabelTemp, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelTemp, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelTemp, -8);
    lv_obj_set_y(ui_LabelTemp, -1);
    lv_obj_set_align(ui_LabelTemp, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_LabelTemp, "25.00 C");

    ui_PanelHumid = lv_obj_create(ui_ScreenLvglMakerCourse);
    lv_obj_set_width(ui_PanelHumid, 388);
    lv_obj_set_height(ui_PanelHumid, 50);
    lv_obj_set_x(ui_PanelHumid, -4);
    lv_obj_set_y(ui_PanelHumid, -25);
    lv_obj_set_align(ui_PanelHumid, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PanelHumid, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PanelHumid, lv_color_hex(0xBBE4FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PanelHumid, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelHumidTitle = lv_label_create(ui_PanelHumid);
    lv_obj_set_width(ui_LabelHumidTitle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelHumidTitle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelHumidTitle, 3);
    lv_obj_set_y(ui_LabelHumidTitle, -1);
    lv_obj_set_align(ui_LabelHumidTitle, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_LabelHumidTitle, "Humidity");

    ui_LabelHumid = lv_label_create(ui_PanelHumid);
    lv_obj_set_width(ui_LabelHumid, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelHumid, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelHumid, -8);
    lv_obj_set_y(ui_LabelHumid, -1);
    lv_obj_set_align(ui_LabelHumid, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_LabelHumid, "52 %RH");

    ui_PanelCtrl = lv_obj_create(ui_ScreenLvglMakerCourse);
    lv_obj_set_width(ui_PanelCtrl, 388);
    lv_obj_set_height(ui_PanelCtrl, 50);
    lv_obj_set_x(ui_PanelCtrl, -5);
    lv_obj_set_y(ui_PanelCtrl, 57);
    lv_obj_set_align(ui_PanelCtrl, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PanelCtrl, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PanelCtrl, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PanelCtrl, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelCtrlTitle = lv_label_create(ui_PanelCtrl);
    lv_obj_set_width(ui_LabelCtrlTitle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelCtrlTitle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelCtrlTitle, 3);
    lv_obj_set_y(ui_LabelCtrlTitle, -1);
    lv_obj_set_align(ui_LabelCtrlTitle, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_LabelCtrlTitle, "LED");

    ui_LabelCtrlState = lv_label_create(ui_PanelCtrl);
    lv_obj_set_width(ui_LabelCtrlState, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelCtrlState, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelCtrlState, 161);
    lv_obj_set_y(ui_LabelCtrlState, -1);
    lv_obj_set_align(ui_LabelCtrlState, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelCtrlState, "ON");

    ui_PanelCtrlLed = lv_obj_create(ui_PanelCtrl);
    lv_obj_set_width(ui_PanelCtrlLed, 28);
    lv_obj_set_height(ui_PanelCtrlLed, 28);
    lv_obj_set_x(ui_PanelCtrlLed, 126);
    lv_obj_set_y(ui_PanelCtrlLed, -1);
    lv_obj_set_align(ui_PanelCtrlLed, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_PanelCtrlLed, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_PanelCtrlLed, 32, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_PanelCtrlLed, lv_color_hex(0xC71D1D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PanelCtrlLed, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonCtrlToggle = lv_btn_create(ui_ScreenLvglMakerCourse);
    lv_obj_set_width(ui_ButtonCtrlToggle, 148);
    lv_obj_set_height(ui_ButtonCtrlToggle, 42);
    lv_obj_set_x(ui_ButtonCtrlToggle, -2);
    lv_obj_set_y(ui_ButtonCtrlToggle, 115);
    lv_obj_set_align(ui_ButtonCtrlToggle, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonCtrlToggle, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonCtrlToggle, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LabelCtrlToggle = lv_label_create(ui_ButtonCtrlToggle);
    lv_obj_set_width(ui_LabelCtrlToggle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelCtrlToggle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelCtrlToggle, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelCtrlToggle, "Toggle LED");

    lv_obj_add_event_cb(ui_ButtonCtrlToggle, ui_event_ButtonCtrlToggle, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_ScreenLvglMakerCourse_screen_init();
    lv_disp_load_scr(ui_ScreenLvglMakerCourse);
}
