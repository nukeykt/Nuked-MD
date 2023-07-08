/*
 * Copyright (C) 2023 nukeykt
 *
 * This file is part of Nuked-MD.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *  Mega Drive board.
 *  Thanks:
 *      org, andkorzh, HardWareMan (emu-russia):
 *          help & support.
 *      ctr001:
 *          dummy TMSS rom
 *      movrsi:
 *          input.c implementation.
 */

#include "input.h"

void handle_input(input_t *input, const unsigned int event, SDL_Scancode scancode)
{
    switch (event)
    {
    case SDL_QUIT:
        input->signal_quit = 1;
        break;
    case SDL_KEYDOWN:
    case SDL_KEYUP:
    {
        unsigned int button1 = 0, button2 = 0;

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
        default:
            break;
        }

        BUTTON_PRESSING(input, button1, event);
        BUTTON_PRESSING(input, button2, event);
    }
    }
}

void controller_handle_3button(input_t *input, const int sel, const int state, const int port)
{
    unsigned int value = CONTROLLER_VALUE;

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

    switch (port) {
    case 2:
        input->port_a_state = value;
        break;
    case 4:
        input->port_b_state = value;
        break;
    }
}
