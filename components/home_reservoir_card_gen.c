/**
 * @file home_reservoir_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "home_reservoir_card_gen.h"
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

lv_obj_t * home_reservoir_card_create(lv_obj_t * parent, const char * reservoir_value, int32_t reservoir_unit_x, const char * reservoir_volume, const char * reservoir_hint, int32_t reservoir_level)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "home_reservoir_card_#");
    lv_obj_set_width(lv_obj_0, 464);
    lv_obj_set_height(lv_obj_0, 104);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 255, 0);
    lv_obj_set_style_radius(lv_obj_0, 16, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 2, 0);
    lv_obj_set_style_border_color(lv_obj_0, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(lv_obj_0, 8, 0);
    lv_obj_set_style_shadow_opa(lv_obj_0, 18, 0);
    lv_obj_set_style_shadow_color(lv_obj_0, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(lv_obj_0, 3, 0);

    lv_obj_t * reservoir_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(reservoir_title_label, "reservoir_title_label");
    lv_obj_set_x(reservoir_title_label, 18);
    lv_obj_set_y(reservoir_title_label, 10);
    lv_obj_set_width(reservoir_title_label, 140);
    lv_label_set_text(reservoir_title_label, "RESERVOIR");
    lv_label_set_long_mode(reservoir_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(reservoir_title_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(reservoir_title_label, font_inter_12, 0);

    lv_obj_t * reservoir_percent_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(reservoir_percent_label, "reservoir_percent_label");
    lv_obj_set_x(reservoir_percent_label, 18);
    lv_obj_set_y(reservoir_percent_label, 36);
    lv_obj_set_width(reservoir_percent_label, 80);
    lv_label_set_text(reservoir_percent_label, reservoir_value);
    lv_label_set_long_mode(reservoir_percent_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(reservoir_percent_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(reservoir_percent_label, font_inter_26, 0);

    lv_obj_t * reservoir_percent_unit_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(reservoir_percent_unit_label, "reservoir_percent_unit_label");
    lv_obj_set_x(reservoir_percent_unit_label, reservoir_unit_x);
    lv_obj_set_y(reservoir_percent_unit_label, 49);
    lv_obj_set_width(reservoir_percent_unit_label, 28);
    lv_label_set_text(reservoir_percent_unit_label, "%");
    lv_label_set_long_mode(reservoir_percent_unit_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(reservoir_percent_unit_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(reservoir_percent_unit_label, font_inter_12, 0);

    lv_obj_t * reservoir_volume_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(reservoir_volume_label, "reservoir_volume_label");
    lv_obj_set_x(reservoir_volume_label, 158);
    lv_obj_set_y(reservoir_volume_label, 34);
    lv_obj_set_width(reservoir_volume_label, 180);
    lv_label_set_text(reservoir_volume_label, reservoir_volume);
    lv_label_set_long_mode(reservoir_volume_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(reservoir_volume_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(reservoir_volume_label, font_inter_12, 0);

    lv_obj_t * reservoir_hint_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(reservoir_hint_label, "reservoir_hint_label");
    lv_obj_set_x(reservoir_hint_label, 158);
    lv_obj_set_y(reservoir_hint_label, 56);
    lv_obj_set_width(reservoir_hint_label, 200);
    lv_label_set_text(reservoir_hint_label, reservoir_hint);
    lv_label_set_long_mode(reservoir_hint_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(reservoir_hint_label, COLOR_TEXT_MUTED, 0);
    lv_obj_set_style_text_font(reservoir_hint_label, font_inter_12, 0);

    lv_obj_t * reservoir_water_icon = lv_image_create(lv_obj_0);
    lv_obj_set_name(reservoir_water_icon, "reservoir_water_icon");
    lv_obj_set_x(reservoir_water_icon, 410);
    lv_obj_set_y(reservoir_water_icon, 27);
    lv_obj_set_width(reservoir_water_icon, 28);
    lv_obj_set_height(reservoir_water_icon, 28);
    lv_image_set_src(reservoir_water_icon, img_home_irrigation);
    lv_obj_set_flag(reservoir_water_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(reservoir_water_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(reservoir_water_icon, COLOR_STATUS_INFO, 0);
    lv_obj_set_style_image_recolor_opa(reservoir_water_icon, 255, 0);

    lv_obj_t * reservoir_level_bar = lv_bar_create(lv_obj_0);
    lv_obj_set_name(reservoir_level_bar, "reservoir_level_bar");
    lv_obj_set_x(reservoir_level_bar, 18);
    lv_obj_set_y(reservoir_level_bar, 82);
    lv_obj_set_width(reservoir_level_bar, 428);
    lv_obj_set_height(reservoir_level_bar, 8);
    lv_bar_set_min_value(reservoir_level_bar, 0);
    lv_bar_set_max_value(reservoir_level_bar, 100);
    lv_bar_set_value(reservoir_level_bar, reservoir_level, false);
    lv_obj_set_flag(reservoir_level_bar, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(reservoir_level_bar, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(reservoir_level_bar, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(reservoir_level_bar, 255, 0);
    lv_obj_set_style_radius(reservoir_level_bar, 4, 0);
    lv_obj_set_style_border_width(reservoir_level_bar, 0, 0);
    lv_obj_set_style_pad_all(reservoir_level_bar, 0, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

