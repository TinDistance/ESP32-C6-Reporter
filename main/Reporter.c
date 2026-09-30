#include <stdio.h>
#include <string.h>

#include "nvs_flash.h"

#include "esp_log.h"

#include "gamepad.h"
/*
 * app_main
 */
void app_main(void)
{
    printf("Hello, ESP32-C6 BLE Reporter!\n");
    Gamepad_Init();
}