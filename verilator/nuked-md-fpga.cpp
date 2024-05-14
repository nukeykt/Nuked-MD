#include "Vmd_board.h"
#include "nuked-md-fpga.h"

Vmd_board *top;

// FIXME
#ifdef _MSC_VER
double sc_time_stamp() { return 0; }
#endif

mdfpga_io_t mdfpga_io;

void MDFPGA_Init()
{
    top = new Vmd_board();
}

void MDFPGA_Cycle(uint64_t mcycles)
{
    top->ext_reset = mdfpga_io.ext_reset;
    top->reset_button = mdfpga_io.reset_button;
    top->ext_vres = 0;
    top->ext_zres = 0;
    top->ram_68k_o = mdfpga_io.ram_68k_o;
    top->ram_z80_o = mdfpga_io.ram_z80_o;
    top->M3 = mdfpga_io.M3;
    top->cart_data = mdfpga_io.cart_data;
    top->cart_data_en = mdfpga_io.cart_data_en;
    top->cart_m3_pause = 0;
    top->ext_dtack = 0;
    top->pal = mdfpga_io.pal;
    top->jap = mdfpga_io.jap;
    top->tmss_enable = 0;
    top->tmss_data = mdfpga_io.tmss_data;
    top->PA_i = mdfpga_io.PA_i;
    top->PB_i = mdfpga_io.PB_i;
    top->PC_i = mdfpga_io.PC_i;
    top->vdp_cramdot_dis = 0;
    top->ym2612_status_enable = 0;
    top->dma_68k_req = 0;
    top->dma_z80_req = 0;
    
    top->MCLK2 = 0;
    top->eval();
    top->MCLK2 = 1;
    top->eval();

    mdfpga_io.ram_68k_address = top->ram_68k_address;
    mdfpga_io.ram_68k_byteena = top->ram_68k_byteena;
    mdfpga_io.ram_68k_data = top->ram_68k_data;
    mdfpga_io.ram_68k_wren = top->ram_68k_wren;
    mdfpga_io.ram_z80_address = top->ram_z80_address;
    mdfpga_io.ram_z80_data = top->ram_z80_data;
    mdfpga_io.ram_z80_wren = top->ram_z80_wren;
    mdfpga_io.cart_address = top->cart_address;
    mdfpga_io.cart_cs = top->cart_cs;
    mdfpga_io.cart_oe = top->cart_oe;
    mdfpga_io.cart_lwr = top->cart_lwr;
    mdfpga_io.cart_uwr = top->cart_uwr;
    mdfpga_io.cart_time = top->cart_time;
    mdfpga_io.cart_cas2 = top->cart_cas2;
    mdfpga_io.cart_data_wr = top->cart_data_wr;
    mdfpga_io.tmss_address = top->tmss_address;
    mdfpga_io.V_R = top->V_R;
    mdfpga_io.V_G = top->V_G;
    mdfpga_io.V_B = top->V_B;
    mdfpga_io.V_HS = top->V_HS;
    mdfpga_io.V_VS = top->V_VS;
    mdfpga_io.V_CS = top->V_CS;
    mdfpga_io.MOL = top->MOL;
    mdfpga_io.MOR = top->MOR;
    mdfpga_io.PSG = top->PSG;
    mdfpga_io.PA_o = top->PA_o;
    mdfpga_io.PA_d = top->PA_d;
    mdfpga_io.PB_o = top->PB_o;
    mdfpga_io.PB_d = top->PB_d;
    mdfpga_io.PC_o = top->PC_o;
    mdfpga_io.PC_d = top->PC_d;
    mdfpga_io.vdp_hclk1 = top->vdp_hclk1;
    mdfpga_io.vdp_rs1 = top->vdp_rs1;
}

void MDFPGA_Shutdown()
{
    delete top;
}
