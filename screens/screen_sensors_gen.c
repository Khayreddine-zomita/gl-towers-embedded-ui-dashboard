/**
 * @file screen_sensors_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_sensors_gen.h"
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

lv_obj_t * screen_sensors_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_sensors_#");
    lv_obj_set_width(lv_obj_0, 480);
    lv_obj_set_height(lv_obj_0, 320);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_WHITE, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 255, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * global_top_status_bar_0 = global_top_status_bar_create(lv_obj_0, "GL TOWERS", "13:20");
    lv_obj_set_x(global_top_status_bar_0, 0);
    lv_obj_set_y(global_top_status_bar_0, 0);

    lv_obj_t * sensors_screen_card_0 = sensors_screen_card_create(lv_obj_0, "WATER TEMP", "22.3", "°C", 74, "Optimal", "Target 18 - 23 C", COLOR_STATUS_INFO, COLOR_STATUS_HEALTHY, COLOR_LIGHT_GREEN, "48 52 50 55 53 58 56 62", 40, 80);
    lv_obj_set_x(sensors_screen_card_0, 8);
    lv_obj_set_y(sensors_screen_card_0, 40);

    lv_obj_t * sensors_screen_card_1 = sensors_screen_card_create(lv_obj_0, "AIR TEMP", "23.0", "°C", 74, "Good", "Target 16 - 24 C", COLOR_ALERT_ORANGE, COLOR_STATUS_HEALTHY, COLOR_LIGHT_GREEN, "50 53 52 56 54 58 57 61", 40, 80);
    lv_obj_set_x(sensors_screen_card_1, 246);
    lv_obj_set_y(sensors_screen_card_1, 40);

    lv_obj_t * sensors_screen_card_2 = sensors_screen_card_create(lv_obj_0, "HUMIDITY", "71", "%", 48, "Good", "Target 80 - 99%", COLOR_PURPLE, COLOR_STATUS_HEALTHY, COLOR_LIGHT_GREEN, "52 55 54 58 57 61 59 64", 40, 80);
    lv_obj_set_x(sensors_screen_card_2, 8);
    lv_obj_set_y(sensors_screen_card_2, 160);

    lv_obj_t * sensors_screen_card_3 = sensors_screen_card_create(lv_obj_0, "TANK WEIGHT", "6.0", "L", 58, "Normal", "Estimated volume", COLOR_PRIMARY_GREEN, COLOR_STATUS_HEALTHY, COLOR_LIGHT_GREEN, "72 70 68 66 65 63 61 60", 40, 80);
    lv_obj_set_x(sensors_screen_card_3, 246);
    lv_obj_set_y(sensors_screen_card_3, 160);

    lv_obj_t * global_bottom_nav_0 = global_bottom_nav_create(lv_obj_0, COLOR_WHITE, COLOR_WHITE, COLOR_WHITE, COLOR_WHITE, COLOR_WHITE, COLOR_DARK_FOREST, COLOR_PRIMARY_GREEN, COLOR_DARK_FOREST, COLOR_DARK_FOREST, COLOR_DARK_FOREST, 0, 255, 0, 0, 0);
    lv_obj_set_x(global_bottom_nav_0, 0);
    lv_obj_set_y(global_bottom_nav_0, 280);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

