/**
 * @file led_preset_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "led_preset_card_gen.h"
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

lv_obj_t * led_preset_card_create(lv_obj_t * parent, const char * intensity_value, int32_t slider_value, lv_color_t seedling_bg_color, lv_color_t seedling_text_color, lv_color_t vegetative_bg_color, lv_color_t vegetative_text_color, lv_color_t bloom_bg_color, lv_color_t bloom_text_color, lv_color_t custom_bg_color, lv_color_t custom_text_color, lv_color_t off_bg_color, lv_color_t off_text_color)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "led_preset_card_#");
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

    lv_obj_t * led_preset_icon = lv_image_create(lv_obj_0);
    lv_obj_set_name(led_preset_icon, "led_preset_icon");
    lv_obj_set_x(led_preset_icon, 14);
    lv_obj_set_y(led_preset_icon, 12);
    lv_obj_set_width(led_preset_icon, 20);
    lv_obj_set_height(led_preset_icon, 20);
    lv_image_set_src(led_preset_icon, img_nav_light);
    lv_obj_set_flag(led_preset_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_preset_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(led_preset_icon, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_image_recolor_opa(led_preset_icon, 255, 0);

    lv_obj_t * led_preset_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(led_preset_title_label, "led_preset_title_label");
    lv_obj_set_x(led_preset_title_label, 44);
    lv_obj_set_y(led_preset_title_label, 13);
    lv_obj_set_width(led_preset_title_label, 110);
    lv_label_set_text(led_preset_title_label, "PRESET");
    lv_label_set_long_mode(led_preset_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(led_preset_title_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(led_preset_title_label, font_inter_14, 0);

    lv_obj_t * led_preset_seedling_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(led_preset_seedling_btn, "led_preset_seedling_btn");
    lv_obj_set_x(led_preset_seedling_btn, 12);
    lv_obj_set_y(led_preset_seedling_btn, 44);
    lv_obj_set_width(led_preset_seedling_btn, 62);
    lv_obj_set_height(led_preset_seedling_btn, 28);
    lv_obj_set_flag(led_preset_seedling_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_preset_seedling_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(led_preset_seedling_btn, seedling_bg_color, 0);
    lv_obj_set_style_bg_opa(led_preset_seedling_btn, 255, 0);
    lv_obj_set_style_radius(led_preset_seedling_btn, 8, 0);
    lv_obj_set_style_border_width(led_preset_seedling_btn, 1, 0);
    lv_obj_set_style_border_color(led_preset_seedling_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(led_preset_seedling_btn, 0, 0);
    lv_obj_set_style_shadow_width(led_preset_seedling_btn, 0, 0);
    lv_obj_t * led_preset_seedling_label = lv_label_create(led_preset_seedling_btn);
    lv_obj_set_name(led_preset_seedling_label, "led_preset_seedling_label");
    lv_obj_set_x(led_preset_seedling_label, 0);
    lv_obj_set_y(led_preset_seedling_label, 8);
    lv_obj_set_width(led_preset_seedling_label, 62);
    lv_label_set_text(led_preset_seedling_label, "Seedling");
    lv_label_set_long_mode(led_preset_seedling_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(led_preset_seedling_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(led_preset_seedling_label, seedling_text_color, 0);
    lv_obj_set_style_text_font(led_preset_seedling_label, font_inter_9, 0);

    lv_obj_t * led_preset_vegetative_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(led_preset_vegetative_btn, "led_preset_vegetative_btn");
    lv_obj_set_x(led_preset_vegetative_btn, 82);
    lv_obj_set_y(led_preset_vegetative_btn, 44);
    lv_obj_set_width(led_preset_vegetative_btn, 62);
    lv_obj_set_height(led_preset_vegetative_btn, 28);
    lv_obj_set_flag(led_preset_vegetative_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_preset_vegetative_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(led_preset_vegetative_btn, vegetative_bg_color, 0);
    lv_obj_set_style_bg_opa(led_preset_vegetative_btn, 255, 0);
    lv_obj_set_style_radius(led_preset_vegetative_btn, 8, 0);
    lv_obj_set_style_border_width(led_preset_vegetative_btn, 0, 0);
    lv_obj_set_style_pad_all(led_preset_vegetative_btn, 0, 0);
    lv_obj_set_style_shadow_width(led_preset_vegetative_btn, 0, 0);
    lv_obj_t * led_preset_vegetative_label = lv_label_create(led_preset_vegetative_btn);
    lv_obj_set_name(led_preset_vegetative_label, "led_preset_vegetative_label");
    lv_obj_set_x(led_preset_vegetative_label, 0);
    lv_obj_set_y(led_preset_vegetative_label, 8);
    lv_obj_set_width(led_preset_vegetative_label, 62);
    lv_label_set_text(led_preset_vegetative_label, "Veg");
    lv_label_set_long_mode(led_preset_vegetative_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(led_preset_vegetative_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(led_preset_vegetative_label, vegetative_text_color, 0);
    lv_obj_set_style_text_font(led_preset_vegetative_label, font_inter_9, 0);

    lv_obj_t * led_preset_bloom_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(led_preset_bloom_btn, "led_preset_bloom_btn");
    lv_obj_set_x(led_preset_bloom_btn, 152);
    lv_obj_set_y(led_preset_bloom_btn, 44);
    lv_obj_set_width(led_preset_bloom_btn, 62);
    lv_obj_set_height(led_preset_bloom_btn, 28);
    lv_obj_set_flag(led_preset_bloom_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_preset_bloom_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(led_preset_bloom_btn, bloom_bg_color, 0);
    lv_obj_set_style_bg_opa(led_preset_bloom_btn, 255, 0);
    lv_obj_set_style_radius(led_preset_bloom_btn, 8, 0);
    lv_obj_set_style_border_width(led_preset_bloom_btn, 1, 0);
    lv_obj_set_style_border_color(led_preset_bloom_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(led_preset_bloom_btn, 0, 0);
    lv_obj_set_style_shadow_width(led_preset_bloom_btn, 0, 0);
    lv_obj_t * led_preset_bloom_label = lv_label_create(led_preset_bloom_btn);
    lv_obj_set_name(led_preset_bloom_label, "led_preset_bloom_label");
    lv_obj_set_x(led_preset_bloom_label, 0);
    lv_obj_set_y(led_preset_bloom_label, 8);
    lv_obj_set_width(led_preset_bloom_label, 62);
    lv_label_set_text(led_preset_bloom_label, "Bloom");
    lv_label_set_long_mode(led_preset_bloom_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(led_preset_bloom_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(led_preset_bloom_label, bloom_text_color, 0);
    lv_obj_set_style_text_font(led_preset_bloom_label, font_inter_9, 0);

    lv_obj_t * led_preset_custom_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(led_preset_custom_btn, "led_preset_custom_btn");
    lv_obj_set_x(led_preset_custom_btn, 12);
    lv_obj_set_y(led_preset_custom_btn, 80);
    lv_obj_set_width(led_preset_custom_btn, 96);
    lv_obj_set_height(led_preset_custom_btn, 28);
    lv_obj_set_flag(led_preset_custom_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_preset_custom_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(led_preset_custom_btn, custom_bg_color, 0);
    lv_obj_set_style_bg_opa(led_preset_custom_btn, 255, 0);
    lv_obj_set_style_radius(led_preset_custom_btn, 8, 0);
    lv_obj_set_style_border_width(led_preset_custom_btn, 1, 0);
    lv_obj_set_style_border_color(led_preset_custom_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(led_preset_custom_btn, 0, 0);
    lv_obj_set_style_shadow_width(led_preset_custom_btn, 0, 0);
    lv_obj_t * led_preset_custom_label = lv_label_create(led_preset_custom_btn);
    lv_obj_set_name(led_preset_custom_label, "led_preset_custom_label");
    lv_obj_set_x(led_preset_custom_label, 0);
    lv_obj_set_y(led_preset_custom_label, 8);
    lv_obj_set_width(led_preset_custom_label, 96);
    lv_label_set_text(led_preset_custom_label, "Custom");
    lv_label_set_long_mode(led_preset_custom_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(led_preset_custom_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(led_preset_custom_label, custom_text_color, 0);
    lv_obj_set_style_text_font(led_preset_custom_label, font_inter_9, 0);

    lv_obj_t * led_preset_off_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(led_preset_off_btn, "led_preset_off_btn");
    lv_obj_set_x(led_preset_off_btn, 118);
    lv_obj_set_y(led_preset_off_btn, 80);
    lv_obj_set_width(led_preset_off_btn, 96);
    lv_obj_set_height(led_preset_off_btn, 28);
    lv_obj_set_flag(led_preset_off_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_preset_off_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(led_preset_off_btn, off_bg_color, 0);
    lv_obj_set_style_bg_opa(led_preset_off_btn, 255, 0);
    lv_obj_set_style_radius(led_preset_off_btn, 8, 0);
    lv_obj_set_style_border_width(led_preset_off_btn, 1, 0);
    lv_obj_set_style_border_color(led_preset_off_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(led_preset_off_btn, 0, 0);
    lv_obj_set_style_shadow_width(led_preset_off_btn, 0, 0);
    lv_obj_t * led_preset_off_label = lv_label_create(led_preset_off_btn);
    lv_obj_set_name(led_preset_off_label, "led_preset_off_label");
    lv_obj_set_x(led_preset_off_label, 0);
    lv_obj_set_y(led_preset_off_label, 8);
    lv_obj_set_width(led_preset_off_label, 96);
    lv_label_set_text(led_preset_off_label, "Off");
    lv_label_set_long_mode(led_preset_off_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(led_preset_off_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(led_preset_off_label, off_text_color, 0);
    lv_obj_set_style_text_font(led_preset_off_label, font_inter_9, 0);

    lv_obj_t * led_intensity_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(led_intensity_title_label, "led_intensity_title_label");
    lv_obj_set_x(led_intensity_title_label, 12);
    lv_obj_set_y(led_intensity_title_label, 118);
    lv_obj_set_width(led_intensity_title_label, 90);
    lv_label_set_text(led_intensity_title_label, "INTENSITY");
    lv_label_set_long_mode(led_intensity_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(led_intensity_title_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(led_intensity_title_label, font_inter_11, 0);

    lv_obj_t * led_intensity_value_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(led_intensity_value_label, "led_intensity_value_label");
    lv_obj_set_x(led_intensity_value_label, 168);
    lv_obj_set_y(led_intensity_value_label, 111);
    lv_obj_set_width(led_intensity_value_label, 46);
    lv_label_set_text(led_intensity_value_label, intensity_value);
    lv_label_set_long_mode(led_intensity_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(led_intensity_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(led_intensity_value_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(led_intensity_value_label, font_inter_15, 0);

    lv_obj_t * led_intensity_slider = lv_slider_create(lv_obj_0);
    lv_obj_set_name(led_intensity_slider, "led_intensity_slider");
    lv_obj_set_x(led_intensity_slider, 12);
    lv_obj_set_y(led_intensity_slider, 142);
    lv_obj_set_width(led_intensity_slider, 202);
    lv_obj_set_height(led_intensity_slider, 8);
    lv_slider_set_min_value(led_intensity_slider, 0);
    lv_slider_set_max_value(led_intensity_slider, 100);
    lv_slider_set_value(led_intensity_slider, slider_value, false);
    lv_slider_set_mode(led_intensity_slider, LV_SLIDER_MODE_NORMAL);
    lv_obj_set_flag(led_intensity_slider, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(led_intensity_slider, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(led_intensity_slider, COLOR_DIVIDER, LV_PART_INDICATOR | LV_PART_KNOB);
    lv_obj_set_style_bg_opa(led_intensity_slider, 255, LV_PART_INDICATOR | LV_PART_KNOB);
    lv_obj_set_style_radius(led_intensity_slider, 4, LV_PART_INDICATOR | LV_PART_KNOB);
    lv_obj_set_style_border_width(led_intensity_slider, 0, LV_PART_KNOB);
    lv_obj_set_style_pad_all(led_intensity_slider, 0, 0);
    lv_obj_set_style_border_color(led_intensity_slider, COLOR_TEXT_SECONDARY, LV_PART_KNOB);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

