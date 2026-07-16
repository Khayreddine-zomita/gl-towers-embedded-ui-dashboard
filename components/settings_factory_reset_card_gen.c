/**
 * @file settings_factory_reset_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "settings_factory_reset_card_gen.h"
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

lv_obj_t * settings_factory_reset_card_create(lv_obj_t * parent, const char * reset_status)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "settings_factory_reset_card_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 217);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * settings_factory_reset_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(settings_factory_reset_title_label, "settings_factory_reset_title_label");
    lv_obj_set_x(settings_factory_reset_title_label, 2);
    lv_obj_set_y(settings_factory_reset_title_label, 0);
    lv_obj_set_width(settings_factory_reset_title_label, 260);
    lv_label_set_text(settings_factory_reset_title_label, "FACTORY RESET");
    lv_label_set_long_mode(settings_factory_reset_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_factory_reset_title_label, COLOR_ALERT_RED, 0);
    lv_obj_set_style_text_font(settings_factory_reset_title_label, font_inter_14, 0);
    lv_obj_set_style_text_letter_space(settings_factory_reset_title_label, 1, 0);

    lv_obj_t * settings_factory_reset_subtitle_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(settings_factory_reset_subtitle_label, "settings_factory_reset_subtitle_label");
    lv_obj_set_x(settings_factory_reset_subtitle_label, 250);
    lv_obj_set_y(settings_factory_reset_subtitle_label, 2);
    lv_obj_set_width(settings_factory_reset_subtitle_label, 198);
    lv_label_set_text(settings_factory_reset_subtitle_label, reset_status);
    lv_label_set_long_mode(settings_factory_reset_subtitle_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_factory_reset_subtitle_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_factory_reset_subtitle_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_factory_reset_subtitle_label, font_inter_11, 0);

    lv_obj_t * settings_factory_reset_warning_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(settings_factory_reset_warning_card, "settings_factory_reset_warning_card");
    lv_obj_set_x(settings_factory_reset_warning_card, 0);
    lv_obj_set_y(settings_factory_reset_warning_card, 24);
    lv_obj_set_width(settings_factory_reset_warning_card, 452);
    lv_obj_set_height(settings_factory_reset_warning_card, 58);
    lv_obj_set_flag(settings_factory_reset_warning_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_factory_reset_warning_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_factory_reset_warning_card, COLOR_WARNING_BG, 0);
    lv_obj_set_style_bg_opa(settings_factory_reset_warning_card, 255, 0);
    lv_obj_set_style_radius(settings_factory_reset_warning_card, 16, 0);
    lv_obj_set_style_pad_all(settings_factory_reset_warning_card, 0, 0);
    lv_obj_set_style_border_width(settings_factory_reset_warning_card, 1, 0);
    lv_obj_set_style_border_color(settings_factory_reset_warning_card, COLOR_ALERT_ORANGE, 0);
    lv_obj_t * settings_factory_reset_warning_title_label = lv_label_create(settings_factory_reset_warning_card);
    lv_obj_set_name(settings_factory_reset_warning_title_label, "settings_factory_reset_warning_title_label");
    lv_obj_set_x(settings_factory_reset_warning_title_label, 16);
    lv_obj_set_y(settings_factory_reset_warning_title_label, 9);
    lv_obj_set_width(settings_factory_reset_warning_title_label, 420);
    lv_label_set_text(settings_factory_reset_warning_title_label, "This action can erase device settings.");
    lv_label_set_long_mode(settings_factory_reset_warning_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_factory_reset_warning_title_label, COLOR_ALERT_ORANGE, 0);
    lv_obj_set_style_text_font(settings_factory_reset_warning_title_label, font_inter_12, 0);

    lv_obj_t * settings_factory_reset_warning_text_label = lv_label_create(settings_factory_reset_warning_card);
    lv_obj_set_name(settings_factory_reset_warning_text_label, "settings_factory_reset_warning_text_label");
    lv_obj_set_x(settings_factory_reset_warning_text_label, 16);
    lv_obj_set_y(settings_factory_reset_warning_text_label, 30);
    lv_obj_set_width(settings_factory_reset_warning_text_label, 420);
    lv_label_set_text(settings_factory_reset_warning_text_label, "Only continue if you want to reset this tower configuration.");
    lv_label_set_long_mode(settings_factory_reset_warning_text_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_factory_reset_warning_text_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_factory_reset_warning_text_label, font_inter_10, 0);

    lv_obj_t * settings_factory_reset_options_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(settings_factory_reset_options_card, "settings_factory_reset_options_card");
    lv_obj_set_x(settings_factory_reset_options_card, 0);
    lv_obj_set_y(settings_factory_reset_options_card, 92);
    lv_obj_set_width(settings_factory_reset_options_card, 452);
    lv_obj_set_height(settings_factory_reset_options_card, 77);
    lv_obj_set_flag(settings_factory_reset_options_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_factory_reset_options_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_factory_reset_options_card, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(settings_factory_reset_options_card, 255, 0);
    lv_obj_set_style_radius(settings_factory_reset_options_card, 16, 0);
    lv_obj_set_style_pad_all(settings_factory_reset_options_card, 0, 0);
    lv_obj_set_style_border_width(settings_factory_reset_options_card, 1, 0);
    lv_obj_set_style_border_color(settings_factory_reset_options_card, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(settings_factory_reset_options_card, 8, 0);
    lv_obj_set_style_shadow_opa(settings_factory_reset_options_card, 14, 0);
    lv_obj_set_style_shadow_color(settings_factory_reset_options_card, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(settings_factory_reset_options_card, 3, 0);
    lv_obj_t * settings_factory_reset_scope_title_label = lv_label_create(settings_factory_reset_options_card);
    lv_obj_set_name(settings_factory_reset_scope_title_label, "settings_factory_reset_scope_title_label");
    lv_obj_set_x(settings_factory_reset_scope_title_label, 18);
    lv_obj_set_y(settings_factory_reset_scope_title_label, 13);
    lv_obj_set_width(settings_factory_reset_scope_title_label, 160);
    lv_label_set_text(settings_factory_reset_scope_title_label, "Reset scope");
    lv_label_set_long_mode(settings_factory_reset_scope_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_factory_reset_scope_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_factory_reset_scope_title_label, font_inter_12, 0);

    lv_obj_t * settings_factory_reset_scope_dropdown = lv_dropdown_create(settings_factory_reset_options_card);
    lv_obj_set_name(settings_factory_reset_scope_dropdown, "settings_factory_reset_scope_dropdown");
    lv_obj_set_x(settings_factory_reset_scope_dropdown, 242);
    lv_obj_set_y(settings_factory_reset_scope_dropdown, 8);
    lv_obj_set_width(settings_factory_reset_scope_dropdown, 172);
    lv_obj_set_height(settings_factory_reset_scope_dropdown, 30);
    lv_dropdown_set_options(settings_factory_reset_scope_dropdown, "App settings only\nNetwork settings\nFull factory reset");
    lv_dropdown_set_selected(settings_factory_reset_scope_dropdown, 0);
    lv_dropdown_set_symbol(settings_factory_reset_scope_dropdown, img_simple_chevron_icon_1);
    lv_obj_set_flag(settings_factory_reset_scope_dropdown, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_factory_reset_scope_dropdown, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_factory_reset_scope_dropdown, COLOR_DARK_FOREST, 0);
    lv_obj_set_style_bg_opa(settings_factory_reset_scope_dropdown, 255, 0);
    lv_obj_set_style_radius(settings_factory_reset_scope_dropdown, 10, 0);
    lv_obj_set_style_border_width(settings_factory_reset_scope_dropdown, 0, 0);
    lv_obj_set_style_pad_left(settings_factory_reset_scope_dropdown, 10, 0);
    lv_obj_set_style_pad_right(settings_factory_reset_scope_dropdown, 8, 0);
    lv_obj_set_style_text_color(settings_factory_reset_scope_dropdown, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(settings_factory_reset_scope_dropdown, font_inter_11, 0);
    lv_obj_set_style_image_recolor(settings_factory_reset_scope_dropdown, COLOR_WHITE, LV_PART_INDICATOR);
    lv_obj_set_style_image_recolor_opa(settings_factory_reset_scope_dropdown, 255, LV_PART_INDICATOR);
    lv_obj_set_style_transform_rotation(settings_factory_reset_scope_dropdown, 900, LV_PART_INDICATOR);
    lv_obj_set_style_transform_pivot_x(settings_factory_reset_scope_dropdown, 8, LV_PART_INDICATOR);
    lv_obj_set_style_transform_pivot_y(settings_factory_reset_scope_dropdown, 8, LV_PART_INDICATOR);
    lv_obj_t * lv_dropdown_list_0 = lv_dropdown_get_list(settings_factory_reset_scope_dropdown);
    lv_obj_set_style_bg_color(lv_dropdown_list_0, COLOR_CARD_BG, LV_PART_SELECTED);
    lv_obj_set_style_bg_opa(lv_dropdown_list_0, 255, LV_PART_SELECTED);
    lv_obj_set_style_radius(lv_dropdown_list_0, 10, 0);
    lv_obj_set_style_border_width(lv_dropdown_list_0, 1, 0);
    lv_obj_set_style_border_color(lv_dropdown_list_0, COLOR_DIVIDER, 0);
    lv_obj_set_style_text_color(lv_dropdown_list_0, COLOR_TEXT_PRIMARY, LV_PART_SELECTED);
    lv_obj_set_style_text_font(lv_dropdown_list_0, font_inter_11, 0);

    lv_obj_t * settings_factory_reset_divider_1 = lv_obj_create(settings_factory_reset_options_card);
    lv_obj_set_name(settings_factory_reset_divider_1, "settings_factory_reset_divider_1");
    lv_obj_set_x(settings_factory_reset_divider_1, 18);
    lv_obj_set_y(settings_factory_reset_divider_1, 48);
    lv_obj_set_width(settings_factory_reset_divider_1, 416);
    lv_obj_set_height(settings_factory_reset_divider_1, 1);
    lv_obj_set_flag(settings_factory_reset_divider_1, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_factory_reset_divider_1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_factory_reset_divider_1, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(settings_factory_reset_divider_1, 255, 0);
    lv_obj_set_style_border_width(settings_factory_reset_divider_1, 0, 0);
    lv_obj_set_style_pad_all(settings_factory_reset_divider_1, 0, 0);

    lv_obj_t * settings_factory_reset_confirm_checkbox = lv_checkbox_create(settings_factory_reset_options_card);
    lv_obj_set_name(settings_factory_reset_confirm_checkbox, "settings_factory_reset_confirm_checkbox");
    lv_obj_set_x(settings_factory_reset_confirm_checkbox, 18);
    lv_obj_set_y(settings_factory_reset_confirm_checkbox, 55);
    lv_obj_set_width(settings_factory_reset_confirm_checkbox, 400);
    lv_obj_set_height(settings_factory_reset_confirm_checkbox, 18);
    lv_checkbox_set_text(settings_factory_reset_confirm_checkbox, "I understand this reset action");
    lv_obj_set_flag(settings_factory_reset_confirm_checkbox, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_factory_reset_confirm_checkbox, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_color(settings_factory_reset_confirm_checkbox, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_factory_reset_confirm_checkbox, font_inter_11, 0);
    lv_obj_set_style_bg_color(settings_factory_reset_confirm_checkbox, COLOR_CARD_BG, LV_PART_INDICATOR);
    lv_obj_set_style_bg_opa(settings_factory_reset_confirm_checkbox, 255, LV_PART_INDICATOR);
    lv_obj_set_style_border_width(settings_factory_reset_confirm_checkbox, 1, LV_PART_INDICATOR);
    lv_obj_set_style_border_color(settings_factory_reset_confirm_checkbox, COLOR_DIVIDER, LV_PART_INDICATOR);
    lv_obj_set_style_radius(settings_factory_reset_confirm_checkbox, 4, LV_PART_INDICATOR);

    lv_obj_t * settings_factory_reset_note_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(settings_factory_reset_note_card, "settings_factory_reset_note_card");
    lv_obj_set_x(settings_factory_reset_note_card, 0);
    lv_obj_set_y(settings_factory_reset_note_card, 180);
    lv_obj_set_width(settings_factory_reset_note_card, 452);
    lv_obj_set_height(settings_factory_reset_note_card, 37);
    lv_obj_set_flag(settings_factory_reset_note_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_factory_reset_note_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_factory_reset_note_card, COLOR_SOFT_SURFACE, 0);
    lv_obj_set_style_bg_opa(settings_factory_reset_note_card, 255, 0);
    lv_obj_set_style_radius(settings_factory_reset_note_card, 14, 0);
    lv_obj_set_style_pad_all(settings_factory_reset_note_card, 0, 0);
    lv_obj_set_style_border_width(settings_factory_reset_note_card, 1, 0);
    lv_obj_set_style_border_color(settings_factory_reset_note_card, COLOR_DIVIDER, 0);
    lv_obj_t * settings_factory_reset_note_label = lv_label_create(settings_factory_reset_note_card);
    lv_obj_set_name(settings_factory_reset_note_label, "settings_factory_reset_note_label");
    lv_obj_set_x(settings_factory_reset_note_label, 16);
    lv_obj_set_y(settings_factory_reset_note_label, 8);
    lv_obj_set_width(settings_factory_reset_note_label, 420);
    lv_obj_set_height(settings_factory_reset_note_label, 22);
    lv_label_set_text(settings_factory_reset_note_label, "Calibration values should only be erased with full factory reset.");
    lv_label_set_long_mode(settings_factory_reset_note_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_factory_reset_note_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_factory_reset_note_label, font_inter_10, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

