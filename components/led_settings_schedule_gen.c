/**
 * @file led_settings_schedule_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "led_settings_schedule_gen.h"
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

lv_obj_t * led_settings_schedule_create(lv_obj_t * parent, const char * lights_on_text, const char * lights_off_text)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "led_settings_schedule_#");
    lv_obj_set_width(lv_obj_0, 314);
    lv_obj_set_height(lv_obj_0, 106);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 255, 0);
    lv_obj_set_style_radius(lv_obj_0, 18, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 2, 0);
    lv_obj_set_style_border_color(lv_obj_0, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(lv_obj_0, 8, 0);
    lv_obj_set_style_shadow_opa(lv_obj_0, 16, 0);
    lv_obj_set_style_shadow_color(lv_obj_0, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(lv_obj_0, 3, 0);

    lv_obj_t * led_settings_schedule_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(led_settings_schedule_title_label, "led_settings_schedule_title_label");
    lv_obj_set_x(led_settings_schedule_title_label, 18);
    lv_obj_set_y(led_settings_schedule_title_label, 14);
    lv_obj_set_width(led_settings_schedule_title_label, 140);
    lv_label_set_text(led_settings_schedule_title_label, "SCHEDULE");
    lv_label_set_long_mode(led_settings_schedule_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(led_settings_schedule_title_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(led_settings_schedule_title_label, font_inter_14, 0);
    lv_obj_set_style_text_letter_space(led_settings_schedule_title_label, 1, 0);

    lv_obj_t * led_settings_lights_on_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(led_settings_lights_on_label, "led_settings_lights_on_label");
    lv_obj_set_x(led_settings_lights_on_label, 18);
    lv_obj_set_y(led_settings_lights_on_label, 44);
    lv_obj_set_width(led_settings_lights_on_label, 110);
    lv_label_set_text(led_settings_lights_on_label, "Lights ON");
    lv_label_set_long_mode(led_settings_lights_on_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(led_settings_lights_on_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(led_settings_lights_on_label, font_inter_12, 0);

    lv_obj_t * led_settings_lights_on_value_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(led_settings_lights_on_value_label, "led_settings_lights_on_value_label");
    lv_obj_set_x(led_settings_lights_on_value_label, 198);
    lv_obj_set_y(led_settings_lights_on_value_label, 42);
    lv_obj_set_width(led_settings_lights_on_value_label, 62);
    lv_label_set_text(led_settings_lights_on_value_label, lights_on_text);
    lv_label_set_long_mode(led_settings_lights_on_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(led_settings_lights_on_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(led_settings_lights_on_value_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(led_settings_lights_on_value_label, font_inter_15, 0);

    lv_obj_t * led_settings_lights_on_time_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(led_settings_lights_on_time_btn, "led_settings_lights_on_time_btn");
    lv_obj_set_x(led_settings_lights_on_time_btn, 268);
    lv_obj_set_y(led_settings_lights_on_time_btn, 34);
    lv_obj_set_width(led_settings_lights_on_time_btn, 34);
    lv_obj_set_height(led_settings_lights_on_time_btn, 34);
    lv_obj_set_flag(led_settings_lights_on_time_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_settings_lights_on_time_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(led_settings_lights_on_time_btn, 0, 0);
    lv_obj_set_style_border_width(led_settings_lights_on_time_btn, 0, 0);
    lv_obj_set_style_shadow_width(led_settings_lights_on_time_btn, 0, 0);
    lv_obj_set_style_pad_all(led_settings_lights_on_time_btn, 0, 0);
    lv_obj_t * led_settings_lights_on_clock_icon = lv_image_create(led_settings_lights_on_time_btn);
    lv_obj_set_name(led_settings_lights_on_clock_icon, "led_settings_lights_on_clock_icon");
    lv_obj_set_x(led_settings_lights_on_clock_icon, 9);
    lv_obj_set_y(led_settings_lights_on_clock_icon, 9);
    lv_obj_set_width(led_settings_lights_on_clock_icon, 16);
    lv_obj_set_height(led_settings_lights_on_clock_icon, 16);
    lv_image_set_src(led_settings_lights_on_clock_icon, img_irrigation_clock_16px);
    lv_obj_set_flag(led_settings_lights_on_clock_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_settings_lights_on_clock_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(led_settings_lights_on_clock_icon, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_image_recolor_opa(led_settings_lights_on_clock_icon, 255, 0);

    lv_obj_t * led_settings_schedule_divider = lv_obj_create(lv_obj_0);
    lv_obj_set_name(led_settings_schedule_divider, "led_settings_schedule_divider");
    lv_obj_set_x(led_settings_schedule_divider, 18);
    lv_obj_set_y(led_settings_schedule_divider, 68);
    lv_obj_set_width(led_settings_schedule_divider, 278);
    lv_obj_set_height(led_settings_schedule_divider, 1);
    lv_obj_set_flag(led_settings_schedule_divider, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_settings_schedule_divider, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(led_settings_schedule_divider, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(led_settings_schedule_divider, 255, 0);
    lv_obj_set_style_border_width(led_settings_schedule_divider, 0, 0);
    lv_obj_set_style_pad_all(led_settings_schedule_divider, 0, 0);

    lv_obj_t * led_settings_lights_off_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(led_settings_lights_off_label, "led_settings_lights_off_label");
    lv_obj_set_x(led_settings_lights_off_label, 18);
    lv_obj_set_y(led_settings_lights_off_label, 80);
    lv_obj_set_width(led_settings_lights_off_label, 110);
    lv_label_set_text(led_settings_lights_off_label, "Lights OFF");
    lv_label_set_long_mode(led_settings_lights_off_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(led_settings_lights_off_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(led_settings_lights_off_label, font_inter_12, 0);

    lv_obj_t * led_settings_lights_off_value_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(led_settings_lights_off_value_label, "led_settings_lights_off_value_label");
    lv_obj_set_x(led_settings_lights_off_value_label, 198);
    lv_obj_set_y(led_settings_lights_off_value_label, 78);
    lv_obj_set_width(led_settings_lights_off_value_label, 62);
    lv_label_set_text(led_settings_lights_off_value_label, lights_off_text);
    lv_label_set_long_mode(led_settings_lights_off_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(led_settings_lights_off_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(led_settings_lights_off_value_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(led_settings_lights_off_value_label, font_inter_15, 0);

    lv_obj_t * led_settings_lights_off_time_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(led_settings_lights_off_time_btn, "led_settings_lights_off_time_btn");
    lv_obj_set_x(led_settings_lights_off_time_btn, 268);
    lv_obj_set_y(led_settings_lights_off_time_btn, 70);
    lv_obj_set_width(led_settings_lights_off_time_btn, 34);
    lv_obj_set_height(led_settings_lights_off_time_btn, 34);
    lv_obj_set_flag(led_settings_lights_off_time_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_settings_lights_off_time_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(led_settings_lights_off_time_btn, 0, 0);
    lv_obj_set_style_border_width(led_settings_lights_off_time_btn, 0, 0);
    lv_obj_set_style_shadow_width(led_settings_lights_off_time_btn, 0, 0);
    lv_obj_set_style_pad_all(led_settings_lights_off_time_btn, 0, 0);
    lv_obj_t * led_settings_lights_off_clock_icon = lv_image_create(led_settings_lights_off_time_btn);
    lv_obj_set_name(led_settings_lights_off_clock_icon, "led_settings_lights_off_clock_icon");
    lv_obj_set_x(led_settings_lights_off_clock_icon, 9);
    lv_obj_set_y(led_settings_lights_off_clock_icon, 9);
    lv_obj_set_width(led_settings_lights_off_clock_icon, 16);
    lv_obj_set_height(led_settings_lights_off_clock_icon, 16);
    lv_image_set_src(led_settings_lights_off_clock_icon, img_irrigation_clock_16px);
    lv_obj_set_flag(led_settings_lights_off_clock_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_settings_lights_off_clock_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(led_settings_lights_off_clock_icon, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_image_recolor_opa(led_settings_lights_off_clock_icon, 255, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

