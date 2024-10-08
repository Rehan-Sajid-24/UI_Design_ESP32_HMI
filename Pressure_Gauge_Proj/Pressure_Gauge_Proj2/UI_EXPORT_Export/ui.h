// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: Style_Design_Pressure_Gauge

#ifndef _STYLE_DESIGN_PRESSURE_GAUGE_UI_H
#define _STYLE_DESIGN_PRESSURE_GAUGE_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"

void Rotate_Animation(lv_obj_t * TargetObject, int delay);
// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_Frame;
extern lv_obj_t * ui_Main_Gauge;
extern lv_obj_t * ui_Needle;
void ui_event_anime_buttion(lv_event_t * e);
extern lv_obj_t * ui_anime_buttion;
extern lv_obj_t * ui_click;
extern lv_obj_t * ui_Digit_Label;
void ui_event_digit_chng(lv_event_t * e);
extern lv_obj_t * ui_digit_chng;
extern lv_obj_t * ui____initial_actions0;


LV_IMG_DECLARE(ui_img_pressure_guage_export_png);    // assets/Pressure Guage_Export.png
LV_IMG_DECLARE(ui_img_main_gauge_export_png);    // assets/Main_Gauge_Export.png
LV_IMG_DECLARE(ui_img_needle_export_2_png);    // assets/Needle_Export_2.png



LV_FONT_DECLARE(ui_font_Digital);



void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
