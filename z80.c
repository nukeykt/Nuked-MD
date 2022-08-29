#include <stdint.h>
#include "z80.h"


void Z80_SetData(z80_t *chip, int data)
{
    chip->ext_data_i = data & 255;
}

int Z80_GetData(z80_t *chip)
{
    return chip->ext_data_o;
}

void Z80_Clock(z80_t *chip, int clk)
{
}
