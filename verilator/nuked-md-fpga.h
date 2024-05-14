#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct {
    // input
    int ext_reset;
    int reset_button;
    int ram_68k_o;
    int ram_z80_o;
    int M3;
    int cart_data;
    int cart_data_en;
    int pal;
    int jap;
    int tmss_data;
    int PA_i;
    int PB_i;
    int PC_i;

    // output
    int ram_68k_address;
    int ram_68k_byteena;
    int ram_68k_data;
    int ram_68k_wren;
    int ram_z80_address;
    int ram_z80_data;
    int ram_z80_wren;
    int cart_address;
    int cart_cs;
    int cart_oe;
    int cart_lwr;
    int cart_uwr;
    int cart_time;
    int cart_cas2;
    int cart_data_wr;
    int tmss_address;
    int V_R;
    int V_G;
    int V_B;
    int V_HS;
    int V_VS;
    int V_CS;
    int MOL;
    int MOR;
    int PSG;
    int PA_o;
    int PA_d;
    int PB_o;
    int PB_d;
    int PC_o;
    int PC_d;
    int vdp_hclk1;
    int vdp_rs1;
} mdfpga_io_t;

extern mdfpga_io_t mdfpga_io;

void MDFPGA_Init();
void MDFPGA_Cycle(uint64_t mcycles);
void MDFPGA_Shutdown();

#ifdef __cplusplus
}
#endif // __cplusplus
