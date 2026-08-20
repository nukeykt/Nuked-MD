/** @file controller.h @brief Controller input: button bit masks, per-controller state externs and input handling entry points. */

#pragma once

/** Bit mask for the D-pad Up button (bit 0). */
#define CTRL_BUTTON_UP 1
/** Bit mask for the D-pad Down button (bit 1). */
#define CTRL_BUTTON_DOWN 2
/** Bit mask for the D-pad Left button (bit 2). */
#define CTRL_BUTTON_LEFT 4
/** Bit mask for the D-pad Right button (bit 3). */
#define CTRL_BUTTON_RIGHT 8
/** Bit mask for the A button (bit 4). */
#define CTRL_BUTTON_A 16
/** Bit mask for the B button (bit 5). */
#define CTRL_BUTTON_B 32
/** Bit mask for the C button (bit 6). */
#define CTRL_BUTTON_C 64
/** Bit mask for the Start button (bit 7). */
#define CTRL_BUTTON_START 128
/** Bit mask for the X button (bit 8). */
#define CTRL_BUTTON_X 256
/** Bit mask for the Y button (bit 9). */
#define CTRL_BUTTON_Y 512
/** Bit mask for the Z button (bit 10). */
#define CTRL_BUTTON_Z 1024
/** Bit mask for the Mode button (bit 12). */
#define CTRL_BUTTON_MODE 4096

/** Current button state bitmask for controller 1 (see CTRL_BUTTON_* masks). */
extern int controller_buttons_state_1;
/** Current button state bitmask for controller 2 (see CTRL_BUTTON_* masks). */
extern int controller_buttons_state_2;

int controller_handle_3button(int sel, int state);
void controller_sdl_event(int scancode, int pressed);
