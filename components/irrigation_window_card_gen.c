/**
 * @file irrigation_window_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "irrigation_window_card_gen.h"
#include "../gl_towers_embedded_ui_dashboard.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * irrigation_window_card_create(lv_obj_t * parent, const char * start_time, const char * end_time, const char * night_break_label)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_sw;
    static lv_style_t style_sw_on;
    static lv_style_t style_knob;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&style_sw);
        lv_style_set_bg_color(&style_sw, COLOR_DIVIDER);
        lv_style_set_bg_opa(&style_sw, 255);
        lv_style_set_radius(&style_sw, 11);
        lv_style_set_border_width(&style_sw, 0);

        lv_style_init(&style_sw_on);
        lv_style_set_bg_color(&style_sw_on, COLOR_STATUS_HEALTHY);
        lv_style_set_bg_opa(&style_sw_on, 255);
        lv_style_set_radius(&style_sw_on, 11);
        lv_style_set_border_width(&style_sw_on, 0);

        lv_style_init(&style_knob);
        lv_style_set_bg_color(&style_knob, COLOR_WHITE);
        lv_style_set_bg_opa(&style_knob, 255);
        lv_style_set_radius(&style_knob, 9);
        lv_style_set_border_width(&style_knob, 0);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "irrigation_window_card_#");
    lv_obj_set_width(lv_obj_0, 228);
    lv_obj_set_height(lv_obj_0, 140);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 255, 0);
    lv_obj_set_style_radius(lv_obj_0, 16, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_shadow_width(lv_obj_0, 8, 0);
    lv_obj_set_style_shadow_opa(lv_obj_0, 18, 0);
    lv_obj_set_style_shadow_color(lv_obj_0, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(lv_obj_0, 3, 0);

    lv_obj_t * irrigation_window_title = lv_label_create(lv_obj_0);
    lv_obj_set_name(irrigation_window_title, "irrigation_window_title");
    lv_obj_set_x(irrigation_window_title, 12);
    lv_obj_set_y(irrigation_window_title, 10);
    lv_obj_set_width(irrigation_window_title, 160);
    lv_label_set_text(irrigation_window_title, "IRRIGATION WINDOW");
    lv_label_set_long_mode(irrigation_window_title, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_window_title, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(irrigation_window_title, font_inter_12, 0);

    lv_obj_t * irrigation_clock_icon = lv_image_create(lv_obj_0);
    lv_obj_set_name(irrigation_clock_icon, "irrigation_clock_icon");
    lv_obj_set_x(irrigation_clock_icon, 180);
    lv_obj_set_y(irrigation_clock_icon, 4);
    lv_obj_set_width(irrigation_clock_icon, 26);
    lv_obj_set_height(irrigation_clock_icon, 26);
    lv_image_set_src(irrigation_clock_icon, img_irrigation_clock_16px);
    lv_obj_set_flag(irrigation_clock_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_clock_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(irrigation_clock_icon, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_image_recolor_opa(irrigation_clock_icon, 255, 0);

    lv_obj_t * irrigation_start_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(irrigation_start_label, "irrigation_start_label");
    lv_obj_set_x(irrigation_start_label, 12);
    lv_obj_set_y(irrigation_start_label, 42);
    lv_obj_set_width(irrigation_start_label, 70);
    lv_label_set_text(irrigation_start_label, "Start");
    lv_label_set_long_mode(irrigation_start_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_start_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_start_label, font_inter_11, 0);

    lv_obj_t * irrigation_start_time_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(irrigation_start_time_btn, "irrigation_start_time_btn");
    lv_obj_set_x(irrigation_start_time_btn, 136);
    lv_obj_set_y(irrigation_start_time_btn, 34);
    lv_obj_set_width(irrigation_start_time_btn, 76);
    lv_obj_set_height(irrigation_start_time_btn, 26);
    lv_obj_set_flag(irrigation_start_time_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_start_time_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_start_time_btn, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_bg_opa(irrigation_start_time_btn, 255, 0);
    lv_obj_set_style_radius(irrigation_start_time_btn, 13, 0);
    lv_obj_set_style_border_width(irrigation_start_time_btn, 0, 0);
    lv_obj_set_style_pad_all(irrigation_start_time_btn, 0, 0);
    lv_obj_set_style_shadow_width(irrigation_start_time_btn, 0, 0);
    lv_obj_t * irrigation_start_time_value = lv_label_create(irrigation_start_time_btn);
    lv_obj_set_name(irrigation_start_time_value, "irrigation_start_time_value");
    lv_obj_set_x(irrigation_start_time_value, 0);
    lv_obj_set_y(irrigation_start_time_value, 6);
    lv_obj_set_width(irrigation_start_time_value, 76);
    lv_label_set_text(irrigation_start_time_value, start_time);
    lv_label_set_long_mode(irrigation_start_time_value, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(irrigation_start_time_value, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(irrigation_start_time_value, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(irrigation_start_time_value, font_inter_12, 0);

    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_1, 12);
    lv_obj_set_y(lv_obj_1, 64);
    lv_obj_set_width(lv_obj_1, 204);
    lv_obj_set_height(lv_obj_1, 1);
    lv_obj_set_flag(lv_obj_1, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_1, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_1, 255, 0);
    lv_obj_set_style_border_width(lv_obj_1, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_1, 0, 0);

    lv_obj_t * irrigation_end_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(irrigation_end_label, "irrigation_end_label");
    lv_obj_set_x(irrigation_end_label, 12);
    lv_obj_set_y(irrigation_end_label, 76);
    lv_obj_set_width(irrigation_end_label, 70);
    lv_label_set_text(irrigation_end_label, "End");
    lv_label_set_long_mode(irrigation_end_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_end_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_end_label, font_inter_11, 0);

    lv_obj_t * irrigation_end_time_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(irrigation_end_time_btn, "irrigation_end_time_btn");
    lv_obj_set_x(irrigation_end_time_btn, 136);
    lv_obj_set_y(irrigation_end_time_btn, 68);
    lv_obj_set_width(irrigation_end_time_btn, 76);
    lv_obj_set_height(irrigation_end_time_btn, 26);
    lv_obj_set_flag(irrigation_end_time_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_end_time_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_end_time_btn, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_bg_opa(irrigation_end_time_btn, 255, 0);
    lv_obj_set_style_radius(irrigation_end_time_btn, 13, 0);
    lv_obj_set_style_border_width(irrigation_end_time_btn, 0, 0);
    lv_obj_set_style_pad_all(irrigation_end_time_btn, 0, 0);
    lv_obj_set_style_shadow_width(irrigation_end_time_btn, 0, 0);
    lv_obj_t * irrigation_end_time_value = lv_label_create(irrigation_end_time_btn);
    lv_obj_set_name(irrigation_end_time_value, "irrigation_end_time_value");
    lv_obj_set_x(irrigation_end_time_value, 0);
    lv_obj_set_y(irrigation_end_time_value, 6);
    lv_obj_set_width(irrigation_end_time_value, 76);
    lv_label_set_text(irrigation_end_time_value, end_time);
    lv_label_set_long_mode(irrigation_end_time_value, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(irrigation_end_time_value, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(irrigation_end_time_value, COLOR_STATUS_HEALTHY, 0);
    lv_obj_set_style_text_font(irrigation_end_time_value, font_inter_12, 0);

    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_2, 12);
    lv_obj_set_y(lv_obj_2, 98);
    lv_obj_set_width(lv_obj_2, 204);
    lv_obj_set_height(lv_obj_2, 1);
    lv_obj_set_flag(lv_obj_2, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_2, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_2, 255, 0);
    lv_obj_set_style_border_width(lv_obj_2, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_2, 0, 0);

    lv_obj_t * night_break_text_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(night_break_text_label, "night_break_text_label");
    lv_obj_set_x(night_break_text_label, 12);
    lv_obj_set_y(night_break_text_label, 110);
    lv_obj_set_width(night_break_text_label, 110);
    lv_label_set_text(night_break_text_label, night_break_label);
    lv_label_set_long_mode(night_break_text_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(night_break_text_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(night_break_text_label, font_inter_11, 0);

    lv_obj_t * night_break_switch = lv_switch_create(lv_obj_0);
    lv_obj_set_name(night_break_switch, "night_break_switch");
    lv_obj_set_x(night_break_switch, 170);
    lv_obj_set_y(night_break_switch, 105);
    lv_obj_set_width(night_break_switch, 40);
    lv_obj_set_height(night_break_switch, 22);
    lv_obj_set_flag(night_break_switch, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(night_break_switch, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_style(night_break_switch, &style_sw, 0);
    lv_obj_add_style(night_break_switch, &style_sw_on, LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_add_style(night_break_switch, &style_knob, LV_PART_KNOB);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

