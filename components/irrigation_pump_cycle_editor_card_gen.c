/**
 * @file irrigation_pump_cycle_editor_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "irrigation_pump_cycle_editor_card_gen.h"
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

lv_obj_t * irrigation_pump_cycle_editor_card_create(lv_obj_t * parent, const char * pump_on_value, const char * pump_pause_value)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "irrigation_pump_cycle_editor_card_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 155);
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

    lv_obj_t * irrigation_pump_cycle_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(irrigation_pump_cycle_title_label, "irrigation_pump_cycle_title_label");
    lv_obj_set_x(irrigation_pump_cycle_title_label, 20);
    lv_obj_set_y(irrigation_pump_cycle_title_label, 16);
    lv_obj_set_width(irrigation_pump_cycle_title_label, 220);
    lv_label_set_text(irrigation_pump_cycle_title_label, "PUMP CYCLE");
    lv_label_set_long_mode(irrigation_pump_cycle_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_pump_cycle_title_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(irrigation_pump_cycle_title_label, font_inter_11, 0);
    lv_obj_set_style_text_letter_space(irrigation_pump_cycle_title_label, 1, 0);

    lv_obj_t * irrigation_pump_cycle_on_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(irrigation_pump_cycle_on_title_label, "irrigation_pump_cycle_on_title_label");
    lv_obj_set_x(irrigation_pump_cycle_on_title_label, 20);
    lv_obj_set_y(irrigation_pump_cycle_on_title_label, 56);
    lv_obj_set_width(irrigation_pump_cycle_on_title_label, 140);
    lv_label_set_text(irrigation_pump_cycle_on_title_label, "Pump ON");
    lv_label_set_long_mode(irrigation_pump_cycle_on_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_pump_cycle_on_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_pump_cycle_on_title_label, font_inter_14, 0);

    lv_obj_t * irrigation_pump_cycle_on_minus_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(irrigation_pump_cycle_on_minus_btn, "irrigation_pump_cycle_on_minus_btn");
    lv_obj_set_x(irrigation_pump_cycle_on_minus_btn, 242);
    lv_obj_set_y(irrigation_pump_cycle_on_minus_btn, 46);
    lv_obj_set_width(irrigation_pump_cycle_on_minus_btn, 42);
    lv_obj_set_height(irrigation_pump_cycle_on_minus_btn, 42);
    lv_obj_set_flag(irrigation_pump_cycle_on_minus_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_pump_cycle_on_minus_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_pump_cycle_on_minus_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(irrigation_pump_cycle_on_minus_btn, 255, 0);
    lv_obj_set_style_radius(irrigation_pump_cycle_on_minus_btn, 21, 0);
    lv_obj_set_style_border_width(irrigation_pump_cycle_on_minus_btn, 1, 0);
    lv_obj_set_style_border_color(irrigation_pump_cycle_on_minus_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(irrigation_pump_cycle_on_minus_btn, 0, 0);
    lv_obj_set_style_shadow_width(irrigation_pump_cycle_on_minus_btn, 0, 0);
    lv_obj_t * irrigation_pump_cycle_on_minus_label = lv_label_create(irrigation_pump_cycle_on_minus_btn);
    lv_obj_set_name(irrigation_pump_cycle_on_minus_label, "irrigation_pump_cycle_on_minus_label");
    lv_obj_set_x(irrigation_pump_cycle_on_minus_label, 0);
    lv_obj_set_y(irrigation_pump_cycle_on_minus_label, 10);
    lv_obj_set_width(irrigation_pump_cycle_on_minus_label, 42);
    lv_label_set_text(irrigation_pump_cycle_on_minus_label, "-");
    lv_label_set_long_mode(irrigation_pump_cycle_on_minus_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(irrigation_pump_cycle_on_minus_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(irrigation_pump_cycle_on_minus_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_pump_cycle_on_minus_label, font_inter_15, 0);

    lv_obj_t * irrigation_pump_cycle_on_value_box = lv_obj_create(lv_obj_0);
    lv_obj_set_name(irrigation_pump_cycle_on_value_box, "irrigation_pump_cycle_on_value_box");
    lv_obj_set_x(irrigation_pump_cycle_on_value_box, 292);
    lv_obj_set_y(irrigation_pump_cycle_on_value_box, 48);
    lv_obj_set_width(irrigation_pump_cycle_on_value_box, 68);
    lv_obj_set_height(irrigation_pump_cycle_on_value_box, 38);
    lv_obj_set_flag(irrigation_pump_cycle_on_value_box, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_pump_cycle_on_value_box, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_pump_cycle_on_value_box, COLOR_SOFT_SURFACE, 0);
    lv_obj_set_style_bg_opa(irrigation_pump_cycle_on_value_box, 255, 0);
    lv_obj_set_style_radius(irrigation_pump_cycle_on_value_box, 10, 0);
    lv_obj_set_style_border_width(irrigation_pump_cycle_on_value_box, 1, 0);
    lv_obj_set_style_border_color(irrigation_pump_cycle_on_value_box, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(irrigation_pump_cycle_on_value_box, 0, 0);
    lv_obj_t * irrigation_pump_cycle_on_value_label = lv_label_create(irrigation_pump_cycle_on_value_box);
    lv_obj_set_name(irrigation_pump_cycle_on_value_label, "irrigation_pump_cycle_on_value_label");
    lv_obj_set_x(irrigation_pump_cycle_on_value_label, 0);
    lv_obj_set_y(irrigation_pump_cycle_on_value_label, 10);
    lv_obj_set_width(irrigation_pump_cycle_on_value_label, 68);
    lv_label_set_text(irrigation_pump_cycle_on_value_label, pump_on_value);
    lv_label_set_long_mode(irrigation_pump_cycle_on_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(irrigation_pump_cycle_on_value_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(irrigation_pump_cycle_on_value_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_pump_cycle_on_value_label, font_inter_14, 0);

    lv_obj_t * irrigation_pump_cycle_on_unit_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(irrigation_pump_cycle_on_unit_label, "irrigation_pump_cycle_on_unit_label");
    lv_obj_set_x(irrigation_pump_cycle_on_unit_label, 366);
    lv_obj_set_y(irrigation_pump_cycle_on_unit_label, 58);
    lv_obj_set_width(irrigation_pump_cycle_on_unit_label, 28);
    lv_label_set_text(irrigation_pump_cycle_on_unit_label, "min");
    lv_label_set_long_mode(irrigation_pump_cycle_on_unit_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_pump_cycle_on_unit_label, COLOR_SECONDARY_GREEN, 0);
    lv_obj_set_style_text_font(irrigation_pump_cycle_on_unit_label, font_inter_11, 0);

    lv_obj_t * irrigation_pump_cycle_on_plus_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(irrigation_pump_cycle_on_plus_btn, "irrigation_pump_cycle_on_plus_btn");
    lv_obj_set_x(irrigation_pump_cycle_on_plus_btn, 394);
    lv_obj_set_y(irrigation_pump_cycle_on_plus_btn, 46);
    lv_obj_set_width(irrigation_pump_cycle_on_plus_btn, 42);
    lv_obj_set_height(irrigation_pump_cycle_on_plus_btn, 42);
    lv_obj_set_flag(irrigation_pump_cycle_on_plus_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_pump_cycle_on_plus_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_pump_cycle_on_plus_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(irrigation_pump_cycle_on_plus_btn, 255, 0);
    lv_obj_set_style_radius(irrigation_pump_cycle_on_plus_btn, 21, 0);
    lv_obj_set_style_border_width(irrigation_pump_cycle_on_plus_btn, 1, 0);
    lv_obj_set_style_border_color(irrigation_pump_cycle_on_plus_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(irrigation_pump_cycle_on_plus_btn, 0, 0);
    lv_obj_set_style_shadow_width(irrigation_pump_cycle_on_plus_btn, 0, 0);
    lv_obj_t * irrigation_pump_cycle_on_plus_label = lv_label_create(irrigation_pump_cycle_on_plus_btn);
    lv_obj_set_name(irrigation_pump_cycle_on_plus_label, "irrigation_pump_cycle_on_plus_label");
    lv_obj_set_x(irrigation_pump_cycle_on_plus_label, 0);
    lv_obj_set_y(irrigation_pump_cycle_on_plus_label, 10);
    lv_obj_set_width(irrigation_pump_cycle_on_plus_label, 42);
    lv_label_set_text(irrigation_pump_cycle_on_plus_label, "+");
    lv_label_set_long_mode(irrigation_pump_cycle_on_plus_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(irrigation_pump_cycle_on_plus_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(irrigation_pump_cycle_on_plus_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_pump_cycle_on_plus_label, font_inter_15, 0);

    lv_obj_t * irrigation_pump_cycle_divider = lv_obj_create(lv_obj_0);
    lv_obj_set_name(irrigation_pump_cycle_divider, "irrigation_pump_cycle_divider");
    lv_obj_set_x(irrigation_pump_cycle_divider, 20);
    lv_obj_set_y(irrigation_pump_cycle_divider, 94);
    lv_obj_set_width(irrigation_pump_cycle_divider, 412);
    lv_obj_set_height(irrigation_pump_cycle_divider, 1);
    lv_obj_set_flag(irrigation_pump_cycle_divider, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_pump_cycle_divider, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_pump_cycle_divider, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(irrigation_pump_cycle_divider, 255, 0);
    lv_obj_set_style_border_width(irrigation_pump_cycle_divider, 0, 0);
    lv_obj_set_style_pad_all(irrigation_pump_cycle_divider, 0, 0);

    lv_obj_t * irrigation_pump_cycle_pause_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(irrigation_pump_cycle_pause_title_label, "irrigation_pump_cycle_pause_title_label");
    lv_obj_set_x(irrigation_pump_cycle_pause_title_label, 20);
    lv_obj_set_y(irrigation_pump_cycle_pause_title_label, 108);
    lv_obj_set_width(irrigation_pump_cycle_pause_title_label, 150);
    lv_label_set_text(irrigation_pump_cycle_pause_title_label, "Pump pause");
    lv_label_set_long_mode(irrigation_pump_cycle_pause_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_pump_cycle_pause_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_pump_cycle_pause_title_label, font_inter_14, 0);

    lv_obj_t * irrigation_pump_cycle_pause_minus_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(irrigation_pump_cycle_pause_minus_btn, "irrigation_pump_cycle_pause_minus_btn");
    lv_obj_set_x(irrigation_pump_cycle_pause_minus_btn, 242);
    lv_obj_set_y(irrigation_pump_cycle_pause_minus_btn, 98);
    lv_obj_set_width(irrigation_pump_cycle_pause_minus_btn, 42);
    lv_obj_set_height(irrigation_pump_cycle_pause_minus_btn, 42);
    lv_obj_set_flag(irrigation_pump_cycle_pause_minus_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_pump_cycle_pause_minus_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_pump_cycle_pause_minus_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(irrigation_pump_cycle_pause_minus_btn, 255, 0);
    lv_obj_set_style_radius(irrigation_pump_cycle_pause_minus_btn, 21, 0);
    lv_obj_set_style_border_width(irrigation_pump_cycle_pause_minus_btn, 1, 0);
    lv_obj_set_style_border_color(irrigation_pump_cycle_pause_minus_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(irrigation_pump_cycle_pause_minus_btn, 0, 0);
    lv_obj_set_style_shadow_width(irrigation_pump_cycle_pause_minus_btn, 0, 0);
    lv_obj_t * irrigation_pump_cycle_pause_minus_label = lv_label_create(irrigation_pump_cycle_pause_minus_btn);
    lv_obj_set_name(irrigation_pump_cycle_pause_minus_label, "irrigation_pump_cycle_pause_minus_label");
    lv_obj_set_x(irrigation_pump_cycle_pause_minus_label, 0);
    lv_obj_set_y(irrigation_pump_cycle_pause_minus_label, 10);
    lv_obj_set_width(irrigation_pump_cycle_pause_minus_label, 42);
    lv_label_set_text(irrigation_pump_cycle_pause_minus_label, "-");
    lv_label_set_long_mode(irrigation_pump_cycle_pause_minus_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(irrigation_pump_cycle_pause_minus_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(irrigation_pump_cycle_pause_minus_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_pump_cycle_pause_minus_label, font_inter_15, 0);

    lv_obj_t * irrigation_pump_cycle_pause_value_box = lv_obj_create(lv_obj_0);
    lv_obj_set_name(irrigation_pump_cycle_pause_value_box, "irrigation_pump_cycle_pause_value_box");
    lv_obj_set_x(irrigation_pump_cycle_pause_value_box, 292);
    lv_obj_set_y(irrigation_pump_cycle_pause_value_box, 100);
    lv_obj_set_width(irrigation_pump_cycle_pause_value_box, 68);
    lv_obj_set_height(irrigation_pump_cycle_pause_value_box, 38);
    lv_obj_set_flag(irrigation_pump_cycle_pause_value_box, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_pump_cycle_pause_value_box, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_pump_cycle_pause_value_box, COLOR_SOFT_SURFACE, 0);
    lv_obj_set_style_bg_opa(irrigation_pump_cycle_pause_value_box, 255, 0);
    lv_obj_set_style_radius(irrigation_pump_cycle_pause_value_box, 10, 0);
    lv_obj_set_style_border_width(irrigation_pump_cycle_pause_value_box, 1, 0);
    lv_obj_set_style_border_color(irrigation_pump_cycle_pause_value_box, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(irrigation_pump_cycle_pause_value_box, 0, 0);
    lv_obj_t * irrigation_pump_cycle_pause_value_label = lv_label_create(irrigation_pump_cycle_pause_value_box);
    lv_obj_set_name(irrigation_pump_cycle_pause_value_label, "irrigation_pump_cycle_pause_value_label");
    lv_obj_set_x(irrigation_pump_cycle_pause_value_label, 0);
    lv_obj_set_y(irrigation_pump_cycle_pause_value_label, 10);
    lv_obj_set_width(irrigation_pump_cycle_pause_value_label, 68);
    lv_label_set_text(irrigation_pump_cycle_pause_value_label, pump_pause_value);
    lv_label_set_long_mode(irrigation_pump_cycle_pause_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(irrigation_pump_cycle_pause_value_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(irrigation_pump_cycle_pause_value_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_pump_cycle_pause_value_label, font_inter_14, 0);

    lv_obj_t * irrigation_pump_cycle_pause_unit_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(irrigation_pump_cycle_pause_unit_label, "irrigation_pump_cycle_pause_unit_label");
    lv_obj_set_x(irrigation_pump_cycle_pause_unit_label, 366);
    lv_obj_set_y(irrigation_pump_cycle_pause_unit_label, 110);
    lv_obj_set_width(irrigation_pump_cycle_pause_unit_label, 28);
    lv_label_set_text(irrigation_pump_cycle_pause_unit_label, "min");
    lv_label_set_long_mode(irrigation_pump_cycle_pause_unit_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_pump_cycle_pause_unit_label, COLOR_SECONDARY_GREEN, 0);
    lv_obj_set_style_text_font(irrigation_pump_cycle_pause_unit_label, font_inter_11, 0);

    lv_obj_t * irrigation_pump_cycle_pause_plus_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(irrigation_pump_cycle_pause_plus_btn, "irrigation_pump_cycle_pause_plus_btn");
    lv_obj_set_x(irrigation_pump_cycle_pause_plus_btn, 394);
    lv_obj_set_y(irrigation_pump_cycle_pause_plus_btn, 98);
    lv_obj_set_width(irrigation_pump_cycle_pause_plus_btn, 42);
    lv_obj_set_height(irrigation_pump_cycle_pause_plus_btn, 42);
    lv_obj_set_flag(irrigation_pump_cycle_pause_plus_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_pump_cycle_pause_plus_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_pump_cycle_pause_plus_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(irrigation_pump_cycle_pause_plus_btn, 255, 0);
    lv_obj_set_style_radius(irrigation_pump_cycle_pause_plus_btn, 21, 0);
    lv_obj_set_style_border_width(irrigation_pump_cycle_pause_plus_btn, 1, 0);
    lv_obj_set_style_border_color(irrigation_pump_cycle_pause_plus_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(irrigation_pump_cycle_pause_plus_btn, 0, 0);
    lv_obj_set_style_shadow_width(irrigation_pump_cycle_pause_plus_btn, 0, 0);
    lv_obj_t * irrigation_pump_cycle_pause_plus_label = lv_label_create(irrigation_pump_cycle_pause_plus_btn);
    lv_obj_set_name(irrigation_pump_cycle_pause_plus_label, "irrigation_pump_cycle_pause_plus_label");
    lv_obj_set_x(irrigation_pump_cycle_pause_plus_label, 0);
    lv_obj_set_y(irrigation_pump_cycle_pause_plus_label, 10);
    lv_obj_set_width(irrigation_pump_cycle_pause_plus_label, 42);
    lv_label_set_text(irrigation_pump_cycle_pause_plus_label, "+");
    lv_label_set_long_mode(irrigation_pump_cycle_pause_plus_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(irrigation_pump_cycle_pause_plus_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(irrigation_pump_cycle_pause_plus_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_pump_cycle_pause_plus_label, font_inter_15, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

