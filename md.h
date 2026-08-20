/** @file md.h @brief Mega Drive motherboard interconnect state and emulator globals. */

#pragma once

#include "68k.h"
#include "z80.h"
#include "fc1004.h"

/** @brief NTSC master clock frequency in Hz. */
#define MCLK_NTSC 53693182
/** @brief PAL master clock frequency in Hz. */
#define MCLK_PAL  53203425

/** @brief 68000 CPU state. */
extern m68k_t m68k;
/** @brief Z80 CPU state. */
extern z80_t z80;
/** @brief FC1004 (FM+VDP+arbiter+IO+TMSS) chip state. */
extern fc1004_t ym;

/** @brief 68000 main RAM (64 KB). */
extern unsigned char ram[0x10000];
/** @brief Z80 RAM (8 KB). */
extern unsigned char zram[8192];

#pragma pack(push, 1)
/**
 * @brief Motherboard interconnects and other emulator context.
 * Just a little bragging on my knowledge of the C standard: type definitions ending in `_t` should only be used for types reserved by the standard, so not `md_state_t`  :-P
 */
typedef struct _md_state
{
	int vclk;		/**< Video clock. */
	int vaddress;	/**< VDP address bus. */
	int vdata;		/**< VDP data bus. */
	int zaddress;	/**< Z80 address bus. */
	int zdata;		/**< Z80 data bus. */
	int dtack;		/**< Data transfer acknowledge. */
	int hsync;		/**< Horizontal sync. */
	int m3;			/**< SMS mode select, active low. */
	int ntsc;		/**< NTSC/PAL video mode flag. */
	int cart;		/**< Cartridge connected flag. */
	int wres;		/**< Reset button state (active low). */
	int disk;		/**< Disk (peripheral) connected flag. */
	int port_a;		/**< Controller port A data. */
	int port_b;		/**< Controller port B data. */
	int port_c;		/**< Controller port C data. */
	int jap;		/**< Japan region flag. */
	int as;			/**< Address strobe. */
	int lds;		/**< Lower data strobe. */
	int uds;		/**< Upper data strobe. */
	int reset;		/**< Reset line. */
	int halt;		/**< Halt line. */
	int rw;			/**< Read/write line. */
	int iorq;		/**< IO request line. */
	int mreq;		/**< Memory request line. */
	int wr;			/**< Write strobe. */
	int rd;			/**< Read strobe. */
	int ovclk;		/**< Output video clock. */
	int odclk;		/**< Output DCLK. */
} md_state;
#pragma pack(pop)

/** @brief Motherboard interconnect state. */
extern md_state md;

/** @brief Global cycle counter. */
extern uint64_t mcycles;

/** @brief Set to initiate the save state process. */
extern int pending_save_state;
/** @brief Set to initiate the load state process. */
extern int pending_load_state;
