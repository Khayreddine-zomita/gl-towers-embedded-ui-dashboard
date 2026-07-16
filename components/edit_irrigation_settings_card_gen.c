/**
 * @file edit_irrigation_settings_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "edit_irrigation_settings_card_gen.h"
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

lv_obj_t * edit_irrigation_settings_card_create(lv_obj_t * parent, const char * growth_stage_text, const char * substrate_text, const char * pump_cycle_text, const char * window_text)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "edit_irrigation_settings_card_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 198);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * edit_irrigation_settings_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(edit_irrigation_settings_title_label, "edit_irrigation_settings_title_label");
    lv_obj_set_x(edit_irrigation_settings_title_label, 2);
    lv_obj_set_y(edit_irrigation_settings_title_label, 0);
    lv_obj_set_width(edit_irrigation_settings_title_label, 340);
    lv_label_set_text(edit_irrigation_settings_title_label, "EDIT IRRIGATION SETTINGS");
    lv_label_set_long_mode(edit_irrigation_settings_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(edit_irrigation_settings_title_label, COLOR_BLUE, 0);
    lv_obj_set_style_text_font(edit_irrigation_settings_title_label, font_inter_14, 0);

    lv_obj_t * edit_irrigation_settings_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(edit_irrigation_settings_card, "edit_irrigation_settings_card");
    lv_obj_set_x(edit_irrigation_settings_card, 0);
    lv_obj_set_y(edit_irrigation_settings_card, 24);
    lv_obj_set_width(edit_irrigation_settings_card, 452);
    lv_obj_set_height(edit_irrigation_settings_card, 174);
    lv_obj_set_flag(edit_irrigation_settings_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(edit_irrigation_settings_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(edit_irrigation_settings_card, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(edit_irrigation_settings_card, 255, 0);
    lv_obj_set_style_radius(edit_irrigation_settings_card, 18, 0);
    lv_obj_set_style_pad_all(edit_irrigation_settings_card, 0, 0);
    lv_obj_set_style_border_width(edit_irrigation_settings_card, 1, 0);
    lv_obj_set_style_border_color(edit_irrigation_settings_card, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(edit_irrigation_settings_card, 8, 0);
    lv_obj_set_style_shadow_opa(edit_irrigation_settings_card, 16, 0);
    lv_obj_set_style_shadow_color(edit_irrigation_settings_card, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(edit_irrigation_settings_card, 3, 0);
    lv_obj_t * edit_irrigation_growth_stage_row = lv_obj_create(edit_irrigation_settings_card);
    lv_obj_set_name(edit_irrigation_growth_stage_row, "edit_irrigation_growth_stage_row");
    lv_obj_set_x(edit_irrigation_growth_stage_row, 0);
    lv_obj_set_y(edit_irrigation_growth_stage_row, 0);
    lv_obj_set_width(edit_irrigation_growth_stage_row, 452);
    lv_obj_set_height(edit_irrigation_growth_stage_row, 43);
    lv_obj_set_flag(edit_irrigation_growth_stage_row, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(edit_irrigation_growth_stage_row, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(edit_irrigation_growth_stage_row, 0, 0);
    lv_obj_set_style_border_width(edit_irrigation_growth_stage_row, 0, 0);
    lv_obj_set_style_radius(edit_irrigation_growth_stage_row, 0, 0);
    lv_obj_set_style_pad_all(edit_irrigation_growth_stage_row, 0, 0);
    lv_obj_t * edit_irrigation_growth_stage_title_label = lv_label_create(edit_irrigation_growth_stage_row);
    lv_obj_set_name(edit_irrigation_growth_stage_title_label, "edit_irrigation_growth_stage_title_label");
    lv_obj_set_x(edit_irrigation_growth_stage_title_label, 16);
    lv_obj_set_y(edit_irrigation_growth_stage_title_label, 14);
    lv_obj_set_width(edit_irrigation_growth_stage_title_label, 150);
    lv_label_set_text(edit_irrigation_growth_stage_title_label, "Growth Stage");
    lv_label_set_long_mode(edit_irrigation_growth_stage_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(edit_irrigation_growth_stage_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(edit_irrigation_growth_stage_title_label, font_inter_12, 0);

    lv_obj_t * edit_irrigation_growth_stage_value_label = lv_label_create(edit_irrigation_growth_stage_row);
    lv_obj_set_name(edit_irrigation_growth_stage_value_label, "edit_irrigation_growth_stage_value_label");
    lv_obj_set_x(edit_irrigation_growth_stage_value_label, 220);
    lv_obj_set_y(edit_irrigation_growth_stage_value_label, 14);
    lv_obj_set_width(edit_irrigation_growth_stage_value_label, 160);
    lv_label_set_text(edit_irrigation_growth_stage_value_label, growth_stage_text);
    lv_label_set_long_mode(edit_irrigation_growth_stage_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(edit_irrigation_growth_stage_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(edit_irrigation_growth_stage_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(edit_irrigation_growth_stage_value_label, font_inter_12, 0);

    lv_obj_t * irrigation_germination_icon = lv_image_create(edit_irrigation_growth_stage_row);
    lv_obj_set_name(irrigation_germination_icon, "irrigation_germination_icon");
    lv_obj_set_x(irrigation_germination_icon, 290);
    lv_obj_set_y(irrigation_germination_icon, 12);
    lv_obj_set_width(irrigation_germination_icon, 18);
    lv_obj_set_height(irrigation_germination_icon, 18);
    lv_image_set_src(irrigation_germination_icon, img_irrigation_growth_stage_germination_color_16px);
    lv_obj_set_flag(irrigation_germination_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_germination_icon, LV_SCROLLBAR_MODE_OFF);

    lv_obj_t * edit_irrigation_growth_stage_icon_btn = lv_button_create(edit_irrigation_growth_stage_row);
    lv_obj_set_name(edit_irrigation_growth_stage_icon_btn, "edit_irrigation_growth_stage_icon_btn");
    lv_obj_set_x(edit_irrigation_growth_stage_icon_btn, 410);
    lv_obj_set_y(edit_irrigation_growth_stage_icon_btn, 2);
    lv_obj_set_width(edit_irrigation_growth_stage_icon_btn, 38);
    lv_obj_set_height(edit_irrigation_growth_stage_icon_btn, 38);
    lv_obj_set_flag(edit_irrigation_growth_stage_icon_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(edit_irrigation_growth_stage_icon_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(edit_irrigation_growth_stage_icon_btn, 0, 0);
    lv_obj_set_style_border_width(edit_irrigation_growth_stage_icon_btn, 0, 0);
    lv_obj_set_style_shadow_width(edit_irrigation_growth_stage_icon_btn, 0, 0);
    lv_obj_set_style_pad_all(edit_irrigation_growth_stage_icon_btn, 0, 0);
    lv_obj_t * edit_irrigation_growth_stage_chevron_icon = lv_image_create(edit_irrigation_growth_stage_icon_btn);
    lv_obj_set_name(edit_irrigation_growth_stage_chevron_icon, "edit_irrigation_growth_stage_chevron_icon");
    lv_obj_set_x(edit_irrigation_growth_stage_chevron_icon, 7);
    lv_obj_set_y(edit_irrigation_growth_stage_chevron_icon, 7);
    lv_obj_set_width(edit_irrigation_growth_stage_chevron_icon, 24);
    lv_obj_set_height(edit_irrigation_growth_stage_chevron_icon, 24);
    lv_obj_set_flag(edit_irrigation_growth_stage_chevron_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(edit_irrigation_growth_stage_chevron_icon, LV_SCROLLBAR_MODE_OFF);
    lv_image_set_src(edit_irrigation_growth_stage_chevron_icon, img_simple_chevron_icon_1);
    lv_obj_set_style_image_recolor(edit_irrigation_growth_stage_chevron_icon, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_image_recolor_opa(edit_irrigation_growth_stage_chevron_icon, 255, 0);

    lv_obj_t * edit_irrigation_settings_divider_1 = lv_obj_create(edit_irrigation_settings_card);
    lv_obj_set_name(edit_irrigation_settings_divider_1, "edit_irrigation_settings_divider_1");
    lv_obj_set_x(edit_irrigation_settings_divider_1, 16);
    lv_obj_set_y(edit_irrigation_settings_divider_1, 43);
    lv_obj_set_width(edit_irrigation_settings_divider_1, 420);
    lv_obj_set_height(edit_irrigation_settings_divider_1, 1);
    lv_obj_set_flag(edit_irrigation_settings_divider_1, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(edit_irrigation_settings_divider_1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(edit_irrigation_settings_divider_1, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(edit_irrigation_settings_divider_1, 255, 0);
    lv_obj_set_style_border_width(edit_irrigation_settings_divider_1, 0, 0);
    lv_obj_set_style_pad_all(edit_irrigation_settings_divider_1, 0, 0);

    lv_obj_t * edit_irrigation_substrate_row = lv_obj_create(edit_irrigation_settings_card);
    lv_obj_set_name(edit_irrigation_substrate_row, "edit_irrigation_substrate_row");
    lv_obj_set_x(edit_irrigation_substrate_row, 0);
    lv_obj_set_y(edit_irrigation_substrate_row, 44);
    lv_obj_set_width(edit_irrigation_substrate_row, 452);
    lv_obj_set_height(edit_irrigation_substrate_row, 43);
    lv_obj_set_flag(edit_irrigation_substrate_row, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(edit_irrigation_substrate_row, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(edit_irrigation_substrate_row, 0, 0);
    lv_obj_set_style_border_width(edit_irrigation_substrate_row, 0, 0);
    lv_obj_set_style_radius(edit_irrigation_substrate_row, 0, 0);
    lv_obj_set_style_pad_all(edit_irrigation_substrate_row, 0, 0);
    lv_obj_t * edit_irrigation_substrate_title_label = lv_label_create(edit_irrigation_substrate_row);
    lv_obj_set_name(edit_irrigation_substrate_title_label, "edit_irrigation_substrate_title_label");
    lv_obj_set_x(edit_irrigation_substrate_title_label, 16);
    lv_obj_set_y(edit_irrigation_substrate_title_label, 14);
    lv_obj_set_width(edit_irrigation_substrate_title_label, 150);
    lv_label_set_text(edit_irrigation_substrate_title_label, "Substrate");
    lv_label_set_long_mode(edit_irrigation_substrate_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(edit_irrigation_substrate_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(edit_irrigation_substrate_title_label, font_inter_12, 0);

    lv_obj_t * edit_irrigation_substrate_value_label = lv_label_create(edit_irrigation_substrate_row);
    lv_obj_set_name(edit_irrigation_substrate_value_label, "edit_irrigation_substrate_value_label");
    lv_obj_set_x(edit_irrigation_substrate_value_label, 220);
    lv_obj_set_y(edit_irrigation_substrate_value_label, 14);
    lv_obj_set_width(edit_irrigation_substrate_value_label, 160);
    lv_label_set_text(edit_irrigation_substrate_value_label, substrate_text);
    lv_label_set_long_mode(edit_irrigation_substrate_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(edit_irrigation_substrate_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(edit_irrigation_substrate_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(edit_irrigation_substrate_value_label, font_inter_12, 0);

    lv_obj_t * edit_irrigation_substrate_icon = lv_image_create(edit_irrigation_substrate_row);
    lv_obj_set_name(edit_irrigation_substrate_icon, "edit_irrigation_substrate_icon");
    lv_obj_set_x(edit_irrigation_substrate_icon, 285);
    lv_obj_set_y(edit_irrigation_substrate_icon, 8);
    lv_obj_set_width(edit_irrigation_substrate_icon, 26);
    lv_obj_set_height(edit_irrigation_substrate_icon, 26);
    lv_image_set_src(edit_irrigation_substrate_icon, img_irrigation_drop_silhouette_16px);
    lv_obj_set_flag(edit_irrigation_substrate_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(edit_irrigation_substrate_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(edit_irrigation_substrate_icon, COLOR_STATUS_INFO, 0);
    lv_obj_set_style_image_recolor_opa(edit_irrigation_substrate_icon, 255, 0);

    lv_obj_t * edit_irrigation_substrate_icon_btn = lv_button_create(edit_irrigation_substrate_row);
    lv_obj_set_name(edit_irrigation_substrate_icon_btn, "edit_irrigation_substrate_icon_btn");
    lv_obj_set_x(edit_irrigation_substrate_icon_btn, 410);
    lv_obj_set_y(edit_irrigation_substrate_icon_btn, 2);
    lv_obj_set_width(edit_irrigation_substrate_icon_btn, 38);
    lv_obj_set_height(edit_irrigation_substrate_icon_btn, 38);
    lv_obj_set_flag(edit_irrigation_substrate_icon_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(edit_irrigation_substrate_icon_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(edit_irrigation_substrate_icon_btn, 0, 0);
    lv_obj_set_style_border_width(edit_irrigation_substrate_icon_btn, 0, 0);
    lv_obj_set_style_shadow_width(edit_irrigation_substrate_icon_btn, 0, 0);
    lv_obj_set_style_pad_all(edit_irrigation_substrate_icon_btn, 0, 0);
    lv_obj_t * edit_irrigation_substrate_chevron_icon = lv_image_create(edit_irrigation_substrate_icon_btn);
    lv_obj_set_name(edit_irrigation_substrate_chevron_icon, "edit_irrigation_substrate_chevron_icon");
    lv_obj_set_x(edit_irrigation_substrate_chevron_icon, 7);
    lv_obj_set_y(edit_irrigation_substrate_chevron_icon, 7);
    lv_obj_set_width(edit_irrigation_substrate_chevron_icon, 24);
    lv_obj_set_height(edit_irrigation_substrate_chevron_icon, 24);
    lv_obj_set_flag(edit_irrigation_substrate_chevron_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(edit_irrigation_substrate_chevron_icon, LV_SCROLLBAR_MODE_OFF);
    lv_image_set_src(edit_irrigation_substrate_chevron_icon, img_simple_chevron_icon_1);
    lv_obj_set_style_image_recolor(edit_irrigation_substrate_chevron_icon, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_image_recolor_opa(edit_irrigation_substrate_chevron_icon, 255, 0);

    lv_obj_t * edit_irrigation_settings_divider_2 = lv_obj_create(edit_irrigation_settings_card);
    lv_obj_set_name(edit_irrigation_settings_divider_2, "edit_irrigation_settings_divider_2");
    lv_obj_set_x(edit_irrigation_settings_divider_2, 16);
    lv_obj_set_y(edit_irrigation_settings_divider_2, 87);
    lv_obj_set_width(edit_irrigation_settings_divider_2, 420);
    lv_obj_set_height(edit_irrigation_settings_divider_2, 1);
    lv_obj_set_flag(edit_irrigation_settings_divider_2, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(edit_irrigation_settings_divider_2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(edit_irrigation_settings_divider_2, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(edit_irrigation_settings_divider_2, 255, 0);
    lv_obj_set_style_border_width(edit_irrigation_settings_divider_2, 0, 0);
    lv_obj_set_style_pad_all(edit_irrigation_settings_divider_2, 0, 0);

    lv_obj_t * edit_irrigation_pump_cycle_row = lv_obj_create(edit_irrigation_settings_card);
    lv_obj_set_name(edit_irrigation_pump_cycle_row, "edit_irrigation_pump_cycle_row");
    lv_obj_set_x(edit_irrigation_pump_cycle_row, 0);
    lv_obj_set_y(edit_irrigation_pump_cycle_row, 88);
    lv_obj_set_width(edit_irrigation_pump_cycle_row, 452);
    lv_obj_set_height(edit_irrigation_pump_cycle_row, 43);
    lv_obj_set_flag(edit_irrigation_pump_cycle_row, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(edit_irrigation_pump_cycle_row, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(edit_irrigation_pump_cycle_row, 0, 0);
    lv_obj_set_style_border_width(edit_irrigation_pump_cycle_row, 0, 0);
    lv_obj_set_style_radius(edit_irrigation_pump_cycle_row, 0, 0);
    lv_obj_set_style_pad_all(edit_irrigation_pump_cycle_row, 0, 0);
    lv_obj_t * edit_irrigation_pump_cycle_title_label = lv_label_create(edit_irrigation_pump_cycle_row);
    lv_obj_set_name(edit_irrigation_pump_cycle_title_label, "edit_irrigation_pump_cycle_title_label");
    lv_obj_set_x(edit_irrigation_pump_cycle_title_label, 16);
    lv_obj_set_y(edit_irrigation_pump_cycle_title_label, 14);
    lv_obj_set_width(edit_irrigation_pump_cycle_title_label, 150);
    lv_label_set_text(edit_irrigation_pump_cycle_title_label, "Pump Cycle");
    lv_label_set_long_mode(edit_irrigation_pump_cycle_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(edit_irrigation_pump_cycle_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(edit_irrigation_pump_cycle_title_label, font_inter_12, 0);

    lv_obj_t * edit_irrigation_pump_cycle_value_label = lv_label_create(edit_irrigation_pump_cycle_row);
    lv_obj_set_name(edit_irrigation_pump_cycle_value_label, "edit_irrigation_pump_cycle_value_label");
    lv_obj_set_x(edit_irrigation_pump_cycle_value_label, 220);
    lv_obj_set_y(edit_irrigation_pump_cycle_value_label, 14);
    lv_obj_set_width(edit_irrigation_pump_cycle_value_label, 160);
    lv_label_set_text(edit_irrigation_pump_cycle_value_label, pump_cycle_text);
    lv_label_set_long_mode(edit_irrigation_pump_cycle_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(edit_irrigation_pump_cycle_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(edit_irrigation_pump_cycle_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(edit_irrigation_pump_cycle_value_label, font_inter_12, 0);

    lv_obj_t * edit_irrigation_pump_cycle_icon_btn = lv_button_create(edit_irrigation_pump_cycle_row);
    lv_obj_set_name(edit_irrigation_pump_cycle_icon_btn, "edit_irrigation_pump_cycle_icon_btn");
    lv_obj_set_x(edit_irrigation_pump_cycle_icon_btn, 410);
    lv_obj_set_y(edit_irrigation_pump_cycle_icon_btn, 2);
    lv_obj_set_width(edit_irrigation_pump_cycle_icon_btn, 38);
    lv_obj_set_height(edit_irrigation_pump_cycle_icon_btn, 38);
    lv_obj_set_flag(edit_irrigation_pump_cycle_icon_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(edit_irrigation_pump_cycle_icon_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(edit_irrigation_pump_cycle_icon_btn, 0, 0);
    lv_obj_set_style_border_width(edit_irrigation_pump_cycle_icon_btn, 0, 0);
    lv_obj_set_style_shadow_width(edit_irrigation_pump_cycle_icon_btn, 0, 0);
    lv_obj_set_style_pad_all(edit_irrigation_pump_cycle_icon_btn, 0, 0);
    lv_obj_t * edit_irrigation_pump_cycle_chevron_icon = lv_image_create(edit_irrigation_pump_cycle_icon_btn);
    lv_obj_set_name(edit_irrigation_pump_cycle_chevron_icon, "edit_irrigation_pump_cycle_chevron_icon");
    lv_obj_set_x(edit_irrigation_pump_cycle_chevron_icon, 7);
    lv_obj_set_y(edit_irrigation_pump_cycle_chevron_icon, 7);
    lv_obj_set_width(edit_irrigation_pump_cycle_chevron_icon, 24);
    lv_obj_set_height(edit_irrigation_pump_cycle_chevron_icon, 24);
    lv_obj_set_flag(edit_irrigation_pump_cycle_chevron_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(edit_irrigation_pump_cycle_chevron_icon, LV_SCROLLBAR_MODE_OFF);
    lv_image_set_src(edit_irrigation_pump_cycle_chevron_icon, img_simple_chevron_icon_1);
    lv_obj_set_style_image_recolor(edit_irrigation_pump_cycle_chevron_icon, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_image_recolor_opa(edit_irrigation_pump_cycle_chevron_icon, 255, 0);

    lv_obj_t * edit_irrigation_settings_divider_3 = lv_obj_create(edit_irrigation_settings_card);
    lv_obj_set_name(edit_irrigation_settings_divider_3, "edit_irrigation_settings_divider_3");
    lv_obj_set_x(edit_irrigation_settings_divider_3, 16);
    lv_obj_set_y(edit_irrigation_settings_divider_3, 131);
    lv_obj_set_width(edit_irrigation_settings_divider_3, 420);
    lv_obj_set_height(edit_irrigation_settings_divider_3, 1);
    lv_obj_set_flag(edit_irrigation_settings_divider_3, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(edit_irrigation_settings_divider_3, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(edit_irrigation_settings_divider_3, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(edit_irrigation_settings_divider_3, 255, 0);
    lv_obj_set_style_border_width(edit_irrigation_settings_divider_3, 0, 0);
    lv_obj_set_style_pad_all(edit_irrigation_settings_divider_3, 0, 0);

    lv_obj_t * edit_irrigation_window_row = lv_obj_create(edit_irrigation_settings_card);
    lv_obj_set_name(edit_irrigation_window_row, "edit_irrigation_window_row");
    lv_obj_set_x(edit_irrigation_window_row, 0);
    lv_obj_set_y(edit_irrigation_window_row, 132);
    lv_obj_set_width(edit_irrigation_window_row, 452);
    lv_obj_set_height(edit_irrigation_window_row, 42);
    lv_obj_set_flag(edit_irrigation_window_row, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(edit_irrigation_window_row, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(edit_irrigation_window_row, 0, 0);
    lv_obj_set_style_border_width(edit_irrigation_window_row, 0, 0);
    lv_obj_set_style_radius(edit_irrigation_window_row, 0, 0);
    lv_obj_set_style_pad_all(edit_irrigation_window_row, 0, 0);
    lv_obj_t * edit_irrigation_window_title_label = lv_label_create(edit_irrigation_window_row);
    lv_obj_set_name(edit_irrigation_window_title_label, "edit_irrigation_window_title_label");
    lv_obj_set_x(edit_irrigation_window_title_label, 16);
    lv_obj_set_y(edit_irrigation_window_title_label, 14);
    lv_obj_set_width(edit_irrigation_window_title_label, 160);
    lv_label_set_text(edit_irrigation_window_title_label, "Irrigation Window");
    lv_label_set_long_mode(edit_irrigation_window_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(edit_irrigation_window_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(edit_irrigation_window_title_label, font_inter_12, 0);

    lv_obj_t * edit_irrigation_window_value_label = lv_label_create(edit_irrigation_window_row);
    lv_obj_set_name(edit_irrigation_window_value_label, "edit_irrigation_window_value_label");
    lv_obj_set_x(edit_irrigation_window_value_label, 220);
    lv_obj_set_y(edit_irrigation_window_value_label, 14);
    lv_obj_set_width(edit_irrigation_window_value_label, 160);
    lv_label_set_text(edit_irrigation_window_value_label, window_text);
    lv_label_set_long_mode(edit_irrigation_window_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(edit_irrigation_window_value_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(edit_irrigation_window_value_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(edit_irrigation_window_value_label, font_inter_12, 0);

    lv_obj_t * edit_irrigation_window_icon_btn = lv_button_create(edit_irrigation_window_row);
    lv_obj_set_name(edit_irrigation_window_icon_btn, "edit_irrigation_window_icon_btn");
    lv_obj_set_x(edit_irrigation_window_icon_btn, 410);
    lv_obj_set_y(edit_irrigation_window_icon_btn, 1);
    lv_obj_set_width(edit_irrigation_window_icon_btn, 38);
    lv_obj_set_height(edit_irrigation_window_icon_btn, 38);
    lv_obj_set_flag(edit_irrigation_window_icon_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(edit_irrigation_window_icon_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(edit_irrigation_window_icon_btn, 0, 0);
    lv_obj_set_style_border_width(edit_irrigation_window_icon_btn, 0, 0);
    lv_obj_set_style_shadow_width(edit_irrigation_window_icon_btn, 0, 0);
    lv_obj_set_style_pad_all(edit_irrigation_window_icon_btn, 0, 0);
    lv_obj_t * edit_irrigation_window_chevron_icon = lv_image_create(edit_irrigation_window_icon_btn);
    lv_obj_set_name(edit_irrigation_window_chevron_icon, "edit_irrigation_window_chevron_icon");
    lv_obj_set_x(edit_irrigation_window_chevron_icon, 7);
    lv_obj_set_y(edit_irrigation_window_chevron_icon, 7);
    lv_obj_set_width(edit_irrigation_window_chevron_icon, 24);
    lv_obj_set_height(edit_irrigation_window_chevron_icon, 24);
    lv_obj_set_flag(edit_irrigation_window_chevron_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(edit_irrigation_window_chevron_icon, LV_SCROLLBAR_MODE_OFF);
    lv_image_set_src(edit_irrigation_window_chevron_icon, img_simple_chevron_icon_1);
    lv_obj_set_style_image_recolor(edit_irrigation_window_chevron_icon, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_image_recolor_opa(edit_irrigation_window_chevron_icon, 255, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

