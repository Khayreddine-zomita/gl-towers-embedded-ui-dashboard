/**
 * @file settings_language_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "settings_language_card_gen.h"
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

lv_obj_t * settings_language_card_create(lv_obj_t * parent, const char * current_language, const char * status_text)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "settings_language_card_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 217);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * settings_language_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(settings_language_title_label, "settings_language_title_label");
    lv_obj_set_x(settings_language_title_label, 2);
    lv_obj_set_y(settings_language_title_label, 0);
    lv_obj_set_width(settings_language_title_label, 260);
    lv_label_set_text(settings_language_title_label, "LANGUAGE");
    lv_label_set_long_mode(settings_language_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_language_title_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(settings_language_title_label, font_inter_14, 0);
    lv_obj_set_style_text_letter_space(settings_language_title_label, 1, 0);

    lv_obj_t * settings_language_subtitle_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(settings_language_subtitle_label, "settings_language_subtitle_label");
    lv_obj_set_x(settings_language_subtitle_label, 250);
    lv_obj_set_y(settings_language_subtitle_label, 2);
    lv_obj_set_width(settings_language_subtitle_label, 198);
    lv_label_set_text(settings_language_subtitle_label, status_text);
    lv_label_set_long_mode(settings_language_subtitle_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_language_subtitle_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_language_subtitle_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_language_subtitle_label, font_inter_11, 0);

    lv_obj_t * settings_language_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(settings_language_card, "settings_language_card");
    lv_obj_set_x(settings_language_card, 0);
    lv_obj_set_y(settings_language_card, 24);
    lv_obj_set_width(settings_language_card, 452);
    lv_obj_set_height(settings_language_card, 146);
    lv_obj_set_flag(settings_language_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_language_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_language_card, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(settings_language_card, 255, 0);
    lv_obj_set_style_radius(settings_language_card, 18, 0);
    lv_obj_set_style_pad_all(settings_language_card, 0, 0);
    lv_obj_set_style_border_width(settings_language_card, 1, 0);
    lv_obj_set_style_border_color(settings_language_card, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(settings_language_card, 8, 0);
    lv_obj_set_style_shadow_opa(settings_language_card, 16, 0);
    lv_obj_set_style_shadow_color(settings_language_card, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(settings_language_card, 3, 0);
    lv_obj_t * settings_language_current_title_label = lv_label_create(settings_language_card);
    lv_obj_set_name(settings_language_current_title_label, "settings_language_current_title_label");
    lv_obj_set_x(settings_language_current_title_label, 18);
    lv_obj_set_y(settings_language_current_title_label, 12);
    lv_obj_set_width(settings_language_current_title_label, 180);
    lv_label_set_text(settings_language_current_title_label, "Current language");
    lv_label_set_long_mode(settings_language_current_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_language_current_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_language_current_title_label, font_inter_12, 0);

    lv_obj_t * settings_language_current_value_label = lv_label_create(settings_language_card);
    lv_obj_set_name(settings_language_current_value_label, "settings_language_current_value_label");
    lv_obj_set_x(settings_language_current_value_label, 230);
    lv_obj_set_y(settings_language_current_value_label, 12);
    lv_obj_set_width(settings_language_current_value_label, 180);
    lv_label_set_text(settings_language_current_value_label, current_language);
    lv_label_set_long_mode(settings_language_current_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_language_current_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_language_current_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_language_current_value_label, font_inter_11, 0);

    lv_obj_t * settings_language_divider_1 = lv_obj_create(settings_language_card);
    lv_obj_set_name(settings_language_divider_1, "settings_language_divider_1");
    lv_obj_set_x(settings_language_divider_1, 18);
    lv_obj_set_y(settings_language_divider_1, 39);
    lv_obj_set_width(settings_language_divider_1, 416);
    lv_obj_set_height(settings_language_divider_1, 1);
    lv_obj_set_flag(settings_language_divider_1, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_language_divider_1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_language_divider_1, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(settings_language_divider_1, 255, 0);
    lv_obj_set_style_border_width(settings_language_divider_1, 0, 0);
    lv_obj_set_style_pad_all(settings_language_divider_1, 0, 0);

    lv_obj_t * settings_language_select_title_label = lv_label_create(settings_language_card);
    lv_obj_set_name(settings_language_select_title_label, "settings_language_select_title_label");
    lv_obj_set_x(settings_language_select_title_label, 18);
    lv_obj_set_y(settings_language_select_title_label, 55);
    lv_obj_set_width(settings_language_select_title_label, 180);
    lv_label_set_text(settings_language_select_title_label, "Interface language");
    lv_label_set_long_mode(settings_language_select_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_language_select_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_language_select_title_label, font_inter_12, 0);

    lv_obj_t * settings_language_dropdown = lv_dropdown_create(settings_language_card);
    lv_obj_set_name(settings_language_dropdown, "settings_language_dropdown");
    lv_obj_set_x(settings_language_dropdown, 262);
    lv_obj_set_y(settings_language_dropdown, 48);
    lv_obj_set_width(settings_language_dropdown, 152);
    lv_obj_set_height(settings_language_dropdown, 30);
    lv_dropdown_set_options(settings_language_dropdown, "English\nItaliano\nFrançais");
    lv_dropdown_set_selected(settings_language_dropdown, 0);
    lv_dropdown_set_symbol(settings_language_dropdown, img_simple_chevron_icon_1);
    lv_obj_set_flag(settings_language_dropdown, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_language_dropdown, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_language_dropdown, COLOR_DARK_FOREST, 0);
    lv_obj_set_style_bg_opa(settings_language_dropdown, 255, 0);
    lv_obj_set_style_radius(settings_language_dropdown, 10, 0);
    lv_obj_set_style_border_width(settings_language_dropdown, 0, 0);
    lv_obj_set_style_pad_left(settings_language_dropdown, 10, 0);
    lv_obj_set_style_pad_right(settings_language_dropdown, 8, 0);
    lv_obj_set_style_text_color(settings_language_dropdown, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(settings_language_dropdown, font_inter_11, 0);
    lv_obj_set_style_image_recolor(settings_language_dropdown, COLOR_WHITE, LV_PART_INDICATOR);
    lv_obj_set_style_image_recolor_opa(settings_language_dropdown, 255, LV_PART_INDICATOR);
    lv_obj_set_style_transform_rotation(settings_language_dropdown, 900, LV_PART_INDICATOR);
    lv_obj_set_style_transform_pivot_x(settings_language_dropdown, 8, LV_PART_INDICATOR);
    lv_obj_set_style_transform_pivot_y(settings_language_dropdown, 8, LV_PART_INDICATOR);
    lv_obj_t * lv_dropdown_list_0 = lv_dropdown_get_list(settings_language_dropdown);
    lv_obj_set_style_bg_color(lv_dropdown_list_0, COLOR_CARD_BG, LV_PART_SELECTED);
    lv_obj_set_style_bg_opa(lv_dropdown_list_0, 255, LV_PART_SELECTED);
    lv_obj_set_style_radius(lv_dropdown_list_0, 10, 0);
    lv_obj_set_style_border_width(lv_dropdown_list_0, 1, 0);
    lv_obj_set_style_border_color(lv_dropdown_list_0, COLOR_DIVIDER, 0);
    lv_obj_set_style_text_color(lv_dropdown_list_0, COLOR_TEXT_PRIMARY, LV_PART_SELECTED);
    lv_obj_set_style_text_font(lv_dropdown_list_0, font_inter_11, 0);

    lv_obj_t * settings_language_divider_2 = lv_obj_create(settings_language_card);
    lv_obj_set_name(settings_language_divider_2, "settings_language_divider_2");
    lv_obj_set_x(settings_language_divider_2, 18);
    lv_obj_set_y(settings_language_divider_2, 94);
    lv_obj_set_width(settings_language_divider_2, 416);
    lv_obj_set_height(settings_language_divider_2, 1);
    lv_obj_set_flag(settings_language_divider_2, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_language_divider_2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_language_divider_2, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(settings_language_divider_2, 255, 0);
    lv_obj_set_style_border_width(settings_language_divider_2, 0, 0);
    lv_obj_set_style_pad_all(settings_language_divider_2, 0, 0);

    lv_obj_t * settings_language_apply_title_label = lv_label_create(settings_language_card);
    lv_obj_set_name(settings_language_apply_title_label, "settings_language_apply_title_label");
    lv_obj_set_x(settings_language_apply_title_label, 18);
    lv_obj_set_y(settings_language_apply_title_label, 110);
    lv_obj_set_width(settings_language_apply_title_label, 170);
    lv_label_set_text(settings_language_apply_title_label, "Apply behavior");
    lv_label_set_long_mode(settings_language_apply_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_language_apply_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_language_apply_title_label, font_inter_12, 0);

    lv_obj_t * settings_language_apply_value_label = lv_label_create(settings_language_card);
    lv_obj_set_name(settings_language_apply_value_label, "settings_language_apply_value_label");
    lv_obj_set_x(settings_language_apply_value_label, 214);
    lv_obj_set_y(settings_language_apply_value_label, 110);
    lv_obj_set_width(settings_language_apply_value_label, 196);
    lv_label_set_text(settings_language_apply_value_label, "After saving");
    lv_label_set_long_mode(settings_language_apply_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_language_apply_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_language_apply_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_language_apply_value_label, font_inter_11, 0);

    lv_obj_t * settings_language_note_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(settings_language_note_card, "settings_language_note_card");
    lv_obj_set_x(settings_language_note_card, 0);
    lv_obj_set_y(settings_language_note_card, 180);
    lv_obj_set_width(settings_language_note_card, 452);
    lv_obj_set_height(settings_language_note_card, 37);
    lv_obj_set_flag(settings_language_note_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_language_note_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_language_note_card, COLOR_SOFT_SURFACE, 0);
    lv_obj_set_style_bg_opa(settings_language_note_card, 255, 0);
    lv_obj_set_style_radius(settings_language_note_card, 14, 0);
    lv_obj_set_style_pad_all(settings_language_note_card, 0, 0);
    lv_obj_set_style_border_width(settings_language_note_card, 1, 0);
    lv_obj_set_style_border_color(settings_language_note_card, COLOR_DIVIDER, 0);
    lv_obj_t * settings_language_note_label = lv_label_create(settings_language_note_card);
    lv_obj_set_name(settings_language_note_label, "settings_language_note_label");
    lv_obj_set_x(settings_language_note_label, 16);
    lv_obj_set_y(settings_language_note_label, 8);
    lv_obj_set_width(settings_language_note_label, 420);
    lv_obj_set_height(settings_language_note_label, 22);
    lv_label_set_text(settings_language_note_label, "Language changes affect the local display interface.");
    lv_label_set_long_mode(settings_language_note_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_language_note_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_language_note_label, font_inter_10, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

