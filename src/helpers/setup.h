#ifndef SETUP_HELPER
#define SETUP_HELPER

#include <Arduino.h>
#include <lvgl.h>
#include <TFT_eSPI.h>

void launchSetup(void);
void flushDisplay(lv_disp_drv_t*, const lv_area_t*, lv_color_t*);
bool readTouch(lv_indev_drv_t*, lv_indev_data_t*);

void launchLoop(void);

#endif