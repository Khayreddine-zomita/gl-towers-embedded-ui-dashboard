/**
 * @file led_overview_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "led_overview_card_gen.h"
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

lv_obj_t * led_overview_card_create(lv_obj_t * parent, const char * led_status, const char * led_profile, const char * led_window, const char * led_hours, const char * led_intensity)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "led_overview_card_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 165);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 255, 0);
    lv_obj_set_style_radius(lv_obj_0, 20, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 1, 0);
    lv_obj_set_style_border_color(lv_obj_0, COLOR_STATUS_WARNING, 0);
    lv_obj_set_style_shadow_width(lv_obj_0, 10, 0);
    lv_obj_set_style_shadow_opa(lv_obj_0, 18, 0);
    lv_obj_set_style_shadow_color(lv_obj_0, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(lv_obj_0, 4, 0);

    lv_obj_t * led_overview_status_pill = lv_obj_create(lv_obj_0);
    lv_obj_set_name(led_overview_status_pill, "led_overview_status_pill");
    lv_obj_set_x(led_overview_status_pill, 22);
    lv_obj_set_y(led_overview_status_pill, 18);
    lv_obj_set_width(led_overview_status_pill, 98);
    lv_obj_set_height(led_overview_status_pill, 24);
    lv_obj_set_flag(led_overview_status_pill, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_overview_status_pill, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(led_overview_status_pill, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_bg_opa(led_overview_status_pill, 255, 0);
    lv_obj_set_style_radius(led_overview_status_pill, 12, 0);
    lv_obj_set_style_border_width(led_overview_status_pill, 0, 0);
    lv_obj_set_style_pad_all(led_overview_status_pill, 0, 0);
    lv_obj_t * led_overview_status_dot = lv_obj_create(led_overview_status_pill);
    lv_obj_set_name(led_overview_status_dot, "led_overview_status_dot");
    lv_obj_set_x(led_overview_status_dot, 13);
    lv_obj_set_y(led_overview_status_dot, 9);
    lv_obj_set_width(led_overview_status_dot, 6);
    lv_obj_set_height(led_overview_status_dot, 6);
    lv_obj_set_flag(led_overview_status_dot, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_overview_status_dot, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(led_overview_status_dot, COLOR_GL_GREEN, 0);
    lv_obj_set_style_bg_opa(led_overview_status_dot, 255, 0);
    lv_obj_set_style_radius(led_overview_status_dot, 3, 0);
    lv_obj_set_style_border_width(led_overview_status_dot, 0, 0);
    lv_obj_set_style_pad_all(led_overview_status_dot, 0, 0);

    lv_obj_t * led_overview_status_label = lv_label_create(led_overview_status_pill);
    lv_obj_set_name(led_overview_status_label, "led_overview_status_label");
    lv_obj_set_x(led_overview_status_label, 28);
    lv_obj_set_y(led_overview_status_label, 6);
    lv_obj_set_width(led_overview_status_label, 62);
    lv_label_set_text(led_overview_status_label, led_status);
    lv_label_set_long_mode(led_overview_status_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(led_overview_status_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(led_overview_status_label, font_inter_10, 0);

    lv_obj_t * led_overview_profile_pill = lv_obj_create(lv_obj_0);
    lv_obj_set_name(led_overview_profile_pill, "led_overview_profile_pill");
    lv_obj_set_x(led_overview_profile_pill, 330);
    lv_obj_set_y(led_overview_profile_pill, 18);
    lv_obj_set_width(led_overview_profile_pill, 88);
    lv_obj_set_height(led_overview_profile_pill, 24);
    lv_obj_set_flag(led_overview_profile_pill, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_overview_profile_pill, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(led_overview_profile_pill, COLOR_WARNING_BG, 0);
    lv_obj_set_style_bg_opa(led_overview_profile_pill, 255, 0);
    lv_obj_set_style_radius(led_overview_profile_pill, 12, 0);
    lv_obj_set_style_border_width(led_overview_profile_pill, 0, 0);
    lv_obj_set_style_pad_all(led_overview_profile_pill, 0, 0);
    lv_obj_t * led_overview_profile_label = lv_label_create(led_overview_profile_pill);
    lv_obj_set_name(led_overview_profile_label, "led_overview_profile_label");
    lv_obj_set_x(led_overview_profile_label, 0);
    lv_obj_set_y(led_overview_profile_label, 6);
    lv_obj_set_width(led_overview_profile_label, 88);
    lv_label_set_text(led_overview_profile_label, led_profile);
    lv_label_set_long_mode(led_overview_profile_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(led_overview_profile_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(led_overview_profile_label, COLOR_STATUS_WARNING, 0);
    lv_obj_set_style_text_font(led_overview_profile_label, font_inter_10, 0);

    lv_obj_t * led_overview_window_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(led_overview_window_label, "led_overview_window_label");
    lv_obj_set_x(led_overview_window_label, 22);
    lv_obj_set_y(led_overview_window_label, 64);
    lv_obj_set_width(led_overview_window_label, 300);
    lv_label_set_text(led_overview_window_label, led_window);
    lv_label_set_long_mode(led_overview_window_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(led_overview_window_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(led_overview_window_label, font_inter_26, 0);

    lv_obj_t * led_overview_hours_value_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(led_overview_hours_value_label, "led_overview_hours_value_label");
    lv_obj_set_x(led_overview_hours_value_label, 22);
    lv_obj_set_y(led_overview_hours_value_label, 112);
    lv_obj_set_width(led_overview_hours_value_label, 80);
    lv_label_set_text(led_overview_hours_value_label, led_hours);
    lv_label_set_long_mode(led_overview_hours_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(led_overview_hours_value_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(led_overview_hours_value_label, font_inter_15, 0);

    lv_obj_t * led_overview_hours_caption_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(led_overview_hours_caption_label, "led_overview_hours_caption_label");
    lv_obj_set_x(led_overview_hours_caption_label, 22);
    lv_obj_set_y(led_overview_hours_caption_label, 134);
    lv_obj_set_width(led_overview_hours_caption_label, 90);
    lv_label_set_text(led_overview_hours_caption_label, "PER DAY");
    lv_label_set_long_mode(led_overview_hours_caption_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(led_overview_hours_caption_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(led_overview_hours_caption_label, font_inter_10, 0);

    lv_obj_t * led_overview_intensity_value_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(led_overview_intensity_value_label, "led_overview_intensity_value_label");
    lv_obj_set_x(led_overview_intensity_value_label, 106);
    lv_obj_set_y(led_overview_intensity_value_label, 112);
    lv_obj_set_width(led_overview_intensity_value_label, 80);
    lv_label_set_text(led_overview_intensity_value_label, led_intensity);
    lv_label_set_long_mode(led_overview_intensity_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(led_overview_intensity_value_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(led_overview_intensity_value_label, font_inter_15, 0);

    lv_obj_t * led_overview_intensity_caption_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(led_overview_intensity_caption_label, "led_overview_intensity_caption_label");
    lv_obj_set_x(led_overview_intensity_caption_label, 106);
    lv_obj_set_y(led_overview_intensity_caption_label, 134);
    lv_obj_set_width(led_overview_intensity_caption_label, 90);
    lv_label_set_text(led_overview_intensity_caption_label, "INTENSITY");
    lv_label_set_long_mode(led_overview_intensity_caption_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(led_overview_intensity_caption_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(led_overview_intensity_caption_label, font_inter_10, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

