#ifndef INPUT_H
#define INPUT_H

#include <SDL.h>

typedef struct {
    unsigned int input_state_a;
    unsigned int input_state_b;
    unsigned int port_a_state;
    unsigned int port_b_state;
    unsigned char signal_quit;
} input_t;

#define CONTROLLER_VALUE 63u
#define CTRL_BUTTON_UP 1u
#define CTRL_BUTTON_DOWN 2u
#define CTRL_BUTTON_LEFT 4u
#define CTRL_BUTTON_RIGHT 8u
#define CTRL_BUTTON_A 16u
#define CTRL_BUTTON_B 32u
#define CTRL_BUTTON_C 64u
#define CTRL_BUTTON_START 128u
#define CTRL_BUTTON_X 256u
#define CTRL_BUTTON_Y 512u
#define CTRL_BUTTON_Z 1024u
#define CTRL_BUTTON_MODE 4096u
#define PORT_A 2u
#define PORT_B 4u

#define BUTTON_PRESSING(input, button, event) \
    switch (button) \
    { \
    case CTRL_BUTTON_DOWN: \
    case CTRL_BUTTON_UP: \
    case CTRL_BUTTON_LEFT: \
    case CTRL_BUTTON_RIGHT: \
    case CTRL_BUTTON_A: \
    case CTRL_BUTTON_B: \
    case CTRL_BUTTON_C: \
    case CTRL_BUTTON_START: \
    { \
        switch (event) \
        { \
        case SDL_KEYDOWN: \
            (input)->input_state_a |= button; \
            break; \
        default: \
            (input)->input_state_a &= ~button; \
            break; \
        } \
        break; \
    } \
    } \

void handle_input(input_t *input, const unsigned int event, SDL_Scancode scancode);
void controller_handle_3button(input_t *input, const int sel, const int state, const int port);

#endif // INPUT_H
