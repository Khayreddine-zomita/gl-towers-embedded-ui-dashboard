/**
 * @file settings_wlan_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "settings_wlan_card_gen.h"
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

lv_obj_t * settings_wlan_card_create(lv_obj_t * parent, const char * network_name, const char * connection_status, const char * signal_strength, const char * ip_address)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "settings_wlan_card_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 206);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * settings_wlan_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(settings_wlan_title_label, "settings_wlan_title_label");
    lv_obj_set_x(settings_wlan_title_label, 2);
    lv_obj_set_y(settings_wlan_title_label, 0);
    lv_obj_set_width(settings_wlan_title_label, 260);
    lv_label_set_text(settings_wlan_title_label, "WLAN");
    lv_label_set_long_mode(settings_wlan_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_wlan_title_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(settings_wlan_title_label, font_inter_14, 0);
    lv_obj_set_style_text_letter_space(settings_wlan_title_label, 1, 0);

    lv_obj_t * settings_wlan_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(settings_wlan_card, "settings_wlan_card");
    lv_obj_set_x(settings_wlan_card, 0);
    lv_obj_set_y(settings_wlan_card, 24);
    lv_obj_set_width(settings_wlan_card, 452);
    lv_obj_set_height(settings_wlan_card, 182);
    lv_obj_set_flag(settings_wlan_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_wlan_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_wlan_card, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(settings_wlan_card, 255, 0);
    lv_obj_set_style_radius(settings_wlan_card, 18, 0);
    lv_obj_set_style_pad_all(settings_wlan_card, 0, 0);
    lv_obj_set_style_border_width(settings_wlan_card, 1, 0);
    lv_obj_set_style_border_color(settings_wlan_card, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(settings_wlan_card, 8, 0);
    lv_obj_set_style_shadow_opa(settings_wlan_card, 16, 0);
    lv_obj_set_style_shadow_color(settings_wlan_card, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(settings_wlan_card, 3, 0);
    lv_obj_t * settings_wlan_network_title_label = lv_label_create(settings_wlan_card);
    lv_obj_set_name(settings_wlan_network_title_label, "settings_wlan_network_title_label");
    lv_obj_set_x(settings_wlan_network_title_label, 18);
    lv_obj_set_y(settings_wlan_network_title_label, 12);
    lv_obj_set_width(settings_wlan_network_title_label, 160);
    lv_label_set_text(settings_wlan_network_title_label, "Network");
    lv_label_set_long_mode(settings_wlan_network_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_wlan_network_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_wlan_network_title_label, font_inter_12, 0);

    lv_obj_t * settings_wlan_network_value_label = lv_label_create(settings_wlan_card);
    lv_obj_set_name(settings_wlan_network_value_label, "settings_wlan_network_value_label");
    lv_obj_set_x(settings_wlan_network_value_label, 210);
    lv_obj_set_y(settings_wlan_network_value_label, 12);
    lv_obj_set_width(settings_wlan_network_value_label, 190);
    lv_label_set_text(settings_wlan_network_value_label, network_name);
    lv_label_set_long_mode(settings_wlan_network_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_wlan_network_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_wlan_network_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_wlan_network_value_label, font_inter_12, 0);

    lv_obj_t * settings_wlan_divider_1 = lv_obj_create(settings_wlan_card);
    lv_obj_set_name(settings_wlan_divider_1, "settings_wlan_divider_1");
    lv_obj_set_x(settings_wlan_divider_1, 18);
    lv_obj_set_y(settings_wlan_divider_1, 38);
    lv_obj_set_width(settings_wlan_divider_1, 416);
    lv_obj_set_height(settings_wlan_divider_1, 1);
    lv_obj_set_flag(settings_wlan_divider_1, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_wlan_divider_1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_wlan_divider_1, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(settings_wlan_divider_1, 255, 0);
    lv_obj_set_style_border_width(settings_wlan_divider_1, 0, 0);
    lv_obj_set_style_pad_all(settings_wlan_divider_1, 0, 0);

    lv_obj_t * settings_wlan_status_title_label = lv_label_create(settings_wlan_card);
    lv_obj_set_name(settings_wlan_status_title_label, "settings_wlan_status_title_label");
    lv_obj_set_x(settings_wlan_status_title_label, 18);
    lv_obj_set_y(settings_wlan_status_title_label, 52);
    lv_obj_set_width(settings_wlan_status_title_label, 160);
    lv_label_set_text(settings_wlan_status_title_label, "Status");
    lv_label_set_long_mode(settings_wlan_status_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_wlan_status_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_wlan_status_title_label, font_inter_12, 0);

    lv_obj_t * settings_wlan_status_value_label = lv_label_create(settings_wlan_card);
    lv_obj_set_name(settings_wlan_status_value_label, "settings_wlan_status_value_label");
    lv_obj_set_x(settings_wlan_status_value_label, 210);
    lv_obj_set_y(settings_wlan_status_value_label, 52);
    lv_obj_set_width(settings_wlan_status_value_label, 190);
    lv_label_set_text(settings_wlan_status_value_label, connection_status);
    lv_label_set_long_mode(settings_wlan_status_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_wlan_status_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_wlan_status_value_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(settings_wlan_status_value_label, font_inter_12, 0);

    lv_obj_t * settings_wlan_divider_2 = lv_obj_create(settings_wlan_card);
    lv_obj_set_name(settings_wlan_divider_2, "settings_wlan_divider_2");
    lv_obj_set_x(settings_wlan_divider_2, 18);
    lv_obj_set_y(settings_wlan_divider_2, 78);
    lv_obj_set_width(settings_wlan_divider_2, 416);
    lv_obj_set_height(settings_wlan_divider_2, 1);
    lv_obj_set_flag(settings_wlan_divider_2, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_wlan_divider_2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_wlan_divider_2, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(settings_wlan_divider_2, 255, 0);
    lv_obj_set_style_border_width(settings_wlan_divider_2, 0, 0);
    lv_obj_set_style_pad_all(settings_wlan_divider_2, 0, 0);

    lv_obj_t * settings_wlan_signal_title_label = lv_label_create(settings_wlan_card);
    lv_obj_set_name(settings_wlan_signal_title_label, "settings_wlan_signal_title_label");
    lv_obj_set_x(settings_wlan_signal_title_label, 18);
    lv_obj_set_y(settings_wlan_signal_title_label, 92);
    lv_obj_set_width(settings_wlan_signal_title_label, 160);
    lv_label_set_text(settings_wlan_signal_title_label, "Signal");
    lv_label_set_long_mode(settings_wlan_signal_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_wlan_signal_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_wlan_signal_title_label, font_inter_12, 0);

    lv_obj_t * settings_wlan_signal_value_label = lv_label_create(settings_wlan_card);
    lv_obj_set_name(settings_wlan_signal_value_label, "settings_wlan_signal_value_label");
    lv_obj_set_x(settings_wlan_signal_value_label, 210);
    lv_obj_set_y(settings_wlan_signal_value_label, 92);
    lv_obj_set_width(settings_wlan_signal_value_label, 190);
    lv_label_set_text(settings_wlan_signal_value_label, signal_strength);
    lv_label_set_long_mode(settings_wlan_signal_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_wlan_signal_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_wlan_signal_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_wlan_signal_value_label, font_inter_12, 0);

    lv_obj_t * settings_wlan_divider_3 = lv_obj_create(settings_wlan_card);
    lv_obj_set_name(settings_wlan_divider_3, "settings_wlan_divider_3");
    lv_obj_set_x(settings_wlan_divider_3, 18);
    lv_obj_set_y(settings_wlan_divider_3, 118);
    lv_obj_set_width(settings_wlan_divider_3, 416);
    lv_obj_set_height(settings_wlan_divider_3, 1);
    lv_obj_set_flag(settings_wlan_divider_3, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_wlan_divider_3, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_wlan_divider_3, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(settings_wlan_divider_3, 255, 0);
    lv_obj_set_style_border_width(settings_wlan_divider_3, 0, 0);
    lv_obj_set_style_pad_all(settings_wlan_divider_3, 0, 0);

    lv_obj_t * settings_wlan_ip_title_label = lv_label_create(settings_wlan_card);
    lv_obj_set_name(settings_wlan_ip_title_label, "settings_wlan_ip_title_label");
    lv_obj_set_x(settings_wlan_ip_title_label, 18);
    lv_obj_set_y(settings_wlan_ip_title_label, 132);
    lv_obj_set_width(settings_wlan_ip_title_label, 160);
    lv_label_set_text(settings_wlan_ip_title_label, "IP address");
    lv_label_set_long_mode(settings_wlan_ip_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_wlan_ip_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_wlan_ip_title_label, font_inter_12, 0);

    lv_obj_t * settings_wlan_ip_value_label = lv_label_create(settings_wlan_card);
    lv_obj_set_name(settings_wlan_ip_value_label, "settings_wlan_ip_value_label");
    lv_obj_set_x(settings_wlan_ip_value_label, 210);
    lv_obj_set_y(settings_wlan_ip_value_label, 132);
    lv_obj_set_width(settings_wlan_ip_value_label, 190);
    lv_label_set_text(settings_wlan_ip_value_label, ip_address);
    lv_label_set_long_mode(settings_wlan_ip_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_wlan_ip_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_wlan_ip_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_wlan_ip_value_label, font_inter_12, 0);

    lv_obj_t * settings_wlan_reconnect_btn = lv_button_create(settings_wlan_card);
    lv_obj_set_name(settings_wlan_reconnect_btn, "settings_wlan_reconnect_btn");
    lv_obj_set_x(settings_wlan_reconnect_btn, 18);
    lv_obj_set_y(settings_wlan_reconnect_btn, 154);
    lv_obj_set_width(settings_wlan_reconnect_btn, 128);
    lv_obj_set_height(settings_wlan_reconnect_btn, 24);
    lv_obj_set_flag(settings_wlan_reconnect_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_wlan_reconnect_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_wlan_reconnect_btn, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_bg_opa(settings_wlan_reconnect_btn, 180, 0);
    lv_obj_set_style_radius(settings_wlan_reconnect_btn, 10, 0);
    lv_obj_set_style_border_width(settings_wlan_reconnect_btn, 1, 0);
    lv_obj_set_style_border_color(settings_wlan_reconnect_btn, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_pad_all(settings_wlan_reconnect_btn, 0, 0);
    lv_obj_set_style_shadow_width(settings_wlan_reconnect_btn, 0, 0);
    lv_obj_t * settings_wlan_reconnect_label = lv_label_create(settings_wlan_reconnect_btn);
    lv_obj_set_name(settings_wlan_reconnect_label, "settings_wlan_reconnect_label");
    lv_obj_set_x(settings_wlan_reconnect_label, 0);
    lv_obj_set_y(settings_wlan_reconnect_label, 6);
    lv_obj_set_width(settings_wlan_reconnect_label, 128);
    lv_label_set_text(settings_wlan_reconnect_label, "Reconnect");
    lv_label_set_long_mode(settings_wlan_reconnect_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_wlan_reconnect_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(settings_wlan_reconnect_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(settings_wlan_reconnect_label, font_inter_11, 0);

    lv_obj_t * settings_wlan_change_network_btn = lv_button_create(settings_wlan_card);
    lv_obj_set_name(settings_wlan_change_network_btn, "settings_wlan_change_network_btn");
    lv_obj_set_x(settings_wlan_change_network_btn, 162);
    lv_obj_set_y(settings_wlan_change_network_btn, 154);
    lv_obj_set_width(settings_wlan_change_network_btn, 128);
    lv_obj_set_height(settings_wlan_change_network_btn, 24);
    lv_obj_set_flag(settings_wlan_change_network_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_wlan_change_network_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_wlan_change_network_btn, COLOR_WATER_TEMP_BG, 0);
    lv_obj_set_style_bg_opa(settings_wlan_change_network_btn, 120, 0);
    lv_obj_set_style_radius(settings_wlan_change_network_btn, 10, 0);
    lv_obj_set_style_border_width(settings_wlan_change_network_btn, 1, 0);
    lv_obj_set_style_border_color(settings_wlan_change_network_btn, COLOR_STATUS_INFO, 0);
    lv_obj_set_style_pad_all(settings_wlan_change_network_btn, 0, 0);
    lv_obj_set_style_shadow_width(settings_wlan_change_network_btn, 0, 0);
    lv_obj_t * settings_wlan_change_network_label = lv_label_create(settings_wlan_change_network_btn);
    lv_obj_set_name(settings_wlan_change_network_label, "settings_wlan_change_network_label");
    lv_obj_set_x(settings_wlan_change_network_label, 0);
    lv_obj_set_y(settings_wlan_change_network_label, 6);
    lv_obj_set_width(settings_wlan_change_network_label, 128);
    lv_label_set_text(settings_wlan_change_network_label, "Change");
    lv_label_set_long_mode(settings_wlan_change_network_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_wlan_change_network_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(settings_wlan_change_network_label, COLOR_STATUS_INFO, 0);
    lv_obj_set_style_text_font(settings_wlan_change_network_label, font_inter_11, 0);

    lv_obj_t * settings_wlan_forget_btn = lv_button_create(settings_wlan_card);
    lv_obj_set_name(settings_wlan_forget_btn, "settings_wlan_forget_btn");
    lv_obj_set_x(settings_wlan_forget_btn, 306);
    lv_obj_set_y(settings_wlan_forget_btn, 154);
    lv_obj_set_width(settings_wlan_forget_btn, 128);
    lv_obj_set_height(settings_wlan_forget_btn, 24);
    lv_obj_set_flag(settings_wlan_forget_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_wlan_forget_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_wlan_forget_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(settings_wlan_forget_btn, 255, 0);
    lv_obj_set_style_radius(settings_wlan_forget_btn, 10, 0);
    lv_obj_set_style_border_width(settings_wlan_forget_btn, 1, 0);
    lv_obj_set_style_border_color(settings_wlan_forget_btn, COLOR_ALERT_RED, 0);
    lv_obj_set_style_pad_all(settings_wlan_forget_btn, 0, 0);
    lv_obj_set_style_shadow_width(settings_wlan_forget_btn, 0, 0);
    lv_obj_t * settings_wlan_forget_label = lv_label_create(settings_wlan_forget_btn);
    lv_obj_set_name(settings_wlan_forget_label, "settings_wlan_forget_label");
    lv_obj_set_x(settings_wlan_forget_label, 0);
    lv_obj_set_y(settings_wlan_forget_label, 6);
    lv_obj_set_width(settings_wlan_forget_label, 128);
    lv_label_set_text(settings_wlan_forget_label, "Forget");
    lv_label_set_long_mode(settings_wlan_forget_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_wlan_forget_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(settings_wlan_forget_label, COLOR_ALERT_RED, 0);
    lv_obj_set_style_text_font(settings_wlan_forget_label, font_inter_11, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

