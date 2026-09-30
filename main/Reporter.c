#include <stdio.h>
#include <string.h>

#include "nvs_flash.h"

#include "esp_log.h"

#include "gamepad.h"



void app_main(void)
{
    printf("Hello, ESP32-C6 BLE Reporter!\n");
    Gamepad_Init();
    //测试模块导入是否正常工作
    for (int i = 0; i < 500; i++) {
        Gamepad_Update();
        const GamepadState *state = Gamepad_GetState();
        if (state->updated) {
            printf("tick=%d, connected=%s, left_x=%d, left_y=%d\n",
                   i,
                   state->connected ? "true" : "false",
                   state->left_x,
                   state->left_y);
            Gamepad_ClearUpdated();
        }

        
    }
}