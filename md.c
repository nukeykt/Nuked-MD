#include <stdio.h>
#include <string.h>
#include "common.h"
#include "68k.h"
#include "z80.h"
#include "fc1004.h"


#define ROM_SIZE (2 * 1024 * 1024)

m68k_t m68k;
z80_t z80;
fc1004_t ym;

unsigned short ram[32768];
unsigned short rom[ROM_SIZE];
unsigned char zram[8192];

inline unsigned short short_swap(unsigned short v)
{
    unsigned short b1 = v & 255;
    unsigned short b2 = (v >> 8) & 255;
    return (b1 << 8) | b2;
}

int load_tmss_rom(void)
{
    int i;
    FILE* tmss;

    tmss = fopen("tmss.bin", "rb");
    if (!tmss)
        return 1;

    fseek(tmss, 0, SEEK_END);
    size_t siz = ftell(tmss);
    rewind(tmss);
    if (siz < TMSS_SIZE * 2)
    {
        fclose(tmss);
        return 1;
    }

    fread(tmss_rom, 1, TMSS_SIZE * 2, tmss);
    for (i = 0; i < TMSS_SIZE; i++)
        tmss_rom[i] = short_swap(tmss_rom[i]);
    fclose(tmss);
    return 0;
}

int load_game_rom(void)
{
    int i;
    FILE* romfile;

    romfile = fopen("rom.bin", "rb");
    if (!romfile)
        return 1;

    fseek(romfile, 0, SEEK_END);
    size_t siz = ftell(romfile);
    rewind(romfile);

    if (siz > ROM_SIZE * 2)
        siz = ROM_SIZE * 2;

    memset(rom, 0, sizeof(rom));
    fread(rom, 1, siz, romfile);
    for (i = 0; i < ROM_SIZE; i++)
        rom[i] = short_swap(rom[i]);
    fclose(romfile);
    return 0;
}

void init_chips(void)
{
    memset(&m68k, 0, sizeof(m68k));
    memset(&z80, 0, sizeof(z80));
    memset(&ym, 0, sizeof(ym));
}

uint64_t mcycles;

int main(int argc, char *argv[])
{
    if (load_tmss_rom())
        return 1;
    if (load_game_rom())
        return 1;
    return 0;
}
