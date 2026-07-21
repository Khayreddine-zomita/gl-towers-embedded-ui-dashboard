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
    lv_obj_set_width(lv_obj_0, 96);
    lv_obj_set_height(lv_obj_0, 32);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * trend_grid_line_top = lv_obj_create(lv_obj_0);
    lv_obj_set_name(trend_grid_line_top, "trend_grid_line_top");
    lv_obj_set_x(trend_grid_line_top, 0);
    lv_obj_set_y(trend_grid_line_top, 7);
    lv_obj_set_width(trend_grid_line_top, 96);
    lv_obj_set_height(trend_grid_line_top, 1);
    lv_obj_set_flag(trend_grid_line_top, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(trend_grid_line_top, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(trend_grid_line_top, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(trend_grid_line_top, 120, 0);
    lv_obj_set_style_border_width(trend_grid_line_top, 0, 0);
    lv_obj_set_style_pad_all(trend_grid_line_top, 0, 0);

    lv_obj_t * trend_grid_line_mid = lv_obj_create(lv_obj_0);
    lv_obj_set_name(trend_grid_line_mid, "trend_grid_line_mid");
    lv_obj_set_x(trend_grid_line_mid, 0);
    lv_obj_set_y(trend_grid_line_mid, 16);
    lv_obj_set_width(trend_grid_line_mid, 96);
    lv_obj_set_height(trend_grid_line_mid, 1);
    lv_obj_set_flag(trend_grid_line_mid, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(trend_grid_line_mid, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(trend_grid_line_mid, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(trend_grid_line_mid, 160, 0);
    lv_obj_set_style_border_width(trend_grid_line_mid, 0, 0);
    lv_obj_set_style_pad_all(trend_grid_line_mid, 0, 0);

    lv_obj_t * trend_grid_line_bottom = lv_obj_create(lv_obj_0);
    lv_obj_set_name(trend_grid_line_bottom, "trend_grid_line_bottom");
    lv_obj_set_x(trend_grid_line_bottom, 0);
    lv_obj_set_y(trend_grid_line_bottom, 25);
    lv_obj_set_width(trend_grid_line_bottom, 96);
    lv_obj_set_height(trend_grid_line_bottom, 1);
    lv_obj_set_flag(trend_grid_line_bottom, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(trend_grid_line_bottom, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(trend_grid_line_bottom, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(trend_grid_line_bottom, 120, 0);
    lv_obj_set_style_border_width(trend_grid_line_bottom, 0, 0);
    lv_obj_set_style_pad_all(trend_grid_line_bottom, 0, 0);

    lv_obj_t * sensor_trend_chart = lv_chart_create(lv_obj_0);
    lv_obj_set_name(sensor_trend_chart, "sensor_trend_chart");
    lv_obj_set_x(sensor_trend_chart, 0);
    lv_obj_set_y(sensor_trend_chart, 0);
    lv_obj_set_width(sensor_trend_chart, 96);
    lv_obj_set_height(sensor_trend_chart, 32);
    lv_chart_set_type(sensor_trend_chart, LV_CHART_TYPE_LINE);
    lv_chart_set_point_count(sensor_trend_chart, 8);
    lv_chart_set_hor_div_line_count(sensor_trend_chart, 0);
    lv_chart_set_ver_div_line_count(sensor_trend_chart, 0);
    lv_obj_set_flag(sensor_trend_chart, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(sensor_trend_chart, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(sensor_trend_chart, 0, LV_PART_ITEMS);
    lv_obj_set_style_radius(sensor_trend_chart, 0, LV_PART_ITEMS);
    lv_obj_set_style_pad_left(sensor_trend_chart, 2, 0);
    lv_obj_set_style_pad_right(sensor_trend_chart, 2, 0);
    lv_obj_set_style_pad_top(sensor_trend_chart, 3, 0);
    lv_obj_set_style_pad_bottom(sensor_trend_chart, 3, 0);
    lv_obj_set_style_border_width(sensor_trend_chart, 0, 0);
    lv_obj_set_style_line_opa(sensor_trend_chart, 0, LV_PART_ITEMS);
    lv_obj_set_style_line_width(sensor_trend_chart, 2, LV_PART_ITEMS);
    lv_obj_set_style_width(sensor_trend_chart, 4, LV_PART_ITEMS);
    lv_obj_set_style_height(sensor_trend_chart, 4, LV_PART_ITEMS);
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

