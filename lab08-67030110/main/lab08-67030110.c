#include <stdio.h>
#include "display.h"
#include "led.h"
#include "sensor.h"


void app_main(void)
{
    display_init();
    led_init();
    sensor_init();
}
