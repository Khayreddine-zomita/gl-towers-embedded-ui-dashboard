/**
 * @file settings_firmware_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "settings_firmware_card_gen.h"
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

lv_obj_t * settings_firmware_card_create(lv_obj_t * parent, const char * current_version, const char * latest_version, const char * update_status, const char * last_checked)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "settings_firmware_card_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 217);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * settings_firmware_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(settings_firmware_title_label, "settings_firmware_title_label");
    lv_obj_set_x(settings_firmware_title_label, 2);
    lv_obj_set_y(settings_firmware_title_label, 0);
    lv_obj_set_width(settings_firmware_title_label, 260);
    lv_label_set_text(settings_firmware_title_label, "FIRMWARE");
    lv_label_set_long_mode(settings_firmware_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_firmware_title_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(settings_firmware_title_label, font_inter_14, 0);
    lv_obj_set_style_text_letter_space(settings_firmware_title_label, 1, 0);

    lv_obj_t * settings_firmware_subtitle_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(settings_firmware_subtitle_label, "settings_firmware_subtitle_label");
    lv_obj_set_x(settings_firmware_subtitle_label, 250);
    lv_obj_set_y(settings_firmware_subtitle_label, 2);
    lv_obj_set_width(settings_firmware_subtitle_label, 198);
    lv_label_set_text(settings_firmware_subtitle_label, "OTA update");
    lv_label_set_long_mode(settings_firmware_subtitle_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_firmware_subtitle_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_firmware_subtitle_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_firmware_subtitle_label, font_inter_11, 0);

    lv_obj_t * settings_firmware_info_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(settings_firmware_info_card, "settings_firmware_info_card");
    lv_obj_set_x(settings_firmware_info_card, 0);
    lv_obj_set_y(settings_firmware_info_card, 35);
    lv_obj_set_width(settings_firmware_info_card, 452);
    lv_obj_set_height(settings_firmware_info_card, 146);
    lv_obj_set_flag(settings_firmware_info_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_firmware_info_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_firmware_info_card, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(settings_firmware_info_card, 255, 0);
    lv_obj_set_style_radius(settings_firmware_info_card, 18, 0);
    lv_obj_set_style_pad_all(settings_firmware_info_card, 0, 0);
    lv_obj_set_style_border_width(settings_firmware_info_card, 2, 0);
    lv_obj_set_style_border_color(settings_firmware_info_card, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(settings_firmware_info_card, 8, 0);
    lv_obj_set_style_shadow_opa(settings_firmware_info_card, 16, 0);
    lv_obj_set_style_shadow_color(settings_firmware_info_card, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(settings_firmware_info_card, 3, 0);
    lv_obj_t * settings_firmware_current_title_label = lv_label_create(settings_firmware_info_card);
    lv_obj_set_name(settings_firmware_current_title_label, "settings_firmware_current_title_label");
    lv_obj_set_x(settings_firmware_current_title_label, 18);
    lv_obj_set_y(settings_firmware_current_title_label, 12);
    lv_obj_set_width(settings_firmware_current_title_label, 170);
    lv_label_set_text(settings_firmware_current_title_label, "Current version");
    lv_label_set_long_mode(settings_firmware_current_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_firmware_current_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_firmware_current_title_label, font_inter_12, 0);

    lv_obj_t * settings_firmware_current_value_label = lv_label_create(settings_firmware_info_card);
    lv_obj_set_name(settings_firmware_current_value_label, "settings_firmware_current_value_label");
    lv_obj_set_x(settings_firmware_current_value_label, 260);
    lv_obj_set_y(settings_firmware_current_value_label, 12);
    lv_obj_set_width(settings_firmware_current_value_label, 150);
    lv_label_set_text(settings_firmware_current_value_label, current_version);
    lv_label_set_long_mode(settings_firmware_current_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_firmware_current_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_firmware_current_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_firmware_current_value_label, font_inter_11, 0);

    lv_obj_t * settings_firmware_divider_1 = lv_obj_create(settings_firmware_info_card);
    lv_obj_set_name(settings_firmware_divider_1, "settings_firmware_divider_1");
    lv_obj_set_x(settings_firmware_divider_1, 18);
    lv_obj_set_y(settings_firmware_divider_1, 36);
    lv_obj_set_width(settings_firmware_divider_1, 416);
    lv_obj_set_height(settings_firmware_divider_1, 1);
    lv_obj_set_flag(settings_firmware_divider_1, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_firmware_divider_1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_firmware_divider_1, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(settings_firmware_divider_1, 255, 0);
    lv_obj_set_style_border_width(settings_firmware_divider_1, 0, 0);
    lv_obj_set_style_pad_all(settings_firmware_divider_1, 0, 0);

    lv_obj_t * settings_firmware_latest_title_label = lv_label_create(settings_firmware_info_card);
    lv_obj_set_name(settings_firmware_latest_title_label, "settings_firmware_latest_title_label");
    lv_obj_set_x(settings_firmware_latest_title_label, 18);
    lv_obj_set_y(settings_firmware_latest_title_label, 48);
    lv_obj_set_width(settings_firmware_latest_title_label, 170);
    lv_label_set_text(settings_firmware_latest_title_label, "Latest version");
    lv_label_set_long_mode(settings_firmware_latest_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_firmware_latest_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_firmware_latest_title_label, font_inter_12, 0);

    lv_obj_t * settings_firmware_latest_value_label = lv_label_create(settings_firmware_info_card);
    lv_obj_set_name(settings_firmware_latest_value_label, "settings_firmware_latest_value_label");
    lv_obj_set_x(settings_firmware_latest_value_label, 260);
    lv_obj_set_y(settings_firmware_latest_value_label, 48);
    lv_obj_set_width(settings_firmware_latest_value_label, 150);
    lv_label_set_text(settings_firmware_latest_value_label, latest_version);
    lv_label_set_long_mode(settings_firmware_latest_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_firmware_latest_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_firmware_latest_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_firmware_latest_value_label, font_inter_11, 0);

    lv_obj_t * settings_firmware_divider_2 = lv_obj_create(settings_firmware_info_card);
    lv_obj_set_name(settings_firmware_divider_2, "settings_firmware_divider_2");
    lv_obj_set_x(settings_firmware_divider_2, 18);
    lv_obj_set_y(settings_firmware_divider_2, 72);
    lv_obj_set_width(settings_firmware_divider_2, 416);
    lv_obj_set_height(settings_firmware_divider_2, 1);
    lv_obj_set_flag(settings_firmware_divider_2, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_firmware_divider_2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_firmware_divider_2, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(settings_firmware_divider_2, 255, 0);
    lv_obj_set_style_border_width(settings_firmware_divider_2, 0, 0);
    lv_obj_set_style_pad_all(settings_firmware_divider_2, 0, 0);

    lv_obj_t * settings_firmware_status_title_label = lv_label_create(settings_firmware_info_card);
    lv_obj_set_name(settings_firmware_status_title_label, "settings_firmware_status_title_label");
    lv_obj_set_x(settings_firmware_status_title_label, 18);
    lv_obj_set_y(settings_firmware_status_title_label, 84);
    lv_obj_set_width(settings_firmware_status_title_label, 170);
    lv_label_set_text(settings_firmware_status_title_label, "Update status");
    lv_label_set_long_mode(settings_firmware_status_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_firmware_status_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_firmware_status_title_label, font_inter_12, 0);

    lv_obj_t * settings_firmware_status_value_label = lv_label_create(settings_firmware_info_card);
    lv_obj_set_name(settings_firmware_status_value_label, "settings_firmware_status_value_label");
    lv_obj_set_x(settings_firmware_status_value_label, 230);
    lv_obj_set_y(settings_firmware_status_value_label, 84);
    lv_obj_set_width(settings_firmware_status_value_label, 180);
    lv_label_set_text(settings_firmware_status_value_label, update_status);
    lv_label_set_long_mode(settings_firmware_status_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_firmware_status_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_firmware_status_value_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(settings_firmware_status_value_label, font_inter_11, 0);

    lv_obj_t * settings_firmware_divider_3 = lv_obj_create(settings_firmware_info_card);
    lv_obj_set_name(settings_firmware_divider_3, "settings_firmware_divider_3");
    lv_obj_set_x(settings_firmware_divider_3, 18);
    lv_obj_set_y(settings_firmware_divider_3, 108);
    lv_obj_set_width(settings_firmware_divider_3, 416);
    lv_obj_set_height(settings_firmware_divider_3, 1);
    lv_obj_set_flag(settings_firmware_divider_3, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_firmware_divider_3, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_firmware_divider_3, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(settings_firmware_divider_3, 255, 0);
    lv_obj_set_style_border_width(settings_firmware_divider_3, 0, 0);
    lv_obj_set_style_pad_all(settings_firmware_divider_3, 0, 0);

    lv_obj_t * settings_firmware_checked_title_label = lv_label_create(settings_firmware_info_card);
    lv_obj_set_name(settings_firmware_checked_title_label, "settings_firmware_checked_title_label");
    lv_obj_set_x(settings_firmware_checked_title_label, 18);
    lv_obj_set_y(settings_firmware_checked_title_label, 120);
    lv_obj_set_width(settings_firmware_checked_title_label, 170);
    lv_label_set_text(settings_firmware_checked_title_label, "Last checked");
    lv_label_set_long_mode(settings_firmware_checked_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_firmware_checked_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_firmware_checked_title_label, font_inter_12, 0);

    lv_obj_t * settings_firmware_checked_value_label = lv_label_create(settings_firmware_info_card);
    lv_obj_set_name(settings_firmware_checked_value_label, "settings_firmware_checked_value_label");
    lv_obj_set_x(settings_firmware_checked_value_label, 230);
    lv_obj_set_y(settings_firmware_checked_value_label, 120);
    lv_obj_set_width(settings_firmware_checked_value_label, 180);
    lv_label_set_text(settings_firmware_checked_value_label, last_checked);
    lv_label_set_long_mode(settings_firmware_checked_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_firmware_checked_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_firmware_checked_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_firmware_checked_value_label, font_inter_11, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

