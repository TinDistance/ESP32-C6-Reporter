#include "./include/gamepad.h"
#include <stdio.h>

static GamepadState s_state;
static int16_t s_tick = 0;


static int16_t fake_read_x(void)
{
    s_tick++;
    return (s_tick % 200) - 100;   
}

void Gamepad_Init(void)
{
    s_state.left_x    = 0;
    s_state.left_y    = 0;
    s_state.connected = true;
    s_state.updated   = false;
    printf("Gamepad initialized\n");
}

void Gamepad_Update(void)
{
    s_state.left_x  = fake_read_x();
    s_state.left_y  = 0;
    s_state.right_x = 0;
    s_state.right_y = 0;
    s_state.updated = true;
}

const GamepadState* Gamepad_GetState(void)
{
    return &s_state;
}

void Gamepad_ClearUpdated(void)
{
    s_state.updated = false;
}