/**
 * @file led_settings_presets_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "led_settings_presets_gen.h"
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

lv_obj_t * led_settings_presets_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "led_settings_presets_#");
    lv_obj_set_width(lv_obj_0, 126);
    lv_obj_set_height(lv_obj_0, 206);
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

    lv_obj_t * led_settings_preset_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(led_settings_preset_title_label, "led_settings_preset_title_label");
    lv_obj_set_x(led_settings_preset_title_label, 16);
    lv_obj_set_y(led_settings_preset_title_label, 14);
    lv_obj_set_width(led_settings_preset_title_label, 90);
    lv_label_set_text(led_settings_preset_title_label, "PRESETS");
    lv_label_set_long_mode(led_settings_preset_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(led_settings_preset_title_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(led_settings_preset_title_label, font_inter_14, 0);
    lv_obj_set_style_text_letter_space(led_settings_preset_title_label, 1, 0);

    lv_obj_t * led_settings_seedling_preset_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(led_settings_seedling_preset_btn, "led_settings_seedling_preset_btn");
    lv_obj_set_x(led_settings_seedling_preset_btn, 14);
    lv_obj_set_y(led_settings_seedling_preset_btn, 40);
    lv_obj_set_width(led_settings_seedling_preset_btn, 98);
    lv_obj_set_height(led_settings_seedling_preset_btn, 26);
    lv_obj_set_flag(led_settings_seedling_preset_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_settings_seedling_preset_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(led_settings_seedling_preset_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(led_settings_seedling_preset_btn, 255, 0);
    lv_obj_set_style_radius(led_settings_seedling_preset_btn, 10, 0);
    lv_obj_set_style_border_width(led_settings_seedling_preset_btn, 1, 0);
    lv_obj_set_style_border_color(led_settings_seedling_preset_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(led_settings_seedling_preset_btn, 0, 0);
    lv_obj_set_style_shadow_width(led_settings_seedling_preset_btn, 0, 0);
    lv_obj_t * led_settings_seedling_preset_label = lv_label_create(led_settings_seedling_preset_btn);
    lv_obj_set_name(led_settings_seedling_preset_label, "led_settings_seedling_preset_label");
    lv_obj_set_x(led_settings_seedling_preset_label, 0);
    lv_obj_set_y(led_settings_seedling_preset_label, 3);
    lv_obj_set_width(led_settings_seedling_preset_label, 98);
    lv_label_set_text(led_settings_seedling_preset_label, "Seedling");
    lv_label_set_long_mode(led_settings_seedling_preset_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(led_settings_seedling_preset_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(led_settings_seedling_preset_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(led_settings_seedling_preset_label, font_inter_12, 0);

    lv_obj_t * led_settings_standard_preset_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(led_settings_standard_preset_btn, "led_settings_standard_preset_btn");
    lv_obj_set_x(led_settings_standard_preset_btn, 14);
    lv_obj_set_y(led_settings_standard_preset_btn, 72);
    lv_obj_set_width(led_settings_standard_preset_btn, 98);
    lv_obj_set_height(led_settings_standard_preset_btn, 26);
    lv_obj_set_flag(led_settings_standard_preset_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_settings_standard_preset_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(led_settings_standard_preset_btn, COLOR_WARNING_BG, 0);
    lv_obj_set_style_bg_opa(led_settings_standard_preset_btn, 160, 0);
    lv_obj_set_style_radius(led_settings_standard_preset_btn, 10, 0);
    lv_obj_set_style_border_width(led_settings_standard_preset_btn, 1, 0);
    lv_obj_set_style_border_color(led_settings_standard_preset_btn, COLOR_STATUS_WARNING, 0);
    lv_obj_set_style_pad_all(led_settings_standard_preset_btn, 0, 0);
    lv_obj_set_style_shadow_width(led_settings_standard_preset_btn, 0, 0);
    lv_obj_t * led_settings_standard_preset_label = lv_label_create(led_settings_standard_preset_btn);
    lv_obj_set_name(led_settings_standard_preset_label, "led_settings_standard_preset_label");
    lv_obj_set_x(led_settings_standard_preset_label, 0);
    lv_obj_set_y(led_settings_standard_preset_label, 3);
    lv_obj_set_width(led_settings_standard_preset_label, 98);
    lv_label_set_text(led_settings_standard_preset_label, "Standard");
    lv_label_set_long_mode(led_settings_standard_preset_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(led_settings_standard_preset_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(led_settings_standard_preset_label, COLOR_STATUS_WARNING, 0);
    lv_obj_set_style_text_font(led_settings_standard_preset_label, font_inter_12, 0);

    lv_obj_t * led_settings_bloom_preset_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(led_settings_bloom_preset_btn, "led_settings_bloom_preset_btn");
    lv_obj_set_x(led_settings_bloom_preset_btn, 14);
    lv_obj_set_y(led_settings_bloom_preset_btn, 104);
    lv_obj_set_width(led_settings_bloom_preset_btn, 98);
    lv_obj_set_height(led_settings_bloom_preset_btn, 26);
    lv_obj_set_flag(led_settings_bloom_preset_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_settings_bloom_preset_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(led_settings_bloom_preset_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(led_settings_bloom_preset_btn, 255, 0);
    lv_obj_set_style_radius(led_settings_bloom_preset_btn, 10, 0);
    lv_obj_set_style_border_width(led_settings_bloom_preset_btn, 1, 0);
    lv_obj_set_style_border_color(led_settings_bloom_preset_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(led_settings_bloom_preset_btn, 0, 0);
    lv_obj_set_style_shadow_width(led_settings_bloom_preset_btn, 0, 0);
    lv_obj_t * led_settings_bloom_preset_label = lv_label_create(led_settings_bloom_preset_btn);
    lv_obj_set_name(led_settings_bloom_preset_label, "led_settings_bloom_preset_label");
    lv_obj_set_x(led_settings_bloom_preset_label, 0);
    lv_obj_set_y(led_settings_bloom_preset_label, 3);
    lv_obj_set_width(led_settings_bloom_preset_label, 98);
    lv_label_set_text(led_settings_bloom_preset_label, "Bloom");
    lv_label_set_long_mode(led_settings_bloom_preset_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(led_settings_bloom_preset_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(led_settings_bloom_preset_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(led_settings_bloom_preset_label, font_inter_12, 0);

    lv_obj_t * led_settings_custom_preset_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(led_settings_custom_preset_btn, "led_settings_custom_preset_btn");
    lv_obj_set_x(led_settings_custom_preset_btn, 14);
    lv_obj_set_y(led_settings_custom_preset_btn, 135);
    lv_obj_set_width(led_settings_custom_preset_btn, 98);
    lv_obj_set_height(led_settings_custom_preset_btn, 26);
    lv_obj_set_flag(led_settings_custom_preset_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_settings_custom_preset_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(led_settings_custom_preset_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(led_settings_custom_preset_btn, 255, 0);
    lv_obj_set_style_radius(led_settings_custom_preset_btn, 10, 0);
    lv_obj_set_style_border_width(led_settings_custom_preset_btn, 1, 0);
    lv_obj_set_style_border_color(led_settings_custom_preset_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(led_settings_custom_preset_btn, 0, 0);
    lv_obj_set_style_shadow_width(led_settings_custom_preset_btn, 0, 0);
    lv_obj_t * led_settings_custom_preset_label = lv_label_create(led_settings_custom_preset_btn);
    lv_obj_set_name(led_settings_custom_preset_label, "led_settings_custom_preset_label");
    lv_obj_set_x(led_settings_custom_preset_label, 0);
    lv_obj_set_y(led_settings_custom_preset_label, 3);
    lv_obj_set_width(led_settings_custom_preset_label, 98);
    lv_label_set_text(led_settings_custom_preset_label, "Custom");
    lv_label_set_long_mode(led_settings_custom_preset_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(led_settings_custom_preset_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(led_settings_custom_preset_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(led_settings_custom_preset_label, font_inter_12, 0);

    lv_obj_t * led_settings_off_preset_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(led_settings_off_preset_btn, "led_settings_off_preset_btn");
    lv_obj_set_x(led_settings_off_preset_btn, 14);
    lv_obj_set_y(led_settings_off_preset_btn, 166);
    lv_obj_set_width(led_settings_off_preset_btn, 98);
    lv_obj_set_height(led_settings_off_preset_btn, 26);
    lv_obj_set_flag(led_settings_off_preset_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_settings_off_preset_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(led_settings_off_preset_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(led_settings_off_preset_btn, 255, 0);
    lv_obj_set_style_radius(led_settings_off_preset_btn, 10, 0);
    lv_obj_set_style_border_width(led_settings_off_preset_btn, 1, 0);
    lv_obj_set_style_border_color(led_settings_off_preset_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(led_settings_off_preset_btn, 0, 0);
    lv_obj_set_style_shadow_width(led_settings_off_preset_btn, 0, 0);
    lv_obj_t * led_settings_off_preset_label = lv_label_create(led_settings_off_preset_btn);
    lv_obj_set_name(led_settings_off_preset_label, "led_settings_off_preset_label");
    lv_obj_set_x(led_settings_off_preset_label, 0);
    lv_obj_set_y(led_settings_off_preset_label, 3);
    lv_obj_set_width(led_settings_off_preset_label, 98);
    lv_label_set_text(led_settings_off_preset_label, "Off");
    lv_label_set_long_mode(led_settings_off_preset_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(led_settings_off_preset_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(led_settings_off_preset_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(led_settings_off_preset_label, font_inter_12, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

