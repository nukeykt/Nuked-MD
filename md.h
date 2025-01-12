// Board internal state.

#pragma once

#include "68k.h"
#include "z80.h"
#include "fc1004.h"

#define MCLK_NTSC 53693182
#define MCLK_PAL  53203425

extern m68k_t m68k;
extern z80_t z80;
extern fc1004_t ym;

extern unsigned char ram[0x10000];
extern unsigned char zram[8192];

#pragma pack(push, 1)
/// <summary>
/// Motherboard interconnects and other context.
/// Just a little bragging on my knowledge of the C standard: type definitions ending in `_t` should only be used for types reserved by the standard, so not `md_state_t`  :-P
/// </summary>
typedef struct _md_state
{
	int vclk;
	int vaddress;
	int vdata;
	int zaddress;
	int zdata;
	int dtack;
	int hsync;
	int m3;				// active low
	int ntsc;
	int cart;
	int wres;
	int disk;
	int port_a;
	int port_b;
	int port_c;
	int jap;
	int as;
	int lds;
	int uds;
	int reset;
	int halt;
	int rw;
	int iorq;
	int mreq;
	int wr;
	int rd;
	int ovclk;
	int odclk;
} md_state;
#pragma pack(pop)

extern md_state md;

extern uint64_t mcycles;

// Used to initiate the save/load state process
extern int pending_save_state;
extern int pending_load_state;
