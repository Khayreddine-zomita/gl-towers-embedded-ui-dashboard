/**
 * @file screen_saver_status_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_saver_status_card_gen.h"
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

lv_obj_t * screen_saver_status_card_create(lv_obj_t * parent, const char * time_text, const char * system_status, lv_color_t system_status_color, const char * reservoir_value, int32_t reservoir_unit_x, const char * reservoir_volume, const char * pump_status, lv_color_t pump_status_color, const char * led_status, lv_color_t led_status_color, const char * wifi_status, lv_color_t wifi_status_color, const char * hint_text)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "screen_saver_status_card_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 268);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * screen_saver_logo = lv_image_create(lv_obj_0);
    lv_obj_set_name(screen_saver_logo, "screen_saver_logo");
    lv_obj_set_x(screen_saver_logo, 0);
    lv_obj_set_y(screen_saver_logo, 2);
    lv_obj_set_width(screen_saver_logo, 32);
    lv_obj_set_height(screen_saver_logo, 32);
    lv_image_set_src(screen_saver_logo, img_gl_towers_logo_1);
    lv_obj_set_flag(screen_saver_logo, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(screen_saver_logo, LV_SCROLLBAR_MODE_OFF);

    lv_obj_t * screen_saver_brand_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(screen_saver_brand_label, "screen_saver_brand_label");
    lv_obj_set_x(screen_saver_brand_label, 42);
    lv_obj_set_y(screen_saver_brand_label, 9);
    lv_obj_set_width(screen_saver_brand_label, 190);
    lv_label_set_text(screen_saver_brand_label, "GL TOWERS");
    lv_label_set_long_mode(screen_saver_brand_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(screen_saver_brand_label, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(screen_saver_brand_label, font_inter_14, 0);
    lv_obj_set_style_text_letter_space(screen_saver_brand_label, 1, 0);

    lv_obj_t * screen_saver_time_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(screen_saver_time_label, "screen_saver_time_label");
    lv_obj_set_x(screen_saver_time_label, 354);
    lv_obj_set_y(screen_saver_time_label, 8);
    lv_obj_set_width(screen_saver_time_label, 96);
    lv_label_set_text(screen_saver_time_label, time_text);
    lv_label_set_long_mode(screen_saver_time_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(screen_saver_time_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(screen_saver_time_label, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(screen_saver_time_label, font_inter_14, 0);

    lv_obj_t * screen_saver_main_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(screen_saver_main_card, "screen_saver_main_card");
    lv_obj_set_x(screen_saver_main_card, 0);
    lv_obj_set_y(screen_saver_main_card, 52);
    lv_obj_set_width(screen_saver_main_card, 452);
    lv_obj_set_height(screen_saver_main_card, 156);
    lv_obj_set_flag(screen_saver_main_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(screen_saver_main_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(screen_saver_main_card, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(screen_saver_main_card, 255, 0);
    lv_obj_set_style_radius(screen_saver_main_card, 22, 0);
    lv_obj_set_style_pad_all(screen_saver_main_card, 0, 0);
    lv_obj_set_style_border_width(screen_saver_main_card, 1, 0);
    lv_obj_set_style_border_color(screen_saver_main_card, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(screen_saver_main_card, 12, 0);
    lv_obj_set_style_shadow_opa(screen_saver_main_card, 24, 0);
    lv_obj_set_style_shadow_color(screen_saver_main_card, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(screen_saver_main_card, 5, 0);
    lv_obj_t * screen_saver_reservoir_title_label = lv_label_create(screen_saver_main_card);
    lv_obj_set_name(screen_saver_reservoir_title_label, "screen_saver_reservoir_title_label");
    lv_obj_set_x(screen_saver_reservoir_title_label, 28);
    lv_obj_set_y(screen_saver_reservoir_title_label, 22);
    lv_obj_set_width(screen_saver_reservoir_title_label, 150);
    lv_label_set_text(screen_saver_reservoir_title_label, "RESERVOIR");
    lv_label_set_long_mode(screen_saver_reservoir_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(screen_saver_reservoir_title_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(screen_saver_reservoir_title_label, font_inter_12, 0);
    lv_obj_set_style_text_letter_space(screen_saver_reservoir_title_label, 1, 0);

    lv_obj_t * screen_saver_reservoir_value_label = lv_label_create(screen_saver_main_card);
    lv_obj_set_name(screen_saver_reservoir_value_label, "screen_saver_reservoir_value_label");
    lv_obj_set_x(screen_saver_reservoir_value_label, 28);
    lv_obj_set_y(screen_saver_reservoir_value_label, 50);
    lv_obj_set_width(screen_saver_reservoir_value_label, 90);
    lv_label_set_text(screen_saver_reservoir_value_label, reservoir_value);
    lv_label_set_long_mode(screen_saver_reservoir_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(screen_saver_reservoir_value_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(screen_saver_reservoir_value_label, font_inter_26, 0);

    lv_obj_t * screen_saver_reservoir_unit_label = lv_label_create(screen_saver_main_card);
    lv_obj_set_name(screen_saver_reservoir_unit_label, "screen_saver_reservoir_unit_label");
    lv_obj_set_x(screen_saver_reservoir_unit_label, reservoir_unit_x);
    lv_obj_set_y(screen_saver_reservoir_unit_label, 63);
    lv_obj_set_width(screen_saver_reservoir_unit_label, 28);
    lv_label_set_text(screen_saver_reservoir_unit_label, "%");
    lv_label_set_long_mode(screen_saver_reservoir_unit_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(screen_saver_reservoir_unit_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(screen_saver_reservoir_unit_label, font_inter_12, 0);

    lv_obj_t * screen_saver_reservoir_volume_label = lv_label_create(screen_saver_main_card);
    lv_obj_set_name(screen_saver_reservoir_volume_label, "screen_saver_reservoir_volume_label");
    lv_obj_set_x(screen_saver_reservoir_volume_label, 28);
    lv_obj_set_y(screen_saver_reservoir_volume_label, 96);
    lv_obj_set_width(screen_saver_reservoir_volume_label, 160);
    lv_label_set_text(screen_saver_reservoir_volume_label, reservoir_volume);
    lv_label_set_long_mode(screen_saver_reservoir_volume_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(screen_saver_reservoir_volume_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(screen_saver_reservoir_volume_label, font_inter_12, 0);

    lv_obj_t * screen_saver_water_icon = lv_image_create(screen_saver_main_card);
    lv_obj_set_name(screen_saver_water_icon, "screen_saver_water_icon");
    lv_obj_set_x(screen_saver_water_icon, 142);
    lv_obj_set_y(screen_saver_water_icon, 55);
    lv_obj_set_width(screen_saver_water_icon, 28);
    lv_obj_set_height(screen_saver_water_icon, 28);
    lv_image_set_src(screen_saver_water_icon, img_home_irrigation);
    lv_obj_set_flag(screen_saver_water_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(screen_saver_water_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(screen_saver_water_icon, COLOR_STATUS_INFO, 0);
    lv_obj_set_style_image_recolor_opa(screen_saver_water_icon, 255, 0);

    lv_obj_t * screen_saver_status_pill = lv_obj_create(screen_saver_main_card);
    lv_obj_set_name(screen_saver_status_pill, "screen_saver_status_pill");
    lv_obj_set_x(screen_saver_status_pill, 304);
    lv_obj_set_y(screen_saver_status_pill, 18);
    lv_obj_set_width(screen_saver_status_pill, 120);
    lv_obj_set_height(screen_saver_status_pill, 28);
    lv_obj_set_flag(screen_saver_status_pill, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(screen_saver_status_pill, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(screen_saver_status_pill, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_bg_opa(screen_saver_status_pill, 255, 0);
    lv_obj_set_style_radius(screen_saver_status_pill, 14, 0);
    lv_obj_set_style_border_width(screen_saver_status_pill, 0, 0);
    lv_obj_set_style_pad_all(screen_saver_status_pill, 0, 0);
    lv_obj_t * screen_saver_system_status_label = lv_label_create(screen_saver_status_pill);
    lv_obj_set_name(screen_saver_system_status_label, "screen_saver_system_status_label");
    lv_obj_set_x(screen_saver_system_status_label, 0);
    lv_obj_set_y(screen_saver_system_status_label, 7);
    lv_obj_set_width(screen_saver_system_status_label, 120);
    lv_label_set_text(screen_saver_system_status_label, system_status);
    lv_label_set_long_mode(screen_saver_system_status_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(screen_saver_system_status_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(screen_saver_system_status_label, system_status_color, 0);
    lv_obj_set_style_text_font(screen_saver_system_status_label, font_inter_12, 0);

    lv_obj_t * screen_saver_pump_chip = lv_obj_create(screen_saver_main_card);
    lv_obj_set_name(screen_saver_pump_chip, "screen_saver_pump_chip");
    lv_obj_set_x(screen_saver_pump_chip, 236);
    lv_obj_set_y(screen_saver_pump_chip, 60);
    lv_obj_set_width(screen_saver_pump_chip, 188);
    lv_obj_set_height(screen_saver_pump_chip, 24);
    lv_obj_set_flag(screen_saver_pump_chip, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(screen_saver_pump_chip, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(screen_saver_pump_chip, COLOR_SOFT_SURFACE, 0);
    lv_obj_set_style_bg_opa(screen_saver_pump_chip, 255, 0);
    lv_obj_set_style_radius(screen_saver_pump_chip, 12, 0);
    lv_obj_set_style_border_width(screen_saver_pump_chip, 1, 0);
    lv_obj_set_style_border_color(screen_saver_pump_chip, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(screen_saver_pump_chip, 0, 0);
    lv_obj_t * screen_saver_pump_status_label = lv_label_create(screen_saver_pump_chip);
    lv_obj_set_name(screen_saver_pump_status_label, "screen_saver_pump_status_label");
    lv_obj_set_x(screen_saver_pump_status_label, 12);
    lv_obj_set_y(screen_saver_pump_status_label, 5);
    lv_obj_set_width(screen_saver_pump_status_label, 164);
    lv_label_set_text(screen_saver_pump_status_label, pump_status);
    lv_label_set_long_mode(screen_saver_pump_status_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(screen_saver_pump_status_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(screen_saver_pump_status_label, pump_status_color, 0);
    lv_obj_set_style_text_font(screen_saver_pump_status_label, font_inter_11, 0);

    lv_obj_t * screen_saver_led_chip = lv_obj_create(screen_saver_main_card);
    lv_obj_set_name(screen_saver_led_chip, "screen_saver_led_chip");
    lv_obj_set_x(screen_saver_led_chip, 236);
    lv_obj_set_y(screen_saver_led_chip, 91);
    lv_obj_set_width(screen_saver_led_chip, 188);
    lv_obj_set_height(screen_saver_led_chip, 24);
    lv_obj_set_flag(screen_saver_led_chip, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(screen_saver_led_chip, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(screen_saver_led_chip, COLOR_SOFT_SURFACE, 0);
    lv_obj_set_style_bg_opa(screen_saver_led_chip, 255, 0);
    lv_obj_set_style_radius(screen_saver_led_chip, 12, 0);
    lv_obj_set_style_border_width(screen_saver_led_chip, 1, 0);
    lv_obj_set_style_border_color(screen_saver_led_chip, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(screen_saver_led_chip, 0, 0);
    lv_obj_t * screen_saver_led_status_label = lv_label_create(screen_saver_led_chip);
    lv_obj_set_name(screen_saver_led_status_label, "screen_saver_led_status_label");
    lv_obj_set_x(screen_saver_led_status_label, 12);
    lv_obj_set_y(screen_saver_led_status_label, 5);
    lv_obj_set_width(screen_saver_led_status_label, 164);
    lv_label_set_text(screen_saver_led_status_label, led_status);
    lv_label_set_long_mode(screen_saver_led_status_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(screen_saver_led_status_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(screen_saver_led_status_label, led_status_color, 0);
    lv_obj_set_style_text_font(screen_saver_led_status_label, font_inter_11, 0);

    lv_obj_t * screen_saver_wifi_chip = lv_obj_create(screen_saver_main_card);
    lv_obj_set_name(screen_saver_wifi_chip, "screen_saver_wifi_chip");
    lv_obj_set_x(screen_saver_wifi_chip, 236);
    lv_obj_set_y(screen_saver_wifi_chip, 122);
    lv_obj_set_width(screen_saver_wifi_chip, 188);
    lv_obj_set_height(screen_saver_wifi_chip, 24);
    lv_obj_set_flag(screen_saver_wifi_chip, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(screen_saver_wifi_chip, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(screen_saver_wifi_chip, COLOR_SOFT_SURFACE, 0);
    lv_obj_set_style_bg_opa(screen_saver_wifi_chip, 255, 0);
    lv_obj_set_style_radius(screen_saver_wifi_chip, 12, 0);
    lv_obj_set_style_border_width(screen_saver_wifi_chip, 1, 0);
    lv_obj_set_style_border_color(screen_saver_wifi_chip, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(screen_saver_wifi_chip, 0, 0);
    lv_obj_t * screen_saver_wifi_status_label = lv_label_create(screen_saver_wifi_chip);
    lv_obj_set_name(screen_saver_wifi_status_label, "screen_saver_wifi_status_label");
    lv_obj_set_x(screen_saver_wifi_status_label, 12);
    lv_obj_set_y(screen_saver_wifi_status_label, 5);
    lv_obj_set_width(screen_saver_wifi_status_label, 164);
    lv_label_set_text(screen_saver_wifi_status_label, wifi_status);
    lv_label_set_long_mode(screen_saver_wifi_status_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(screen_saver_wifi_status_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(screen_saver_wifi_status_label, wifi_status_color, 0);
    lv_obj_set_style_text_font(screen_saver_wifi_status_label, font_inter_11, 0);

    lv_obj_t * screen_saver_hint_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(screen_saver_hint_label, "screen_saver_hint_label");
    lv_obj_set_x(screen_saver_hint_label, 0);
    lv_obj_set_y(screen_saver_hint_label, 232);
    lv_obj_set_width(screen_saver_hint_label, 452);
    lv_label_set_text(screen_saver_hint_label, hint_text);
    lv_label_set_long_mode(screen_saver_hint_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(screen_saver_hint_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(screen_saver_hint_label, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_text_font(screen_saver_hint_label, font_inter_12, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

