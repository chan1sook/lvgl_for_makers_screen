// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.2.0
// PROJECT: Lvgl_for_makers

#ifndef _LVGL_FOR_MAKERS_UI_H
#define _LVGL_FOR_MAKERS_UI_H

#ifdef __cplusplus
extern "C"
{
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

    extern lv_obj_t *ui_ScreenLvglMakerCourse;
    extern lv_obj_t *ui_LabelTitle;
    extern lv_obj_t *ui_PanelTemp;
    extern lv_obj_t *ui_LabelTempTitle;
    extern lv_obj_t *ui_LabelTemp;
    extern lv_obj_t *ui_PanelHumid;
    extern lv_obj_t *ui_LabelHumidTitle;
    extern lv_obj_t *ui_LabelHumid;
    extern lv_obj_t *ui_PanelCtrl;
    extern lv_obj_t *ui_LabelCtrlTitle;
    extern lv_obj_t *ui_LabelCtrlState;
    extern lv_obj_t *ui_PanelCtrlLed;
    void ui_event_ButtonCtrlToggle(lv_event_t *e);
    extern lv_obj_t *ui_ButtonCtrlToggle;
    extern lv_obj_t *ui_LabelCtrlToggle;

    void toggleLedFn(lv_event_t *e);

    void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
