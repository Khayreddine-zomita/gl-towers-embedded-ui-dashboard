/**
 * @file led_settings_intensity_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "led_settings_intensity_gen.h"
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

lv_obj_t * led_settings_intensity_create(lv_obj_t * parent, const char * brightness_text)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "led_settings_intensity_#");
    lv_obj_set_width(lv_obj_0, 314);
    lv_obj_set_height(lv_obj_0, 90);
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

    lv_obj_t * led_settings_intensity_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(led_settings_intensity_title_label, "led_settings_intensity_title_label");
    lv_obj_set_x(led_settings_intensity_title_label, 18);
    lv_obj_set_y(led_settings_intensity_title_label, 14);
    lv_obj_set_width(led_settings_intensity_title_label, 140);
    lv_label_set_text(led_settings_intensity_title_label, "INTENSITY");
    lv_label_set_long_mode(led_settings_intensity_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(led_settings_intensity_title_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(led_settings_intensity_title_label, font_inter_14, 0);
    lv_obj_set_style_text_letter_space(led_settings_intensity_title_label, 1, 0);

    lv_obj_t * led_settings_brightness_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(led_settings_brightness_label, "led_settings_brightness_label");
    lv_obj_set_x(led_settings_brightness_label, 18);
    lv_obj_set_y(led_settings_brightness_label, 44);
    lv_obj_set_width(led_settings_brightness_label, 100);
    lv_label_set_text(led_settings_brightness_label, "Brightness");
    lv_label_set_long_mode(led_settings_brightness_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(led_settings_brightness_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(led_settings_brightness_label, font_inter_12, 0);

    lv_obj_t * led_settings_brightness_value_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(led_settings_brightness_value_label, "led_settings_brightness_value_label");
    lv_obj_set_x(led_settings_brightness_value_label, 214);
    lv_obj_set_y(led_settings_brightness_value_label, 22);
    lv_obj_set_width(led_settings_brightness_value_label, 80);
    lv_label_set_text(led_settings_brightness_value_label, brightness_text);
    lv_label_set_long_mode(led_settings_brightness_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(led_settings_brightness_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(led_settings_brightness_value_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(led_settings_brightness_value_label, font_inter_26, 0);

    lv_obj_t * led_settings_intensity_track_bg = lv_obj_create(lv_obj_0);
    lv_obj_set_name(led_settings_intensity_track_bg, "led_settings_intensity_track_bg");
    lv_obj_set_x(led_settings_intensity_track_bg, 18);
    lv_obj_set_y(led_settings_intensity_track_bg, 72);
    lv_obj_set_width(led_settings_intensity_track_bg, 278);
    lv_obj_set_height(led_settings_intensity_track_bg, 4);
    lv_obj_set_flag(led_settings_intensity_track_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_settings_intensity_track_bg, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(led_settings_intensity_track_bg, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(led_settings_intensity_track_bg, 255, 0);
    lv_obj_set_style_radius(led_settings_intensity_track_bg, 2, 0);
    lv_obj_set_style_border_width(led_settings_intensity_track_bg, 0, 0);
    lv_obj_set_style_pad_all(led_settings_intensity_track_bg, 0, 0);

    lv_obj_t * led_settings_intensity_track_fill = lv_obj_create(lv_obj_0);
    lv_obj_set_name(led_settings_intensity_track_fill, "led_settings_intensity_track_fill");
    lv_obj_set_x(led_settings_intensity_track_fill, 18);
    lv_obj_set_y(led_settings_intensity_track_fill, 72);
    lv_obj_set_width(led_settings_intensity_track_fill, 222);
    lv_obj_set_height(led_settings_intensity_track_fill, 4);
    lv_obj_set_flag(led_settings_intensity_track_fill, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_settings_intensity_track_fill, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(led_settings_intensity_track_fill, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_bg_opa(led_settings_intensity_track_fill, 255, 0);
    lv_obj_set_style_radius(led_settings_intensity_track_fill, 2, 0);
    lv_obj_set_style_border_width(led_settings_intensity_track_fill, 0, 0);
    lv_obj_set_style_pad_all(led_settings_intensity_track_fill, 0, 0);

    lv_obj_t * led_settings_intensity_knob_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(led_settings_intensity_knob_btn, "led_settings_intensity_knob_btn");
    lv_obj_set_x(led_settings_intensity_knob_btn, 228);
    lv_obj_set_y(led_settings_intensity_knob_btn, 62);
    lv_obj_set_width(led_settings_intensity_knob_btn, 20);
    lv_obj_set_height(led_settings_intensity_knob_btn, 20);
    lv_obj_set_flag(led_settings_intensity_knob_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_settings_intensity_knob_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(led_settings_intensity_knob_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(led_settings_intensity_knob_btn, 255, 0);
    lv_obj_set_style_radius(led_settings_intensity_knob_btn, 13, 0);
    lv_obj_set_style_border_width(led_settings_intensity_knob_btn, 3, 0);
    lv_obj_set_style_border_color(led_settings_intensity_knob_btn, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_pad_all(led_settings_intensity_knob_btn, 0, 0);
    lv_obj_set_style_shadow_width(led_settings_intensity_knob_btn, 0, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

