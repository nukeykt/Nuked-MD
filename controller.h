#pragma once

#define CTRL_BUTTON_UP 1
#define CTRL_BUTTON_DOWN 2
#define CTRL_BUTTON_LEFT 4
#define CTRL_BUTTON_RIGHT 8
#define CTRL_BUTTON_A 16
#define CTRL_BUTTON_B 32
#define CTRL_BUTTON_C 64
#define CTRL_BUTTON_START 128
#define CTRL_BUTTON_X 256
#define CTRL_BUTTON_Y 512
#define CTRL_BUTTON_Z 1024
#define CTRL_BUTTON_MODE 4096

extern int controller_buttons_state_1;
extern int controller_buttons_state_2;

int controller_handle_3button(int sel, int state);
void controller_sdl_event(int scancode, int pressed);
