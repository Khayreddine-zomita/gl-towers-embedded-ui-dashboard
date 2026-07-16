/**
 * @file settings_device_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "settings_device_card_gen.h"
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

lv_obj_t * settings_device_card_create(lv_obj_t * parent, const char * device_name, const char * model_name, const char * serial_number, const char * firmware_version)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "settings_device_card_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 226);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * settings_device_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(settings_device_title_label, "settings_device_title_label");
    lv_obj_set_x(settings_device_title_label, 2);
    lv_obj_set_y(settings_device_title_label, 0);
    lv_obj_set_width(settings_device_title_label, 260);
    lv_label_set_text(settings_device_title_label, "DEVICE");
    lv_label_set_long_mode(settings_device_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_device_title_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(settings_device_title_label, font_inter_14, 0);
    lv_obj_set_style_text_letter_space(settings_device_title_label, 1, 0);

    lv_obj_t * settings_device_info_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(settings_device_info_card, "settings_device_info_card");
    lv_obj_set_x(settings_device_info_card, 0);
    lv_obj_set_y(settings_device_info_card, 24);
    lv_obj_set_width(settings_device_info_card, 452);
    lv_obj_set_height(settings_device_info_card, 108);
    lv_obj_set_flag(settings_device_info_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_device_info_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_device_info_card, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(settings_device_info_card, 255, 0);
    lv_obj_set_style_radius(settings_device_info_card, 16, 0);
    lv_obj_set_style_pad_all(settings_device_info_card, 0, 0);
    lv_obj_set_style_border_width(settings_device_info_card, 1, 0);
    lv_obj_set_style_border_color(settings_device_info_card, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(settings_device_info_card, 8, 0);
    lv_obj_set_style_shadow_opa(settings_device_info_card, 14, 0);
    lv_obj_set_style_shadow_color(settings_device_info_card, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(settings_device_info_card, 3, 0);
    lv_obj_t * settings_device_name_title_label = lv_label_create(settings_device_info_card);
    lv_obj_set_name(settings_device_name_title_label, "settings_device_name_title_label");
    lv_obj_set_x(settings_device_name_title_label, 18);
    lv_obj_set_y(settings_device_name_title_label, 8);
    lv_obj_set_width(settings_device_name_title_label, 150);
    lv_label_set_text(settings_device_name_title_label, "Device name");
    lv_label_set_long_mode(settings_device_name_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_device_name_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_device_name_title_label, font_inter_12, 0);

    lv_obj_t * settings_device_name_value_label = lv_label_create(settings_device_info_card);
    lv_obj_set_name(settings_device_name_value_label, "settings_device_name_value_label");
    lv_obj_set_x(settings_device_name_value_label, 210);
    lv_obj_set_y(settings_device_name_value_label, 8);
    lv_obj_set_width(settings_device_name_value_label, 190);
    lv_label_set_text(settings_device_name_value_label, device_name);
    lv_label_set_long_mode(settings_device_name_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_device_name_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_device_name_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_device_name_value_label, font_inter_12, 0);

    lv_obj_t * settings_device_divider_1 = lv_obj_create(settings_device_info_card);
    lv_obj_set_name(settings_device_divider_1, "settings_device_divider_1");
    lv_obj_set_x(settings_device_divider_1, 18);
    lv_obj_set_y(settings_device_divider_1, 27);
    lv_obj_set_width(settings_device_divider_1, 416);
    lv_obj_set_height(settings_device_divider_1, 1);
    lv_obj_set_flag(settings_device_divider_1, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_device_divider_1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_device_divider_1, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(settings_device_divider_1, 255, 0);
    lv_obj_set_style_border_width(settings_device_divider_1, 0, 0);
    lv_obj_set_style_pad_all(settings_device_divider_1, 0, 0);

    lv_obj_t * settings_device_model_title_label = lv_label_create(settings_device_info_card);
    lv_obj_set_name(settings_device_model_title_label, "settings_device_model_title_label");
    lv_obj_set_x(settings_device_model_title_label, 18);
    lv_obj_set_y(settings_device_model_title_label, 35);
    lv_obj_set_width(settings_device_model_title_label, 150);
    lv_label_set_text(settings_device_model_title_label, "Model");
    lv_label_set_long_mode(settings_device_model_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_device_model_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_device_model_title_label, font_inter_12, 0);

    lv_obj_t * settings_device_model_value_label = lv_label_create(settings_device_info_card);
    lv_obj_set_name(settings_device_model_value_label, "settings_device_model_value_label");
    lv_obj_set_x(settings_device_model_value_label, 210);
    lv_obj_set_y(settings_device_model_value_label, 35);
    lv_obj_set_width(settings_device_model_value_label, 190);
    lv_label_set_text(settings_device_model_value_label, model_name);
    lv_label_set_long_mode(settings_device_model_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_device_model_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_device_model_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_device_model_value_label, font_inter_12, 0);

    lv_obj_t * settings_device_divider_2 = lv_obj_create(settings_device_info_card);
    lv_obj_set_name(settings_device_divider_2, "settings_device_divider_2");
    lv_obj_set_x(settings_device_divider_2, 18);
    lv_obj_set_y(settings_device_divider_2, 54);
    lv_obj_set_width(settings_device_divider_2, 416);
    lv_obj_set_height(settings_device_divider_2, 1);
    lv_obj_set_flag(settings_device_divider_2, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_device_divider_2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_device_divider_2, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(settings_device_divider_2, 255, 0);
    lv_obj_set_style_border_width(settings_device_divider_2, 0, 0);
    lv_obj_set_style_pad_all(settings_device_divider_2, 0, 0);

    lv_obj_t * settings_device_serial_title_label = lv_label_create(settings_device_info_card);
    lv_obj_set_name(settings_device_serial_title_label, "settings_device_serial_title_label");
    lv_obj_set_x(settings_device_serial_title_label, 18);
    lv_obj_set_y(settings_device_serial_title_label, 62);
    lv_obj_set_width(settings_device_serial_title_label, 150);
    lv_label_set_text(settings_device_serial_title_label, "Serial");
    lv_label_set_long_mode(settings_device_serial_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_device_serial_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_device_serial_title_label, font_inter_12, 0);

    lv_obj_t * settings_device_serial_value_label = lv_label_create(settings_device_info_card);
    lv_obj_set_name(settings_device_serial_value_label, "settings_device_serial_value_label");
    lv_obj_set_x(settings_device_serial_value_label, 210);
    lv_obj_set_y(settings_device_serial_value_label, 62);
    lv_obj_set_width(settings_device_serial_value_label, 190);
    lv_label_set_text(settings_device_serial_value_label, serial_number);
    lv_label_set_long_mode(settings_device_serial_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_device_serial_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_device_serial_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_device_serial_value_label, font_inter_12, 0);

    lv_obj_t * settings_device_divider_3 = lv_obj_create(settings_device_info_card);
    lv_obj_set_name(settings_device_divider_3, "settings_device_divider_3");
    lv_obj_set_x(settings_device_divider_3, 18);
    lv_obj_set_y(settings_device_divider_3, 81);
    lv_obj_set_width(settings_device_divider_3, 416);
    lv_obj_set_height(settings_device_divider_3, 1);
    lv_obj_set_flag(settings_device_divider_3, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_device_divider_3, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_device_divider_3, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(settings_device_divider_3, 255, 0);
    lv_obj_set_style_border_width(settings_device_divider_3, 0, 0);
    lv_obj_set_style_pad_all(settings_device_divider_3, 0, 0);

    lv_obj_t * settings_device_firmware_title_label = lv_label_create(settings_device_info_card);
    lv_obj_set_name(settings_device_firmware_title_label, "settings_device_firmware_title_label");
    lv_obj_set_x(settings_device_firmware_title_label, 18);
    lv_obj_set_y(settings_device_firmware_title_label, 89);
    lv_obj_set_width(settings_device_firmware_title_label, 150);
    lv_label_set_text(settings_device_firmware_title_label, "Firmware");
    lv_label_set_long_mode(settings_device_firmware_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_device_firmware_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_device_firmware_title_label, font_inter_12, 0);

    lv_obj_t * settings_device_firmware_value_label = lv_label_create(settings_device_info_card);
    lv_obj_set_name(settings_device_firmware_value_label, "settings_device_firmware_value_label");
    lv_obj_set_x(settings_device_firmware_value_label, 210);
    lv_obj_set_y(settings_device_firmware_value_label, 89);
    lv_obj_set_width(settings_device_firmware_value_label, 190);
    lv_label_set_text(settings_device_firmware_value_label, firmware_version);
    lv_label_set_long_mode(settings_device_firmware_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_device_firmware_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_device_firmware_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_device_firmware_value_label, font_inter_12, 0);

    lv_obj_t * settings_device_display_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(settings_device_display_card, "settings_device_display_card");
    lv_obj_set_x(settings_device_display_card, 0);
    lv_obj_set_y(settings_device_display_card, 144);
    lv_obj_set_width(settings_device_display_card, 452);
    lv_obj_set_height(settings_device_display_card, 82);
    lv_obj_set_flag(settings_device_display_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_device_display_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_device_display_card, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(settings_device_display_card, 255, 0);
    lv_obj_set_style_radius(settings_device_display_card, 16, 0);
    lv_obj_set_style_pad_all(settings_device_display_card, 0, 0);
    lv_obj_set_style_border_width(settings_device_display_card, 1, 0);
    lv_obj_set_style_border_color(settings_device_display_card, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(settings_device_display_card, 8, 0);
    lv_obj_set_style_shadow_opa(settings_device_display_card, 14, 0);
    lv_obj_set_style_shadow_color(settings_device_display_card, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(settings_device_display_card, 3, 0);
    lv_obj_t * settings_device_display_title_label = lv_label_create(settings_device_display_card);
    lv_obj_set_name(settings_device_display_title_label, "settings_device_display_title_label");
    lv_obj_set_x(settings_device_display_title_label, 18);
    lv_obj_set_y(settings_device_display_title_label, 8);
    lv_obj_set_width(settings_device_display_title_label, 120);
    lv_label_set_text(settings_device_display_title_label, "DISPLAY");
    lv_label_set_long_mode(settings_device_display_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_device_display_title_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_device_display_title_label, font_inter_10, 0);
    lv_obj_set_style_text_letter_space(settings_device_display_title_label, 1, 0);

    lv_obj_t * settings_device_brightness_title_label = lv_label_create(settings_device_display_card);
    lv_obj_set_name(settings_device_brightness_title_label, "settings_device_brightness_title_label");
    lv_obj_set_x(settings_device_brightness_title_label, 18);
    lv_obj_set_y(settings_device_brightness_title_label, 31);
    lv_obj_set_width(settings_device_brightness_title_label, 120);
    lv_label_set_text(settings_device_brightness_title_label, "Brightness");
    lv_label_set_long_mode(settings_device_brightness_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_device_brightness_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_device_brightness_title_label, font_inter_12, 0);

    lv_obj_t * settings_device_brightness_slider = lv_slider_create(settings_device_display_card);
    lv_obj_set_name(settings_device_brightness_slider, "settings_device_brightness_slider");
    lv_obj_set_x(settings_device_brightness_slider, 164);
    lv_obj_set_y(settings_device_brightness_slider, 36);
    lv_obj_set_width(settings_device_brightness_slider, 238);
    lv_obj_set_height(settings_device_brightness_slider, 8);
    lv_slider_set_value(settings_device_brightness_slider, 80, false);
    lv_obj_set_flag(settings_device_brightness_slider, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_device_brightness_slider, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_device_brightness_slider, COLOR_DIVIDER, LV_PART_INDICATOR | LV_PART_KNOB);
    lv_obj_set_style_bg_opa(settings_device_brightness_slider, 255, LV_PART_INDICATOR | LV_PART_KNOB);
    lv_obj_set_style_radius(settings_device_brightness_slider, 4, LV_PART_INDICATOR | LV_PART_KNOB);
    lv_obj_set_style_border_width(settings_device_brightness_slider, 0, LV_PART_KNOB);
    lv_obj_set_style_pad_all(settings_device_brightness_slider, 0, 0);
    lv_obj_set_style_border_color(settings_device_brightness_slider, COLOR_PRIMARY_GREEN, LV_PART_KNOB);

    lv_obj_t * settings_device_display_divider_1 = lv_obj_create(settings_device_display_card);
    lv_obj_set_name(settings_device_display_divider_1, "settings_device_display_divider_1");
    lv_obj_set_x(settings_device_display_divider_1, 18);
    lv_obj_set_y(settings_device_display_divider_1, 52);
    lv_obj_set_width(settings_device_display_divider_1, 416);
    lv_obj_set_height(settings_device_display_divider_1, 1);
    lv_obj_set_flag(settings_device_display_divider_1, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_device_display_divider_1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_device_display_divider_1, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(settings_device_display_divider_1, 255, 0);
    lv_obj_set_style_border_width(settings_device_display_divider_1, 0, 0);
    lv_obj_set_style_pad_all(settings_device_display_divider_1, 0, 0);

    lv_obj_t * settings_device_timeout_title_label = lv_label_create(settings_device_display_card);
    lv_obj_set_name(settings_device_timeout_title_label, "settings_device_timeout_title_label");
    lv_obj_set_x(settings_device_timeout_title_label, 18);
    lv_obj_set_y(settings_device_timeout_title_label, 63);
    lv_obj_set_width(settings_device_timeout_title_label, 150);
    lv_label_set_text(settings_device_timeout_title_label, "Screen timeout");
    lv_label_set_long_mode(settings_device_timeout_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_device_timeout_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_device_timeout_title_label, font_inter_12, 0);

    lv_obj_t * settings_device_timeout_dropdown = lv_dropdown_create(settings_device_display_card);
    lv_obj_set_name(settings_device_timeout_dropdown, "settings_device_timeout_dropdown");
    lv_obj_set_x(settings_device_timeout_dropdown, 282);
    lv_obj_set_y(settings_device_timeout_dropdown, 56);
    lv_obj_set_width(settings_device_timeout_dropdown, 120);
    lv_obj_set_height(settings_device_timeout_dropdown, 25);
    lv_dropdown_set_options(settings_device_timeout_dropdown, "30 sec\n60 sec\n120 sec\nNever");
    lv_dropdown_set_selected(settings_device_timeout_dropdown, 0);
    lv_dropdown_set_symbol(settings_device_timeout_dropdown, img_simple_chevron_icon_1);
    lv_obj_set_flag(settings_device_timeout_dropdown, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_device_timeout_dropdown, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_device_timeout_dropdown, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_bg_opa(settings_device_timeout_dropdown, 255, 0);
    lv_obj_set_style_radius(settings_device_timeout_dropdown, 8, 0);
    lv_obj_set_style_border_width(settings_device_timeout_dropdown, 0, 0);
    lv_obj_set_style_pad_left(settings_device_timeout_dropdown, 10, 0);
    lv_obj_set_style_pad_right(settings_device_timeout_dropdown, 8, 0);
    lv_obj_set_style_text_color(settings_device_timeout_dropdown, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(settings_device_timeout_dropdown, font_inter_11, 0);
    lv_obj_set_style_image_recolor(settings_device_timeout_dropdown, COLOR_WHITE, LV_PART_INDICATOR);
    lv_obj_set_style_image_recolor_opa(settings_device_timeout_dropdown, 255, LV_PART_INDICATOR);
    lv_obj_set_style_transform_rotation(settings_device_timeout_dropdown, -900, LV_PART_INDICATOR);
    lv_obj_set_style_transform_pivot_x(settings_device_timeout_dropdown, 8, LV_PART_INDICATOR);
    lv_obj_set_style_transform_pivot_y(settings_device_timeout_dropdown, 8, LV_PART_INDICATOR);
    lv_obj_t * lv_dropdown_list_0 = lv_dropdown_get_list(settings_device_timeout_dropdown);
    lv_obj_set_style_bg_color(lv_dropdown_list_0, COLOR_CARD_BG, LV_PART_SELECTED);
    lv_obj_set_style_bg_opa(lv_dropdown_list_0, 255, LV_PART_SELECTED);
    lv_obj_set_style_radius(lv_dropdown_list_0, 10, 0);
    lv_obj_set_style_border_width(lv_dropdown_list_0, 1, 0);
    lv_obj_set_style_border_color(lv_dropdown_list_0, COLOR_DIVIDER, 0);
    lv_obj_set_style_text_color(lv_dropdown_list_0, COLOR_TEXT_PRIMARY, LV_PART_SELECTED);
    lv_obj_set_style_text_font(lv_dropdown_list_0, font_inter_11, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

