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
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 230);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * settings_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(settings_title_label, "settings_title_label");
    lv_obj_set_x(settings_title_label, 2);
    lv_obj_set_y(settings_title_label, 0);
    lv_obj_set_width(settings_title_label, 250);
    lv_label_set_text(settings_title_label, "SETTINGS");
    lv_label_set_long_mode(settings_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_title_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(settings_title_label, font_inter_14, 0);
    lv_obj_set_style_text_letter_space(settings_title_label, 1, 0);

    lv_obj_t * settings_menu_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(settings_menu_card, "settings_menu_card");
    lv_obj_set_x(settings_menu_card, 0);
    lv_obj_set_y(settings_menu_card, 24);
    lv_obj_set_width(settings_menu_card, 452);
    lv_obj_set_height(settings_menu_card, 210);
    lv_obj_set_flag(settings_menu_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_menu_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_menu_card, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(settings_menu_card, 255, 0);
    lv_obj_set_style_radius(settings_menu_card, 18, 0);
    lv_obj_set_style_pad_all(settings_menu_card, 0, 0);
    lv_obj_set_style_border_width(settings_menu_card, 1, 0);
    lv_obj_set_style_border_color(settings_menu_card, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(settings_menu_card, 8, 0);
    lv_obj_set_style_shadow_opa(settings_menu_card, 16, 0);
    lv_obj_set_style_shadow_color(settings_menu_card, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(settings_menu_card, 3, 0);
    lv_obj_t * settings_account_btn = lv_button_create(settings_menu_card);
    lv_obj_set_name(settings_account_btn, "settings_account_btn");
    lv_obj_set_x(settings_account_btn, 0);
    lv_obj_set_y(settings_account_btn, 2);
    lv_obj_set_width(settings_account_btn, 452);
    lv_obj_set_height(settings_account_btn, 24);
    lv_obj_set_flag(settings_account_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_account_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(settings_account_btn, 0, 0);
    lv_obj_set_style_border_width(settings_account_btn, 0, 0);
    lv_obj_set_style_shadow_width(settings_account_btn, 0, 0);
    lv_obj_set_style_pad_all(settings_account_btn, 0, 0);
    lv_obj_t * settings_account_label = lv_label_create(settings_account_btn);
    lv_obj_set_name(settings_account_label, "settings_account_label");
    lv_obj_set_x(settings_account_label, 16);
    lv_obj_set_y(settings_account_label, 6);
    lv_obj_set_width(settings_account_label, 150);
    lv_label_set_text(settings_account_label, "Account");
    lv_label_set_long_mode(settings_account_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_account_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_account_label, font_inter_12, 0);

    lv_obj_t * settings_account_value_label = lv_label_create(settings_account_btn);
    lv_obj_set_name(settings_account_value_label, "settings_account_value_label");
    lv_obj_set_x(settings_account_value_label, 230);
    lv_obj_set_y(settings_account_value_label, 6);
    lv_obj_set_width(settings_account_value_label, 150);
    lv_label_set_text(settings_account_value_label, account_value);
    lv_label_set_long_mode(settings_account_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_account_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_account_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_account_value_label, font_inter_11, 0);

    lv_obj_t * settings_account_chevron_icon = lv_image_create(settings_account_btn);
    lv_obj_set_name(settings_account_chevron_icon, "settings_account_chevron_icon");
    lv_obj_set_x(settings_account_chevron_icon, 416);
    lv_obj_set_y(settings_account_chevron_icon, 4);
    lv_obj_set_width(settings_account_chevron_icon, 16);
    lv_obj_set_height(settings_account_chevron_icon, 16);
    lv_image_set_src(settings_account_chevron_icon, img_simple_chevron_icon_1);
    lv_obj_set_flag(settings_account_chevron_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_account_chevron_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_account_chevron_icon, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_image_recolor_opa(settings_account_chevron_icon, 255, 0);

    lv_obj_t * settings_divider_1 = lv_obj_create(settings_menu_card);
    lv_obj_set_name(settings_divider_1, "settings_divider_1");
    lv_obj_set_x(settings_divider_1, 16);
    lv_obj_set_y(settings_divider_1, 26);
    lv_obj_set_width(settings_divider_1, 420);
    lv_obj_set_height(settings_divider_1, 1);
    lv_obj_set_flag(settings_divider_1, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_divider_1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_divider_1, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(settings_divider_1, 255, 0);
    lv_obj_set_style_border_width(settings_divider_1, 0, 0);
    lv_obj_set_style_pad_all(settings_divider_1, 0, 0);

    lv_obj_t * settings_wlan_btn = lv_button_create(settings_menu_card);
    lv_obj_set_name(settings_wlan_btn, "settings_wlan_btn");
    lv_obj_set_x(settings_wlan_btn, 0);
    lv_obj_set_y(settings_wlan_btn, 27);
    lv_obj_set_width(settings_wlan_btn, 452);
    lv_obj_set_height(settings_wlan_btn, 24);
    lv_obj_set_flag(settings_wlan_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_wlan_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(settings_wlan_btn, 0, 0);
    lv_obj_set_style_border_width(settings_wlan_btn, 0, 0);
    lv_obj_set_style_shadow_width(settings_wlan_btn, 0, 0);
    lv_obj_set_style_pad_all(settings_wlan_btn, 0, 0);
    lv_obj_t * settings_wlan_label = lv_label_create(settings_wlan_btn);
    lv_obj_set_name(settings_wlan_label, "settings_wlan_label");
    lv_obj_set_x(settings_wlan_label, 16);
    lv_obj_set_y(settings_wlan_label, 6);
    lv_obj_set_width(settings_wlan_label, 150);
    lv_label_set_text(settings_wlan_label, "WLAN");
    lv_label_set_long_mode(settings_wlan_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_wlan_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_wlan_label, font_inter_12, 0);

    lv_obj_t * settings_wlan_value_label = lv_label_create(settings_wlan_btn);
    lv_obj_set_name(settings_wlan_value_label, "settings_wlan_value_label");
    lv_obj_set_x(settings_wlan_value_label, 230);
    lv_obj_set_y(settings_wlan_value_label, 6);
    lv_obj_set_width(settings_wlan_value_label, 150);
    lv_label_set_text(settings_wlan_value_label, wlan_value);
    lv_label_set_long_mode(settings_wlan_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_wlan_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_wlan_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_wlan_value_label, font_inter_11, 0);

    lv_obj_t * settings_wlan_chevron_icon = lv_image_create(settings_wlan_btn);
    lv_obj_set_name(settings_wlan_chevron_icon, "settings_wlan_chevron_icon");
    lv_obj_set_x(settings_wlan_chevron_icon, 416);
    lv_obj_set_y(settings_wlan_chevron_icon, 4);
    lv_obj_set_width(settings_wlan_chevron_icon, 16);
    lv_obj_set_height(settings_wlan_chevron_icon, 16);
    lv_image_set_src(settings_wlan_chevron_icon, img_simple_chevron_icon_1);
    lv_obj_set_flag(settings_wlan_chevron_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_wlan_chevron_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_wlan_chevron_icon, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_image_recolor_opa(settings_wlan_chevron_icon, 255, 0);

    lv_obj_t * settings_divider_2 = lv_obj_create(settings_menu_card);
    lv_obj_set_name(settings_divider_2, "settings_divider_2");
    lv_obj_set_x(settings_divider_2, 16);
    lv_obj_set_y(settings_divider_2, 51);
    lv_obj_set_width(settings_divider_2, 420);
    lv_obj_set_height(settings_divider_2, 1);
    lv_obj_set_flag(settings_divider_2, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_divider_2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_divider_2, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(settings_divider_2, 255, 0);
    lv_obj_set_style_border_width(settings_divider_2, 0, 0);
    lv_obj_set_style_pad_all(settings_divider_2, 0, 0);

    lv_obj_t * settings_device_btn = lv_button_create(settings_menu_card);
    lv_obj_set_name(settings_device_btn, "settings_device_btn");
    lv_obj_set_x(settings_device_btn, 0);
    lv_obj_set_y(settings_device_btn, 52);
    lv_obj_set_width(settings_device_btn, 452);
    lv_obj_set_height(settings_device_btn, 24);
    lv_obj_set_flag(settings_device_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_device_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(settings_device_btn, 0, 0);
    lv_obj_set_style_border_width(settings_device_btn, 0, 0);
    lv_obj_set_style_shadow_width(settings_device_btn, 0, 0);
    lv_obj_set_style_pad_all(settings_device_btn, 0, 0);
    lv_obj_t * settings_device_label = lv_label_create(settings_device_btn);
    lv_obj_set_name(settings_device_label, "settings_device_label");
    lv_obj_set_x(settings_device_label, 16);
    lv_obj_set_y(settings_device_label, 6);
    lv_obj_set_width(settings_device_label, 150);
    lv_label_set_text(settings_device_label, "Device");
    lv_label_set_long_mode(settings_device_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_device_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_device_label, font_inter_12, 0);

    lv_obj_t * settings_device_value_label = lv_label_create(settings_device_btn);
    lv_obj_set_name(settings_device_value_label, "settings_device_value_label");
    lv_obj_set_x(settings_device_value_label, 230);
    lv_obj_set_y(settings_device_value_label, 6);
    lv_obj_set_width(settings_device_value_label, 150);
    lv_label_set_text(settings_device_value_label, device_value);
    lv_label_set_long_mode(settings_device_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_device_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_device_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_device_value_label, font_inter_11, 0);

    lv_obj_t * settings_device_chevron_icon = lv_image_create(settings_device_btn);
    lv_obj_set_name(settings_device_chevron_icon, "settings_device_chevron_icon");
    lv_obj_set_x(settings_device_chevron_icon, 416);
    lv_obj_set_y(settings_device_chevron_icon, 4);
    lv_obj_set_width(settings_device_chevron_icon, 16);
    lv_obj_set_height(settings_device_chevron_icon, 16);
    lv_image_set_src(settings_device_chevron_icon, img_simple_chevron_icon_1);
    lv_obj_set_flag(settings_device_chevron_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_device_chevron_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_device_chevron_icon, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_image_recolor_opa(settings_device_chevron_icon, 255, 0);

    lv_obj_t * settings_divider_3 = lv_obj_create(settings_menu_card);
    lv_obj_set_name(settings_divider_3, "settings_divider_3");
    lv_obj_set_x(settings_divider_3, 16);
    lv_obj_set_y(settings_divider_3, 76);
    lv_obj_set_width(settings_divider_3, 420);
    lv_obj_set_height(settings_divider_3, 1);
    lv_obj_set_flag(settings_divider_3, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_divider_3, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_divider_3, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(settings_divider_3, 255, 0);
    lv_obj_set_style_border_width(settings_divider_3, 0, 0);
    lv_obj_set_style_pad_all(settings_divider_3, 0, 0);

    lv_obj_t * settings_calibration_btn = lv_button_create(settings_menu_card);
    lv_obj_set_name(settings_calibration_btn, "settings_calibration_btn");
    lv_obj_set_x(settings_calibration_btn, 0);
    lv_obj_set_y(settings_calibration_btn, 77);
    lv_obj_set_width(settings_calibration_btn, 452);
    lv_obj_set_height(settings_calibration_btn, 24);
    lv_obj_set_flag(settings_calibration_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_calibration_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(settings_calibration_btn, 0, 0);
    lv_obj_set_style_border_width(settings_calibration_btn, 0, 0);
    lv_obj_set_style_shadow_width(settings_calibration_btn, 0, 0);
    lv_obj_set_style_pad_all(settings_calibration_btn, 0, 0);
    lv_obj_t * settings_calibration_label = lv_label_create(settings_calibration_btn);
    lv_obj_set_name(settings_calibration_label, "settings_calibration_label");
    lv_obj_set_x(settings_calibration_label, 16);
    lv_obj_set_y(settings_calibration_label, 6);
    lv_obj_set_width(settings_calibration_label, 150);
    lv_label_set_text(settings_calibration_label, "Calibration");
    lv_label_set_long_mode(settings_calibration_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_calibration_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_calibration_label, font_inter_12, 0);

    lv_obj_t * settings_calibration_value_label = lv_label_create(settings_calibration_btn);
    lv_obj_set_name(settings_calibration_value_label, "settings_calibration_value_label");
    lv_obj_set_x(settings_calibration_value_label, 230);
    lv_obj_set_y(settings_calibration_value_label, 6);
    lv_obj_set_width(settings_calibration_value_label, 150);
    lv_label_set_text(settings_calibration_value_label, calibration_value);
    lv_label_set_long_mode(settings_calibration_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_calibration_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_calibration_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_calibration_value_label, font_inter_11, 0);

    lv_obj_t * settings_calibration_chevron_icon = lv_image_create(settings_calibration_btn);
    lv_obj_set_name(settings_calibration_chevron_icon, "settings_calibration_chevron_icon");
    lv_obj_set_x(settings_calibration_chevron_icon, 416);
    lv_obj_set_y(settings_calibration_chevron_icon, 4);
    lv_obj_set_width(settings_calibration_chevron_icon, 16);
    lv_obj_set_height(settings_calibration_chevron_icon, 16);
    lv_image_set_src(settings_calibration_chevron_icon, img_simple_chevron_icon_1);
    lv_obj_set_flag(settings_calibration_chevron_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_calibration_chevron_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_calibration_chevron_icon, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_image_recolor_opa(settings_calibration_chevron_icon, 255, 0);

    lv_obj_t * settings_divider_4 = lv_obj_create(settings_menu_card);
    lv_obj_set_name(settings_divider_4, "settings_divider_4");
    lv_obj_set_x(settings_divider_4, 16);
    lv_obj_set_y(settings_divider_4, 101);
    lv_obj_set_width(settings_divider_4, 420);
    lv_obj_set_height(settings_divider_4, 1);
    lv_obj_set_flag(settings_divider_4, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_divider_4, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_divider_4, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(settings_divider_4, 255, 0);
    lv_obj_set_style_border_width(settings_divider_4, 0, 0);
    lv_obj_set_style_pad_all(settings_divider_4, 0, 0);

    lv_obj_t * settings_firmware_btn = lv_button_create(settings_menu_card);
    lv_obj_set_name(settings_firmware_btn, "settings_firmware_btn");
    lv_obj_set_x(settings_firmware_btn, 0);
    lv_obj_set_y(settings_firmware_btn, 102);
    lv_obj_set_width(settings_firmware_btn, 452);
    lv_obj_set_height(settings_firmware_btn, 24);
    lv_obj_set_flag(settings_firmware_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_firmware_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(settings_firmware_btn, 0, 0);
    lv_obj_set_style_border_width(settings_firmware_btn, 0, 0);
    lv_obj_set_style_shadow_width(settings_firmware_btn, 0, 0);
    lv_obj_set_style_pad_all(settings_firmware_btn, 0, 0);
    lv_obj_t * settings_firmware_label = lv_label_create(settings_firmware_btn);
    lv_obj_set_name(settings_firmware_label, "settings_firmware_label");
    lv_obj_set_x(settings_firmware_label, 16);
    lv_obj_set_y(settings_firmware_label, 6);
    lv_obj_set_width(settings_firmware_label, 150);
    lv_label_set_text(settings_firmware_label, "Firmware");
    lv_label_set_long_mode(settings_firmware_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_firmware_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_firmware_label, font_inter_12, 0);

    lv_obj_t * settings_firmware_value_label = lv_label_create(settings_firmware_btn);
    lv_obj_set_name(settings_firmware_value_label, "settings_firmware_value_label");
    lv_obj_set_x(settings_firmware_value_label, 230);
    lv_obj_set_y(settings_firmware_value_label, 6);
    lv_obj_set_width(settings_firmware_value_label, 150);
    lv_label_set_text(settings_firmware_value_label, firmware_value);
    lv_label_set_long_mode(settings_firmware_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_firmware_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_firmware_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_firmware_value_label, font_inter_11, 0);

    lv_obj_t * settings_firmware_chevron_icon = lv_image_create(settings_firmware_btn);
    lv_obj_set_name(settings_firmware_chevron_icon, "settings_firmware_chevron_icon");
    lv_obj_set_x(settings_firmware_chevron_icon, 416);
    lv_obj_set_y(settings_firmware_chevron_icon, 4);
    lv_obj_set_width(settings_firmware_chevron_icon, 16);
    lv_obj_set_height(settings_firmware_chevron_icon, 16);
    lv_image_set_src(settings_firmware_chevron_icon, img_simple_chevron_icon_1);
    lv_obj_set_flag(settings_firmware_chevron_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_firmware_chevron_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_firmware_chevron_icon, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_image_recolor_opa(settings_firmware_chevron_icon, 255, 0);

    lv_obj_t * settings_divider_5 = lv_obj_create(settings_menu_card);
    lv_obj_set_name(settings_divider_5, "settings_divider_5");
    lv_obj_set_x(settings_divider_5, 16);
    lv_obj_set_y(settings_divider_5, 126);
    lv_obj_set_width(settings_divider_5, 420);
    lv_obj_set_height(settings_divider_5, 1);
    lv_obj_set_flag(settings_divider_5, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_divider_5, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_divider_5, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(settings_divider_5, 255, 0);
    lv_obj_set_style_border_width(settings_divider_5, 0, 0);
    lv_obj_set_style_pad_all(settings_divider_5, 0, 0);

    lv_obj_t * settings_language_btn = lv_button_create(settings_menu_card);
    lv_obj_set_name(settings_language_btn, "settings_language_btn");
    lv_obj_set_x(settings_language_btn, 0);
    lv_obj_set_y(settings_language_btn, 127);
    lv_obj_set_width(settings_language_btn, 452);
    lv_obj_set_height(settings_language_btn, 24);
    lv_obj_set_flag(settings_language_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_language_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(settings_language_btn, 0, 0);
    lv_obj_set_style_border_width(settings_language_btn, 0, 0);
    lv_obj_set_style_shadow_width(settings_language_btn, 0, 0);
    lv_obj_set_style_pad_all(settings_language_btn, 0, 0);
    lv_obj_t * settings_language_label = lv_label_create(settings_language_btn);
    lv_obj_set_name(settings_language_label, "settings_language_label");
    lv_obj_set_x(settings_language_label, 16);
    lv_obj_set_y(settings_language_label, 6);
    lv_obj_set_width(settings_language_label, 150);
    lv_label_set_text(settings_language_label, "Language");
    lv_label_set_long_mode(settings_language_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_language_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_language_label, font_inter_12, 0);

    lv_obj_t * settings_language_value_label = lv_label_create(settings_language_btn);
    lv_obj_set_name(settings_language_value_label, "settings_language_value_label");
    lv_obj_set_x(settings_language_value_label, 230);
    lv_obj_set_y(settings_language_value_label, 6);
    lv_obj_set_width(settings_language_value_label, 150);
    lv_label_set_text(settings_language_value_label, language_value);
    lv_label_set_long_mode(settings_language_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_language_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_language_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_language_value_label, font_inter_11, 0);

    lv_obj_t * settings_language_chevron_icon = lv_image_create(settings_language_btn);
    lv_obj_set_name(settings_language_chevron_icon, "settings_language_chevron_icon");
    lv_obj_set_x(settings_language_chevron_icon, 416);
    lv_obj_set_y(settings_language_chevron_icon, 4);
    lv_obj_set_width(settings_language_chevron_icon, 16);
    lv_obj_set_height(settings_language_chevron_icon, 16);
    lv_image_set_src(settings_language_chevron_icon, img_simple_chevron_icon_1);
    lv_obj_set_flag(settings_language_chevron_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_language_chevron_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_language_chevron_icon, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_image_recolor_opa(settings_language_chevron_icon, 255, 0);

    lv_obj_t * settings_divider_6 = lv_obj_create(settings_menu_card);
    lv_obj_set_name(settings_divider_6, "settings_divider_6");
    lv_obj_set_x(settings_divider_6, 16);
    lv_obj_set_y(settings_divider_6, 151);
    lv_obj_set_width(settings_divider_6, 420);
    lv_obj_set_height(settings_divider_6, 1);
    lv_obj_set_flag(settings_divider_6, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_divider_6, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_divider_6, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(settings_divider_6, 255, 0);
    lv_obj_set_style_border_width(settings_divider_6, 0, 0);
    lv_obj_set_style_pad_all(settings_divider_6, 0, 0);

    lv_obj_t * settings_terms_btn = lv_button_create(settings_menu_card);
    lv_obj_set_name(settings_terms_btn, "settings_terms_btn");
    lv_obj_set_x(settings_terms_btn, 0);
    lv_obj_set_y(settings_terms_btn, 152);
    lv_obj_set_width(settings_terms_btn, 452);
    lv_obj_set_height(settings_terms_btn, 24);
    lv_obj_set_flag(settings_terms_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_terms_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(settings_terms_btn, 0, 0);
    lv_obj_set_style_border_width(settings_terms_btn, 0, 0);
    lv_obj_set_style_shadow_width(settings_terms_btn, 0, 0);
    lv_obj_set_style_pad_all(settings_terms_btn, 0, 0);
    lv_obj_t * settings_terms_label = lv_label_create(settings_terms_btn);
    lv_obj_set_name(settings_terms_label, "settings_terms_label");
    lv_obj_set_x(settings_terms_label, 16);
    lv_obj_set_y(settings_terms_label, 6);
    lv_obj_set_width(settings_terms_label, 150);
    lv_label_set_text(settings_terms_label, "Terms of Use");
    lv_label_set_long_mode(settings_terms_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_terms_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_terms_label, font_inter_12, 0);

    lv_obj_t * settings_terms_chevron_icon = lv_image_create(settings_terms_btn);
    lv_obj_set_name(settings_terms_chevron_icon, "settings_terms_chevron_icon");
    lv_obj_set_x(settings_terms_chevron_icon, 416);
    lv_obj_set_y(settings_terms_chevron_icon, 4);
    lv_obj_set_width(settings_terms_chevron_icon, 16);
    lv_obj_set_height(settings_terms_chevron_icon, 16);
    lv_image_set_src(settings_terms_chevron_icon, img_simple_chevron_icon_1);
    lv_obj_set_flag(settings_terms_chevron_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_terms_chevron_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_terms_chevron_icon, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_image_recolor_opa(settings_terms_chevron_icon, 255, 0);

    lv_obj_t * settings_divider_7 = lv_obj_create(settings_menu_card);
    lv_obj_set_name(settings_divider_7, "settings_divider_7");
    lv_obj_set_x(settings_divider_7, 16);
    lv_obj_set_y(settings_divider_7, 176);
    lv_obj_set_width(settings_divider_7, 420);
    lv_obj_set_height(settings_divider_7, 1);
    lv_obj_set_flag(settings_divider_7, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_divider_7, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_divider_7, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(settings_divider_7, 255, 0);
    lv_obj_set_style_border_width(settings_divider_7, 0, 0);
    lv_obj_set_style_pad_all(settings_divider_7, 0, 0);

    lv_obj_t * settings_factory_reset_btn = lv_button_create(settings_menu_card);
    lv_obj_set_name(settings_factory_reset_btn, "settings_factory_reset_btn");
    lv_obj_set_x(settings_factory_reset_btn, 0);
    lv_obj_set_y(settings_factory_reset_btn, 177);
    lv_obj_set_width(settings_factory_reset_btn, 452);
    lv_obj_set_height(settings_factory_reset_btn, 19);
    lv_obj_set_flag(settings_factory_reset_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_factory_reset_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(settings_factory_reset_btn, 0, 0);
    lv_obj_set_style_border_width(settings_factory_reset_btn, 0, 0);
    lv_obj_set_style_shadow_width(settings_factory_reset_btn, 0, 0);
    lv_obj_set_style_pad_all(settings_factory_reset_btn, 0, 0);
    lv_obj_t * settings_factory_reset_label = lv_label_create(settings_factory_reset_btn);
    lv_obj_set_name(settings_factory_reset_label, "settings_factory_reset_label");
    lv_obj_set_x(settings_factory_reset_label, 16);
    lv_obj_set_y(settings_factory_reset_label, 4);
    lv_obj_set_width(settings_factory_reset_label, 180);
    lv_label_set_text(settings_factory_reset_label, "Factory Reset");
    lv_label_set_long_mode(settings_factory_reset_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_factory_reset_label, COLOR_ALERT_RED, 0);
    lv_obj_set_style_text_font(settings_factory_reset_label, font_inter_12, 0);

    lv_obj_t * settings_factory_reset_chevron_icon = lv_image_create(settings_factory_reset_btn);
    lv_obj_set_name(settings_factory_reset_chevron_icon, "settings_factory_reset_chevron_icon");
    lv_obj_set_x(settings_factory_reset_chevron_icon, 416);
    lv_obj_set_y(settings_factory_reset_chevron_icon, 2);
    lv_obj_set_width(settings_factory_reset_chevron_icon, 16);
    lv_obj_set_height(settings_factory_reset_chevron_icon, 16);
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

