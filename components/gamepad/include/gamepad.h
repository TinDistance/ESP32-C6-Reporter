#ifndef GAMEPAD_H
#define GAMEPAD_H

#include <stdint.h>
#include <stdbool.h>

typedef struct {
    int16_t left_x;
    int16_t left_y;
    int16_t right_x;
    int16_t right_y;
    bool    connected;
    bool    updated;
} GamepadState;

void Gamepad_Init(void);
void Gamepad_Update(void);
const GamepadState* Gamepad_GetState(void);
void Gamepad_ClearUpdated(void);

#endif