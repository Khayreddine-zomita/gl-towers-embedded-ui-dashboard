/**
 * @file irrigation_substrate_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "irrigation_substrate_card_gen.h"
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

lv_obj_t * irrigation_substrate_card_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "irrigation_substrate_card_#");
    lv_obj_set_width(lv_obj_0, 452);
    lv_obj_set_height(lv_obj_0, 217);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * irrigation_substrate_title_label = lv_label_create(lv_obj_0);
    lv_obj_set_name(irrigation_substrate_title_label, "irrigation_substrate_title_label");
    lv_obj_set_x(irrigation_substrate_title_label, 2);
    lv_obj_set_y(irrigation_substrate_title_label, 0);
    lv_obj_set_width(irrigation_substrate_title_label, 340);
    lv_label_set_text(irrigation_substrate_title_label, "Substrate");
    lv_label_set_long_mode(irrigation_substrate_title_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_substrate_title_label, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_text_font(irrigation_substrate_title_label, font_inter_14, 0);

    lv_obj_t * irrigation_substrate_card = lv_obj_create(lv_obj_0);
    lv_obj_set_name(irrigation_substrate_card, "irrigation_substrate_card");
    lv_obj_set_x(irrigation_substrate_card, 0);
    lv_obj_set_y(irrigation_substrate_card, 24);
    lv_obj_set_width(irrigation_substrate_card, 452);
    lv_obj_set_height(irrigation_substrate_card, 193);
    lv_obj_set_flag(irrigation_substrate_card, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_substrate_card, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_substrate_card, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(irrigation_substrate_card, 255, 0);
    lv_obj_set_style_radius(irrigation_substrate_card, 18, 0);
    lv_obj_set_style_pad_all(irrigation_substrate_card, 0, 0);
    lv_obj_set_style_border_width(irrigation_substrate_card, 2, 0);
    lv_obj_set_style_border_color(irrigation_substrate_card, COLOR_DIVIDER, 0);
    lv_obj_set_style_shadow_width(irrigation_substrate_card, 8, 0);
    lv_obj_set_style_shadow_opa(irrigation_substrate_card, 16, 0);
    lv_obj_set_style_shadow_color(irrigation_substrate_card, COLOR_SHADOW, 0);
    lv_obj_set_style_shadow_offset_y(irrigation_substrate_card, 3, 0);
    lv_obj_t * irrigation_substrate_soil_mixed_btn = lv_button_create(irrigation_substrate_card);
    lv_obj_set_name(irrigation_substrate_soil_mixed_btn, "irrigation_substrate_soil_mixed_btn");
    lv_obj_set_x(irrigation_substrate_soil_mixed_btn, 18);
    lv_obj_set_y(irrigation_substrate_soil_mixed_btn, 6);
    lv_obj_set_width(irrigation_substrate_soil_mixed_btn, 416);
    lv_obj_set_height(irrigation_substrate_soil_mixed_btn, 32);
    lv_obj_set_flag(irrigation_substrate_soil_mixed_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_substrate_soil_mixed_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_substrate_soil_mixed_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(irrigation_substrate_soil_mixed_btn, 255, 0);
    lv_obj_set_style_radius(irrigation_substrate_soil_mixed_btn, 10, 0);
    lv_obj_set_style_border_width(irrigation_substrate_soil_mixed_btn, 1, 0);
    lv_obj_set_style_border_color(irrigation_substrate_soil_mixed_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(irrigation_substrate_soil_mixed_btn, 0, 0);
    lv_obj_set_style_shadow_width(irrigation_substrate_soil_mixed_btn, 0, 0);
    lv_obj_t * irrigation_substrate_soil_mixed_icon = lv_image_create(irrigation_substrate_soil_mixed_btn);
    lv_obj_set_name(irrigation_substrate_soil_mixed_icon, "irrigation_substrate_soil_mixed_icon");
    lv_obj_set_x(irrigation_substrate_soil_mixed_icon, 16);
    lv_obj_set_y(irrigation_substrate_soil_mixed_icon, 4);
    lv_obj_set_width(irrigation_substrate_soil_mixed_icon, 24);
    lv_obj_set_height(irrigation_substrate_soil_mixed_icon, 24);
    lv_image_set_src(irrigation_substrate_soil_mixed_icon, img_irrigation_mixed_soil_substrate_16px);
    lv_obj_set_flag(irrigation_substrate_soil_mixed_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_substrate_soil_mixed_icon, LV_SCROLLBAR_MODE_OFF);

    lv_obj_t * irrigation_substrate_soil_mixed_name_label = lv_label_create(irrigation_substrate_soil_mixed_btn);
    lv_obj_set_name(irrigation_substrate_soil_mixed_name_label, "irrigation_substrate_soil_mixed_name_label");
    lv_obj_set_x(irrigation_substrate_soil_mixed_name_label, 56);
    lv_obj_set_y(irrigation_substrate_soil_mixed_name_label, 1);
    lv_obj_set_width(irrigation_substrate_soil_mixed_name_label, 210);
    lv_label_set_text(irrigation_substrate_soil_mixed_name_label, "Soil / Mixed");
    lv_label_set_long_mode(irrigation_substrate_soil_mixed_name_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_substrate_soil_mixed_name_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_substrate_soil_mixed_name_label, font_inter_12, 0);

    lv_obj_t * irrigation_substrate_soil_mixed_desc_label = lv_label_create(irrigation_substrate_soil_mixed_btn);
    lv_obj_set_name(irrigation_substrate_soil_mixed_desc_label, "irrigation_substrate_soil_mixed_desc_label");
    lv_obj_set_x(irrigation_substrate_soil_mixed_desc_label, 56);
    lv_obj_set_y(irrigation_substrate_soil_mixed_desc_label, 16);
    lv_obj_set_width(irrigation_substrate_soil_mixed_desc_label, 275);
    lv_label_set_text(irrigation_substrate_soil_mixed_desc_label, "Long dry periods to prevent waterlogging");
    lv_label_set_long_mode(irrigation_substrate_soil_mixed_desc_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_substrate_soil_mixed_desc_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(irrigation_substrate_soil_mixed_desc_label, font_inter_10, 0);

    lv_obj_t * irrigation_substrate_soil_mixed_radio_circle = lv_obj_create(irrigation_substrate_soil_mixed_btn);
    lv_obj_set_name(irrigation_substrate_soil_mixed_radio_circle, "irrigation_substrate_soil_mixed_radio_circle");
    lv_obj_set_x(irrigation_substrate_soil_mixed_radio_circle, 376);
    lv_obj_set_y(irrigation_substrate_soil_mixed_radio_circle, 5);
    lv_obj_set_width(irrigation_substrate_soil_mixed_radio_circle, 20);
    lv_obj_set_height(irrigation_substrate_soil_mixed_radio_circle, 20);
    lv_obj_set_flag(irrigation_substrate_soil_mixed_radio_circle, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_substrate_soil_mixed_radio_circle, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(irrigation_substrate_soil_mixed_radio_circle, 0, 0);
    lv_obj_set_style_radius(irrigation_substrate_soil_mixed_radio_circle, 10, 0);
    lv_obj_set_style_border_width(irrigation_substrate_soil_mixed_radio_circle, 2, 0);
    lv_obj_set_style_border_color(irrigation_substrate_soil_mixed_radio_circle, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(irrigation_substrate_soil_mixed_radio_circle, 0, 0);

    lv_obj_t * irrigation_substrate_coco_coir_btn = lv_button_create(irrigation_substrate_card);
    lv_obj_set_name(irrigation_substrate_coco_coir_btn, "irrigation_substrate_coco_coir_btn");
    lv_obj_set_x(irrigation_substrate_coco_coir_btn, 18);
    lv_obj_set_y(irrigation_substrate_coco_coir_btn, 43);
    lv_obj_set_width(irrigation_substrate_coco_coir_btn, 416);
    lv_obj_set_height(irrigation_substrate_coco_coir_btn, 32);
    lv_obj_set_flag(irrigation_substrate_coco_coir_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_substrate_coco_coir_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_substrate_coco_coir_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(irrigation_substrate_coco_coir_btn, 255, 0);
    lv_obj_set_style_radius(irrigation_substrate_coco_coir_btn, 10, 0);
    lv_obj_set_style_border_width(irrigation_substrate_coco_coir_btn, 1, 0);
    lv_obj_set_style_border_color(irrigation_substrate_coco_coir_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(irrigation_substrate_coco_coir_btn, 0, 0);
    lv_obj_set_style_shadow_width(irrigation_substrate_coco_coir_btn, 0, 0);
    lv_obj_t * irrigation_substrate_coco_coir_icon = lv_image_create(irrigation_substrate_coco_coir_btn);
    lv_obj_set_name(irrigation_substrate_coco_coir_icon, "irrigation_substrate_coco_coir_icon");
    lv_obj_set_x(irrigation_substrate_coco_coir_icon, 16);
    lv_obj_set_y(irrigation_substrate_coco_coir_icon, 4);
    lv_obj_set_width(irrigation_substrate_coco_coir_icon, 24);
    lv_obj_set_height(irrigation_substrate_coco_coir_icon, 24);
    lv_image_set_src(irrigation_substrate_coco_coir_icon, img_irrigation_coco_coir_substrate_16px);
    lv_obj_set_flag(irrigation_substrate_coco_coir_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_substrate_coco_coir_icon, LV_SCROLLBAR_MODE_OFF);

    lv_obj_t * irrigation_substrate_coco_coir_name_label = lv_label_create(irrigation_substrate_coco_coir_btn);
    lv_obj_set_name(irrigation_substrate_coco_coir_name_label, "irrigation_substrate_coco_coir_name_label");
    lv_obj_set_x(irrigation_substrate_coco_coir_name_label, 56);
    lv_obj_set_y(irrigation_substrate_coco_coir_name_label, 1);
    lv_obj_set_width(irrigation_substrate_coco_coir_name_label, 210);
    lv_label_set_text(irrigation_substrate_coco_coir_name_label, "Coco Coir");
    lv_label_set_long_mode(irrigation_substrate_coco_coir_name_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_substrate_coco_coir_name_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_substrate_coco_coir_name_label, font_inter_12, 0);

    lv_obj_t * irrigation_substrate_coco_coir_desc_label = lv_label_create(irrigation_substrate_coco_coir_btn);
    lv_obj_set_name(irrigation_substrate_coco_coir_desc_label, "irrigation_substrate_coco_coir_desc_label");
    lv_obj_set_x(irrigation_substrate_coco_coir_desc_label, 56);
    lv_obj_set_y(irrigation_substrate_coco_coir_desc_label, 16);
    lv_obj_set_width(irrigation_substrate_coco_coir_desc_label, 275);
    lv_label_set_text(irrigation_substrate_coco_coir_desc_label, "High retention - longer dry period");
    lv_label_set_long_mode(irrigation_substrate_coco_coir_desc_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_substrate_coco_coir_desc_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(irrigation_substrate_coco_coir_desc_label, font_inter_10, 0);

    lv_obj_t * irrigation_substrate_coco_coir_radio_circle = lv_obj_create(irrigation_substrate_coco_coir_btn);
    lv_obj_set_name(irrigation_substrate_coco_coir_radio_circle, "irrigation_substrate_coco_coir_radio_circle");
    lv_obj_set_x(irrigation_substrate_coco_coir_radio_circle, 376);
    lv_obj_set_y(irrigation_substrate_coco_coir_radio_circle, 5);
    lv_obj_set_width(irrigation_substrate_coco_coir_radio_circle, 20);
    lv_obj_set_height(irrigation_substrate_coco_coir_radio_circle, 20);
    lv_obj_set_flag(irrigation_substrate_coco_coir_radio_circle, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_substrate_coco_coir_radio_circle, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(irrigation_substrate_coco_coir_radio_circle, 0, 0);
    lv_obj_set_style_radius(irrigation_substrate_coco_coir_radio_circle, 10, 0);
    lv_obj_set_style_border_width(irrigation_substrate_coco_coir_radio_circle, 2, 0);
    lv_obj_set_style_border_color(irrigation_substrate_coco_coir_radio_circle, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(irrigation_substrate_coco_coir_radio_circle, 0, 0);

    lv_obj_t * irrigation_substrate_rockwool_btn = lv_button_create(irrigation_substrate_card);
    lv_obj_set_name(irrigation_substrate_rockwool_btn, "irrigation_substrate_rockwool_btn");
    lv_obj_set_x(irrigation_substrate_rockwool_btn, 18);
    lv_obj_set_y(irrigation_substrate_rockwool_btn, 80);
    lv_obj_set_width(irrigation_substrate_rockwool_btn, 416);
    lv_obj_set_height(irrigation_substrate_rockwool_btn, 32);
    lv_obj_set_flag(irrigation_substrate_rockwool_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_substrate_rockwool_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_substrate_rockwool_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(irrigation_substrate_rockwool_btn, 255, 0);
    lv_obj_set_style_radius(irrigation_substrate_rockwool_btn, 10, 0);
    lv_obj_set_style_border_width(irrigation_substrate_rockwool_btn, 1, 0);
    lv_obj_set_style_border_color(irrigation_substrate_rockwool_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(irrigation_substrate_rockwool_btn, 0, 0);
    lv_obj_set_style_shadow_width(irrigation_substrate_rockwool_btn, 0, 0);
    lv_obj_t * irrigation_substrate_rockwool_icon = lv_image_create(irrigation_substrate_rockwool_btn);
    lv_obj_set_name(irrigation_substrate_rockwool_icon, "irrigation_substrate_rockwool_icon");
    lv_obj_set_x(irrigation_substrate_rockwool_icon, 16);
    lv_obj_set_y(irrigation_substrate_rockwool_icon, 4);
    lv_obj_set_width(irrigation_substrate_rockwool_icon, 24);
    lv_obj_set_height(irrigation_substrate_rockwool_icon, 24);
    lv_image_set_src(irrigation_substrate_rockwool_icon, img_irrigation_rockwool_substrate_16px);
    lv_obj_set_flag(irrigation_substrate_rockwool_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_substrate_rockwool_icon, LV_SCROLLBAR_MODE_OFF);

    lv_obj_t * irrigation_substrate_rockwool_name_label = lv_label_create(irrigation_substrate_rockwool_btn);
    lv_obj_set_name(irrigation_substrate_rockwool_name_label, "irrigation_substrate_rockwool_name_label");
    lv_obj_set_x(irrigation_substrate_rockwool_name_label, 56);
    lv_obj_set_y(irrigation_substrate_rockwool_name_label, 1);
    lv_obj_set_width(irrigation_substrate_rockwool_name_label, 210);
    lv_label_set_text(irrigation_substrate_rockwool_name_label, "Rockwool");
    lv_label_set_long_mode(irrigation_substrate_rockwool_name_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_substrate_rockwool_name_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_substrate_rockwool_name_label, font_inter_12, 0);

    lv_obj_t * irrigation_substrate_rockwool_desc_label = lv_label_create(irrigation_substrate_rockwool_btn);
    lv_obj_set_name(irrigation_substrate_rockwool_desc_label, "irrigation_substrate_rockwool_desc_label");
    lv_obj_set_x(irrigation_substrate_rockwool_desc_label, 56);
    lv_obj_set_y(irrigation_substrate_rockwool_desc_label, 16);
    lv_obj_set_width(irrigation_substrate_rockwool_desc_label, 275);
    lv_label_set_text(irrigation_substrate_rockwool_desc_label, "Balanced cycle frequency");
    lv_label_set_long_mode(irrigation_substrate_rockwool_desc_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_substrate_rockwool_desc_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(irrigation_substrate_rockwool_desc_label, font_inter_10, 0);

    lv_obj_t * irrigation_substrate_rockwool_radio_circle = lv_obj_create(irrigation_substrate_rockwool_btn);
    lv_obj_set_name(irrigation_substrate_rockwool_radio_circle, "irrigation_substrate_rockwool_radio_circle");
    lv_obj_set_x(irrigation_substrate_rockwool_radio_circle, 376);
    lv_obj_set_y(irrigation_substrate_rockwool_radio_circle, 5);
    lv_obj_set_width(irrigation_substrate_rockwool_radio_circle, 20);
    lv_obj_set_height(irrigation_substrate_rockwool_radio_circle, 20);
    lv_obj_set_flag(irrigation_substrate_rockwool_radio_circle, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_substrate_rockwool_radio_circle, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(irrigation_substrate_rockwool_radio_circle, 0, 0);
    lv_obj_set_style_radius(irrigation_substrate_rockwool_radio_circle, 10, 0);
    lv_obj_set_style_border_width(irrigation_substrate_rockwool_radio_circle, 2, 0);
    lv_obj_set_style_border_color(irrigation_substrate_rockwool_radio_circle, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(irrigation_substrate_rockwool_radio_circle, 0, 0);

    lv_obj_t * irrigation_substrate_clay_pebbles_btn = lv_button_create(irrigation_substrate_card);
    lv_obj_set_name(irrigation_substrate_clay_pebbles_btn, "irrigation_substrate_clay_pebbles_btn");
    lv_obj_set_x(irrigation_substrate_clay_pebbles_btn, 18);
    lv_obj_set_y(irrigation_substrate_clay_pebbles_btn, 117);
    lv_obj_set_width(irrigation_substrate_clay_pebbles_btn, 416);
    lv_obj_set_height(irrigation_substrate_clay_pebbles_btn, 32);
    lv_obj_set_flag(irrigation_substrate_clay_pebbles_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_substrate_clay_pebbles_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_substrate_clay_pebbles_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(irrigation_substrate_clay_pebbles_btn, 255, 0);
    lv_obj_set_style_radius(irrigation_substrate_clay_pebbles_btn, 10, 0);
    lv_obj_set_style_border_width(irrigation_substrate_clay_pebbles_btn, 1, 0);
    lv_obj_set_style_border_color(irrigation_substrate_clay_pebbles_btn, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(irrigation_substrate_clay_pebbles_btn, 0, 0);
    lv_obj_set_style_shadow_width(irrigation_substrate_clay_pebbles_btn, 0, 0);
    lv_obj_t * irrigation_substrate_clay_pebbles_icon = lv_image_create(irrigation_substrate_clay_pebbles_btn);
    lv_obj_set_name(irrigation_substrate_clay_pebbles_icon, "irrigation_substrate_clay_pebbles_icon");
    lv_obj_set_x(irrigation_substrate_clay_pebbles_icon, 16);
    lv_obj_set_y(irrigation_substrate_clay_pebbles_icon, 4);
    lv_obj_set_width(irrigation_substrate_clay_pebbles_icon, 24);
    lv_obj_set_height(irrigation_substrate_clay_pebbles_icon, 24);
    lv_image_set_src(irrigation_substrate_clay_pebbles_icon, img_irrigation_clay_pebbles_substrate_16px);
    lv_obj_set_flag(irrigation_substrate_clay_pebbles_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_substrate_clay_pebbles_icon, LV_SCROLLBAR_MODE_OFF);

    lv_obj_t * irrigation_substrate_clay_pebbles_name_label = lv_label_create(irrigation_substrate_clay_pebbles_btn);
    lv_obj_set_name(irrigation_substrate_clay_pebbles_name_label, "irrigation_substrate_clay_pebbles_name_label");
    lv_obj_set_x(irrigation_substrate_clay_pebbles_name_label, 56);
    lv_obj_set_y(irrigation_substrate_clay_pebbles_name_label, 1);
    lv_obj_set_width(irrigation_substrate_clay_pebbles_name_label, 210);
    lv_label_set_text(irrigation_substrate_clay_pebbles_name_label, "Clay Pebbles");
    lv_label_set_long_mode(irrigation_substrate_clay_pebbles_name_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_substrate_clay_pebbles_name_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_substrate_clay_pebbles_name_label, font_inter_12, 0);

    lv_obj_t * irrigation_substrate_clay_pebbles_desc_label = lv_label_create(irrigation_substrate_clay_pebbles_btn);
    lv_obj_set_name(irrigation_substrate_clay_pebbles_desc_label, "irrigation_substrate_clay_pebbles_desc_label");
    lv_obj_set_x(irrigation_substrate_clay_pebbles_desc_label, 56);
    lv_obj_set_y(irrigation_substrate_clay_pebbles_desc_label, 16);
    lv_obj_set_width(irrigation_substrate_clay_pebbles_desc_label, 275);
    lv_label_set_text(irrigation_substrate_clay_pebbles_desc_label, "Fast drainage - frequent cycles");
    lv_label_set_long_mode(irrigation_substrate_clay_pebbles_desc_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_substrate_clay_pebbles_desc_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(irrigation_substrate_clay_pebbles_desc_label, font_inter_10, 0);

    lv_obj_t * irrigation_substrate_clay_pebbles_radio_circle = lv_obj_create(irrigation_substrate_clay_pebbles_btn);
    lv_obj_set_name(irrigation_substrate_clay_pebbles_radio_circle, "irrigation_substrate_clay_pebbles_radio_circle");
    lv_obj_set_x(irrigation_substrate_clay_pebbles_radio_circle, 376);
    lv_obj_set_y(irrigation_substrate_clay_pebbles_radio_circle, 5);
    lv_obj_set_width(irrigation_substrate_clay_pebbles_radio_circle, 20);
    lv_obj_set_height(irrigation_substrate_clay_pebbles_radio_circle, 20);
    lv_obj_set_flag(irrigation_substrate_clay_pebbles_radio_circle, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_substrate_clay_pebbles_radio_circle, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(irrigation_substrate_clay_pebbles_radio_circle, 0, 0);
    lv_obj_set_style_radius(irrigation_substrate_clay_pebbles_radio_circle, 10, 0);
    lv_obj_set_style_border_width(irrigation_substrate_clay_pebbles_radio_circle, 2, 0);
    lv_obj_set_style_border_color(irrigation_substrate_clay_pebbles_radio_circle, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(irrigation_substrate_clay_pebbles_radio_circle, 0, 0);

    lv_obj_t * irrigation_substrate_hydroponic_btn = lv_button_create(irrigation_substrate_card);
    lv_obj_set_name(irrigation_substrate_hydroponic_btn, "irrigation_substrate_hydroponic_btn");
    lv_obj_set_x(irrigation_substrate_hydroponic_btn, 18);
    lv_obj_set_y(irrigation_substrate_hydroponic_btn, 154);
    lv_obj_set_width(irrigation_substrate_hydroponic_btn, 416);
    lv_obj_set_height(irrigation_substrate_hydroponic_btn, 32);
    lv_obj_set_flag(irrigation_substrate_hydroponic_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_substrate_hydroponic_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_substrate_hydroponic_btn, COLOR_LIGHT_GREEN, 0);
    lv_obj_set_style_bg_opa(irrigation_substrate_hydroponic_btn, 90, 0);
    lv_obj_set_style_radius(irrigation_substrate_hydroponic_btn, 10, 0);
    lv_obj_set_style_border_width(irrigation_substrate_hydroponic_btn, 1, 0);
    lv_obj_set_style_border_color(irrigation_substrate_hydroponic_btn, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_pad_all(irrigation_substrate_hydroponic_btn, 0, 0);
    lv_obj_set_style_shadow_width(irrigation_substrate_hydroponic_btn, 0, 0);
    lv_obj_t * irrigation_substrate_hydroponic_icon = lv_image_create(irrigation_substrate_hydroponic_btn);
    lv_obj_set_name(irrigation_substrate_hydroponic_icon, "irrigation_substrate_hydroponic_icon");
    lv_obj_set_x(irrigation_substrate_hydroponic_icon, 16);
    lv_obj_set_y(irrigation_substrate_hydroponic_icon, 3);
    lv_obj_set_width(irrigation_substrate_hydroponic_icon, 24);
    lv_obj_set_height(irrigation_substrate_hydroponic_icon, 24);
    lv_image_set_src(irrigation_substrate_hydroponic_icon, img_irrigation_drop_silhouette_substrate_16px);
    lv_obj_set_style_image_recolor(irrigation_substrate_hydroponic_icon, COLOR_STATUS_INFO, 0);
    lv_obj_set_style_image_recolor_opa(irrigation_substrate_hydroponic_icon, 255, 0);
    lv_obj_set_flag(irrigation_substrate_hydroponic_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_substrate_hydroponic_icon, LV_SCROLLBAR_MODE_OFF);

    lv_obj_t * irrigation_substrate_hydroponic_name_label = lv_label_create(irrigation_substrate_hydroponic_btn);
    lv_obj_set_name(irrigation_substrate_hydroponic_name_label, "irrigation_substrate_hydroponic_name_label");
    lv_obj_set_x(irrigation_substrate_hydroponic_name_label, 56);
    lv_obj_set_y(irrigation_substrate_hydroponic_name_label, 1);
    lv_obj_set_width(irrigation_substrate_hydroponic_name_label, 210);
    lv_label_set_text(irrigation_substrate_hydroponic_name_label, "Hydroponic");
    lv_label_set_long_mode(irrigation_substrate_hydroponic_name_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_substrate_hydroponic_name_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(irrigation_substrate_hydroponic_name_label, font_inter_12, 0);

    lv_obj_t * irrigation_substrate_hydroponic_desc_label = lv_label_create(irrigation_substrate_hydroponic_btn);
    lv_obj_set_name(irrigation_substrate_hydroponic_desc_label, "irrigation_substrate_hydroponic_desc_label");
    lv_obj_set_x(irrigation_substrate_hydroponic_desc_label, 56);
    lv_obj_set_y(irrigation_substrate_hydroponic_desc_label, 16);
    lv_obj_set_width(irrigation_substrate_hydroponic_desc_label, 275);
    lv_label_set_text(irrigation_substrate_hydroponic_desc_label, "NFT / DWC - frequent short cycles for roots oxygenation");
    lv_label_set_long_mode(irrigation_substrate_hydroponic_desc_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(irrigation_substrate_hydroponic_desc_label, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(irrigation_substrate_hydroponic_desc_label, font_inter_10, 0);

    lv_obj_t * irrigation_substrate_hydroponic_selected_circle = lv_obj_create(irrigation_substrate_hydroponic_btn);
    lv_obj_set_name(irrigation_substrate_hydroponic_selected_circle, "irrigation_substrate_hydroponic_selected_circle");
    lv_obj_set_x(irrigation_substrate_hydroponic_selected_circle, 376);
    lv_obj_set_y(irrigation_substrate_hydroponic_selected_circle, 5);
    lv_obj_set_width(irrigation_substrate_hydroponic_selected_circle, 20);
    lv_obj_set_height(irrigation_substrate_hydroponic_selected_circle, 20);
    lv_obj_set_flag(irrigation_substrate_hydroponic_selected_circle, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_substrate_hydroponic_selected_circle, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_substrate_hydroponic_selected_circle, COLOR_PRIMARY_GREEN, 0);
    lv_obj_set_style_bg_opa(irrigation_substrate_hydroponic_selected_circle, 255, 0);
    lv_obj_set_style_radius(irrigation_substrate_hydroponic_selected_circle, 10, 0);
    lv_obj_set_style_border_width(irrigation_substrate_hydroponic_selected_circle, 0, 0);
    lv_obj_set_style_pad_all(irrigation_substrate_hydroponic_selected_circle, 0, 0);
    lv_obj_t * irrigation_substrate_hydroponic_selected_dot = lv_obj_create(irrigation_substrate_hydroponic_selected_circle);
    lv_obj_set_name(irrigation_substrate_hydroponic_selected_dot, "irrigation_substrate_hydroponic_selected_dot");
    lv_obj_set_x(irrigation_substrate_hydroponic_selected_dot, 7);
    lv_obj_set_y(irrigation_substrate_hydroponic_selected_dot, 7);
    lv_obj_set_width(irrigation_substrate_hydroponic_selected_dot, 6);
    lv_obj_set_height(irrigation_substrate_hydroponic_selected_dot, 6);
    lv_obj_set_flag(irrigation_substrate_hydroponic_selected_dot, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_substrate_hydroponic_selected_dot, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_substrate_hydroponic_selected_dot, COLOR_WHITE, 0);
    lv_obj_set_style_bg_opa(irrigation_substrate_hydroponic_selected_dot, 255, 0);
    lv_obj_set_style_radius(irrigation_substrate_hydroponic_selected_dot, 3, 0);
    lv_obj_set_style_border_width(irrigation_substrate_hydroponic_selected_dot, 0, 0);
    lv_obj_set_style_pad_all(irrigation_substrate_hydroponic_selected_dot, 0, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

