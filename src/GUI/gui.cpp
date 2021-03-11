#include <GUI/gui.h>

void launchGui(void)
{
    /*Describe the color for the needles*/
    static lv_color_t needle_colors[1];
    needle_colors[0] = LV_COLOR_BLACK;

    /*Create a gauge*/
    lv_obj_t *gauge1 = lv_gauge_create(lv_scr_act(), NULL);
    lv_gauge_set_needle_count(gauge1, 1, needle_colors);
    lv_obj_set_size(gauge1, 300, 300);
    lv_obj_align(gauge1, NULL, LV_ALIGN_CENTER, 0, 0);

    /*Set the values*/
    lv_gauge_set_value(gauge1, 0, 0);
}