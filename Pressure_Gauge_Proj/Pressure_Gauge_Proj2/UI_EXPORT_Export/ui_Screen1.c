// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: Style_Design_Pressure_Gauge

#include "ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x131313), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Frame = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Frame, &ui_img_pressure_guage_export_png);
    lv_obj_set_width(ui_Frame, LV_SIZE_CONTENT);   /// 500
    lv_obj_set_height(ui_Frame, LV_SIZE_CONTENT);    /// 500
    lv_obj_set_x(ui_Frame, 8);
    lv_obj_set_y(ui_Frame, 17);
    lv_obj_set_align(ui_Frame, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Frame, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Frame, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Frame, 180);

    ui_Main_Gauge = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Main_Gauge, &ui_img_main_gauge_export_png);
    lv_obj_set_width(ui_Main_Gauge, LV_SIZE_CONTENT);   /// 450
    lv_obj_set_height(ui_Main_Gauge, LV_SIZE_CONTENT);    /// 450
    lv_obj_set_align(ui_Main_Gauge, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Main_Gauge, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Main_Gauge, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Main_Gauge, 180);

    ui_Needle = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Needle, &ui_img_needle_export_2_png);
    lv_obj_set_width(ui_Needle, LV_SIZE_CONTENT);   /// 26
    lv_obj_set_height(ui_Needle, LV_SIZE_CONTENT);    /// 75
    lv_obj_set_x(ui_Needle, -9);
    lv_obj_set_y(ui_Needle, -41);
    lv_obj_set_align(ui_Needle, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Needle, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Needle, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_pivot(ui_Needle, 12, 62);
    lv_img_set_angle(ui_Needle, 1280);
    lv_img_set_zoom(ui_Needle, 180);

    ui_anime_buttion = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_anime_buttion, 38);
    lv_obj_set_height(ui_anime_buttion, 27);
    lv_obj_set_x(ui_anime_buttion, 126);
    lv_obj_set_y(ui_anime_buttion, -93);
    lv_obj_set_align(ui_anime_buttion, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_anime_buttion, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_anime_buttion, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_anime_buttion, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_anime_buttion, lv_color_hex(0x00FFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_anime_buttion, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_anime_buttion, lv_color_hex(0x060000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_anime_buttion, 1100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_anime_buttion, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_anime_buttion, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_click = lv_label_create(ui_anime_buttion);
    lv_obj_set_width(ui_click, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_click, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_click, LV_ALIGN_CENTER);
    lv_label_set_text(ui_click, "click");
    lv_obj_set_style_text_color(ui_click, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_click, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Digit_Label = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Digit_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Digit_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Digit_Label, -9);
    lv_obj_set_y(ui_Digit_Label, 12);
    lv_obj_set_align(ui_Digit_Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Digit_Label, "-230 mmhg");
    lv_obj_set_style_text_color(ui_Digit_Label, lv_color_hex(0x0DFEFE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Digit_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Digit_Label, &ui_font_Digital, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_digit_chng = lv_slider_create(ui_Screen1);
    lv_slider_set_range(ui_digit_chng, -300, 0);
    lv_slider_set_value(ui_digit_chng, -150, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_digit_chng) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_digit_chng, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_digit_chng, 13);
    lv_obj_set_height(ui_digit_chng, 150);
    lv_obj_set_x(ui_digit_chng, -136);
    lv_obj_set_y(ui_digit_chng, -9);
    lv_obj_set_align(ui_digit_chng, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_digit_chng, lv_color_hex(0x52799C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_digit_chng, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_digit_chng, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_digit_chng, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_digit_chng, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_digit_chng, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_digit_chng, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_digit_chng, lv_color_hex(0x000000), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_digit_chng, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_digit_chng, 1, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_digit_chng, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_digit_chng, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_anime_buttion, ui_event_anime_buttion, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_digit_chng, ui_event_digit_chng, LV_EVENT_ALL, NULL);

}
