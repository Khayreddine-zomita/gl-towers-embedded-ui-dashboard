/**
 * @file led_schedule_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "led_schedule_card_gen.h"
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

lv_obj_t * led_schedule_card_create(lv_obj_t * parent, const char * schedule_time, const char * hours_per_day, const char * intensity_value, const char * status_text)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "led_schedule_card_#");
    lv_obj_set_width(lv_obj_0, 228);
    lv_obj_set_height(lv_obj_0, 158);
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

    lv_obj_t * led_schedule_icon = lv_image_create(lv_obj_0);
    lv_obj_set_name(led_schedule_icon, "led_schedule_icon");
    lv_obj_set_x(led_schedule_icon, 14);
    lv_obj_set_y(led_schedule_icon, 10);
    lv_obj_set_width(led_schedule_icon, 20);
    lv_obj_set_height(led_schedule_icon, 20);
    lv_image_set_src(led_schedule_icon, img_nav_light);
    lv_obj_set_flag(led_schedule_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_schedule_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(led_schedule_icon, COLOR_STATUS_WARNING, 0);
    lv_obj_set_style_image_recolor_opa(led_schedule_icon, 255, 0);

    lv_obj_t * led_schedule_title = lv_label_create(lv_obj_0);
    lv_obj_set_name(led_schedule_title, "led_schedule_title");
    lv_obj_set_x(led_schedule_title, 44);
    lv_obj_set_y(led_schedule_title, 13);
    lv_obj_set_width(led_schedule_title, 120);
    lv_label_set_text(led_schedule_title, "SCHEDULE");
    lv_label_set_long_mode(led_schedule_title, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(led_schedule_title, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(led_schedule_title, font_inter_14, 0);

    lv_obj_t * led_schedule_time = lv_label_create(lv_obj_0);
    lv_obj_set_name(led_schedule_time, "led_schedule_time");
    lv_obj_set_x(led_schedule_time, 14);
    lv_obj_set_y(led_schedule_time, 50);
    lv_obj_set_width(led_schedule_time, 200);
    lv_label_set_text(led_schedule_time, schedule_time);
    lv_label_set_long_mode(led_schedule_time, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(led_schedule_time, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(led_schedule_time, font_inter_26, 0);

    lv_obj_t * led_hours_per_day = lv_label_create(lv_obj_0);
    lv_obj_set_name(led_hours_per_day, "led_hours_per_day");
    lv_obj_set_x(led_hours_per_day, 14);
    lv_obj_set_y(led_hours_per_day, 94);
    lv_obj_set_width(led_hours_per_day, 72);
    lv_label_set_text(led_hours_per_day, hours_per_day);
    lv_label_set_long_mode(led_hours_per_day, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(led_hours_per_day, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(led_hours_per_day, font_inter_15, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_obj_set_x(lv_label_0, 14);
    lv_obj_set_y(lv_label_0, 120);
    lv_obj_set_width(lv_label_0, 76);
    lv_label_set_text(lv_label_0, "PER DAY");
    lv_label_set_long_mode(lv_label_0, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_0, COLOR_TEXT_MUTED, 0);
    lv_obj_set_style_text_font(lv_label_0, font_inter_10, 0);

    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_1, 102);
    lv_obj_set_y(lv_obj_1, 92);
    lv_obj_set_width(lv_obj_1, 1);
    lv_obj_set_height(lv_obj_1, 38);
    lv_obj_set_flag(lv_obj_1, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_1, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_1, 255, 0);
    lv_obj_set_style_border_width(lv_obj_1, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_1, 0, 0);

    lv_obj_t * led_schedule_intensity = lv_label_create(lv_obj_0);
    lv_obj_set_name(led_schedule_intensity, "led_schedule_intensity");
    lv_obj_set_x(led_schedule_intensity, 124);
    lv_obj_set_y(led_schedule_intensity, 94);
    lv_obj_set_width(led_schedule_intensity, 72);
    lv_label_set_text(led_schedule_intensity, intensity_value);
    lv_label_set_long_mode(led_schedule_intensity, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(led_schedule_intensity, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(led_schedule_intensity, font_inter_15, 0);

    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
    lv_obj_set_x(lv_label_1, 124);
    lv_obj_set_y(lv_label_1, 120);
    lv_obj_set_width(lv_label_1, 86);
    lv_label_set_text(lv_label_1, "INTENSITY");
    lv_label_set_long_mode(lv_label_1, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_1, COLOR_TEXT_MUTED, 0);
    lv_obj_set_style_text_font(lv_label_1, font_inter_10, 0);

    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_2, 14);
    lv_obj_set_y(lv_obj_2, 138);
    lv_obj_set_width(lv_obj_2, 8);
    lv_obj_set_height(lv_obj_2, 8);
    lv_obj_set_flag(lv_obj_2, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_2, COLOR_STATUS_HEALTHY, 0);
    lv_obj_set_style_bg_opa(lv_obj_2, 255, 0);
    lv_obj_set_style_radius(lv_obj_2, 4, 0);
    lv_obj_set_style_border_width(lv_obj_2, 0, 0);

    lv_obj_t * led_schedule_status = lv_label_create(lv_obj_0);
    lv_obj_set_name(led_schedule_status, "led_schedule_status");
    lv_obj_set_x(led_schedule_status, 28);
    lv_obj_set_y(led_schedule_status, 137);
    lv_obj_set_width(led_schedule_status, 150);
    lv_label_set_text(led_schedule_status, status_text);
    lv_label_set_long_mode(led_schedule_status, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(led_schedule_status, COLOR_STATUS_HEALTHY, 0);
    lv_obj_set_style_text_font(led_schedule_status, font_inter_11, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

