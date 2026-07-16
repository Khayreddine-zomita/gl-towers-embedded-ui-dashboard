/**
 * @file wifi_setup_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "wifi_setup_card_gen.h"
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

lv_obj_t * wifi_setup_card_create(lv_obj_t * parent, const char * selected_network, const char * connection_status, const char * password_text)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "wifi_setup_card_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 217);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * wifi_setup_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(wifi_setup_title_label, "wifi_setup_title_label");
    lv_obj_set_x(wifi_setup_title_label, 2);
    lv_obj_set_y(wifi_setup_title_label, 0);
    lv_obj_set_width(wifi_setup_title_label, 260);
    lv_label_set_text(wifi_setup_title_label, "WLAN SETUP");
    lv_label_set_long_mode(wifi_setup_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(wifi_setup_title_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(wifi_setup_title_label, font_inter_14, 0);
    lv_obj_set_style_text_letter_space(wifi_setup_title_label, 1, 0);

    lv_obj_t * wifi_setup_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(wifi_setup_card, "wifi_setup_card");
    lv_obj_set_x(wifi_setup_card, 0);
    lv_obj_set_y(wifi_setup_card, 24);
    lv_obj_set_width(wifi_setup_card, 452);
    lv_obj_set_height(wifi_setup_card, 193);
    lv_obj_set_flag(wifi_setup_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(wifi_setup_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(wifi_setup_card, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(wifi_setup_card, 255, 0);
    lv_obj_set_style_radius(wifi_setup_card, 18, 0);
    lv_obj_set_style_pad_all(wifi_setup_card, 0, 0);
    lv_obj_set_style_border_width(wifi_setup_card, 1, 0);
    lv_obj_set_style_border_color(wifi_setup_card, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(wifi_setup_card, 8, 0);
    lv_obj_set_style_shadow_opa(wifi_setup_card, 16, 0);
    lv_obj_set_style_shadow_color(wifi_setup_card, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(wifi_setup_card, 3, 0);
    lv_obj_t * wifi_setup_status_title_label = lv_label_create(wifi_setup_card);
    lv_obj_set_name(wifi_setup_status_title_label, "wifi_setup_status_title_label");
    lv_obj_set_x(wifi_setup_status_title_label, 18);
    lv_obj_set_y(wifi_setup_status_title_label, 14);
    lv_obj_set_width(wifi_setup_status_title_label, 140);
    lv_label_set_text(wifi_setup_status_title_label, "Status");
    lv_label_set_long_mode(wifi_setup_status_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(wifi_setup_status_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(wifi_setup_status_title_label, font_inter_12, 0);

    lv_obj_t * wifi_setup_status_value_label = lv_label_create(wifi_setup_card);
    lv_obj_set_name(wifi_setup_status_value_label, "wifi_setup_status_value_label");
    lv_obj_set_x(wifi_setup_status_value_label, 232);
    lv_obj_set_y(wifi_setup_status_value_label, 14);
    lv_obj_set_width(wifi_setup_status_value_label, 170);
    lv_label_set_text(wifi_setup_status_value_label, connection_status);
    lv_label_set_long_mode(wifi_setup_status_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(wifi_setup_status_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(wifi_setup_status_value_label, COLOR_STATUS_WARNING, 0);
    lv_obj_set_style_text_font(wifi_setup_status_value_label, font_inter_12, 0);

    lv_obj_t * wifi_setup_divider_1 = lv_obj_create(wifi_setup_card);
    lv_obj_set_name(wifi_setup_divider_1, "wifi_setup_divider_1");
    lv_obj_set_x(wifi_setup_divider_1, 18);
    lv_obj_set_y(wifi_setup_divider_1, 40);
    lv_obj_set_width(wifi_setup_divider_1, 416);
    lv_obj_set_height(wifi_setup_divider_1, 1);
    lv_obj_set_flag(wifi_setup_divider_1, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(wifi_setup_divider_1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(wifi_setup_divider_1, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(wifi_setup_divider_1, 255, 0);
    lv_obj_set_style_border_width(wifi_setup_divider_1, 0, 0);
    lv_obj_set_style_pad_all(wifi_setup_divider_1, 0, 0);

    lv_obj_t * wifi_setup_networks_title_label = lv_label_create(wifi_setup_card);
    lv_obj_set_name(wifi_setup_networks_title_label, "wifi_setup_networks_title_label");
    lv_obj_set_x(wifi_setup_networks_title_label, 18);
    lv_obj_set_y(wifi_setup_networks_title_label, 52);
    lv_obj_set_width(wifi_setup_networks_title_label, 160);
    lv_label_set_text(wifi_setup_networks_title_label, "Available networks");
    lv_label_set_long_mode(wifi_setup_networks_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(wifi_setup_networks_title_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(wifi_setup_networks_title_label, font_inter_10, 0);
    lv_obj_set_style_text_letter_space(wifi_setup_networks_title_label, 1, 0);

    lv_obj_t * wifi_setup_scan_btn = lv_button_create(wifi_setup_card);
    lv_obj_set_name(wifi_setup_scan_btn, "wifi_setup_scan_btn");
    lv_obj_set_x(wifi_setup_scan_btn, 342);
    lv_obj_set_y(wifi_setup_scan_btn, 48);
    lv_obj_set_width(wifi_setup_scan_btn, 78);
    lv_obj_set_height(wifi_setup_scan_btn, 24);
    lv_obj_set_flag(wifi_setup_scan_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(wifi_setup_scan_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(wifi_setup_scan_btn, COLOR_WATER_TEMP_BG, 0);
    lv_obj_set_style_bg_opa(wifi_setup_scan_btn, 120, 0);
    lv_obj_set_style_radius(wifi_setup_scan_btn, 10, 0);
    lv_obj_set_style_border_width(wifi_setup_scan_btn, 1, 0);
    lv_obj_set_style_border_color(wifi_setup_scan_btn, COLOR_STATUS_INFO, 0);
    lv_obj_set_style_pad_all(wifi_setup_scan_btn, 0, 0);
    lv_obj_set_style_shadow_width(wifi_setup_scan_btn, 0, 0);
    lv_obj_t * wifi_setup_scan_label = lv_label_create(wifi_setup_scan_btn);
    lv_obj_set_name(wifi_setup_scan_label, "wifi_setup_scan_label");
    lv_obj_set_x(wifi_setup_scan_label, 0);
    lv_obj_set_y(wifi_setup_scan_label, 6);
    lv_obj_set_width(wifi_setup_scan_label, 78);
    lv_label_set_text(wifi_setup_scan_label, "Scan");
    lv_label_set_long_mode(wifi_setup_scan_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(wifi_setup_scan_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(wifi_setup_scan_label, COLOR_STATUS_INFO, 0);
    lv_obj_set_style_text_font(wifi_setup_scan_label, font_inter_11, 0);

    lv_obj_t * wifi_setup_network_1_btn = lv_button_create(wifi_setup_card);
    lv_obj_set_name(wifi_setup_network_1_btn, "wifi_setup_network_1_btn");
    lv_obj_set_x(wifi_setup_network_1_btn, 18);
    lv_obj_set_y(wifi_setup_network_1_btn, 80);
    lv_obj_set_width(wifi_setup_network_1_btn, 196);
    lv_obj_set_height(wifi_setup_network_1_btn, 28);
    lv_obj_set_flag(wifi_setup_network_1_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(wifi_setup_network_1_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(wifi_setup_network_1_btn, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_bg_opa(wifi_setup_network_1_btn, 120, 0);
    lv_obj_set_style_radius(wifi_setup_network_1_btn, 10, 0);
    lv_obj_set_style_border_width(wifi_setup_network_1_btn, 1, 0);
    lv_obj_set_style_border_color(wifi_setup_network_1_btn, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_pad_all(wifi_setup_network_1_btn, 0, 0);
    lv_obj_set_style_shadow_width(wifi_setup_network_1_btn, 0, 0);
    lv_obj_t * wifi_setup_network_1_label = lv_label_create(wifi_setup_network_1_btn);
    lv_obj_set_name(wifi_setup_network_1_label, "wifi_setup_network_1_label");
    lv_obj_set_x(wifi_setup_network_1_label, 12);
    lv_obj_set_y(wifi_setup_network_1_label, 7);
    lv_obj_set_width(wifi_setup_network_1_label, 170);
    lv_label_set_text(wifi_setup_network_1_label, selected_network);
    lv_label_set_long_mode(wifi_setup_network_1_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(wifi_setup_network_1_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(wifi_setup_network_1_label, font_inter_11, 0);

    lv_obj_t * wifi_setup_network_2_btn = lv_button_create(wifi_setup_card);
    lv_obj_set_name(wifi_setup_network_2_btn, "wifi_setup_network_2_btn");
    lv_obj_set_x(wifi_setup_network_2_btn, 224);
    lv_obj_set_y(wifi_setup_network_2_btn, 80);
    lv_obj_set_width(wifi_setup_network_2_btn, 196);
    lv_obj_set_height(wifi_setup_network_2_btn, 28);
    lv_obj_set_flag(wifi_setup_network_2_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(wifi_setup_network_2_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(wifi_setup_network_2_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(wifi_setup_network_2_btn, 255, 0);
    lv_obj_set_style_radius(wifi_setup_network_2_btn, 10, 0);
    lv_obj_set_style_border_width(wifi_setup_network_2_btn, 1, 0);
    lv_obj_set_style_border_color(wifi_setup_network_2_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(wifi_setup_network_2_btn, 0, 0);
    lv_obj_set_style_shadow_width(wifi_setup_network_2_btn, 0, 0);
    lv_obj_t * wifi_setup_network_2_label = lv_label_create(wifi_setup_network_2_btn);
    lv_obj_set_name(wifi_setup_network_2_label, "wifi_setup_network_2_label");
    lv_obj_set_x(wifi_setup_network_2_label, 12);
    lv_obj_set_y(wifi_setup_network_2_label, 7);
    lv_obj_set_width(wifi_setup_network_2_label, 170);
    lv_label_set_text(wifi_setup_network_2_label, "Greenhouse_AP");
    lv_label_set_long_mode(wifi_setup_network_2_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(wifi_setup_network_2_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(wifi_setup_network_2_label, font_inter_11, 0);

    lv_obj_t * wifi_setup_divider_2 = lv_obj_create(wifi_setup_card);
    lv_obj_set_name(wifi_setup_divider_2, "wifi_setup_divider_2");
    lv_obj_set_x(wifi_setup_divider_2, 18);
    lv_obj_set_y(wifi_setup_divider_2, 122);
    lv_obj_set_width(wifi_setup_divider_2, 416);
    lv_obj_set_height(wifi_setup_divider_2, 1);
    lv_obj_set_flag(wifi_setup_divider_2, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(wifi_setup_divider_2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(wifi_setup_divider_2, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(wifi_setup_divider_2, 255, 0);
    lv_obj_set_style_border_width(wifi_setup_divider_2, 0, 0);
    lv_obj_set_style_pad_all(wifi_setup_divider_2, 0, 0);

    lv_obj_t * wifi_setup_password_title_label = lv_label_create(wifi_setup_card);
    lv_obj_set_name(wifi_setup_password_title_label, "wifi_setup_password_title_label");
    lv_obj_set_x(wifi_setup_password_title_label, 18);
    lv_obj_set_y(wifi_setup_password_title_label, 138);
    lv_obj_set_width(wifi_setup_password_title_label, 120);
    lv_label_set_text(wifi_setup_password_title_label, "Password");
    lv_label_set_long_mode(wifi_setup_password_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(wifi_setup_password_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(wifi_setup_password_title_label, font_inter_12, 0);

    lv_obj_t * wifi_setup_password_box = lv_obj_create(wifi_setup_card);
    lv_obj_set_name(wifi_setup_password_box, "wifi_setup_password_box");
    lv_obj_set_x(wifi_setup_password_box, 158);
    lv_obj_set_y(wifi_setup_password_box, 132);
    lv_obj_set_width(wifi_setup_password_box, 178);
    lv_obj_set_height(wifi_setup_password_box, 32);
    lv_obj_set_flag(wifi_setup_password_box, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(wifi_setup_password_box, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(wifi_setup_password_box, COLOR_SOFT_SURFACE, 0);
    lv_obj_set_style_bg_opa(wifi_setup_password_box, 255, 0);
    lv_obj_set_style_radius(wifi_setup_password_box, 10, 0);
    lv_obj_set_style_border_width(wifi_setup_password_box, 1, 0);
    lv_obj_set_style_border_color(wifi_setup_password_box, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(wifi_setup_password_box, 0, 0);
    lv_obj_t * wifi_setup_password_value_label = lv_label_create(wifi_setup_password_box);
    lv_obj_set_name(wifi_setup_password_value_label, "wifi_setup_password_value_label");
    lv_obj_set_x(wifi_setup_password_value_label, 12);
    lv_obj_set_y(wifi_setup_password_value_label, 9);
    lv_obj_set_width(wifi_setup_password_value_label, 154);
    lv_label_set_text(wifi_setup_password_value_label, password_text);
    lv_label_set_long_mode(wifi_setup_password_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(wifi_setup_password_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(wifi_setup_password_value_label, font_inter_11, 0);

    lv_obj_t * wifi_setup_password_edit_btn = lv_button_create(wifi_setup_card);
    lv_obj_set_name(wifi_setup_password_edit_btn, "wifi_setup_password_edit_btn");
    lv_obj_set_x(wifi_setup_password_edit_btn, 350);
    lv_obj_set_y(wifi_setup_password_edit_btn, 132);
    lv_obj_set_width(wifi_setup_password_edit_btn, 70);
    lv_obj_set_height(wifi_setup_password_edit_btn, 32);
    lv_obj_set_flag(wifi_setup_password_edit_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(wifi_setup_password_edit_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(wifi_setup_password_edit_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(wifi_setup_password_edit_btn, 255, 0);
    lv_obj_set_style_radius(wifi_setup_password_edit_btn, 10, 0);
    lv_obj_set_style_border_width(wifi_setup_password_edit_btn, 1, 0);
    lv_obj_set_style_border_color(wifi_setup_password_edit_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(wifi_setup_password_edit_btn, 0, 0);
    lv_obj_set_style_shadow_width(wifi_setup_password_edit_btn, 0, 0);
    lv_obj_t * wifi_setup_password_edit_label = lv_label_create(wifi_setup_password_edit_btn);
    lv_obj_set_name(wifi_setup_password_edit_label, "wifi_setup_password_edit_label");
    lv_obj_set_x(wifi_setup_password_edit_label, 0);
    lv_obj_set_y(wifi_setup_password_edit_label, 9);
    lv_obj_set_width(wifi_setup_password_edit_label, 70);
    lv_label_set_text(wifi_setup_password_edit_label, "Edit");
    lv_label_set_long_mode(wifi_setup_password_edit_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(wifi_setup_password_edit_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(wifi_setup_password_edit_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(wifi_setup_password_edit_label, font_inter_11, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

