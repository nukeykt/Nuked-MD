#include <stdio.h>
#include <string.h>
#include "cartridge.h"
#include "fc1004.h"

unsigned short rom[ROM_SIZE * 2];   // *2 to support sega mapper (up to 8mb games)

int mapper_enable;
int mapper_pages[8];

int m3_mapper_enable;
int m3_mapper_data;
int m3_mapper_page[3];
unsigned char m3_mapper_ram[0x4000];

extern fc1004_t ym;
extern int vdata, vaddress;

int cart_load_game_rom(char *filename, int _m3)
{
    size_t i, ret;
    FILE* romfile;

    romfile = fopen(filename, "rb");
    if (!romfile)
        return 1;

    fseek(romfile, 0, SEEK_END);
    size_t siz = ftell(romfile);
    rewind(romfile);

    if (!_m3)
    {
        if (siz > ROM_SIZE * 2)
        {
            mapper_enable = 1;
            if (siz > ROM_SIZE * 4)
                siz = ROM_SIZE * 4;
            for (i = 0; i < 8; i++)
                mapper_pages[i] = (int)i;
        }
        else
        {
            mapper_enable = 0;
        }
    }
    else
    {
        if (siz > 0x8000)
        {
            m3_mapper_enable = 1;
            m3_mapper_page[0] = 0;
            m3_mapper_page[1] = 1 << 14;
            m3_mapper_page[2] = 2 << 14;
        }
        else
        {
            m3_mapper_enable = 0;
        }
    }

    memset(rom, 0, sizeof(rom));
    ret = fread(rom, 1, siz, romfile);
    if (ret < siz)
    {
        fclose(romfile);
        return 1;
    }
    for (i = 0; i < ROM_SIZE * 2; i++)
        rom[i] = short_swap(rom[i]);
    fclose(romfile);
    return 0;
}

void cart_handle_md(void)
{               
    // MD
    if (!ym.o_ce0)
    {
        if (!ym.o_cas0)
        {
            if (mapper_enable)
            {
                int address = vaddress & 0x3ffff;
                int page = (vaddress >> 18) & 7;
                int mapped_address = address | (mapper_pages[page] << 18);
                mapped_address &= 0x3fffff;
                vdata = rom[mapped_address];
            }
            else
                vdata = rom[vaddress & 0x1fffff];
        }
    }
    // mapper
    if (mapper_enable)
    {
        if (!ym.arb.ext_time && !ym.o_lwr)
        {
            switch (vaddress & 0x7f)
            {
                case 0x79:
                    mapper_pages[1] = vdata & 255;
                    break;
                case 0x7a:
                    mapper_pages[2] = vdata & 255;
                    break;
                case 0x7b:
                    mapper_pages[3] = vdata & 255;
                    break;
                case 0x7c:
                    mapper_pages[4] = vdata & 255;
                    break;
                case 0x7d:
                    mapper_pages[5] = vdata & 255;
                    break;
                case 0x7e:
                    mapper_pages[6] = vdata & 255;
                    break;
                case 0x7f:
                    mapper_pages[7] = vdata & 255;
                    break;
            }
        }
    }
}

void cart_handle_m3(void)
{
    // M3
    vaddress &= ~0x700000;
    vaddress |= 0x500000;
    if (!(vaddress & 0x20000)) // cart chip enable
    {
        if (!ym.o_cas0)
        {
            int address;
            int enable = 0;
            if (!m3_mapper_enable)
            {
                address = vaddress & 0x7fff;
                enable = !ym.o_ce0;
            }
            else
            {
                address = vaddress & 0x3fff;
                if (!ym.o_ce0)
                {
                    address |= m3_mapper_page[(vaddress >> 14) & 1];
                    enable = 1;
                }
                else if (!ym.arb.ext_cas2)
                {
                    if (m3_mapper_data & 8)
                    {
                        vdata &= ~0xff;
                        vdata |= m3_mapper_ram[address];
                    }
                    else
                    {
                        address |= m3_mapper_page[2];
                        enable = 1;
                    }
                }
                address &= 0x3fffff;
            }
            if (enable)
            {
                vdata &= ~0xff;
                if (address & 1)
                    vdata |= rom[address >> 1] & 255;
                else
                    vdata |= (rom[address >> 1] >> 8) & 255;
            }
        }
        if (!ym.o_lwr)
        {
            if (m3_mapper_enable)
            {
                if (!ym.arb.ext_cas2)
                {
                    if (m3_mapper_data & 8)
                    {
                        m3_mapper_ram[vaddress & 0x3fff] = vdata & 0xff;
                    }
                }
                if ((vaddress & 0xffff) >= 0xfffc)
                {
                    int page;

                    // GPGX
                    page = vdata & 15;
                    if (m3_mapper_data & 3)
                        page = (page + ((4 - (m3_mapper_data & 3)) << 3)) & 15;
                    if ((vaddress & 3) == 0)
                        m3_mapper_data = vdata & 0xff;
                    if ((vaddress & 3) == 1)
                        m3_mapper_page[0] = page << 14;
                    if ((vaddress & 3) == 2)
                        m3_mapper_page[1] = page << 14;
                    if ((vaddress & 3) == 3)
                        m3_mapper_page[2] = page << 14;
                }
            }
        }
    }
}
