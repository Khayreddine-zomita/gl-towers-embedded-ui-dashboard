/**
 * @file device_pairing_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "device_pairing_card_gen.h"
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

lv_obj_t * device_pairing_card_create(lv_obj_t * parent, const char * pairing_status, const char * pairing_code)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "device_pairing_card_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 217);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * device_pairing_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(device_pairing_title_label, "device_pairing_title_label");
    lv_obj_set_x(device_pairing_title_label, 2);
    lv_obj_set_y(device_pairing_title_label, 0);
    lv_obj_set_width(device_pairing_title_label, 260);
    lv_label_set_text(device_pairing_title_label, "DEVICE PAIRING");
    lv_label_set_long_mode(device_pairing_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(device_pairing_title_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(device_pairing_title_label, font_inter_14, 0);
    lv_obj_set_style_text_letter_space(device_pairing_title_label, 1, 0);

    lv_obj_t * device_pairing_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(device_pairing_card, "device_pairing_card");
    lv_obj_set_x(device_pairing_card, 0);
    lv_obj_set_y(device_pairing_card, 24);
    lv_obj_set_width(device_pairing_card, 452);
    lv_obj_set_height(device_pairing_card, 193);
    lv_obj_set_flag(device_pairing_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(device_pairing_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(device_pairing_card, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(device_pairing_card, 255, 0);
    lv_obj_set_style_radius(device_pairing_card, 18, 0);
    lv_obj_set_style_pad_all(device_pairing_card, 0, 0);
    lv_obj_set_style_border_width(device_pairing_card, 1, 0);
    lv_obj_set_style_border_color(device_pairing_card, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(device_pairing_card, 8, 0);
    lv_obj_set_style_shadow_opa(device_pairing_card, 16, 0);
    lv_obj_set_style_shadow_color(device_pairing_card, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(device_pairing_card, 3, 0);
    lv_obj_t * device_pairing_status_title_label = lv_label_create(device_pairing_card);
    lv_obj_set_name(device_pairing_status_title_label, "device_pairing_status_title_label");
    lv_obj_set_x(device_pairing_status_title_label, 18);
    lv_obj_set_y(device_pairing_status_title_label, 14);
    lv_obj_set_width(device_pairing_status_title_label, 150);
    lv_label_set_text(device_pairing_status_title_label, "Pairing status");
    lv_label_set_long_mode(device_pairing_status_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(device_pairing_status_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(device_pairing_status_title_label, font_inter_12, 0);

    lv_obj_t * device_pairing_status_value_label = lv_label_create(device_pairing_card);
    lv_obj_set_name(device_pairing_status_value_label, "device_pairing_status_value_label");
    lv_obj_set_x(device_pairing_status_value_label, 250);
    lv_obj_set_y(device_pairing_status_value_label, 14);
    lv_obj_set_width(device_pairing_status_value_label, 150);
    lv_label_set_text(device_pairing_status_value_label, pairing_status);
    lv_label_set_long_mode(device_pairing_status_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(device_pairing_status_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(device_pairing_status_value_label, COLOR_STATUS_WARNING, 0);
    lv_obj_set_style_text_font(device_pairing_status_value_label, font_inter_12, 0);

    lv_obj_t * device_pairing_divider_1 = lv_obj_create(device_pairing_card);
    lv_obj_set_name(device_pairing_divider_1, "device_pairing_divider_1");
    lv_obj_set_x(device_pairing_divider_1, 18);
    lv_obj_set_y(device_pairing_divider_1, 40);
    lv_obj_set_width(device_pairing_divider_1, 416);
    lv_obj_set_height(device_pairing_divider_1, 1);
    lv_obj_set_flag(device_pairing_divider_1, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(device_pairing_divider_1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(device_pairing_divider_1, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(device_pairing_divider_1, 255, 0);
    lv_obj_set_style_border_width(device_pairing_divider_1, 0, 0);
    lv_obj_set_style_pad_all(device_pairing_divider_1, 0, 0);

    lv_obj_t * device_pairing_qr_box = lv_obj_create(device_pairing_card);
    lv_obj_set_name(device_pairing_qr_box, "device_pairing_qr_box");
    lv_obj_set_x(device_pairing_qr_box, 22);
    lv_obj_set_y(device_pairing_qr_box, 58);
    lv_obj_set_width(device_pairing_qr_box, 86);
    lv_obj_set_height(device_pairing_qr_box, 86);
    lv_obj_set_flag(device_pairing_qr_box, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(device_pairing_qr_box, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(device_pairing_qr_box, COLOR_SOFT_SURFACE, 0);
    lv_obj_set_style_bg_opa(device_pairing_qr_box, 255, 0);
    lv_obj_set_style_radius(device_pairing_qr_box, 12, 0);
    lv_obj_set_style_border_width(device_pairing_qr_box, 1, 0);
    lv_obj_set_style_border_color(device_pairing_qr_box, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(device_pairing_qr_box, 0, 0);
    lv_obj_t * device_pairing_qr_label = lv_label_create(device_pairing_qr_box);
    lv_obj_set_name(device_pairing_qr_label, "device_pairing_qr_label");
    lv_obj_set_x(device_pairing_qr_label, 0);
    lv_obj_set_y(device_pairing_qr_label, 32);
    lv_obj_set_width(device_pairing_qr_label, 86);
    lv_label_set_text(device_pairing_qr_label, "QR");
    lv_label_set_long_mode(device_pairing_qr_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(device_pairing_qr_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(device_pairing_qr_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(device_pairing_qr_label, font_inter_15, 0);

    lv_obj_t * device_pairing_code_title_label = lv_label_create(device_pairing_card);
    lv_obj_set_name(device_pairing_code_title_label, "device_pairing_code_title_label");
    lv_obj_set_x(device_pairing_code_title_label, 128);
    lv_obj_set_y(device_pairing_code_title_label, 56);
    lv_obj_set_width(device_pairing_code_title_label, 160);
    lv_label_set_text(device_pairing_code_title_label, "Pairing code");
    lv_label_set_long_mode(device_pairing_code_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(device_pairing_code_title_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(device_pairing_code_title_label, font_inter_10, 0);
    lv_obj_set_style_text_letter_space(device_pairing_code_title_label, 1, 0);

    lv_obj_t * device_pairing_code_value_label = lv_label_create(device_pairing_card);
    lv_obj_set_name(device_pairing_code_value_label, "device_pairing_code_value_label");
    lv_obj_set_x(device_pairing_code_value_label, 128);
    lv_obj_set_y(device_pairing_code_value_label, 76);
    lv_obj_set_width(device_pairing_code_value_label, 180);
    lv_label_set_text(device_pairing_code_value_label, pairing_code);
    lv_label_set_long_mode(device_pairing_code_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(device_pairing_code_value_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(device_pairing_code_value_label, font_inter_26, 0);

    lv_obj_t * device_pairing_desc_label = lv_label_create(device_pairing_card);
    lv_obj_set_name(device_pairing_desc_label, "device_pairing_desc_label");
    lv_obj_set_x(device_pairing_desc_label, 128);
    lv_obj_set_y(device_pairing_desc_label, 112);
    lv_obj_set_width(device_pairing_desc_label, 290);
    lv_label_set_text(device_pairing_desc_label, "Scan the QR code or enter this code in the mobile app or dashboard.");
    lv_label_set_long_mode(device_pairing_desc_label, LV_LABEL_LONG_MODE_WRAP);
    lv_obj_set_style_text_color(device_pairing_desc_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(device_pairing_desc_label, font_inter_10, 0);

    lv_obj_t * device_pairing_start_btn = lv_button_create(device_pairing_card);
    lv_obj_set_name(device_pairing_start_btn, "device_pairing_start_btn");
    lv_obj_set_x(device_pairing_start_btn, 128);
    lv_obj_set_y(device_pairing_start_btn, 150);
    lv_obj_set_width(device_pairing_start_btn, 138);
    lv_obj_set_height(device_pairing_start_btn, 28);
    lv_obj_set_flag(device_pairing_start_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(device_pairing_start_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(device_pairing_start_btn, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_bg_opa(device_pairing_start_btn, 180, 0);
    lv_obj_set_style_radius(device_pairing_start_btn, 10, 0);
    lv_obj_set_style_border_width(device_pairing_start_btn, 1, 0);
    lv_obj_set_style_border_color(device_pairing_start_btn, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_pad_all(device_pairing_start_btn, 0, 0);
    lv_obj_set_style_shadow_width(device_pairing_start_btn, 0, 0);
    lv_obj_t * device_pairing_start_label = lv_label_create(device_pairing_start_btn);
    lv_obj_set_name(device_pairing_start_label, "device_pairing_start_label");
    lv_obj_set_x(device_pairing_start_label, 0);
    lv_obj_set_y(device_pairing_start_label, 7);
    lv_obj_set_width(device_pairing_start_label, 138);
    lv_label_set_text(device_pairing_start_label, "Start pairing");
    lv_label_set_long_mode(device_pairing_start_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(device_pairing_start_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(device_pairing_start_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(device_pairing_start_label, font_inter_11, 0);

    lv_obj_t * device_pairing_refresh_btn = lv_button_create(device_pairing_card);
    lv_obj_set_name(device_pairing_refresh_btn, "device_pairing_refresh_btn");
    lv_obj_set_x(device_pairing_refresh_btn, 282);
    lv_obj_set_y(device_pairing_refresh_btn, 150);
    lv_obj_set_width(device_pairing_refresh_btn, 136);
    lv_obj_set_height(device_pairing_refresh_btn, 28);
    lv_obj_set_flag(device_pairing_refresh_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(device_pairing_refresh_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(device_pairing_refresh_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(device_pairing_refresh_btn, 255, 0);
    lv_obj_set_style_radius(device_pairing_refresh_btn, 10, 0);
    lv_obj_set_style_border_width(device_pairing_refresh_btn, 1, 0);
    lv_obj_set_style_border_color(device_pairing_refresh_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(device_pairing_refresh_btn, 0, 0);
    lv_obj_set_style_shadow_width(device_pairing_refresh_btn, 0, 0);
    lv_obj_t * device_pairing_refresh_label = lv_label_create(device_pairing_refresh_btn);
    lv_obj_set_name(device_pairing_refresh_label, "device_pairing_refresh_label");
    lv_obj_set_x(device_pairing_refresh_label, 0);
    lv_obj_set_y(device_pairing_refresh_label, 7);
    lv_obj_set_width(device_pairing_refresh_label, 136);
    lv_label_set_text(device_pairing_refresh_label, "Refresh code");
    lv_label_set_long_mode(device_pairing_refresh_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(device_pairing_refresh_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(device_pairing_refresh_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(device_pairing_refresh_label, font_inter_11, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

