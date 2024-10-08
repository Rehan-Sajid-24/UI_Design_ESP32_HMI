// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: Servo_Control

#include "ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Slider_Servo = lv_slider_create(ui_Screen1);
    lv_slider_set_range(ui_Slider_Servo, 0, 180);
    lv_slider_set_value(ui_Slider_Servo, 0, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Slider_Servo) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_Slider_Servo, 0,
                                                                                                 LV_ANIM_OFF);
    lv_obj_set_width(ui_Slider_Servo, 275);
    lv_obj_set_height(ui_Slider_Servo, 15);
    lv_obj_set_x(ui_Slider_Servo, 0);
    lv_obj_set_y(ui_Slider_Servo, 74);
    lv_obj_set_align(ui_Slider_Servo, LV_ALIGN_CENTER);

    lv_obj_set_style_radius(ui_Slider_Servo, 275, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Arc_Servo = lv_arc_create(ui_Screen1);
    lv_obj_set_width(ui_Arc_Servo, 175);
    lv_obj_set_height(ui_Arc_Servo, 174);
    lv_obj_set_x(ui_Arc_Servo, 0);
    lv_obj_set_y(ui_Arc_Servo, -22);
    lv_obj_set_align(ui_Arc_Servo, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_Arc_Servo, 0, 180);
    lv_arc_set_value(ui_Arc_Servo, 0);
    lv_arc_set_bg_angles(ui_Arc_Servo, 0, 180);
    lv_arc_set_rotation(ui_Arc_Servo, 180);

    lv_obj_set_style_radius(ui_Arc_Servo, 100, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_arc_Angle = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_arc_Angle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_arc_Angle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_arc_Angle, -28);
    lv_obj_set_y(ui_arc_Angle, -25);
    lv_obj_set_align(ui_arc_Angle, LV_ALIGN_CENTER);
    lv_label_set_text(ui_arc_Angle, "Angle:");

    ui_Slider_angle = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Slider_angle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Slider_angle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Slider_angle, -26);
    lv_obj_set_y(ui_Slider_angle, 99);
    lv_obj_set_align(ui_Slider_angle, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Slider_angle, "Angle:");

    lv_obj_add_event_cb(ui_Slider_Servo, ui_event_Slider_Servo, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Arc_Servo, ui_event_Arc_Servo, LV_EVENT_ALL, NULL);

}
