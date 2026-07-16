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
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_APP_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 255, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * global_top_status_bar_0 = global_top_status_bar_create(lv_obj_0, "GL TOWERS", "13:20");
    lv_obj_set_x(global_top_status_bar_0, 0);
    lv_obj_set_y(global_top_status_bar_0, 0);

    lv_obj_t * sensors_screen_card_0 = sensors_screen_card_create(lv_obj_0, "pH", "6.3", "", 58, "Stable", "Target 5.8 - 6.5", COLOR_STATUS_HEALTHY, "54 58 55 62 59 66 63 72", 40, 80);
    lv_obj_set_x(sensors_screen_card_0, 8);
    lv_obj_set_y(sensors_screen_card_0, 52);

    lv_obj_t * sensors_screen_card_1 = sensors_screen_card_create(lv_obj_0, "EC", "1.6", "", 58, "Optimal", "Target 1.2 - 2.0", COLOR_STATUS_INFO, "46 52 48 57 51 61 55 66", 40, 80);
    lv_obj_set_x(sensors_screen_card_1, 165);
    lv_obj_set_y(sensors_screen_card_1, 52);

    lv_obj_t * sensors_screen_card_2 = sensors_screen_card_create(lv_obj_0, "WATER TEMP", "22.3", "°C", 66, "Optimal", "Target 18 - 23 C", COLOR_STATUS_INFO, "48 52 50 55 53 58 56 62", 40, 80);
    lv_obj_set_x(sensors_screen_card_2, 322);
    lv_obj_set_y(sensors_screen_card_2, 52);

    lv_obj_t * sensors_screen_card_3 = sensors_screen_card_create(lv_obj_0, "AIR TEMP", "23.0", "°C", 66, "Good", "Target 16 - 24 C", COLOR_STATUS_CRITICAL, "50 53 52 56 54 58 57 61", 40, 80);
    lv_obj_set_x(sensors_screen_card_3, 8);
    lv_obj_set_y(sensors_screen_card_3, 164);

    lv_obj_t * sensors_screen_card_4 = sensors_screen_card_create(lv_obj_0, "HUMIDITY", "71", "%", 38, "Good", "Target 80 - 99%", COLOR_PURPLE, "52 55 54 58 57 61 59 64", 40, 80);
    lv_obj_set_x(sensors_screen_card_4, 165);
    lv_obj_set_y(sensors_screen_card_4, 164);

    lv_obj_t * sensors_screen_card_5 = sensors_screen_card_create(lv_obj_0, "TANK WEIGHT", "6.0", "L", 52, "Normal", "Trend 24h", COLOR_STATUS_HEALTHY, "72 70 68 66 65 63 61 60", 40, 80);
    lv_obj_set_x(sensors_screen_card_5, 322);
    lv_obj_set_y(sensors_screen_card_5, 164);

    lv_obj_t * global_bottom_nav_0 = global_bottom_nav_create(lv_obj_0, COLOR_DARK_FOREST, COLOR_STATUS_HEALTHY, COLOR_DARK_FOREST, COLOR_DARK_FOREST, COLOR_DARK_FOREST);
    lv_obj_set_x(global_bottom_nav_0, 0);
    lv_obj_set_y(global_bottom_nav_0, 280);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

