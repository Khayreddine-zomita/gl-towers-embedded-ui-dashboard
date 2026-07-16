/**
 * @file screen_led_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_led_gen.h"
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

lv_obj_t * screen_led_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_led_#");
    lv_obj_set_width(lv_obj_0, 480);
    lv_obj_set_height(lv_obj_0, 320);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_APP_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 255, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * global_top_status_bar_0 = global_top_status_bar_create(lv_obj_0, "GL TOWERS", "13:20");
    lv_obj_set_x(global_top_status_bar_0, 0);
    lv_obj_set_y(global_top_status_bar_0, 0);

    lv_obj_t * led_overview_card_0 = led_overview_card_create(lv_obj_0, "ACTIVE", "Standard", "06:00 - 22:00", "16 h", "80%");
    lv_obj_set_x(led_overview_card_0, 14);
    lv_obj_set_y(led_overview_card_0, 58);

    lv_obj_t * led_edit_settings_button_card_0 = led_edit_settings_button_card_create(lv_obj_0, "Edit LED settings");
    lv_obj_set_x(led_edit_settings_button_card_0, 8);
    lv_obj_set_y(led_edit_settings_button_card_0, 230);

    lv_obj_t * global_bottom_nav_0 = global_bottom_nav_create(lv_obj_0, COLOR_DARK_FOREST, COLOR_DARK_FOREST, COLOR_DARK_FOREST, COLOR_STATUS_HEALTHY, COLOR_DARK_FOREST);
    lv_obj_set_x(global_bottom_nav_0, 0);
    lv_obj_set_y(global_bottom_nav_0, 280);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

