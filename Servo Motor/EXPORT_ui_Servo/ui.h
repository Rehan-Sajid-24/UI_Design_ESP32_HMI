// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: Servo_Control

#ifndef _SERVO_CONTROL_UI_H
#define _SERVO_CONTROL_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"

// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t * ui_Screen1;
void ui_event_Slider_Servo(lv_event_t * e);
extern lv_obj_t * ui_Slider_Servo;
void ui_event_Arc_Servo(lv_event_t * e);
extern lv_obj_t * ui_Arc_Servo;
extern lv_obj_t * ui_arc_Angle;
extern lv_obj_t * ui_Slider_angle;
extern lv_obj_t * ui____initial_actions0;








void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
