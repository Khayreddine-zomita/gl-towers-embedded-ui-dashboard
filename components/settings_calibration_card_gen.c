/**
 * @file settings_calibration_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "settings_calibration_card_gen.h"
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

lv_obj_t * settings_calibration_card_create(lv_obj_t * parent, const char * ph_status, const char * ec_status, const char * load_cell_status)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "settings_calibration_card_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 217);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * settings_calibration_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(settings_calibration_title_label, "settings_calibration_title_label");
    lv_obj_set_x(settings_calibration_title_label, 2);
    lv_obj_set_y(settings_calibration_title_label, 0);
    lv_obj_set_width(settings_calibration_title_label, 260);
    lv_label_set_text(settings_calibration_title_label, "CALIBRATION");
    lv_label_set_long_mode(settings_calibration_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_calibration_title_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(settings_calibration_title_label, font_inter_14, 0);
    lv_obj_set_style_text_letter_space(settings_calibration_title_label, 1, 0);

    lv_obj_t * settings_calibration_subtitle_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(settings_calibration_subtitle_label, "settings_calibration_subtitle_label");
    lv_obj_set_x(settings_calibration_subtitle_label, 250);
    lv_obj_set_y(settings_calibration_subtitle_label, 2);
    lv_obj_set_width(settings_calibration_subtitle_label, 198);
    lv_label_set_text(settings_calibration_subtitle_label, "1 Sensor");
    lv_label_set_long_mode(settings_calibration_subtitle_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_calibration_subtitle_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_calibration_subtitle_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_calibration_subtitle_label, font_inter_11, 0);

    lv_obj_t * settings_calibration_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(settings_calibration_card, "settings_calibration_card");
    lv_obj_set_x(settings_calibration_card, 0);
    lv_obj_set_y(settings_calibration_card, 35);
    lv_obj_set_width(settings_calibration_card, 452);
    lv_obj_set_height(settings_calibration_card, 146);
    lv_obj_set_flag(settings_calibration_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_calibration_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(settings_calibration_card, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(settings_calibration_card, 255, 0);
    lv_obj_set_style_radius(settings_calibration_card, 18, 0);
    lv_obj_set_style_pad_all(settings_calibration_card, 0, 0);
    lv_obj_set_style_border_width(settings_calibration_card, 2, 0);
    lv_obj_set_style_border_color(settings_calibration_card, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(settings_calibration_card, 8, 0);
    lv_obj_set_style_shadow_opa(settings_calibration_card, 16, 0);
    lv_obj_set_style_shadow_color(settings_calibration_card, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(settings_calibration_card, 3, 0);
    lv_obj_t * settings_calibration_load_cell_btn = lv_button_create(settings_calibration_card);
    lv_obj_set_name(settings_calibration_load_cell_btn, "settings_calibration_load_cell_btn");
    lv_obj_set_x(settings_calibration_load_cell_btn, 0);
    lv_obj_set_y(settings_calibration_load_cell_btn, 0);
    lv_obj_set_width(settings_calibration_load_cell_btn, 452);
    lv_obj_set_height(settings_calibration_load_cell_btn, 48);
    lv_obj_set_flag(settings_calibration_load_cell_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_calibration_load_cell_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(settings_calibration_load_cell_btn, 0, 0);
    lv_obj_set_style_border_width(settings_calibration_load_cell_btn, 0, 0);
    lv_obj_set_style_shadow_width(settings_calibration_load_cell_btn, 0, 0);
    lv_obj_set_style_pad_all(settings_calibration_load_cell_btn, 0, 0);
    lv_obj_t * settings_calibration_load_cell_title_label = lv_label_create(settings_calibration_load_cell_btn);
    lv_obj_set_name(settings_calibration_load_cell_title_label, "settings_calibration_load_cell_title_label");
    lv_obj_set_x(settings_calibration_load_cell_title_label, 18);
    lv_obj_set_y(settings_calibration_load_cell_title_label, 9);
    lv_obj_set_width(settings_calibration_load_cell_title_label, 190);
    lv_label_set_text(settings_calibration_load_cell_title_label, "Load Cell");
    lv_label_set_long_mode(settings_calibration_load_cell_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_calibration_load_cell_title_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(settings_calibration_load_cell_title_label, font_inter_12, 0);

    lv_obj_t * settings_calibration_load_cell_desc_label = lv_label_create(settings_calibration_load_cell_btn);
    lv_obj_set_name(settings_calibration_load_cell_desc_label, "settings_calibration_load_cell_desc_label");
    lv_obj_set_x(settings_calibration_load_cell_desc_label, 18);
    lv_obj_set_y(settings_calibration_load_cell_desc_label, 27);
    lv_obj_set_width(settings_calibration_load_cell_desc_label, 250);
    lv_label_set_text(settings_calibration_load_cell_desc_label, "Tank weight tare and scale");
    lv_label_set_long_mode(settings_calibration_load_cell_desc_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(settings_calibration_load_cell_desc_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(settings_calibration_load_cell_desc_label, font_inter_10, 0);

    lv_obj_t * settings_calibration_load_cell_status_label = lv_label_create(settings_calibration_load_cell_btn);
    lv_obj_set_name(settings_calibration_load_cell_status_label, "settings_calibration_load_cell_status_label");
    lv_obj_set_x(settings_calibration_load_cell_status_label, 250);
    lv_obj_set_y(settings_calibration_load_cell_status_label, 17);
    lv_obj_set_width(settings_calibration_load_cell_status_label, 120);
    lv_label_set_text(settings_calibration_load_cell_status_label, load_cell_status);
    lv_label_set_long_mode(settings_calibration_load_cell_status_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(settings_calibration_load_cell_status_label, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(settings_calibration_load_cell_status_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(settings_calibration_load_cell_status_label, font_inter_11, 0);

    lv_obj_t * settings_calibration_load_cell_chevron_icon = lv_image_create(settings_calibration_load_cell_btn);
    lv_obj_set_name(settings_calibration_load_cell_chevron_icon, "settings_calibration_load_cell_chevron_icon");
    lv_obj_set_x(settings_calibration_load_cell_chevron_icon, 416);
    lv_obj_set_y(settings_calibration_load_cell_chevron_icon, 16);
    lv_obj_set_width(settings_calibration_load_cell_chevron_icon, 16);
    lv_obj_set_height(settings_calibration_load_cell_chevron_icon, 16);
    lv_image_set_src(settings_calibration_load_cell_chevron_icon, img_simple_chevron_icon_1);
    lv_obj_set_flag(settings_calibration_load_cell_chevron_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(settings_calibration_load_cell_chevron_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(settings_calibration_load_cell_chevron_icon, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_image_recolor_opa(settings_calibration_load_cell_chevron_icon, 255, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

