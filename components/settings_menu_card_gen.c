/**
 * @file settings_menu_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "settings_menu_card_gen.h"
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

lv_obj_t * settings_menu_card_create(lv_obj_t * parent, const char * account_value, const char * wlan_value, const char * device_value, const char * calibration_value, const char * firmware_value, const char * language_value)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "settings_menu_card_#");
    lv_obj_set_width(lv_obj_0, 464);
    lv_obj_set_height(lv_obj_0, 176);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * settings_account_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_account_btn, "settings_account_btn");
    lv_obj_set_x(settings_account_btn, 0);
    lv_obj_set_y(settings_account_btn, 0);
    lv_obj_set_width(settings_account_btn, 148);
    lv_obj_set_height(settings_account_btn, 56);
    lv_obj_set_flag(settings_account_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_account_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_account_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(settings_account_btn, 255, 0);
    lv_obj_set_style_radius(settings_account_btn, 10, 0);
    lv_obj_set_style_border_width(settings_account_btn, 1, 0);
    lv_obj_set_style_border_color(settings_account_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(settings_account_btn, 6, 0);
    lv_obj_set_style_shadow_opa(settings_account_btn, 12, 0);
    lv_obj_set_style_shadow_color(settings_account_btn, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(settings_account_btn, 2, 0);
    lv_obj_set_style_pad_all(settings_account_btn, 0, 0);
    lv_obj_t * settings_account_icon_bg = lv_obj_create(settings_account_btn);
    lv_obj_set_name(settings_account_icon_bg, "settings_account_icon_bg");
    lv_obj_set_x(settings_account_icon_bg, 10);
    lv_obj_set_y(settings_account_icon_bg, 11);
    lv_obj_set_width(settings_account_icon_bg, 34);
    lv_obj_set_height(settings_account_icon_bg, 34);
    lv_obj_set_flag(settings_account_icon_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_account_icon_bg, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_account_icon_bg, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_bg_opa(settings_account_icon_bg, 255, 0);
    lv_obj_set_style_radius(settings_account_icon_bg, 17, 0);
    lv_obj_set_style_border_width(settings_account_icon_bg, 0, 0);
    lv_obj_set_style_pad_all(settings_account_icon_bg, 0, 0);
    lv_obj_t * settings_account_icon = lv_image_create(settings_account_icon_bg);
    lv_obj_set_name(settings_account_icon, "settings_account_icon");
    lv_obj_set_x(settings_account_icon, 9);
    lv_obj_set_y(settings_account_icon, 9);
    lv_obj_set_width(settings_account_icon, 16);
    lv_obj_set_height(settings_account_icon, 16);
    lv_image_set_src(settings_account_icon, img_settings_account);
    lv_obj_set_flag(settings_account_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_account_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_account_icon, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_image_recolor_opa(settings_account_icon, 255, 0);

    lv_obj_t * settings_account_label = lv_label_create(settings_account_btn);
    lv_obj_set_name(settings_account_label, "settings_account_label");
    lv_obj_set_x(settings_account_label, 52);
    lv_obj_set_y(settings_account_label, 12);
    lv_obj_set_width(settings_account_label, 72);
    lv_label_set_text(settings_account_label, "ACCOUNT");
    lv_label_set_long_mode(settings_account_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_account_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_account_label, font_inter_11, 0);
    lv_obj_set_style_text_letter_space(settings_account_label, 1, 0);

    lv_obj_t * settings_account_value_label = lv_label_create(settings_account_btn);
    lv_obj_set_name(settings_account_value_label, "settings_account_value_label");
    lv_obj_set_x(settings_account_value_label, 52);
    lv_obj_set_y(settings_account_value_label, 31);
    lv_obj_set_width(settings_account_value_label, 78);
    lv_label_set_text(settings_account_value_label, account_value);
    lv_label_set_long_mode(settings_account_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_account_value_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(settings_account_value_label, font_inter_10, 0);

    lv_obj_t * settings_account_chevron_icon = lv_image_create(settings_account_btn);
    lv_obj_set_name(settings_account_chevron_icon, "settings_account_chevron_icon");
    lv_obj_set_x(settings_account_chevron_icon, 128);
    lv_obj_set_y(settings_account_chevron_icon, 20);
    lv_obj_set_width(settings_account_chevron_icon, 14);
    lv_obj_set_height(settings_account_chevron_icon, 14);
    lv_image_set_src(settings_account_chevron_icon, img_simple_chevron_icon_1);
    lv_obj_set_flag(settings_account_chevron_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_account_chevron_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_account_chevron_icon, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_image_recolor_opa(settings_account_chevron_icon, 255, 0);

    lv_obj_t * settings_wlan_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_wlan_btn, "settings_wlan_btn");
    lv_obj_set_x(settings_wlan_btn, 158);
    lv_obj_set_y(settings_wlan_btn, 0);
    lv_obj_set_width(settings_wlan_btn, 148);
    lv_obj_set_height(settings_wlan_btn, 56);
    lv_obj_set_flag(settings_wlan_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_wlan_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_wlan_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(settings_wlan_btn, 255, 0);
    lv_obj_set_style_radius(settings_wlan_btn, 10, 0);
    lv_obj_set_style_border_width(settings_wlan_btn, 1, 0);
    lv_obj_set_style_border_color(settings_wlan_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(settings_wlan_btn, 6, 0);
    lv_obj_set_style_shadow_opa(settings_wlan_btn, 12, 0);
    lv_obj_set_style_shadow_color(settings_wlan_btn, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(settings_wlan_btn, 2, 0);
    lv_obj_set_style_pad_all(settings_wlan_btn, 0, 0);
    lv_obj_t * settings_wlan_icon_bg = lv_obj_create(settings_wlan_btn);
    lv_obj_set_name(settings_wlan_icon_bg, "settings_wlan_icon_bg");
    lv_obj_set_x(settings_wlan_icon_bg, 10);
    lv_obj_set_y(settings_wlan_icon_bg, 11);
    lv_obj_set_width(settings_wlan_icon_bg, 34);
    lv_obj_set_height(settings_wlan_icon_bg, 34);
    lv_obj_set_flag(settings_wlan_icon_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_wlan_icon_bg, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_wlan_icon_bg, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_bg_opa(settings_wlan_icon_bg, 255, 0);
    lv_obj_set_style_radius(settings_wlan_icon_bg, 17, 0);
    lv_obj_set_style_border_width(settings_wlan_icon_bg, 0, 0);
    lv_obj_set_style_pad_all(settings_wlan_icon_bg, 0, 0);
    lv_obj_t * settings_wlan_icon = lv_image_create(settings_wlan_icon_bg);
    lv_obj_set_name(settings_wlan_icon, "settings_wlan_icon");
    lv_obj_set_x(settings_wlan_icon, 9);
    lv_obj_set_y(settings_wlan_icon, 9);
    lv_obj_set_width(settings_wlan_icon, 16);
    lv_obj_set_height(settings_wlan_icon, 16);
    lv_image_set_src(settings_wlan_icon, img_settings_wlan);
    lv_obj_set_flag(settings_wlan_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_wlan_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_wlan_icon, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_image_recolor_opa(settings_wlan_icon, 255, 0);

    lv_obj_t * settings_wlan_label = lv_label_create(settings_wlan_btn);
    lv_obj_set_name(settings_wlan_label, "settings_wlan_label");
    lv_obj_set_x(settings_wlan_label, 52);
    lv_obj_set_y(settings_wlan_label, 12);
    lv_obj_set_width(settings_wlan_label, 72);
    lv_label_set_text(settings_wlan_label, "WLAN");
    lv_label_set_long_mode(settings_wlan_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_wlan_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_wlan_label, font_inter_11, 0);
    lv_obj_set_style_text_letter_space(settings_wlan_label, 1, 0);

    lv_obj_t * settings_wlan_value_label = lv_label_create(settings_wlan_btn);
    lv_obj_set_name(settings_wlan_value_label, "settings_wlan_value_label");
    lv_obj_set_x(settings_wlan_value_label, 52);
    lv_obj_set_y(settings_wlan_value_label, 31);
    lv_obj_set_width(settings_wlan_value_label, 78);
    lv_label_set_text(settings_wlan_value_label, wlan_value);
    lv_label_set_long_mode(settings_wlan_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_wlan_value_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(settings_wlan_value_label, font_inter_10, 0);

    lv_obj_t * settings_wlan_chevron_icon = lv_image_create(settings_wlan_btn);
    lv_obj_set_name(settings_wlan_chevron_icon, "settings_wlan_chevron_icon");
    lv_obj_set_x(settings_wlan_chevron_icon, 128);
    lv_obj_set_y(settings_wlan_chevron_icon, 20);
    lv_obj_set_width(settings_wlan_chevron_icon, 14);
    lv_obj_set_height(settings_wlan_chevron_icon, 14);
    lv_image_set_src(settings_wlan_chevron_icon, img_simple_chevron_icon_1);
    lv_obj_set_flag(settings_wlan_chevron_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_wlan_chevron_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_wlan_chevron_icon, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_image_recolor_opa(settings_wlan_chevron_icon, 255, 0);

    lv_obj_t * settings_device_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_device_btn, "settings_device_btn");
    lv_obj_set_x(settings_device_btn, 316);
    lv_obj_set_y(settings_device_btn, 0);
    lv_obj_set_width(settings_device_btn, 148);
    lv_obj_set_height(settings_device_btn, 56);
    lv_obj_set_flag(settings_device_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_device_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_device_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(settings_device_btn, 255, 0);
    lv_obj_set_style_radius(settings_device_btn, 10, 0);
    lv_obj_set_style_border_width(settings_device_btn, 1, 0);
    lv_obj_set_style_border_color(settings_device_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(settings_device_btn, 6, 0);
    lv_obj_set_style_shadow_opa(settings_device_btn, 12, 0);
    lv_obj_set_style_shadow_color(settings_device_btn, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(settings_device_btn, 2, 0);
    lv_obj_set_style_pad_all(settings_device_btn, 0, 0);
    lv_obj_t * settings_device_icon_bg = lv_obj_create(settings_device_btn);
    lv_obj_set_name(settings_device_icon_bg, "settings_device_icon_bg");
    lv_obj_set_x(settings_device_icon_bg, 10);
    lv_obj_set_y(settings_device_icon_bg, 11);
    lv_obj_set_width(settings_device_icon_bg, 34);
    lv_obj_set_height(settings_device_icon_bg, 34);
    lv_obj_set_flag(settings_device_icon_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_device_icon_bg, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_device_icon_bg, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_bg_opa(settings_device_icon_bg, 255, 0);
    lv_obj_set_style_radius(settings_device_icon_bg, 17, 0);
    lv_obj_set_style_border_width(settings_device_icon_bg, 0, 0);
    lv_obj_set_style_pad_all(settings_device_icon_bg, 0, 0);
    lv_obj_t * settings_device_icon = lv_image_create(settings_device_icon_bg);
    lv_obj_set_name(settings_device_icon, "settings_device_icon");
    lv_obj_set_x(settings_device_icon, 9);
    lv_obj_set_y(settings_device_icon, 9);
    lv_obj_set_width(settings_device_icon, 16);
    lv_obj_set_height(settings_device_icon, 16);
    lv_image_set_src(settings_device_icon, img_settings_device);
    lv_obj_set_flag(settings_device_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_device_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_device_icon, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_image_recolor_opa(settings_device_icon, 255, 0);

    lv_obj_t * settings_device_label = lv_label_create(settings_device_btn);
    lv_obj_set_name(settings_device_label, "settings_device_label");
    lv_obj_set_x(settings_device_label, 52);
    lv_obj_set_y(settings_device_label, 12);
    lv_obj_set_width(settings_device_label, 72);
    lv_label_set_text(settings_device_label, "DEVICE");
    lv_label_set_long_mode(settings_device_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_device_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_device_label, font_inter_11, 0);
    lv_obj_set_style_text_letter_space(settings_device_label, 1, 0);

    lv_obj_t * settings_device_value_label = lv_label_create(settings_device_btn);
    lv_obj_set_name(settings_device_value_label, "settings_device_value_label");
    lv_obj_set_x(settings_device_value_label, 52);
    lv_obj_set_y(settings_device_value_label, 31);
    lv_obj_set_width(settings_device_value_label, 78);
    lv_label_set_text(settings_device_value_label, device_value);
    lv_label_set_long_mode(settings_device_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_device_value_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(settings_device_value_label, font_inter_10, 0);

    lv_obj_t * settings_device_chevron_icon = lv_image_create(settings_device_btn);
    lv_obj_set_name(settings_device_chevron_icon, "settings_device_chevron_icon");
    lv_obj_set_x(settings_device_chevron_icon, 128);
    lv_obj_set_y(settings_device_chevron_icon, 20);
    lv_obj_set_width(settings_device_chevron_icon, 14);
    lv_obj_set_height(settings_device_chevron_icon, 14);
    lv_image_set_src(settings_device_chevron_icon, img_simple_chevron_icon_1);
    lv_obj_set_flag(settings_device_chevron_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_device_chevron_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_device_chevron_icon, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_image_recolor_opa(settings_device_chevron_icon, 255, 0);

    lv_obj_t * settings_calibration_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_calibration_btn, "settings_calibration_btn");
    lv_obj_set_x(settings_calibration_btn, 0);
    lv_obj_set_y(settings_calibration_btn, 64);
    lv_obj_set_width(settings_calibration_btn, 148);
    lv_obj_set_height(settings_calibration_btn, 56);
    lv_obj_set_flag(settings_calibration_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_calibration_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_calibration_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(settings_calibration_btn, 255, 0);
    lv_obj_set_style_radius(settings_calibration_btn, 10, 0);
    lv_obj_set_style_border_width(settings_calibration_btn, 1, 0);
    lv_obj_set_style_border_color(settings_calibration_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(settings_calibration_btn, 6, 0);
    lv_obj_set_style_shadow_opa(settings_calibration_btn, 12, 0);
    lv_obj_set_style_shadow_color(settings_calibration_btn, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(settings_calibration_btn, 2, 0);
    lv_obj_set_style_pad_all(settings_calibration_btn, 0, 0);
    lv_obj_t * settings_calibration_icon_bg = lv_obj_create(settings_calibration_btn);
    lv_obj_set_name(settings_calibration_icon_bg, "settings_calibration_icon_bg");
    lv_obj_set_x(settings_calibration_icon_bg, 10);
    lv_obj_set_y(settings_calibration_icon_bg, 11);
    lv_obj_set_width(settings_calibration_icon_bg, 34);
    lv_obj_set_height(settings_calibration_icon_bg, 34);
    lv_obj_set_flag(settings_calibration_icon_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_calibration_icon_bg, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_calibration_icon_bg, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_bg_opa(settings_calibration_icon_bg, 255, 0);
    lv_obj_set_style_radius(settings_calibration_icon_bg, 17, 0);
    lv_obj_set_style_border_width(settings_calibration_icon_bg, 0, 0);
    lv_obj_set_style_pad_all(settings_calibration_icon_bg, 0, 0);
    lv_obj_t * settings_calibration_icon = lv_image_create(settings_calibration_icon_bg);
    lv_obj_set_name(settings_calibration_icon, "settings_calibration_icon");
    lv_obj_set_x(settings_calibration_icon, 9);
    lv_obj_set_y(settings_calibration_icon, 9);
    lv_obj_set_width(settings_calibration_icon, 16);
    lv_obj_set_height(settings_calibration_icon, 16);
    lv_image_set_src(settings_calibration_icon, img_settings_calibration);
    lv_obj_set_flag(settings_calibration_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_calibration_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_calibration_icon, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_image_recolor_opa(settings_calibration_icon, 255, 0);

    lv_obj_t * settings_calibration_label = lv_label_create(settings_calibration_btn);
    lv_obj_set_name(settings_calibration_label, "settings_calibration_label");
    lv_obj_set_x(settings_calibration_label, 52);
    lv_obj_set_y(settings_calibration_label, 12);
    lv_obj_set_width(settings_calibration_label, 88);
    lv_label_set_text(settings_calibration_label, "CALIBRATION");
    lv_label_set_long_mode(settings_calibration_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_calibration_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_calibration_label, font_inter_10, 0);
    lv_obj_set_style_text_letter_space(settings_calibration_label, 1, 0);

    lv_obj_t * settings_calibration_value_label = lv_label_create(settings_calibration_btn);
    lv_obj_set_name(settings_calibration_value_label, "settings_calibration_value_label");
    lv_obj_set_x(settings_calibration_value_label, 52);
    lv_obj_set_y(settings_calibration_value_label, 31);
    lv_obj_set_width(settings_calibration_value_label, 78);
    lv_label_set_text(settings_calibration_value_label, calibration_value);
    lv_label_set_long_mode(settings_calibration_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_calibration_value_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(settings_calibration_value_label, font_inter_10, 0);

    lv_obj_t * settings_calibration_chevron_icon = lv_image_create(settings_calibration_btn);
    lv_obj_set_name(settings_calibration_chevron_icon, "settings_calibration_chevron_icon");
    lv_obj_set_x(settings_calibration_chevron_icon, 128);
    lv_obj_set_y(settings_calibration_chevron_icon, 20);
    lv_obj_set_width(settings_calibration_chevron_icon, 14);
    lv_obj_set_height(settings_calibration_chevron_icon, 14);
    lv_image_set_src(settings_calibration_chevron_icon, img_simple_chevron_icon_1);
    lv_obj_set_flag(settings_calibration_chevron_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_calibration_chevron_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_calibration_chevron_icon, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_image_recolor_opa(settings_calibration_chevron_icon, 255, 0);

    lv_obj_t * settings_firmware_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_firmware_btn, "settings_firmware_btn");
    lv_obj_set_x(settings_firmware_btn, 158);
    lv_obj_set_y(settings_firmware_btn, 64);
    lv_obj_set_width(settings_firmware_btn, 148);
    lv_obj_set_height(settings_firmware_btn, 56);
    lv_obj_set_flag(settings_firmware_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_firmware_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_firmware_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(settings_firmware_btn, 255, 0);
    lv_obj_set_style_radius(settings_firmware_btn, 10, 0);
    lv_obj_set_style_border_width(settings_firmware_btn, 1, 0);
    lv_obj_set_style_border_color(settings_firmware_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(settings_firmware_btn, 6, 0);
    lv_obj_set_style_shadow_opa(settings_firmware_btn, 12, 0);
    lv_obj_set_style_shadow_color(settings_firmware_btn, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(settings_firmware_btn, 2, 0);
    lv_obj_set_style_pad_all(settings_firmware_btn, 0, 0);
    lv_obj_t * settings_firmware_icon_bg = lv_obj_create(settings_firmware_btn);
    lv_obj_set_name(settings_firmware_icon_bg, "settings_firmware_icon_bg");
    lv_obj_set_x(settings_firmware_icon_bg, 10);
    lv_obj_set_y(settings_firmware_icon_bg, 11);
    lv_obj_set_width(settings_firmware_icon_bg, 34);
    lv_obj_set_height(settings_firmware_icon_bg, 34);
    lv_obj_set_flag(settings_firmware_icon_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_firmware_icon_bg, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_firmware_icon_bg, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_bg_opa(settings_firmware_icon_bg, 255, 0);
    lv_obj_set_style_radius(settings_firmware_icon_bg, 17, 0);
    lv_obj_set_style_border_width(settings_firmware_icon_bg, 0, 0);
    lv_obj_set_style_pad_all(settings_firmware_icon_bg, 0, 0);
    lv_obj_t * settings_firmware_icon = lv_image_create(settings_firmware_icon_bg);
    lv_obj_set_name(settings_firmware_icon, "settings_firmware_icon");
    lv_obj_set_x(settings_firmware_icon, 9);
    lv_obj_set_y(settings_firmware_icon, 9);
    lv_obj_set_width(settings_firmware_icon, 16);
    lv_obj_set_height(settings_firmware_icon, 16);
    lv_image_set_src(settings_firmware_icon, img_settings_firmware);
    lv_obj_set_flag(settings_firmware_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_firmware_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_firmware_icon, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_image_recolor_opa(settings_firmware_icon, 255, 0);

    lv_obj_t * settings_firmware_label = lv_label_create(settings_firmware_btn);
    lv_obj_set_name(settings_firmware_label, "settings_firmware_label");
    lv_obj_set_x(settings_firmware_label, 52);
    lv_obj_set_y(settings_firmware_label, 12);
    lv_obj_set_width(settings_firmware_label, 78);
    lv_label_set_text(settings_firmware_label, "FIRMWARE");
    lv_label_set_long_mode(settings_firmware_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_firmware_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_firmware_label, font_inter_11, 0);
    lv_obj_set_style_text_letter_space(settings_firmware_label, 1, 0);

    lv_obj_t * settings_firmware_value_label = lv_label_create(settings_firmware_btn);
    lv_obj_set_name(settings_firmware_value_label, "settings_firmware_value_label");
    lv_obj_set_x(settings_firmware_value_label, 52);
    lv_obj_set_y(settings_firmware_value_label, 31);
    lv_obj_set_width(settings_firmware_value_label, 78);
    lv_label_set_text(settings_firmware_value_label, firmware_value);
    lv_label_set_long_mode(settings_firmware_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_firmware_value_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(settings_firmware_value_label, font_inter_10, 0);

    lv_obj_t * settings_firmware_chevron_icon = lv_image_create(settings_firmware_btn);
    lv_obj_set_name(settings_firmware_chevron_icon, "settings_firmware_chevron_icon");
    lv_obj_set_x(settings_firmware_chevron_icon, 128);
    lv_obj_set_y(settings_firmware_chevron_icon, 20);
    lv_obj_set_width(settings_firmware_chevron_icon, 14);
    lv_obj_set_height(settings_firmware_chevron_icon, 14);
    lv_image_set_src(settings_firmware_chevron_icon, img_simple_chevron_icon_1);
    lv_obj_set_flag(settings_firmware_chevron_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_firmware_chevron_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_firmware_chevron_icon, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_image_recolor_opa(settings_firmware_chevron_icon, 255, 0);

    lv_obj_t * settings_language_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_language_btn, "settings_language_btn");
    lv_obj_set_x(settings_language_btn, 316);
    lv_obj_set_y(settings_language_btn, 64);
    lv_obj_set_width(settings_language_btn, 148);
    lv_obj_set_height(settings_language_btn, 56);
    lv_obj_set_flag(settings_language_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_language_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_language_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(settings_language_btn, 255, 0);
    lv_obj_set_style_radius(settings_language_btn, 10, 0);
    lv_obj_set_style_border_width(settings_language_btn, 1, 0);
    lv_obj_set_style_border_color(settings_language_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(settings_language_btn, 6, 0);
    lv_obj_set_style_shadow_opa(settings_language_btn, 12, 0);
    lv_obj_set_style_shadow_color(settings_language_btn, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(settings_language_btn, 2, 0);
    lv_obj_set_style_pad_all(settings_language_btn, 0, 0);
    lv_obj_t * settings_language_icon_bg = lv_obj_create(settings_language_btn);
    lv_obj_set_name(settings_language_icon_bg, "settings_language_icon_bg");
    lv_obj_set_x(settings_language_icon_bg, 10);
    lv_obj_set_y(settings_language_icon_bg, 11);
    lv_obj_set_width(settings_language_icon_bg, 34);
    lv_obj_set_height(settings_language_icon_bg, 34);
    lv_obj_set_flag(settings_language_icon_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_language_icon_bg, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_language_icon_bg, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_bg_opa(settings_language_icon_bg, 255, 0);
    lv_obj_set_style_radius(settings_language_icon_bg, 17, 0);
    lv_obj_set_style_border_width(settings_language_icon_bg, 0, 0);
    lv_obj_set_style_pad_all(settings_language_icon_bg, 0, 0);
    lv_obj_t * settings_language_icon = lv_image_create(settings_language_icon_bg);
    lv_obj_set_name(settings_language_icon, "settings_language_icon");
    lv_obj_set_x(settings_language_icon, 9);
    lv_obj_set_y(settings_language_icon, 9);
    lv_obj_set_width(settings_language_icon, 16);
    lv_obj_set_height(settings_language_icon, 16);
    lv_image_set_src(settings_language_icon, img_settings_language);
    lv_obj_set_flag(settings_language_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_language_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_language_icon, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_image_recolor_opa(settings_language_icon, 255, 0);

    lv_obj_t * settings_language_label = lv_label_create(settings_language_btn);
    lv_obj_set_name(settings_language_label, "settings_language_label");
    lv_obj_set_x(settings_language_label, 52);
    lv_obj_set_y(settings_language_label, 12);
    lv_obj_set_width(settings_language_label, 78);
    lv_label_set_text(settings_language_label, "LANGUAGE");
    lv_label_set_long_mode(settings_language_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_language_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_language_label, font_inter_11, 0);
    lv_obj_set_style_text_letter_space(settings_language_label, 1, 0);

    lv_obj_t * settings_language_value_label = lv_label_create(settings_language_btn);
    lv_obj_set_name(settings_language_value_label, "settings_language_value_label");
    lv_obj_set_x(settings_language_value_label, 52);
    lv_obj_set_y(settings_language_value_label, 31);
    lv_obj_set_width(settings_language_value_label, 78);
    lv_label_set_text(settings_language_value_label, language_value);
    lv_label_set_long_mode(settings_language_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_language_value_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(settings_language_value_label, font_inter_10, 0);

    lv_obj_t * settings_language_chevron_icon = lv_image_create(settings_language_btn);
    lv_obj_set_name(settings_language_chevron_icon, "settings_language_chevron_icon");
    lv_obj_set_x(settings_language_chevron_icon, 128);
    lv_obj_set_y(settings_language_chevron_icon, 20);
    lv_obj_set_width(settings_language_chevron_icon, 14);
    lv_obj_set_height(settings_language_chevron_icon, 14);
    lv_image_set_src(settings_language_chevron_icon, img_simple_chevron_icon_1);
    lv_obj_set_flag(settings_language_chevron_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_language_chevron_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_language_chevron_icon, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_image_recolor_opa(settings_language_chevron_icon, 255, 0);

    lv_obj_t * settings_terms_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_terms_btn, "settings_terms_btn");
    lv_obj_set_x(settings_terms_btn, 0);
    lv_obj_set_y(settings_terms_btn, 128);
    lv_obj_set_width(settings_terms_btn, 227);
    lv_obj_set_height(settings_terms_btn, 48);
    lv_obj_set_flag(settings_terms_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_terms_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_terms_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(settings_terms_btn, 255, 0);
    lv_obj_set_style_radius(settings_terms_btn, 10, 0);
    lv_obj_set_style_border_width(settings_terms_btn, 1, 0);
    lv_obj_set_style_border_color(settings_terms_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(settings_terms_btn, 6, 0);
    lv_obj_set_style_shadow_opa(settings_terms_btn, 12, 0);
    lv_obj_set_style_shadow_color(settings_terms_btn, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(settings_terms_btn, 2, 0);
    lv_obj_set_style_pad_all(settings_terms_btn, 0, 0);
    lv_obj_t * settings_terms_icon_bg = lv_obj_create(settings_terms_btn);
    lv_obj_set_name(settings_terms_icon_bg, "settings_terms_icon_bg");
    lv_obj_set_x(settings_terms_icon_bg, 10);
    lv_obj_set_y(settings_terms_icon_bg, 7);
    lv_obj_set_width(settings_terms_icon_bg, 34);
    lv_obj_set_height(settings_terms_icon_bg, 34);
    lv_obj_set_flag(settings_terms_icon_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_terms_icon_bg, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_terms_icon_bg, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_bg_opa(settings_terms_icon_bg, 255, 0);
    lv_obj_set_style_radius(settings_terms_icon_bg, 17, 0);
    lv_obj_set_style_border_width(settings_terms_icon_bg, 0, 0);
    lv_obj_set_style_pad_all(settings_terms_icon_bg, 0, 0);
    lv_obj_t * settings_terms_of_use_icon = lv_image_create(settings_terms_icon_bg);
    lv_obj_set_name(settings_terms_of_use_icon, "settings_terms_of_use_icon");
    lv_obj_set_x(settings_terms_of_use_icon, 9);
    lv_obj_set_y(settings_terms_of_use_icon, 9);
    lv_obj_set_width(settings_terms_of_use_icon, 16);
    lv_obj_set_height(settings_terms_of_use_icon, 16);
    lv_image_set_src(settings_terms_of_use_icon, img_settings_terms_of_use);
    lv_obj_set_flag(settings_terms_of_use_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_terms_of_use_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_terms_of_use_icon, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_image_recolor_opa(settings_terms_of_use_icon, 255, 0);

    lv_obj_t * settings_terms_label = lv_label_create(settings_terms_btn);
    lv_obj_set_name(settings_terms_label, "settings_terms_label");
    lv_obj_set_x(settings_terms_label, 52);
    lv_obj_set_y(settings_terms_label, 18);
    lv_obj_set_width(settings_terms_label, 120);
    lv_label_set_text(settings_terms_label, "TERMS OF USE");
    lv_label_set_long_mode(settings_terms_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_terms_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_terms_label, font_inter_11, 0);
    lv_obj_set_style_text_letter_space(settings_terms_label, 1, 0);

    lv_obj_t * settings_terms_chevron_icon = lv_image_create(settings_terms_btn);
    lv_obj_set_name(settings_terms_chevron_icon, "settings_terms_chevron_icon");
    lv_obj_set_x(settings_terms_chevron_icon, 207);
    lv_obj_set_y(settings_terms_chevron_icon, 17);
    lv_obj_set_width(settings_terms_chevron_icon, 14);
    lv_obj_set_height(settings_terms_chevron_icon, 14);
    lv_image_set_src(settings_terms_chevron_icon, img_simple_chevron_icon_1);
    lv_obj_set_flag(settings_terms_chevron_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_terms_chevron_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_terms_chevron_icon, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_image_recolor_opa(settings_terms_chevron_icon, 255, 0);

    lv_obj_t * settings_factory_reset_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(settings_factory_reset_btn, "settings_factory_reset_btn");
    lv_obj_set_x(settings_factory_reset_btn, 237);
    lv_obj_set_y(settings_factory_reset_btn, 128);
    lv_obj_set_width(settings_factory_reset_btn, 227);
    lv_obj_set_height(settings_factory_reset_btn, 48);
    lv_obj_set_flag(settings_factory_reset_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_factory_reset_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_factory_reset_btn, COLOR_ALERT_RED, 0);
    lv_obj_set_style_bg_opa(settings_factory_reset_btn, 20, 0);
    lv_obj_set_style_radius(settings_factory_reset_btn, 10, 0);
    lv_obj_set_style_border_width(settings_factory_reset_btn, 1, 0);
    lv_obj_set_style_border_color(settings_factory_reset_btn, COLOR_ALERT_RED, 0);
    lv_obj_set_style_shadow_width(settings_factory_reset_btn, 6, 0);
    lv_obj_set_style_shadow_opa(settings_factory_reset_btn, 10, 0);
    lv_obj_set_style_shadow_color(settings_factory_reset_btn, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(settings_factory_reset_btn, 2, 0);
    lv_obj_set_style_pad_all(settings_factory_reset_btn, 0, 0);
    lv_obj_t * settings_factory_reset_icon_bg = lv_obj_create(settings_factory_reset_btn);
    lv_obj_set_name(settings_factory_reset_icon_bg, "settings_factory_reset_icon_bg");
    lv_obj_set_x(settings_factory_reset_icon_bg, 14);
    lv_obj_set_y(settings_factory_reset_icon_bg, 7);
    lv_obj_set_width(settings_factory_reset_icon_bg, 34);
    lv_obj_set_height(settings_factory_reset_icon_bg, 34);
    lv_obj_set_flag(settings_factory_reset_icon_bg, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_factory_reset_icon_bg, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_factory_reset_icon_bg, COLOR_ALERT_RED, 0);
    lv_obj_set_style_bg_opa(settings_factory_reset_icon_bg, 35, 0);
    lv_obj_set_style_radius(settings_factory_reset_icon_bg, 17, 0);
    lv_obj_set_style_border_width(settings_factory_reset_icon_bg, 0, 0);
    lv_obj_set_style_pad_all(settings_factory_reset_icon_bg, 0, 0);
    lv_obj_t * settings_factory_reset_icon = lv_image_create(settings_factory_reset_icon_bg);
    lv_obj_set_name(settings_factory_reset_icon, "settings_factory_reset_icon");
    lv_obj_set_x(settings_factory_reset_icon, 9);
    lv_obj_set_y(settings_factory_reset_icon, 9);
    lv_obj_set_width(settings_factory_reset_icon, 16);
    lv_obj_set_height(settings_factory_reset_icon, 16);
    lv_image_set_src(settings_factory_reset_icon, img_settings_factory_reset);
    lv_obj_set_flag(settings_factory_reset_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_factory_reset_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_factory_reset_icon, COLOR_ALERT_RED, 0);
    lv_obj_set_style_image_recolor_opa(settings_factory_reset_icon, 255, 0);

    lv_obj_t * settings_factory_reset_label = lv_label_create(settings_factory_reset_btn);
    lv_obj_set_name(settings_factory_reset_label, "settings_factory_reset_label");
    lv_obj_set_x(settings_factory_reset_label, 62);
    lv_obj_set_y(settings_factory_reset_label, 18);
    lv_obj_set_width(settings_factory_reset_label, 170);
    lv_label_set_text(settings_factory_reset_label, "FACTORY RESET");
    lv_label_set_long_mode(settings_factory_reset_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_factory_reset_label, COLOR_ALERT_RED, 0);
    lv_obj_set_style_text_font(settings_factory_reset_label, font_inter_11, 0);
    lv_obj_set_style_text_letter_space(settings_factory_reset_label, 1, 0);

    lv_obj_t * settings_factory_reset_chevron_icon = lv_image_create(settings_factory_reset_btn);
    lv_obj_set_name(settings_factory_reset_chevron_icon, "settings_factory_reset_chevron_icon");
    lv_obj_set_x(settings_factory_reset_chevron_icon, 203);
    lv_obj_set_y(settings_factory_reset_chevron_icon, 17);
    lv_obj_set_width(settings_factory_reset_chevron_icon, 14);
    lv_obj_set_height(settings_factory_reset_chevron_icon, 14);
    lv_image_set_src(settings_factory_reset_chevron_icon, img_simple_chevron_icon_1);
    lv_obj_set_flag(settings_factory_reset_chevron_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_factory_reset_chevron_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_factory_reset_chevron_icon, COLOR_ALERT_RED, 0);
    lv_obj_set_style_image_recolor_opa(settings_factory_reset_chevron_icon, 255, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

