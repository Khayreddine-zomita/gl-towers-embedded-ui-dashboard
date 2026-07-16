/**
 * @file irrigation_pump_cycle_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "irrigation_pump_cycle_card_gen.h"
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

lv_obj_t * irrigation_pump_cycle_card_create(lv_obj_t * parent, const char * pump_on_value, const char * pump_off_value, const char * schedule_label, const char * schedule_time)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "irrigation_pump_cycle_card_#");
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

    lv_obj_t * pump_cycle_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(pump_cycle_title_label, "pump_cycle_title_label");
    lv_obj_set_x(pump_cycle_title_label, 12);
    lv_obj_set_y(pump_cycle_title_label, 10);
    lv_obj_set_width(pump_cycle_title_label, 130);
    lv_label_set_text(pump_cycle_title_label, "PUMP CYCLE");
    lv_label_set_long_mode(pump_cycle_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(pump_cycle_title_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(pump_cycle_title_label, font_inter_14, 0);

    lv_obj_t * pump_on_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(pump_on_title_label, "pump_on_title_label");
    lv_obj_set_x(pump_on_title_label, 12);
    lv_obj_set_y(pump_on_title_label, 42);
    lv_obj_set_width(pump_on_title_label, 70);
    lv_label_set_text(pump_on_title_label, "Pump ON");
    lv_label_set_long_mode(pump_on_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(pump_on_title_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(pump_on_title_label, font_inter_11, 0);

    lv_obj_t * pump_on_minus_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(pump_on_minus_btn, "pump_on_minus_btn");
    lv_obj_set_x(pump_on_minus_btn, 104);
    lv_obj_set_y(pump_on_minus_btn, 34);
    lv_obj_set_width(pump_on_minus_btn, 28);
    lv_obj_set_height(pump_on_minus_btn, 28);
    lv_obj_set_flag(pump_on_minus_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(pump_on_minus_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(pump_on_minus_btn, COLOR_SOFT_SURFACE, 0);
    lv_obj_set_style_bg_opa(pump_on_minus_btn, 255, 0);
    lv_obj_set_style_radius(pump_on_minus_btn, 14, 0);
    lv_obj_set_style_border_width(pump_on_minus_btn, 1, 0);
    lv_obj_set_style_border_color(pump_on_minus_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(pump_on_minus_btn, 0, 0);
    lv_obj_set_style_shadow_width(pump_on_minus_btn, 0, 0);
    lv_obj_t * pump_on_minus_label = lv_label_create(pump_on_minus_btn);
    lv_obj_set_name(pump_on_minus_label, "pump_on_minus_label");
    lv_obj_set_x(pump_on_minus_label, 0);
    lv_obj_set_y(pump_on_minus_label, 5);
    lv_obj_set_width(pump_on_minus_label, 28);
    lv_label_set_text(pump_on_minus_label, "-");
    lv_label_set_long_mode(pump_on_minus_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(pump_on_minus_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(pump_on_minus_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(pump_on_minus_label, font_inter_15, 0);

    lv_obj_t * pump_on_value_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(pump_on_value_label, "pump_on_value_label");
    lv_obj_set_x(pump_on_value_label, 136);
    lv_obj_set_y(pump_on_value_label, 41);
    lv_obj_set_width(pump_on_value_label, 50);
    lv_label_set_text(pump_on_value_label, pump_on_value);
    lv_label_set_long_mode(pump_on_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(pump_on_value_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(pump_on_value_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(pump_on_value_label, font_inter_12, 0);

    lv_obj_t * pump_on_plus_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(pump_on_plus_btn, "pump_on_plus_btn");
    lv_obj_set_x(pump_on_plus_btn, 188);
    lv_obj_set_y(pump_on_plus_btn, 34);
    lv_obj_set_width(pump_on_plus_btn, 28);
    lv_obj_set_height(pump_on_plus_btn, 28);
    lv_obj_set_flag(pump_on_plus_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(pump_on_plus_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(pump_on_plus_btn, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_bg_opa(pump_on_plus_btn, 255, 0);
    lv_obj_set_style_radius(pump_on_plus_btn, 14, 0);
    lv_obj_set_style_border_width(pump_on_plus_btn, 0, 0);
    lv_obj_set_style_pad_all(pump_on_plus_btn, 0, 0);
    lv_obj_set_style_shadow_width(pump_on_plus_btn, 0, 0);
    lv_obj_t * pump_on_plus_label = lv_label_create(pump_on_plus_btn);
    lv_obj_set_name(pump_on_plus_label, "pump_on_plus_label");
    lv_obj_set_x(pump_on_plus_label, 0);
    lv_obj_set_y(pump_on_plus_label, 5);
    lv_obj_set_width(pump_on_plus_label, 28);
    lv_label_set_text(pump_on_plus_label, "+");
    lv_label_set_long_mode(pump_on_plus_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(pump_on_plus_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(pump_on_plus_label, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(pump_on_plus_label, font_inter_15, 0);

    lv_obj_t * pump_cycle_divider_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_name(pump_cycle_divider_1, "pump_cycle_divider_1");
    lv_obj_set_x(pump_cycle_divider_1, 12);
    lv_obj_set_y(pump_cycle_divider_1, 68);
    lv_obj_set_width(pump_cycle_divider_1, 204);
    lv_obj_set_height(pump_cycle_divider_1, 1);
    lv_obj_set_flag(pump_cycle_divider_1, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(pump_cycle_divider_1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(pump_cycle_divider_1, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(pump_cycle_divider_1, 255, 0);
    lv_obj_set_style_border_width(pump_cycle_divider_1, 0, 0);
    lv_obj_set_style_pad_all(pump_cycle_divider_1, 0, 0);

    lv_obj_t * pump_off_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(pump_off_title_label, "pump_off_title_label");
    lv_obj_set_x(pump_off_title_label, 12);
    lv_obj_set_y(pump_off_title_label, 80);
    lv_obj_set_width(pump_off_title_label, 70);
    lv_label_set_text(pump_off_title_label, "Pump OFF");
    lv_label_set_long_mode(pump_off_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(pump_off_title_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(pump_off_title_label, font_inter_11, 0);

    lv_obj_t * pump_off_minus_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(pump_off_minus_btn, "pump_off_minus_btn");
    lv_obj_set_x(pump_off_minus_btn, 104);
    lv_obj_set_y(pump_off_minus_btn, 72);
    lv_obj_set_width(pump_off_minus_btn, 28);
    lv_obj_set_height(pump_off_minus_btn, 28);
    lv_obj_set_flag(pump_off_minus_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(pump_off_minus_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(pump_off_minus_btn, COLOR_SOFT_SURFACE, 0);
    lv_obj_set_style_bg_opa(pump_off_minus_btn, 255, 0);
    lv_obj_set_style_radius(pump_off_minus_btn, 14, 0);
    lv_obj_set_style_border_width(pump_off_minus_btn, 1, 0);
    lv_obj_set_style_border_color(pump_off_minus_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(pump_off_minus_btn, 0, 0);
    lv_obj_set_style_shadow_width(pump_off_minus_btn, 0, 0);
    lv_obj_t * pump_off_minus_label = lv_label_create(pump_off_minus_btn);
    lv_obj_set_name(pump_off_minus_label, "pump_off_minus_label");
    lv_obj_set_x(pump_off_minus_label, 0);
    lv_obj_set_y(pump_off_minus_label, 5);
    lv_obj_set_width(pump_off_minus_label, 28);
    lv_label_set_text(pump_off_minus_label, "-");
    lv_label_set_long_mode(pump_off_minus_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(pump_off_minus_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(pump_off_minus_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(pump_off_minus_label, font_inter_15, 0);

    lv_obj_t * pump_off_value_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(pump_off_value_label, "pump_off_value_label");
    lv_obj_set_x(pump_off_value_label, 136);
    lv_obj_set_y(pump_off_value_label, 79);
    lv_obj_set_width(pump_off_value_label, 50);
    lv_label_set_text(pump_off_value_label, pump_off_value);
    lv_label_set_long_mode(pump_off_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(pump_off_value_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(pump_off_value_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(pump_off_value_label, font_inter_12, 0);

    lv_obj_t * pump_off_plus_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(pump_off_plus_btn, "pump_off_plus_btn");
    lv_obj_set_x(pump_off_plus_btn, 188);
    lv_obj_set_y(pump_off_plus_btn, 72);
    lv_obj_set_width(pump_off_plus_btn, 28);
    lv_obj_set_height(pump_off_plus_btn, 28);
    lv_obj_set_flag(pump_off_plus_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(pump_off_plus_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(pump_off_plus_btn, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_bg_opa(pump_off_plus_btn, 255, 0);
    lv_obj_set_style_radius(pump_off_plus_btn, 14, 0);
    lv_obj_set_style_border_width(pump_off_plus_btn, 0, 0);
    lv_obj_set_style_pad_all(pump_off_plus_btn, 0, 0);
    lv_obj_set_style_shadow_width(pump_off_plus_btn, 0, 0);
    lv_obj_t * pump_off_plus_label = lv_label_create(pump_off_plus_btn);
    lv_obj_set_name(pump_off_plus_label, "pump_off_plus_label");
    lv_obj_set_x(pump_off_plus_label, 0);
    lv_obj_set_y(pump_off_plus_label, 5);
    lv_obj_set_width(pump_off_plus_label, 28);
    lv_label_set_text(pump_off_plus_label, "+");
    lv_label_set_long_mode(pump_off_plus_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(pump_off_plus_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(pump_off_plus_label, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(pump_off_plus_label, font_inter_15, 0);

    lv_obj_t * pump_cycle_divider_2 = lv_obj_create(lv_obj_0);
    lv_obj_set_name(pump_cycle_divider_2, "pump_cycle_divider_2");
    lv_obj_set_x(pump_cycle_divider_2, 12);
    lv_obj_set_y(pump_cycle_divider_2, 106);
    lv_obj_set_width(pump_cycle_divider_2, 204);
    lv_obj_set_height(pump_cycle_divider_2, 1);
    lv_obj_set_flag(pump_cycle_divider_2, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(pump_cycle_divider_2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(pump_cycle_divider_2, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(pump_cycle_divider_2, 255, 0);
    lv_obj_set_style_border_width(pump_cycle_divider_2, 0, 0);
    lv_obj_set_style_pad_all(pump_cycle_divider_2, 0, 0);

    lv_obj_t * pump_cycle_schedule_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(pump_cycle_schedule_label, "pump_cycle_schedule_label");
    lv_obj_set_x(pump_cycle_schedule_label, 12);
    lv_obj_set_y(pump_cycle_schedule_label, 116);
    lv_obj_set_width(pump_cycle_schedule_label, 90);
    lv_label_set_text(pump_cycle_schedule_label, schedule_label);
    lv_label_set_long_mode(pump_cycle_schedule_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(pump_cycle_schedule_label, COLOR_TEXT_MUTED, 0);
    lv_obj_set_style_text_font(pump_cycle_schedule_label, font_inter_10, 0);

    lv_obj_t * pump_cycle_schedule_time_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(pump_cycle_schedule_time_label, "pump_cycle_schedule_time_label");
    lv_obj_set_x(pump_cycle_schedule_time_label, 104);
    lv_obj_set_y(pump_cycle_schedule_time_label, 116);
    lv_obj_set_width(pump_cycle_schedule_time_label, 112);
    lv_label_set_text(pump_cycle_schedule_time_label, schedule_time);
    lv_label_set_long_mode(pump_cycle_schedule_time_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(pump_cycle_schedule_time_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(pump_cycle_schedule_time_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(pump_cycle_schedule_time_label, font_inter_10, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

