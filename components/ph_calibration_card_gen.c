/**
 * @file ph_calibration_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "ph_calibration_card_gen.h"
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

lv_obj_t * ph_calibration_card_create(lv_obj_t * parent, const char * step_text, const char * current_value, const char * stability_status, const char * instruction_title, const char * instruction_text)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "ph_calibration_card_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 217);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * ph_calibration_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(ph_calibration_title_label, "ph_calibration_title_label");
    lv_obj_set_x(ph_calibration_title_label, 2);
    lv_obj_set_y(ph_calibration_title_label, 0);
    lv_obj_set_width(ph_calibration_title_label, 220);
    lv_label_set_text(ph_calibration_title_label, "PH CALIBRATION");
    lv_label_set_long_mode(ph_calibration_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(ph_calibration_title_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(ph_calibration_title_label, font_inter_14, 0);
    lv_obj_set_style_text_letter_space(ph_calibration_title_label, 1, 0);

    lv_obj_t * ph_calibration_step_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(ph_calibration_step_label, "ph_calibration_step_label");
    lv_obj_set_x(ph_calibration_step_label, 318);
    lv_obj_set_y(ph_calibration_step_label, 1);
    lv_obj_set_width(ph_calibration_step_label, 130);
    lv_label_set_text(ph_calibration_step_label, step_text);
    lv_label_set_long_mode(ph_calibration_step_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(ph_calibration_step_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(ph_calibration_step_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(ph_calibration_step_label, font_inter_12, 0);

    lv_obj_t * ph_calibration_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(ph_calibration_card, "ph_calibration_card");
    lv_obj_set_x(ph_calibration_card, 0);
    lv_obj_set_y(ph_calibration_card, 24);
    lv_obj_set_width(ph_calibration_card, 452);
    lv_obj_set_height(ph_calibration_card, 193);
    lv_obj_set_flag(ph_calibration_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(ph_calibration_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ph_calibration_card, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(ph_calibration_card, 255, 0);
    lv_obj_set_style_radius(ph_calibration_card, 18, 0);
    lv_obj_set_style_pad_all(ph_calibration_card, 0, 0);
    lv_obj_set_style_border_width(ph_calibration_card, 1, 0);
    lv_obj_set_style_border_color(ph_calibration_card, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(ph_calibration_card, 8, 0);
    lv_obj_set_style_shadow_opa(ph_calibration_card, 16, 0);
    lv_obj_set_style_shadow_color(ph_calibration_card, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(ph_calibration_card, 3, 0);
    lv_obj_t * ph_calibration_current_title_label = lv_label_create(ph_calibration_card);
    lv_obj_set_name(ph_calibration_current_title_label, "ph_calibration_current_title_label");
    lv_obj_set_x(ph_calibration_current_title_label, 18);
    lv_obj_set_y(ph_calibration_current_title_label, 12);
    lv_obj_set_width(ph_calibration_current_title_label, 160);
    lv_label_set_text(ph_calibration_current_title_label, "Current reading");
    lv_label_set_long_mode(ph_calibration_current_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(ph_calibration_current_title_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(ph_calibration_current_title_label, font_inter_12, 0);

    lv_obj_t * ph_calibration_current_value_label = lv_label_create(ph_calibration_card);
    lv_obj_set_name(ph_calibration_current_value_label, "ph_calibration_current_value_label");
    lv_obj_set_x(ph_calibration_current_value_label, 18);
    lv_obj_set_y(ph_calibration_current_value_label, 31);
    lv_obj_set_width(ph_calibration_current_value_label, 120);
    lv_label_set_text(ph_calibration_current_value_label, current_value);
    lv_label_set_long_mode(ph_calibration_current_value_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(ph_calibration_current_value_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(ph_calibration_current_value_label, font_inter_26, 0);

    lv_obj_t * ph_calibration_current_unit_label = lv_label_create(ph_calibration_card);
    lv_obj_set_name(ph_calibration_current_unit_label, "ph_calibration_current_unit_label");
    lv_obj_set_x(ph_calibration_current_unit_label, 118);
    lv_obj_set_y(ph_calibration_current_unit_label, 42);
    lv_obj_set_width(ph_calibration_current_unit_label, 40);
    lv_label_set_text(ph_calibration_current_unit_label, "pH");
    lv_label_set_long_mode(ph_calibration_current_unit_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(ph_calibration_current_unit_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(ph_calibration_current_unit_label, font_inter_12, 0);

    lv_obj_t * ph_calibration_stability_pill = lv_obj_create(ph_calibration_card);
    lv_obj_set_name(ph_calibration_stability_pill, "ph_calibration_stability_pill");
    lv_obj_set_x(ph_calibration_stability_pill, 322);
    lv_obj_set_y(ph_calibration_stability_pill, 22);
    lv_obj_set_width(ph_calibration_stability_pill, 92);
    lv_obj_set_height(ph_calibration_stability_pill, 28);
    lv_obj_set_flag(ph_calibration_stability_pill, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(ph_calibration_stability_pill, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ph_calibration_stability_pill, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_bg_opa(ph_calibration_stability_pill, 255, 0);
    lv_obj_set_style_radius(ph_calibration_stability_pill, 14, 0);
    lv_obj_set_style_border_width(ph_calibration_stability_pill, 0, 0);
    lv_obj_set_style_pad_all(ph_calibration_stability_pill, 0, 0);
    lv_obj_t * ph_calibration_stability_label = lv_label_create(ph_calibration_stability_pill);
    lv_obj_set_name(ph_calibration_stability_label, "ph_calibration_stability_label");
    lv_obj_set_x(ph_calibration_stability_label, 0);
    lv_obj_set_y(ph_calibration_stability_label, 7);
    lv_obj_set_width(ph_calibration_stability_label, 92);
    lv_label_set_text(ph_calibration_stability_label, stability_status);
    lv_label_set_long_mode(ph_calibration_stability_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(ph_calibration_stability_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(ph_calibration_stability_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(ph_calibration_stability_label, font_inter_12, 0);

    lv_obj_t * ph_calibration_divider_1 = lv_obj_create(ph_calibration_card);
    lv_obj_set_name(ph_calibration_divider_1, "ph_calibration_divider_1");
    lv_obj_set_x(ph_calibration_divider_1, 18);
    lv_obj_set_y(ph_calibration_divider_1, 66);
    lv_obj_set_width(ph_calibration_divider_1, 416);
    lv_obj_set_height(ph_calibration_divider_1, 1);
    lv_obj_set_flag(ph_calibration_divider_1, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(ph_calibration_divider_1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ph_calibration_divider_1, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(ph_calibration_divider_1, 255, 0);
    lv_obj_set_style_border_width(ph_calibration_divider_1, 0, 0);
    lv_obj_set_style_pad_all(ph_calibration_divider_1, 0, 0);

    lv_obj_t * ph_calibration_buffer_title_label = lv_label_create(ph_calibration_card);
    lv_obj_set_name(ph_calibration_buffer_title_label, "ph_calibration_buffer_title_label");
    lv_obj_set_x(ph_calibration_buffer_title_label, 18);
    lv_obj_set_y(ph_calibration_buffer_title_label, 79);
    lv_obj_set_width(ph_calibration_buffer_title_label, 150);
    lv_label_set_text(ph_calibration_buffer_title_label, "Calibration point");
    lv_label_set_long_mode(ph_calibration_buffer_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(ph_calibration_buffer_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(ph_calibration_buffer_title_label, font_inter_12, 0);

    lv_obj_t * ph_calibration_point_dropdown = lv_dropdown_create(ph_calibration_card);
    lv_obj_set_name(ph_calibration_point_dropdown, "ph_calibration_point_dropdown");
    lv_obj_set_x(ph_calibration_point_dropdown, 292);
    lv_obj_set_y(ph_calibration_point_dropdown, 73);
    lv_obj_set_width(ph_calibration_point_dropdown, 122);
    lv_obj_set_height(ph_calibration_point_dropdown, 30);
    lv_dropdown_set_options(ph_calibration_point_dropdown, "pH 7.00\npH 4.00\npH 10.00");
    lv_dropdown_set_selected(ph_calibration_point_dropdown, 0);
    lv_dropdown_set_symbol(ph_calibration_point_dropdown, img_simple_chevron_icon_1);
    lv_obj_set_flag(ph_calibration_point_dropdown, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(ph_calibration_point_dropdown, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ph_calibration_point_dropdown, COLOR_DARK_FOREST, 0);
    lv_obj_set_style_bg_opa(ph_calibration_point_dropdown, 255, 0);
    lv_obj_set_style_radius(ph_calibration_point_dropdown, 10, 0);
    lv_obj_set_style_border_width(ph_calibration_point_dropdown, 0, 0);
    lv_obj_set_style_pad_left(ph_calibration_point_dropdown, 10, 0);
    lv_obj_set_style_pad_right(ph_calibration_point_dropdown, 8, 0);
    lv_obj_set_style_text_color(ph_calibration_point_dropdown, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(ph_calibration_point_dropdown, font_inter_11, 0);
    lv_obj_set_style_image_recolor(ph_calibration_point_dropdown, COLOR_WHITE, LV_PART_INDICATOR);
    lv_obj_set_style_image_recolor_opa(ph_calibration_point_dropdown, 255, LV_PART_INDICATOR);
    lv_obj_set_style_transform_rotation(ph_calibration_point_dropdown, 900, LV_PART_INDICATOR);
    lv_obj_set_style_transform_pivot_x(ph_calibration_point_dropdown, 8, LV_PART_INDICATOR);
    lv_obj_set_style_transform_pivot_y(ph_calibration_point_dropdown, 8, LV_PART_INDICATOR);
    lv_obj_t * lv_dropdown_list_0 = lv_dropdown_get_list(ph_calibration_point_dropdown);
    lv_obj_set_style_bg_color(lv_dropdown_list_0, COLOR_CARD_BG, LV_PART_SELECTED);
    lv_obj_set_style_bg_opa(lv_dropdown_list_0, 255, LV_PART_SELECTED);
    lv_obj_set_style_radius(lv_dropdown_list_0, 10, 0);
    lv_obj_set_style_border_width(lv_dropdown_list_0, 1, 0);
    lv_obj_set_style_border_color(lv_dropdown_list_0, COLOR_DIVIDER, 0);
    lv_obj_set_style_text_color(lv_dropdown_list_0, COLOR_TEXT_PRIMARY, LV_PART_SELECTED);
    lv_obj_set_style_text_font(lv_dropdown_list_0, font_inter_11, 0);

    lv_obj_t * ph_calibration_divider_2 = lv_obj_create(ph_calibration_card);
    lv_obj_set_name(ph_calibration_divider_2, "ph_calibration_divider_2");
    lv_obj_set_x(ph_calibration_divider_2, 18);
    lv_obj_set_y(ph_calibration_divider_2, 113);
    lv_obj_set_width(ph_calibration_divider_2, 416);
    lv_obj_set_height(ph_calibration_divider_2, 1);
    lv_obj_set_flag(ph_calibration_divider_2, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(ph_calibration_divider_2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ph_calibration_divider_2, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(ph_calibration_divider_2, 255, 0);
    lv_obj_set_style_border_width(ph_calibration_divider_2, 0, 0);
    lv_obj_set_style_pad_all(ph_calibration_divider_2, 0, 0);

    lv_obj_t * ph_calibration_instruction_title_label = lv_label_create(ph_calibration_card);
    lv_obj_set_name(ph_calibration_instruction_title_label, "ph_calibration_instruction_title_label");
    lv_obj_set_x(ph_calibration_instruction_title_label, 18);
    lv_obj_set_y(ph_calibration_instruction_title_label, 126);
    lv_obj_set_width(ph_calibration_instruction_title_label, 300);
    lv_label_set_text(ph_calibration_instruction_title_label, instruction_title);
    lv_label_set_long_mode(ph_calibration_instruction_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(ph_calibration_instruction_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(ph_calibration_instruction_title_label, font_inter_12, 0);

    lv_obj_t * ph_calibration_instruction_text_label = lv_label_create(ph_calibration_card);
    lv_obj_set_name(ph_calibration_instruction_text_label, "ph_calibration_instruction_text_label");
    lv_obj_set_x(ph_calibration_instruction_text_label, 18);
    lv_obj_set_y(ph_calibration_instruction_text_label, 147);
    lv_obj_set_width(ph_calibration_instruction_text_label, 396);
    lv_obj_set_height(ph_calibration_instruction_text_label, 34);
    lv_label_set_text(ph_calibration_instruction_text_label, instruction_text);
    lv_label_set_long_mode(ph_calibration_instruction_text_label, LV_LABEL_LONG_MODE_WRAP);
    lv_obj_set_style_text_color(ph_calibration_instruction_text_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(ph_calibration_instruction_text_label, font_inter_11, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

