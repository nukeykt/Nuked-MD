/** @file controller.c @brief Controller input emulation: 3-button pad state reporting and SDL keyboard event mapping. */

#include <stdio.h>
#include "SDL.h"
#include "controller.h"
#include "md.h"

/** Current button state bitmask for controller 1 (see CTRL_BUTTON_* masks). */
int controller_buttons_state_1;
/** Current button state bitmask for controller 2 (see CTRL_BUTTON_* masks). */
int controller_buttons_state_2;

/**
 * @brief Emulates the 3-button controller response to the console's read sequence.
 *
 * Returns the 6-bit pad value (active low: bits of pressed buttons are cleared)
 * for controller 1 or 2. When @p sel is high the D-pad plus B/C are reported,
 * otherwise the D-pad (left/right forced released) plus A/Start are reported.
 *
 * @param sel TH/select line state (nonzero: D-pad + B/C; zero: D-pad + A/Start).
 * @param id Controller ID (0 = controller 1, nonzero = controller 2).
 * @return 6-bit controller state value (0-63); a cleared bit means the button is pressed.
 */
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

/**
 * @brief Handles an SDL keyboard event, mapping scancodes to controller buttons.
 *
 * Also handles the non-controller keys: F5 queues a quick save, F7 queues a
 * quick load and F12 toggles the console reset line.
 *
 * @param scancode SDL scancode of the key that changed state.
 * @param pressed Nonzero if the key was pressed, zero if it was released.
 */
// TODO: Separate control keys (like the RESET Button, Save/Load State) and controller bindings.
void controller_sdl_event(int scancode, int pressed)
{
    int button1 = 0;
    int button2 = 0;
    switch (scancode)
    {
    case SDL_SCANCODE_F5:
        if (!pending_load_state && !pressed) {
            pending_save_state = 1;
        }
        break;
    case SDL_SCANCODE_F7:
        if (!pending_save_state && !pressed) {
            pending_load_state = 1;
        }
        break;
    case SDL_SCANCODE_F12:
        // RESET Button.
        if (pressed) {
            if (md.wres) {
                printf("Reset Button pressed!\n");
            }
            md.wres = 0;
        }
        else {
            if (!md.wres) {
                printf("Reset Button released!\n");
            }
            md.wres = 1;
        }
        ym.arb.input.ext_wres = md.wres;
        break;

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
