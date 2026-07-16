/**
 * @file settings_account_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "settings_account_card_gen.h"
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

lv_obj_t * settings_account_card_create(lv_obj_t * parent, const char * account_status, const char * owner_name, const char * pairing_status)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "settings_account_card_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 206);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * settings_account_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(settings_account_title_label, "settings_account_title_label");
    lv_obj_set_x(settings_account_title_label, 2);
    lv_obj_set_y(settings_account_title_label, 0);
    lv_obj_set_width(settings_account_title_label, 260);
    lv_label_set_text(settings_account_title_label, "ACCOUNT");
    lv_label_set_long_mode(settings_account_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_account_title_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(settings_account_title_label, font_inter_14, 0);
    lv_obj_set_style_text_letter_space(settings_account_title_label, 1, 0);

    lv_obj_t * settings_account_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(settings_account_card, "settings_account_card");
    lv_obj_set_x(settings_account_card, 0);
    lv_obj_set_y(settings_account_card, 24);
    lv_obj_set_width(settings_account_card, 452);
    lv_obj_set_height(settings_account_card, 182);
    lv_obj_set_flag(settings_account_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_account_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_account_card, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(settings_account_card, 255, 0);
    lv_obj_set_style_radius(settings_account_card, 18, 0);
    lv_obj_set_style_pad_all(settings_account_card, 0, 0);
    lv_obj_set_style_border_width(settings_account_card, 1, 0);
    lv_obj_set_style_border_color(settings_account_card, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(settings_account_card, 8, 0);
    lv_obj_set_style_shadow_opa(settings_account_card, 16, 0);
    lv_obj_set_style_shadow_color(settings_account_card, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(settings_account_card, 3, 0);
    lv_obj_t * settings_account_status_title_label = lv_label_create(settings_account_card);
    lv_obj_set_name(settings_account_status_title_label, "settings_account_status_title_label");
    lv_obj_set_x(settings_account_status_title_label, 18);
    lv_obj_set_y(settings_account_status_title_label, 18);
    lv_obj_set_width(settings_account_status_title_label, 160);
    lv_label_set_text(settings_account_status_title_label, "Account status");
    lv_label_set_long_mode(settings_account_status_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_account_status_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_account_status_title_label, font_inter_12, 0);

    lv_obj_t * settings_account_status_value_label = lv_label_create(settings_account_card);
    lv_obj_set_name(settings_account_status_value_label, "settings_account_status_value_label");
    lv_obj_set_x(settings_account_status_value_label, 230);
    lv_obj_set_y(settings_account_status_value_label, 18);
    lv_obj_set_width(settings_account_status_value_label, 170);
    lv_label_set_text(settings_account_status_value_label, account_status);
    lv_label_set_long_mode(settings_account_status_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_account_status_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_account_status_value_label, COLOR_STATUS_WARNING, 0);
    lv_obj_set_style_text_font(settings_account_status_value_label, font_inter_12, 0);

    lv_obj_t * settings_account_divider_1 = lv_obj_create(settings_account_card);
    lv_obj_set_name(settings_account_divider_1, "settings_account_divider_1");
    lv_obj_set_x(settings_account_divider_1, 18);
    lv_obj_set_y(settings_account_divider_1, 46);
    lv_obj_set_width(settings_account_divider_1, 416);
    lv_obj_set_height(settings_account_divider_1, 1);
    lv_obj_set_flag(settings_account_divider_1, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_account_divider_1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_account_divider_1, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(settings_account_divider_1, 255, 0);
    lv_obj_set_style_border_width(settings_account_divider_1, 0, 0);
    lv_obj_set_style_pad_all(settings_account_divider_1, 0, 0);

    lv_obj_t * settings_account_owner_title_label = lv_label_create(settings_account_card);
    lv_obj_set_name(settings_account_owner_title_label, "settings_account_owner_title_label");
    lv_obj_set_x(settings_account_owner_title_label, 18);
    lv_obj_set_y(settings_account_owner_title_label, 62);
    lv_obj_set_width(settings_account_owner_title_label, 160);
    lv_label_set_text(settings_account_owner_title_label, "Device owner");
    lv_label_set_long_mode(settings_account_owner_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_account_owner_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_account_owner_title_label, font_inter_12, 0);

    lv_obj_t * settings_account_owner_value_label = lv_label_create(settings_account_card);
    lv_obj_set_name(settings_account_owner_value_label, "settings_account_owner_value_label");
    lv_obj_set_x(settings_account_owner_value_label, 230);
    lv_obj_set_y(settings_account_owner_value_label, 62);
    lv_obj_set_width(settings_account_owner_value_label, 170);
    lv_label_set_text(settings_account_owner_value_label, owner_name);
    lv_label_set_long_mode(settings_account_owner_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_account_owner_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_account_owner_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_account_owner_value_label, font_inter_12, 0);

    lv_obj_t * settings_account_divider_2 = lv_obj_create(settings_account_card);
    lv_obj_set_name(settings_account_divider_2, "settings_account_divider_2");
    lv_obj_set_x(settings_account_divider_2, 18);
    lv_obj_set_y(settings_account_divider_2, 90);
    lv_obj_set_width(settings_account_divider_2, 416);
    lv_obj_set_height(settings_account_divider_2, 1);
    lv_obj_set_flag(settings_account_divider_2, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_account_divider_2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_account_divider_2, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(settings_account_divider_2, 255, 0);
    lv_obj_set_style_border_width(settings_account_divider_2, 0, 0);
    lv_obj_set_style_pad_all(settings_account_divider_2, 0, 0);

    lv_obj_t * settings_account_pairing_title_label = lv_label_create(settings_account_card);
    lv_obj_set_name(settings_account_pairing_title_label, "settings_account_pairing_title_label");
    lv_obj_set_x(settings_account_pairing_title_label, 18);
    lv_obj_set_y(settings_account_pairing_title_label, 106);
    lv_obj_set_width(settings_account_pairing_title_label, 160);
    lv_label_set_text(settings_account_pairing_title_label, "App / dashboard");
    lv_label_set_long_mode(settings_account_pairing_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_account_pairing_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_account_pairing_title_label, font_inter_12, 0);

    lv_obj_t * settings_account_pairing_value_label = lv_label_create(settings_account_card);
    lv_obj_set_name(settings_account_pairing_value_label, "settings_account_pairing_value_label");
    lv_obj_set_x(settings_account_pairing_value_label, 230);
    lv_obj_set_y(settings_account_pairing_value_label, 106);
    lv_obj_set_width(settings_account_pairing_value_label, 170);
    lv_label_set_text(settings_account_pairing_value_label, pairing_status);
    lv_label_set_long_mode(settings_account_pairing_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_account_pairing_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_account_pairing_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_account_pairing_value_label, font_inter_12, 0);

    lv_obj_t * settings_account_pair_device_btn = lv_button_create(settings_account_card);
    lv_obj_set_name(settings_account_pair_device_btn, "settings_account_pair_device_btn");
    lv_obj_set_x(settings_account_pair_device_btn, 18);
    lv_obj_set_y(settings_account_pair_device_btn, 138);
    lv_obj_set_width(settings_account_pair_device_btn, 416);
    lv_obj_set_height(settings_account_pair_device_btn, 30);
    lv_obj_set_flag(settings_account_pair_device_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_account_pair_device_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_account_pair_device_btn, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_bg_opa(settings_account_pair_device_btn, 180, 0);
    lv_obj_set_style_radius(settings_account_pair_device_btn, 10, 0);
    lv_obj_set_style_border_width(settings_account_pair_device_btn, 1, 0);
    lv_obj_set_style_border_color(settings_account_pair_device_btn, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_pad_all(settings_account_pair_device_btn, 0, 0);
    lv_obj_set_style_shadow_width(settings_account_pair_device_btn, 0, 0);
    lv_obj_t * settings_account_pair_device_label = lv_label_create(settings_account_pair_device_btn);
    lv_obj_set_name(settings_account_pair_device_label, "settings_account_pair_device_label");
    lv_obj_set_x(settings_account_pair_device_label, 0);
    lv_obj_set_y(settings_account_pair_device_label, 8);
    lv_obj_set_width(settings_account_pair_device_label, 416);
    lv_label_set_text(settings_account_pair_device_label, "Pair with app or dashboard");
    lv_label_set_long_mode(settings_account_pair_device_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_account_pair_device_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(settings_account_pair_device_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(settings_account_pair_device_label, font_inter_12, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

