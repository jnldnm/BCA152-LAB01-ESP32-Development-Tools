
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

extern "C" void app_main(void)
{
    while (1)
    {
        printf("Hello World! ESP32 is running.\n");

        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
