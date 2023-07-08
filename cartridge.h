#pragma once

#define ROM_SIZE (2 * 1024 * 1024)  // in words

static inline unsigned short short_swap(unsigned short v)
{
    unsigned short b1 = v & 255;
    unsigned short b2 = (v >> 8) & 255;
    return (b1 << 8) | b2;
}

int cart_load_game_rom(char *filename, int _m3);
void cart_handle_md(void);
void cart_handle_m3(void);