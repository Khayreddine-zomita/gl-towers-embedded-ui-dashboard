/**
 * @file mini_trend_chart_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "mini_trend_chart_gen.h"
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

lv_obj_t * mini_trend_chart_create(lv_obj_t * parent, int32_t trend_min, int32_t trend_max, lv_color_t trend_color)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "mini_trend_chart_#");
    lv_obj_set_width(lv_obj_0, 112);
    lv_obj_set_height(lv_obj_0, 26);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * sensor_trend_chart = lv_chart_create(lv_obj_0);
    lv_obj_set_name(sensor_trend_chart, "sensor_trend_chart");
    lv_obj_set_x(sensor_trend_chart, 0);
    lv_obj_set_y(sensor_trend_chart, 0);
    lv_obj_set_width(sensor_trend_chart, 112);
    lv_obj_set_height(sensor_trend_chart, 26);
    lv_chart_set_type(sensor_trend_chart, LV_CHART_TYPE_LINE);
    lv_chart_set_point_count(sensor_trend_chart, 8);
    lv_chart_set_hor_div_line_count(sensor_trend_chart, 0);
    lv_chart_set_ver_div_line_count(sensor_trend_chart, 0);
    lv_obj_set_flag(sensor_trend_chart, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(sensor_trend_chart, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(sensor_trend_chart, 0, LV_PART_ITEMS);
    lv_obj_set_style_radius(sensor_trend_chart, 0, LV_PART_ITEMS);
    lv_obj_set_style_pad_all(sensor_trend_chart, 1, 0);
    lv_obj_set_style_border_width(sensor_trend_chart, 0, 0);
    lv_obj_set_style_line_opa(sensor_trend_chart, 0, 0);
    lv_obj_set_style_line_width(sensor_trend_chart, 1, LV_PART_ITEMS);
    lv_obj_set_style_width(sensor_trend_chart, 1, LV_PART_ITEMS);
    lv_obj_set_style_height(sensor_trend_chart, 1, LV_PART_ITEMS);
    lv_obj_set_style_bg_color(sensor_trend_chart, trend_color, LV_PART_ITEMS);
    lv_chart_set_axis_min_value(sensor_trend_chart, LV_CHART_AXIS_PRIMARY_Y, trend_min);
    lv_chart_set_axis_max_value(sensor_trend_chart, LV_CHART_AXIS_PRIMARY_Y, trend_max);
    lv_chart_series_t * lv_chart_series_0 = lv_chart_add_series(sensor_trend_chart, trend_color, LV_CHART_AXIS_PRIMARY_Y);
    static const int32_t sensor_trend_chart_values_0[] = {52, 58, 54, 62, 57, 66, 60, 72};
    lv_chart_set_series_values(sensor_trend_chart, lv_chart_series_0, sensor_trend_chart_values_0, 8);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

