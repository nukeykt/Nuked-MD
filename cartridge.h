/** @file cartridge.h @brief Cartridge ROM size, byte-swap helper and cartridge API declarations. */

#pragma once

/** @brief Cartridge ROM size in words (2 MiB words = 4 MiB bytes). */
#define ROM_SIZE (2 * 1024 * 1024)  // in words

/**
 * @brief Byte-swaps a 16-bit value (converts between big-endian and little-endian).
 * @param v The 16-bit value to swap.
 * @return The byte-swapped value.
 */
static inline unsigned short short_swap(unsigned short v)
{
    unsigned short b1 = v & 255;
    unsigned short b2 = (v >> 8) & 255;
    return (b1 << 8) | b2;
}

int cart_load_game_rom(char *filename, int _m3);
void cart_handle_md(void);
void cart_handle_m3(void);
int cart_save(FILE* f);
int cart_load(FILE* f);
