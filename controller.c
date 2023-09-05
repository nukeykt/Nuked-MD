#include "SDL.h"
#include "controller.h"

int controller_buttons_state_1;
int controller_buttons_state_2;

int controller_handle_3button(int sel, int id)
{
    int state = id ? controller_buttons_state_2 : controller_buttons_state_1;
    int value = 63;
    if (sel) // 40
    {
        if (state & CTRL_BUTTON_UP)
            value &= ~1;
        if (state & CTRL_BUTTON_DOWN)
            value &= ~2;
        if (state & CTRL_BUTTON_LEFT)
            value &= ~4;
        if (state & CTRL_BUTTON_RIGHT)
            value &= ~8;
        if (state & CTRL_BUTTON_B)
            value &= ~16;
        if (state & CTRL_BUTTON_C)
            value &= ~32;
    }
    else
    {
        if (state & CTRL_BUTTON_UP)
            value &= ~1;
        if (state & CTRL_BUTTON_DOWN)
            value &= ~2;
        value &= ~12;
        if (state & CTRL_BUTTON_A)
            value &= ~16;
        if (state & CTRL_BUTTON_START)
            value &= ~32;
    }
    return value;
}

void controller_sdl_event(int scancode, int pressed)
{
    int button1 = 0;
    int button2 = 0;
    switch (scancode)
    {
    case SDL_SCANCODE_UP:
        button1 = CTRL_BUTTON_UP;
        break;
    case SDL_SCANCODE_DOWN:
        button1 = CTRL_BUTTON_DOWN;
        break;
    case SDL_SCANCODE_LEFT:
        button1 = CTRL_BUTTON_LEFT;
        break;
    case SDL_SCANCODE_RIGHT:
        button1 = CTRL_BUTTON_RIGHT;
        break;
    case SDL_SCANCODE_Z:
        button1 = CTRL_BUTTON_A;
        break;
    case SDL_SCANCODE_X:
        button1 = CTRL_BUTTON_B;
        break;
    case SDL_SCANCODE_C:
        button1 = CTRL_BUTTON_C;
        break;
    case SDL_SCANCODE_RETURN:
        button1 = CTRL_BUTTON_START;
        break;
    }
    if (button1)
    {
        if (pressed)
            controller_buttons_state_1 |= button1;
        else
            controller_buttons_state_1 &= ~button1;
    }
    if (button2)
    {
        if (pressed)
            controller_buttons_state_2 |= button2;
        else
            controller_buttons_state_2 &= ~button2;
    }
}
