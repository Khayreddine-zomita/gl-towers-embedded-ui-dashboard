/**
 * @file screen_home_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_home_gen.h"
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

lv_obj_t * screen_home_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_home_#");
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

    lv_obj_t * home_reservoir_card_0 = home_reservoir_card_create(lv_obj_0, "56", 46, "6.0 L / 6.5 L", "Tank level", 62);
    lv_obj_set_x(home_reservoir_card_0, 8);
    lv_obj_set_y(home_reservoir_card_0, 52);

    lv_obj_t * home_sensor_card_0 = home_sensor_card_create(lv_obj_0, "pH", "6.1", "", 58, "Optimal", COLOR_PURPLE, COLOR_STATUS_HEALTHY);
    lv_obj_set_x(home_sensor_card_0, 166);
    lv_obj_set_y(home_sensor_card_0, 52);

    lv_obj_t * home_sensor_card_1 = home_sensor_card_create(lv_obj_0, "EC", "1.6", "", 58, "Optimal", COLOR_PURPLE, COLOR_STATUS_HEALTHY);
    lv_obj_set_x(home_sensor_card_1, 324);
    lv_obj_set_y(home_sensor_card_1, 52);

    lv_obj_t * home_sensor_card_2 = home_sensor_card_create(lv_obj_0, "WATER TEMP", "22.2", "°C", 70, "Optimal", COLOR_STATUS_INFO, COLOR_STATUS_HEALTHY);
    lv_obj_set_x(home_sensor_card_2, 166);
    lv_obj_set_y(home_sensor_card_2, 136);

    lv_obj_t * home_sensor_card_3 = home_sensor_card_create(lv_obj_0, "AIR TEMP", "22.8", "°C", 70, "Good", COLOR_STATUS_CRITICAL, COLOR_STATUS_HEALTHY);
    lv_obj_set_x(home_sensor_card_3, 324);
    lv_obj_set_y(home_sensor_card_3, 136);

    lv_obj_t * home_status_row_0 = home_status_row_create(lv_obj_0, "ON", "ON", "ON", COLOR_PRIMARY_GREEN, COLOR_PRIMARY_GREEN, COLOR_PRIMARY_GREEN);
    lv_obj_set_x(home_status_row_0, 8);
    lv_obj_set_y(home_status_row_0, 222);

    lv_obj_t * global_bottom_nav_0 = global_bottom_nav_create(lv_obj_0, COLOR_GL_GREEN, COLOR_DARK_FOREST, COLOR_DARK_FOREST, COLOR_DARK_FOREST, COLOR_DARK_FOREST);
    lv_obj_set_x(global_bottom_nav_0, 0);
    lv_obj_set_y(global_bottom_nav_0, 280);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

