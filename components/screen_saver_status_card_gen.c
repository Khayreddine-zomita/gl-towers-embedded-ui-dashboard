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
    lv_obj_set_width(lv_obj_0, 480);
    lv_obj_set_height(lv_obj_0, 320);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * screen_saver_main_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(screen_saver_main_card, "screen_saver_main_card");
    lv_obj_set_x(screen_saver_main_card, 0);
    lv_obj_set_y(screen_saver_main_card, 0);
    lv_obj_set_width(screen_saver_main_card, 480);
    lv_obj_set_height(screen_saver_main_card, 320);
    lv_obj_set_flag(screen_saver_main_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(screen_saver_main_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(screen_saver_main_card, COLOR_WHITE, 0);
    lv_obj_set_style_bg_opa(screen_saver_main_card, 14, 0);
    lv_obj_set_style_radius(screen_saver_main_card, 0, 0);
    lv_obj_set_style_pad_all(screen_saver_main_card, 0, 0);
    lv_obj_set_style_border_width(screen_saver_main_card, 0, 0);
    lv_obj_set_style_shadow_width(screen_saver_main_card, 0, 0);
    lv_obj_t * screen_saver_reservoir_title_label = lv_label_create(screen_saver_main_card);
    lv_obj_set_name(screen_saver_reservoir_title_label, "screen_saver_reservoir_title_label");
    lv_obj_set_x(screen_saver_reservoir_title_label, 40);
    lv_obj_set_y(screen_saver_reservoir_title_label, 120);
    lv_obj_set_width(screen_saver_reservoir_title_label, 150);
    lv_label_set_text(screen_saver_reservoir_title_label, "RESERVOIR");
    lv_label_set_long_mode(screen_saver_reservoir_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(screen_saver_reservoir_title_label, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_text_font(screen_saver_reservoir_title_label, font_inter_12, 0);
    lv_obj_set_style_text_letter_space(screen_saver_reservoir_title_label, 1, 0);

    lv_obj_t * screen_saver_reservoir_value_label = lv_label_create(screen_saver_main_card);
    lv_obj_set_name(screen_saver_reservoir_value_label, "screen_saver_reservoir_value_label");
    lv_obj_set_x(screen_saver_reservoir_value_label, 40);
    lv_obj_set_y(screen_saver_reservoir_value_label, 147);
    lv_obj_set_width(screen_saver_reservoir_value_label, 90);
    lv_label_set_text(screen_saver_reservoir_value_label, reservoir_value);
    lv_label_set_long_mode(screen_saver_reservoir_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(screen_saver_reservoir_value_label, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(screen_saver_reservoir_value_label, font_inter_26, 0);

    lv_obj_t * screen_saver_reservoir_unit_label = lv_label_create(screen_saver_main_card);
    lv_obj_set_name(screen_saver_reservoir_unit_label, "screen_saver_reservoir_unit_label");
    lv_obj_set_x(screen_saver_reservoir_unit_label, reservoir_unit_x);
    lv_obj_set_y(screen_saver_reservoir_unit_label, 160);
    lv_obj_set_width(screen_saver_reservoir_unit_label, 28);
    lv_label_set_text(screen_saver_reservoir_unit_label, "%");
    lv_label_set_long_mode(screen_saver_reservoir_unit_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(screen_saver_reservoir_unit_label, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(screen_saver_reservoir_unit_label, font_inter_12, 0);

    lv_obj_t * screen_saver_reservoir_volume_label = lv_label_create(screen_saver_main_card);
    lv_obj_set_name(screen_saver_reservoir_volume_label, "screen_saver_reservoir_volume_label");
    lv_obj_set_x(screen_saver_reservoir_volume_label, 40);
    lv_obj_set_y(screen_saver_reservoir_volume_label, 193);
    lv_obj_set_width(screen_saver_reservoir_volume_label, 160);
    lv_label_set_text(screen_saver_reservoir_volume_label, reservoir_volume);
    lv_label_set_long_mode(screen_saver_reservoir_volume_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(screen_saver_reservoir_volume_label, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_text_font(screen_saver_reservoir_volume_label, font_inter_12, 0);

    lv_obj_t * screen_saver_water_icon = lv_image_create(screen_saver_main_card);
    lv_obj_set_name(screen_saver_water_icon, "screen_saver_water_icon");
    lv_obj_set_x(screen_saver_water_icon, 149);
    lv_obj_set_y(screen_saver_water_icon, 152);
    lv_obj_set_width(screen_saver_water_icon, 28);
    lv_obj_set_height(screen_saver_water_icon, 28);
    lv_image_set_src(screen_saver_water_icon, img_home_irrigation);
    lv_obj_set_flag(screen_saver_water_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(screen_saver_water_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(screen_saver_water_icon, COLOR_STATUS_INFO, 0);
    lv_obj_set_style_image_recolor_opa(screen_saver_water_icon, 255, 0);

    lv_obj_t * screen_saver_status_pill = lv_obj_create(screen_saver_main_card);
    lv_obj_set_name(screen_saver_status_pill, "screen_saver_status_pill");
    lv_obj_set_x(screen_saver_status_pill, 236);
    lv_obj_set_y(screen_saver_status_pill, 88);
    lv_obj_set_width(screen_saver_status_pill, 188);
    lv_obj_set_height(screen_saver_status_pill, 28);
    lv_obj_set_flag(screen_saver_status_pill, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(screen_saver_status_pill, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(screen_saver_status_pill, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_bg_opa(screen_saver_status_pill, 255, 0);
    lv_obj_set_style_radius(screen_saver_status_pill, 10, 0);
    lv_obj_set_style_border_width(screen_saver_status_pill, 0, 0);
    lv_obj_set_style_pad_all(screen_saver_status_pill, 0, 0);
    lv_obj_t * screen_saver_system_status_label = lv_label_create(screen_saver_status_pill);
    lv_obj_set_name(screen_saver_system_status_label, "screen_saver_system_status_label");
    lv_obj_set_x(screen_saver_system_status_label, 0);
    lv_obj_set_y(screen_saver_system_status_label, 7);
    lv_obj_set_width(screen_saver_system_status_label, 188);
    lv_label_set_text(screen_saver_system_status_label, system_status);
    lv_label_set_long_mode(screen_saver_system_status_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(screen_saver_system_status_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(screen_saver_system_status_label, system_status_color, 0);
    lv_obj_set_style_text_font(screen_saver_system_status_label, font_inter_12, 0);

    lv_obj_t * screen_saver_pump_chip = lv_obj_create(screen_saver_main_card);
    lv_obj_set_name(screen_saver_pump_chip, "screen_saver_pump_chip");
    lv_obj_set_x(screen_saver_pump_chip, 236);
    lv_obj_set_y(screen_saver_pump_chip, 130);
    lv_obj_set_width(screen_saver_pump_chip, 188);
    lv_obj_set_height(screen_saver_pump_chip, 24);
    lv_obj_set_flag(screen_saver_pump_chip, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(screen_saver_pump_chip, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(screen_saver_pump_chip, COLOR_WHITE, 0);
    lv_obj_set_style_bg_opa(screen_saver_pump_chip, 20, 0);
    lv_obj_set_style_radius(screen_saver_pump_chip, 8, 0);
    lv_obj_set_style_border_width(screen_saver_pump_chip, 0, 0);
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
    lv_obj_set_style_text_font(screen_saver_pump_status_label, font_inter_12, 0);

    lv_obj_t * screen_saver_led_chip = lv_obj_create(screen_saver_main_card);
    lv_obj_set_name(screen_saver_led_chip, "screen_saver_led_chip");
    lv_obj_set_x(screen_saver_led_chip, 236);
    lv_obj_set_y(screen_saver_led_chip, 161);
    lv_obj_set_width(screen_saver_led_chip, 188);
    lv_obj_set_height(screen_saver_led_chip, 24);
    lv_obj_set_flag(screen_saver_led_chip, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(screen_saver_led_chip, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(screen_saver_led_chip, COLOR_WHITE, 0);
    lv_obj_set_style_bg_opa(screen_saver_led_chip, 20, 0);
    lv_obj_set_style_radius(screen_saver_led_chip, 8, 0);
    lv_obj_set_style_border_width(screen_saver_led_chip, 0, 0);
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
    lv_obj_set_style_text_font(screen_saver_led_status_label, font_inter_12, 0);

    lv_obj_t * screen_saver_wifi_chip = lv_obj_create(screen_saver_main_card);
    lv_obj_set_name(screen_saver_wifi_chip, "screen_saver_wifi_chip");
    lv_obj_set_x(screen_saver_wifi_chip, 236);
    lv_obj_set_y(screen_saver_wifi_chip, 192);
    lv_obj_set_width(screen_saver_wifi_chip, 188);
    lv_obj_set_height(screen_saver_wifi_chip, 24);
    lv_obj_set_flag(screen_saver_wifi_chip, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(screen_saver_wifi_chip, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(screen_saver_wifi_chip, COLOR_WHITE, 0);
    lv_obj_set_style_bg_opa(screen_saver_wifi_chip, 20, 0);
    lv_obj_set_style_radius(screen_saver_wifi_chip, 8, 0);
    lv_obj_set_style_border_width(screen_saver_wifi_chip, 0, 0);
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
    lv_obj_set_style_text_font(screen_saver_wifi_status_label, font_inter_12, 0);

    lv_obj_t * screen_saver_hint_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(screen_saver_hint_label, "screen_saver_hint_label");
    lv_obj_set_x(screen_saver_hint_label, 0);
    lv_obj_set_y(screen_saver_hint_label, 292);
    lv_obj_set_width(screen_saver_hint_label, 480);
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

