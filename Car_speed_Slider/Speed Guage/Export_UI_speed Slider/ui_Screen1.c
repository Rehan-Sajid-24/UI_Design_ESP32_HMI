// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: Speed

#include "ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x191818), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Overlay = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Overlay, &ui_img_devider_png);
    lv_obj_set_width(ui_Overlay, LV_SIZE_CONTENT);   /// 320
    lv_obj_set_height(ui_Overlay, LV_SIZE_CONTENT);    /// 169
    lv_obj_set_x(ui_Overlay, 1);
    lv_obj_set_y(ui_Overlay, -4);
    lv_obj_set_align(ui_Overlay, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Overlay, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Overlay, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_guage = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_guage, &ui_img_guage_bg_png);
    lv_obj_set_width(ui_guage, LV_SIZE_CONTENT);   /// 298
    lv_obj_set_height(ui_guage, LV_SIZE_CONTENT);    /// 84
    lv_obj_set_x(ui_guage, 0);
    lv_obj_set_y(ui_guage, 10);
    lv_obj_set_align(ui_guage, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_guage, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_guage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_guage, lv_color_hex(0x020000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_guage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_guage_overlay = lv_img_create(ui_guage);
    lv_img_set_src(ui_guage_overlay, &ui_img_1449175297);
    lv_obj_set_width(ui_guage_overlay, LV_SIZE_CONTENT);   /// 298
    lv_obj_set_height(ui_guage_overlay, LV_SIZE_CONTENT);    /// 84
    lv_obj_set_align(ui_guage_overlay, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_guage_overlay, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_guage_overlay, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_guage_overlay, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_guage_overlay, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_guage_number = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_guage_number, &ui_img_guage_bg_1_png);
    lv_obj_set_width(ui_guage_number, LV_SIZE_CONTENT);   /// 301
    lv_obj_set_height(ui_guage_number, LV_SIZE_CONTENT);    /// 107
    lv_obj_set_x(ui_guage_number, -1);
    lv_obj_set_y(ui_guage_number, 0);
    lv_obj_set_align(ui_guage_number, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_guage_number, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_guage_number, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_speed_slide = lv_slider_create(ui_guage_number);
    lv_slider_set_range(ui_speed_slide, 0, 20);
    lv_slider_set_value(ui_speed_slide, 0, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_speed_slide) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_speed_slide, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_speed_slide, 306);
    lv_obj_set_height(ui_speed_slide, 302);
    lv_obj_set_x(ui_speed_slide, 0);
    lv_obj_set_y(ui_speed_slide, 13);
    lv_obj_set_align(ui_speed_slide, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_speed_slide, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_speed_slide, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_speed_slide, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_speed_slide, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_speed_slide, &ui_img_guage_indicator_png, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_speed_slide, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_speed_slide, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Car_Range_ = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Car_Range_, &ui_img_range_bg_png);
    lv_obj_set_width(ui_Car_Range_, LV_SIZE_CONTENT);   /// 200
    lv_obj_set_height(ui_Car_Range_, LV_SIZE_CONTENT);    /// 5
    lv_obj_set_x(ui_Car_Range_, -10);
    lv_obj_set_y(ui_Car_Range_, -25);
    lv_obj_set_align(ui_Car_Range_, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_Car_Range_, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Car_Range_, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Car_Slide = lv_slider_create(ui_Screen1);
    lv_slider_set_range(ui_Car_Slide, 0, 20);
    lv_slider_set_value(ui_Car_Slide, 0, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Car_Slide) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_Car_Slide, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Car_Slide, 154);
    lv_obj_set_height(ui_Car_Slide, 27);
    lv_obj_set_x(ui_Car_Slide, 51);
    lv_obj_set_y(ui_Car_Slide, 48);
    lv_obj_set_align(ui_Car_Slide, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Car_Slide, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Car_Slide, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Car_Slide, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Car_Slide, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Car_Slide, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Car_Slide, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Car_Slide, &ui_img_range_knob_png, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_compass_layout = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_compass_layout, &ui_img_compass_overlay_png);
    lv_obj_set_width(ui_compass_layout, 106);
    lv_obj_set_height(ui_compass_layout, 15);
    lv_obj_set_x(ui_compass_layout, 1);
    lv_obj_set_y(ui_compass_layout, 2);
    lv_obj_set_align(ui_compass_layout, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_compass_layout, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_compass_layout, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_compass_layout, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_compass_layout, 300, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_compass = lv_img_create(ui_compass_layout);
    lv_img_set_src(ui_compass, &ui_img_compas_png);
    lv_obj_set_width(ui_compass, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_compass, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_compass, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_compass, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_compass, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Battery_layout = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Battery_layout, &ui_img_battery_bg_png);
    lv_obj_set_width(ui_Battery_layout, LV_SIZE_CONTENT);   /// 24
    lv_obj_set_height(ui_Battery_layout, LV_SIZE_CONTENT);    /// 13
    lv_obj_set_x(ui_Battery_layout, -15);
    lv_obj_set_y(ui_Battery_layout, 5);
    lv_obj_set_align(ui_Battery_layout, LV_ALIGN_TOP_RIGHT);
    lv_obj_add_flag(ui_Battery_layout, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Battery_layout, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Battery_Bar = lv_bar_create(ui_Battery_layout);
    lv_bar_set_value(ui_Battery_Bar, 1, LV_ANIM_OFF);
    lv_bar_set_start_value(ui_Battery_Bar, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Battery_Bar, 21);
    lv_obj_set_height(ui_Battery_Bar, 10);
    lv_obj_set_x(ui_Battery_Bar, -1);
    lv_obj_set_y(ui_Battery_Bar, 0);
    lv_obj_set_align(ui_Battery_Bar, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Battery_Bar, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery_Bar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Battery_Bar, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Battery_Bar, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Battery_Bar, &ui_img_battery_indicator_png, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_speed_type_panel = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_speed_type_panel, 60);
    lv_obj_set_height(ui_speed_type_panel, 20);
    lv_obj_set_x(ui_speed_type_panel, -10);
    lv_obj_set_y(ui_speed_type_panel, -5);
    lv_obj_set_align(ui_speed_type_panel, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_clear_flag(ui_speed_type_panel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_speed_type_panel, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_speed_type_panel, lv_color_hex(0x3C3C3C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_speed_type_panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_speed_type_panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_speed_type_panel, lv_color_hex(0xFFFFFF), LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_speed_type_panel, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_speed_type_panel, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_speed_type_txt = lv_label_create(ui_speed_type_panel);
    lv_obj_set_width(ui_speed_type_txt, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_speed_type_txt, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_speed_type_txt, LV_ALIGN_CENTER);
    lv_label_set_text(ui_speed_type_txt, "eco");
    lv_obj_set_style_text_color(ui_speed_type_txt, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_speed_type_txt, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_speed_type_txt, &ui_font_SF_Sports_Night_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_battery_percent = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_battery_percent, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_battery_percent, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_battery_percent, 108);
    lv_obj_set_y(ui_battery_percent, -73);
    lv_obj_set_align(ui_battery_percent, LV_ALIGN_CENTER);
    lv_label_set_text(ui_battery_percent, "0%");
    lv_obj_set_style_text_color(ui_battery_percent, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_battery_percent, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_battery_percent, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_speed_label = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_speed_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_speed_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_speed_label, -140);
    lv_obj_set_y(ui_speed_label, -31);
    lv_obj_set_align(ui_speed_label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_speed_label, "0");
    lv_obj_set_style_text_color(ui_speed_label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_speed_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_speed_label, &ui_font_SF_Sports_Night_BIg, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_speed_label, 110, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_speed_label, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_speed_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_speed_label, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Km_per_hour_label = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Km_per_hour_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Km_per_hour_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Km_per_hour_label, -95);
    lv_obj_set_y(ui_Km_per_hour_label, 2);
    lv_obj_set_align(ui_Km_per_hour_label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Km_per_hour_label, "km/h");
    lv_obj_set_style_text_color(ui_Km_per_hour_label, lv_color_hex(0x4C4A4A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Km_per_hour_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Km_per_hour_label, &ui_font_SF_Sports_Night_Medium, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_range_txt = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_range_txt, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_range_txt, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_range_txt, 80);
    lv_obj_set_y(ui_range_txt, 25);
    lv_obj_set_align(ui_range_txt, LV_ALIGN_CENTER);
    lv_label_set_text(ui_range_txt, "Range");
    lv_obj_set_style_text_color(ui_range_txt, lv_color_hex(0x555353), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_range_txt, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_range_txt, &ui_font_SF_Sports_Night_Small, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_range_num = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_range_num, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_range_num, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_range_num, 130);
    lv_obj_set_y(ui_range_num, 25);
    lv_obj_set_align(ui_range_num, LV_ALIGN_CENTER);
    lv_label_set_text(ui_range_num, "0");
    lv_obj_set_style_text_color(ui_range_num, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_range_num, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_range_num, &ui_font_SF_Sports_Night_Medium, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Trip_txt = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Trip_txt, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Trip_txt, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Trip_txt, 20);
    lv_obj_set_y(ui_Trip_txt, -3);
    lv_obj_set_align(ui_Trip_txt, LV_ALIGN_BOTTOM_LEFT);
    lv_label_set_text(ui_Trip_txt, "Trip: 0");
    lv_obj_set_style_text_color(ui_Trip_txt, lv_color_hex(0xDEDEDE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Trip_txt, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Trip_txt, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_compass_check_fwd = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_compass_check_fwd, 20);
    lv_obj_set_height(ui_compass_check_fwd, 20);
    lv_obj_set_x(ui_compass_check_fwd, -139);
    lv_obj_set_y(ui_compass_check_fwd, -70);
    lv_obj_set_align(ui_compass_check_fwd, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_compass_check_fwd, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_compass_check_fwd, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_compass_check_fwd, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_compass_check_fwd, lv_color_hex(0x3C3C3C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_compass_check_fwd, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_compass_check_fwd, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_compass_check_fwd, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_compass_check_fwd, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_compass_check_Rev = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_compass_check_Rev, 20);
    lv_obj_set_height(ui_compass_check_Rev, 20);
    lv_obj_set_x(ui_compass_check_Rev, -112);
    lv_obj_set_y(ui_compass_check_Rev, -70);
    lv_obj_set_align(ui_compass_check_Rev, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_compass_check_Rev, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_compass_check_Rev, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_compass_check_Rev, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_compass_check_Rev, lv_color_hex(0x3C3C3C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_compass_check_Rev, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_speed_slide, ui_event_speed_slide, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Car_Slide, ui_event_Car_Slide, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_compass_check_fwd, ui_event_compass_check_fwd, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_compass_check_Rev, ui_event_compass_check_Rev, LV_EVENT_ALL, NULL);

}
