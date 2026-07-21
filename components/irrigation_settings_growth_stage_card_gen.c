/**
 * @file irrigation_settings_growth_stage_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "irrigation_settings_growth_stage_card_gen.h"
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

lv_obj_t * irrigation_settings_growth_stage_card_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "irrigation_settings_growth_stage_card_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 217);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * irrigation_settings_growth_stage_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(irrigation_settings_growth_stage_title_label, "irrigation_settings_growth_stage_title_label");
    lv_obj_set_x(irrigation_settings_growth_stage_title_label, 2);
    lv_obj_set_y(irrigation_settings_growth_stage_title_label, 0);
    lv_obj_set_width(irrigation_settings_growth_stage_title_label, 340);
    lv_label_set_text(irrigation_settings_growth_stage_title_label, "Growth Stage");
    lv_label_set_long_mode(irrigation_settings_growth_stage_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_settings_growth_stage_title_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(irrigation_settings_growth_stage_title_label, font_inter_14, 0);

    lv_obj_t * irrigation_growth_stage_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(irrigation_growth_stage_card, "irrigation_growth_stage_card");
    lv_obj_set_x(irrigation_growth_stage_card, 0);
    lv_obj_set_y(irrigation_growth_stage_card, 24);
    lv_obj_set_width(irrigation_growth_stage_card, 452);
    lv_obj_set_height(irrigation_growth_stage_card, 193);
    lv_obj_set_flag(irrigation_growth_stage_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_growth_stage_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_growth_stage_card, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(irrigation_growth_stage_card, 255, 0);
    lv_obj_set_style_radius(irrigation_growth_stage_card, 18, 0);
    lv_obj_set_style_pad_all(irrigation_growth_stage_card, 0, 0);
    lv_obj_set_style_border_width(irrigation_growth_stage_card, 2, 0);
    lv_obj_set_style_border_color(irrigation_growth_stage_card, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(irrigation_growth_stage_card, 8, 0);
    lv_obj_set_style_shadow_opa(irrigation_growth_stage_card, 16, 0);
    lv_obj_set_style_shadow_color(irrigation_growth_stage_card, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(irrigation_growth_stage_card, 3, 0);
    lv_obj_t * irrigation_growth_stage_germination_btn = lv_button_create(irrigation_growth_stage_card);
    lv_obj_set_name(irrigation_growth_stage_germination_btn, "irrigation_growth_stage_germination_btn");
    lv_obj_set_x(irrigation_growth_stage_germination_btn, 18);
    lv_obj_set_y(irrigation_growth_stage_germination_btn, 10);
    lv_obj_set_width(irrigation_growth_stage_germination_btn, 416);
    lv_obj_set_height(irrigation_growth_stage_germination_btn, 38);
    lv_obj_set_flag(irrigation_growth_stage_germination_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_growth_stage_germination_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_growth_stage_germination_btn, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_bg_opa(irrigation_growth_stage_germination_btn, 90, 0);
    lv_obj_set_style_radius(irrigation_growth_stage_germination_btn, 12, 0);
    lv_obj_set_style_border_width(irrigation_growth_stage_germination_btn, 1, 0);
    lv_obj_set_style_border_color(irrigation_growth_stage_germination_btn, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_pad_all(irrigation_growth_stage_germination_btn, 0, 0);
    lv_obj_set_style_shadow_width(irrigation_growth_stage_germination_btn, 0, 0);
    lv_obj_t * irrigation_growth_stage_germination_icon = lv_image_create(irrigation_growth_stage_germination_btn);
    lv_obj_set_name(irrigation_growth_stage_germination_icon, "irrigation_growth_stage_germination_icon");
    lv_obj_set_x(irrigation_growth_stage_germination_icon, 16);
    lv_obj_set_y(irrigation_growth_stage_germination_icon, 7);
    lv_obj_set_width(irrigation_growth_stage_germination_icon, 24);
    lv_obj_set_height(irrigation_growth_stage_germination_icon, 24);
    lv_image_set_src(irrigation_growth_stage_germination_icon, img_irrigation_growth_stage_germination_color_16px);
    lv_obj_set_flag(irrigation_growth_stage_germination_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_growth_stage_germination_icon, LV_SCROLLBAR_MODE_OFF);

    lv_obj_t * irrigation_growth_stage_germination_name_label = lv_label_create(irrigation_growth_stage_germination_btn);
    lv_obj_set_name(irrigation_growth_stage_germination_name_label, "irrigation_growth_stage_germination_name_label");
    lv_obj_set_x(irrigation_growth_stage_germination_name_label, 56);
    lv_obj_set_y(irrigation_growth_stage_germination_name_label, 5);
    lv_obj_set_width(irrigation_growth_stage_germination_name_label, 210);
    lv_label_set_text(irrigation_growth_stage_germination_name_label, "Germination");
    lv_label_set_long_mode(irrigation_growth_stage_germination_name_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_growth_stage_germination_name_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_growth_stage_germination_name_label, font_inter_12, 0);

    lv_obj_t * irrigation_growth_stage_germination_desc_label = lv_label_create(irrigation_growth_stage_germination_btn);
    lv_obj_set_name(irrigation_growth_stage_germination_desc_label, "irrigation_growth_stage_germination_desc_label");
    lv_obj_set_x(irrigation_growth_stage_germination_desc_label, 56);
    lv_obj_set_y(irrigation_growth_stage_germination_desc_label, 22);
    lv_obj_set_width(irrigation_growth_stage_germination_desc_label, 290);
    lv_label_set_text(irrigation_growth_stage_germination_desc_label, "Seeds germinating, minimal water needed");
    lv_label_set_long_mode(irrigation_growth_stage_germination_desc_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_growth_stage_germination_desc_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(irrigation_growth_stage_germination_desc_label, font_inter_9, 0);

    lv_obj_t * irrigation_growth_stage_germination_selected_circle = lv_obj_create(irrigation_growth_stage_germination_btn);
    lv_obj_set_name(irrigation_growth_stage_germination_selected_circle, "irrigation_growth_stage_germination_selected_circle");
    lv_obj_set_x(irrigation_growth_stage_germination_selected_circle, 376);
    lv_obj_set_y(irrigation_growth_stage_germination_selected_circle, 8);
    lv_obj_set_width(irrigation_growth_stage_germination_selected_circle, 20);
    lv_obj_set_height(irrigation_growth_stage_germination_selected_circle, 20);
    lv_obj_set_flag(irrigation_growth_stage_germination_selected_circle, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_growth_stage_germination_selected_circle, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_growth_stage_germination_selected_circle, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_bg_opa(irrigation_growth_stage_germination_selected_circle, 255, 0);
    lv_obj_set_style_radius(irrigation_growth_stage_germination_selected_circle, 10, 0);
    lv_obj_set_style_border_width(irrigation_growth_stage_germination_selected_circle, 0, 0);
    lv_obj_set_style_pad_all(irrigation_growth_stage_germination_selected_circle, 0, 0);
    lv_obj_t * irrigation_growth_stage_germination_selected_dot = lv_obj_create(irrigation_growth_stage_germination_selected_circle);
    lv_obj_set_name(irrigation_growth_stage_germination_selected_dot, "irrigation_growth_stage_germination_selected_dot");
    lv_obj_set_x(irrigation_growth_stage_germination_selected_dot, 7);
    lv_obj_set_y(irrigation_growth_stage_germination_selected_dot, 7);
    lv_obj_set_width(irrigation_growth_stage_germination_selected_dot, 6);
    lv_obj_set_height(irrigation_growth_stage_germination_selected_dot, 6);
    lv_obj_set_flag(irrigation_growth_stage_germination_selected_dot, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_growth_stage_germination_selected_dot, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_growth_stage_germination_selected_dot, COLOR_WHITE, 0);
    lv_obj_set_style_bg_opa(irrigation_growth_stage_germination_selected_dot, 255, 0);
    lv_obj_set_style_radius(irrigation_growth_stage_germination_selected_dot, 3, 0);
    lv_obj_set_style_border_width(irrigation_growth_stage_germination_selected_dot, 0, 0);
    lv_obj_set_style_pad_all(irrigation_growth_stage_germination_selected_dot, 0, 0);

    lv_obj_t * irrigation_growth_stage_seedling_btn = lv_button_create(irrigation_growth_stage_card);
    lv_obj_set_name(irrigation_growth_stage_seedling_btn, "irrigation_growth_stage_seedling_btn");
    lv_obj_set_x(irrigation_growth_stage_seedling_btn, 18);
    lv_obj_set_y(irrigation_growth_stage_seedling_btn, 55);
    lv_obj_set_width(irrigation_growth_stage_seedling_btn, 416);
    lv_obj_set_height(irrigation_growth_stage_seedling_btn, 38);
    lv_obj_set_flag(irrigation_growth_stage_seedling_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_growth_stage_seedling_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_growth_stage_seedling_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(irrigation_growth_stage_seedling_btn, 255, 0);
    lv_obj_set_style_radius(irrigation_growth_stage_seedling_btn, 12, 0);
    lv_obj_set_style_border_width(irrigation_growth_stage_seedling_btn, 1, 0);
    lv_obj_set_style_border_color(irrigation_growth_stage_seedling_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(irrigation_growth_stage_seedling_btn, 0, 0);
    lv_obj_set_style_shadow_width(irrigation_growth_stage_seedling_btn, 0, 0);
    lv_obj_t * irrigation_growth_stage_seedling_icon = lv_image_create(irrigation_growth_stage_seedling_btn);
    lv_obj_set_name(irrigation_growth_stage_seedling_icon, "irrigation_growth_stage_seedling_icon");
    lv_obj_set_x(irrigation_growth_stage_seedling_icon, 16);
    lv_obj_set_y(irrigation_growth_stage_seedling_icon, 5);
    lv_obj_set_width(irrigation_growth_stage_seedling_icon, 24);
    lv_obj_set_height(irrigation_growth_stage_seedling_icon, 24);
    lv_image_set_src(irrigation_growth_stage_seedling_icon, img_irrigation_growth_stage_seedling_16px);
    lv_obj_set_flag(irrigation_growth_stage_seedling_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_growth_stage_seedling_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(irrigation_growth_stage_seedling_icon, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_image_recolor_opa(irrigation_growth_stage_seedling_icon, 255, 0);

    lv_obj_t * irrigation_growth_stage_seedling_name_label = lv_label_create(irrigation_growth_stage_seedling_btn);
    lv_obj_set_name(irrigation_growth_stage_seedling_name_label, "irrigation_growth_stage_seedling_name_label");
    lv_obj_set_x(irrigation_growth_stage_seedling_name_label, 56);
    lv_obj_set_y(irrigation_growth_stage_seedling_name_label, 5);
    lv_obj_set_width(irrigation_growth_stage_seedling_name_label, 210);
    lv_label_set_text(irrigation_growth_stage_seedling_name_label, "Seedling / Young");
    lv_label_set_long_mode(irrigation_growth_stage_seedling_name_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_growth_stage_seedling_name_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_growth_stage_seedling_name_label, font_inter_12, 0);

    lv_obj_t * irrigation_growth_stage_seedling_desc_label = lv_label_create(irrigation_growth_stage_seedling_btn);
    lv_obj_set_name(irrigation_growth_stage_seedling_desc_label, "irrigation_growth_stage_seedling_desc_label");
    lv_obj_set_x(irrigation_growth_stage_seedling_desc_label, 56);
    lv_obj_set_y(irrigation_growth_stage_seedling_desc_label, 22);
    lv_obj_set_width(irrigation_growth_stage_seedling_desc_label, 290);
    lv_label_set_text(irrigation_growth_stage_seedling_desc_label, "Young developing plants, gentle irrigation");
    lv_label_set_long_mode(irrigation_growth_stage_seedling_desc_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_growth_stage_seedling_desc_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(irrigation_growth_stage_seedling_desc_label, font_inter_10, 0);

    lv_obj_t * irrigation_growth_stage_seedling_radio_circle = lv_obj_create(irrigation_growth_stage_seedling_btn);
    lv_obj_set_name(irrigation_growth_stage_seedling_radio_circle, "irrigation_growth_stage_seedling_radio_circle");
    lv_obj_set_x(irrigation_growth_stage_seedling_radio_circle, 376);
    lv_obj_set_y(irrigation_growth_stage_seedling_radio_circle, 8);
    lv_obj_set_width(irrigation_growth_stage_seedling_radio_circle, 20);
    lv_obj_set_height(irrigation_growth_stage_seedling_radio_circle, 20);
    lv_obj_set_flag(irrigation_growth_stage_seedling_radio_circle, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_growth_stage_seedling_radio_circle, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(irrigation_growth_stage_seedling_radio_circle, 0, 0);
    lv_obj_set_style_radius(irrigation_growth_stage_seedling_radio_circle, 10, 0);
    lv_obj_set_style_border_width(irrigation_growth_stage_seedling_radio_circle, 2, 0);
    lv_obj_set_style_border_color(irrigation_growth_stage_seedling_radio_circle, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(irrigation_growth_stage_seedling_radio_circle, 0, 0);

    lv_obj_t * irrigation_growth_stage_vegetative_btn = lv_button_create(irrigation_growth_stage_card);
    lv_obj_set_name(irrigation_growth_stage_vegetative_btn, "irrigation_growth_stage_vegetative_btn");
    lv_obj_set_x(irrigation_growth_stage_vegetative_btn, 18);
    lv_obj_set_y(irrigation_growth_stage_vegetative_btn, 100);
    lv_obj_set_width(irrigation_growth_stage_vegetative_btn, 416);
    lv_obj_set_height(irrigation_growth_stage_vegetative_btn, 38);
    lv_obj_set_flag(irrigation_growth_stage_vegetative_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_growth_stage_vegetative_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_growth_stage_vegetative_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(irrigation_growth_stage_vegetative_btn, 255, 0);
    lv_obj_set_style_radius(irrigation_growth_stage_vegetative_btn, 12, 0);
    lv_obj_set_style_border_width(irrigation_growth_stage_vegetative_btn, 1, 0);
    lv_obj_set_style_border_color(irrigation_growth_stage_vegetative_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(irrigation_growth_stage_vegetative_btn, 0, 0);
    lv_obj_set_style_shadow_width(irrigation_growth_stage_vegetative_btn, 0, 0);
    lv_obj_t * irrigation_growth_stage_vegetative_icon = lv_image_create(irrigation_growth_stage_vegetative_btn);
    lv_obj_set_name(irrigation_growth_stage_vegetative_icon, "irrigation_growth_stage_vegetative_icon");
    lv_obj_set_x(irrigation_growth_stage_vegetative_icon, 16);
    lv_obj_set_y(irrigation_growth_stage_vegetative_icon, 7);
    lv_obj_set_width(irrigation_growth_stage_vegetative_icon, 24);
    lv_obj_set_height(irrigation_growth_stage_vegetative_icon, 24);
    lv_image_set_src(irrigation_growth_stage_vegetative_icon, img_irrigation_growth_stage_vegetative_16px);
    lv_obj_set_flag(irrigation_growth_stage_vegetative_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_growth_stage_vegetative_icon, LV_SCROLLBAR_MODE_OFF);

    lv_obj_t * irrigation_growth_stage_vegetative_name_label = lv_label_create(irrigation_growth_stage_vegetative_btn);
    lv_obj_set_name(irrigation_growth_stage_vegetative_name_label, "irrigation_growth_stage_vegetative_name_label");
    lv_obj_set_x(irrigation_growth_stage_vegetative_name_label, 56);
    lv_obj_set_y(irrigation_growth_stage_vegetative_name_label, 5);
    lv_obj_set_width(irrigation_growth_stage_vegetative_name_label, 210);
    lv_label_set_text(irrigation_growth_stage_vegetative_name_label, "Vegetative");
    lv_label_set_long_mode(irrigation_growth_stage_vegetative_name_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_growth_stage_vegetative_name_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_growth_stage_vegetative_name_label, font_inter_12, 0);

    lv_obj_t * irrigation_growth_stage_vegetative_desc_label = lv_label_create(irrigation_growth_stage_vegetative_btn);
    lv_obj_set_name(irrigation_growth_stage_vegetative_desc_label, "irrigation_growth_stage_vegetative_desc_label");
    lv_obj_set_x(irrigation_growth_stage_vegetative_desc_label, 56);
    lv_obj_set_y(irrigation_growth_stage_vegetative_desc_label, 22);
    lv_obj_set_width(irrigation_growth_stage_vegetative_desc_label, 290);
    lv_label_set_text(irrigation_growth_stage_vegetative_desc_label, "Active leaf growth, regular irrigation");
    lv_label_set_long_mode(irrigation_growth_stage_vegetative_desc_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_growth_stage_vegetative_desc_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(irrigation_growth_stage_vegetative_desc_label, font_inter_9, 0);

    lv_obj_t * irrigation_growth_stage_vegetative_radio_circle = lv_obj_create(irrigation_growth_stage_vegetative_btn);
    lv_obj_set_name(irrigation_growth_stage_vegetative_radio_circle, "irrigation_growth_stage_vegetative_radio_circle");
    lv_obj_set_x(irrigation_growth_stage_vegetative_radio_circle, 376);
    lv_obj_set_y(irrigation_growth_stage_vegetative_radio_circle, 8);
    lv_obj_set_width(irrigation_growth_stage_vegetative_radio_circle, 20);
    lv_obj_set_height(irrigation_growth_stage_vegetative_radio_circle, 20);
    lv_obj_set_flag(irrigation_growth_stage_vegetative_radio_circle, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_growth_stage_vegetative_radio_circle, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(irrigation_growth_stage_vegetative_radio_circle, 0, 0);
    lv_obj_set_style_radius(irrigation_growth_stage_vegetative_radio_circle, 10, 0);
    lv_obj_set_style_border_width(irrigation_growth_stage_vegetative_radio_circle, 2, 0);
    lv_obj_set_style_border_color(irrigation_growth_stage_vegetative_radio_circle, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(irrigation_growth_stage_vegetative_radio_circle, 0, 0);

    lv_obj_t * irrigation_growth_stage_mature_btn = lv_button_create(irrigation_growth_stage_card);
    lv_obj_set_name(irrigation_growth_stage_mature_btn, "irrigation_growth_stage_mature_btn");
    lv_obj_set_x(irrigation_growth_stage_mature_btn, 18);
    lv_obj_set_y(irrigation_growth_stage_mature_btn, 145);
    lv_obj_set_width(irrigation_growth_stage_mature_btn, 416);
    lv_obj_set_height(irrigation_growth_stage_mature_btn, 38);
    lv_obj_set_flag(irrigation_growth_stage_mature_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_growth_stage_mature_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_growth_stage_mature_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(irrigation_growth_stage_mature_btn, 255, 0);
    lv_obj_set_style_radius(irrigation_growth_stage_mature_btn, 12, 0);
    lv_obj_set_style_border_width(irrigation_growth_stage_mature_btn, 1, 0);
    lv_obj_set_style_border_color(irrigation_growth_stage_mature_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(irrigation_growth_stage_mature_btn, 0, 0);
    lv_obj_set_style_shadow_width(irrigation_growth_stage_mature_btn, 0, 0);
    lv_obj_t * irrigation_growth_stage_mature_icon = lv_image_create(irrigation_growth_stage_mature_btn);
    lv_obj_set_name(irrigation_growth_stage_mature_icon, "irrigation_growth_stage_mature_icon");
    lv_obj_set_x(irrigation_growth_stage_mature_icon, 16);
    lv_obj_set_y(irrigation_growth_stage_mature_icon, 3);
    lv_obj_set_width(irrigation_growth_stage_mature_icon, 24);
    lv_obj_set_height(irrigation_growth_stage_mature_icon, 24);
    lv_image_set_src(irrigation_growth_stage_mature_icon, img_irrigation_growth_stage_mature_16px);
    lv_obj_set_flag(irrigation_growth_stage_mature_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_growth_stage_mature_icon, LV_SCROLLBAR_MODE_OFF);

    lv_obj_t * irrigation_growth_stage_mature_name_label = lv_label_create(irrigation_growth_stage_mature_btn);
    lv_obj_set_name(irrigation_growth_stage_mature_name_label, "irrigation_growth_stage_mature_name_label");
    lv_obj_set_x(irrigation_growth_stage_mature_name_label, 56);
    lv_obj_set_y(irrigation_growth_stage_mature_name_label, 3);
    lv_obj_set_width(irrigation_growth_stage_mature_name_label, 210);
    lv_label_set_text(irrigation_growth_stage_mature_name_label, "Mature / Production");
    lv_label_set_long_mode(irrigation_growth_stage_mature_name_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_growth_stage_mature_name_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_growth_stage_mature_name_label, font_inter_12, 0);

    lv_obj_t * irrigation_growth_stage_mature_desc_label = lv_label_create(irrigation_growth_stage_mature_btn);
    lv_obj_set_name(irrigation_growth_stage_mature_desc_label, "irrigation_growth_stage_mature_desc_label");
    lv_obj_set_x(irrigation_growth_stage_mature_desc_label, 56);
    lv_obj_set_y(irrigation_growth_stage_mature_desc_label, 19);
    lv_obj_set_width(irrigation_growth_stage_mature_desc_label, 290);
    lv_label_set_text(irrigation_growth_stage_mature_desc_label, "Flowering or harvest, frequent irrigation");
    lv_label_set_long_mode(irrigation_growth_stage_mature_desc_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_growth_stage_mature_desc_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(irrigation_growth_stage_mature_desc_label, font_inter_10, 0);

    lv_obj_t * irrigation_growth_stage_mature_radio_circle = lv_obj_create(irrigation_growth_stage_mature_btn);
    lv_obj_set_name(irrigation_growth_stage_mature_radio_circle, "irrigation_growth_stage_mature_radio_circle");
    lv_obj_set_x(irrigation_growth_stage_mature_radio_circle, 376);
    lv_obj_set_y(irrigation_growth_stage_mature_radio_circle, 8);
    lv_obj_set_width(irrigation_growth_stage_mature_radio_circle, 20);
    lv_obj_set_height(irrigation_growth_stage_mature_radio_circle, 20);
    lv_obj_set_flag(irrigation_growth_stage_mature_radio_circle, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_growth_stage_mature_radio_circle, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(irrigation_growth_stage_mature_radio_circle, 0, 0);
    lv_obj_set_style_radius(irrigation_growth_stage_mature_radio_circle, 10, 0);
    lv_obj_set_style_border_width(irrigation_growth_stage_mature_radio_circle, 2, 0);
    lv_obj_set_style_border_color(irrigation_growth_stage_mature_radio_circle, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(irrigation_growth_stage_mature_radio_circle, 0, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

