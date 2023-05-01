// FC1004 (YM7101+YM3438+YM6045+YM6046+TMSS)
#include "fc1004.h"


void FC1004_Init(fc1004_t *chip)
{
    chip->arb.ext_vaddress_out = &chip->o_vaddress;
    chip->arb.ext_data_out = &chip->o_vdata;
    chip->ioc.ext_vdata_out = &chip->o_vdata;
    chip->ioc.ext_zdata_out = &chip->o_zdata;
    chip->ioc.ext_vaddress_out = &chip->o_vaddress;
    chip->tmss.ext_data_out = &chip->o_vdata;
    ARB_Init(&chip->arb);
}

void FC1004_Destroy(fc1004_t *chip)
{
    ARB_Destroy(&chip->arb);
}

void FC1004_Clock(fc1004_t *chip)
{
    chip->vdp.input.i_hsync = chip->i_hsync;
    chip->arb.edclk.input.hsync = chip->i_hsync;
    chip->vdp.input.i_sel0 = chip->i_m3;
    chip->arb.input.ext_m3 = chip->i_m3;
    chip->ioc.input.ext_m3 = chip->i_m3;
    chip->tmss.ext_m3 = chip->i_m3;
    chip->vdp.input.i_pal = chip->i_ntsc;
    chip->ioc.input.ext_ntsc = chip->i_ntsc;
    chip->fm.cs = !(chip->tmss.ext_test_0 ? chip->i_sound : chip->arb.ext_sound);
    chip->fm.ic = !chip->i_zres;
    chip->hl_vdp = chip->tmss.ext_test_1 ? chip->i_zbr : chip->ioc.ext_hl;
    chip->vdp.input.i_pen = chip->hl_vdp;
    chip->intak_vdp = chip->tmss.ext_test_0 ? chip->i_disk : chip->arb.ext_intak;
    chip->vdp.input.i_intak = chip->intak_vdp;
    chip->tmss.ext_intak_vdp = chip->intak_vdp;
    chip->fm.test = chip->i_test0;
    chip->ioc.input.ext_test = chip->i_test0;
    chip->oe0_arb = (!chip->tmss.ext_test_0 && chip->tmss.ext_test_2) ? chip->i_jap : chip->vdp.o_oe0;
    chip->arb.input.ext_oe0 = chip->oe0_arb;
    chip->mreq_vdp = chip->tmss.ext_test_0 ? chip->i_fres : chip->arb.ext_vdpm;
    chip->vdp.input.i_mreq = chip->mreq_vdp;
    chip->ioc.input.ext_zv = chip->tmss.ext_test_0 ? chip->i_zv : chip->arb.ext_zv;
    chip->vz = chip->tmss.ext_test_0 ? chip->i_vz : chip->arb.ext_vz;
    chip->ioc.input.ext_io = chip->tmss.ext_test_0 ? chip->i_io : chip->arb.ext_io;

    chip->arb.input.ext_zaddress_in = chip->i_zaddress;
    chip->ioc.input.ext_zaddress_in = chip->i_zaddress;

    chip->arb.input.ext_sres = chip->i_sres;
    chip->ioc.input.ext_sres = chip->i_sres;
    chip->tmss.ext_sres = chip->i_sres;
    chip->vdp.input.i_reset = chip->i_sres;
    chip->vdp.prescaler.input.i_reset = chip->i_sres;
    chip->vdp.prescaler.input.i_test_reset = chip->vdp.w100;

    chip->ce0_tmss = chip->tmss.ext_test_0 ? chip->i_sel1 : chip->arb.ext_ce0;
    chip->tmss.ext_ce0_arb = chip->ce0_tmss;

    chip->arb.input.ext_vclk = chip->i_vclk;
    chip->ioc.input.ext_vclk = chip->i_vclk;
    chip->arb.input.ext_zclk = chip->i_zclk;

    chip->arb.edclk.input.mclk = chip->i_mclk;

    chip->vdp_data_dir = !chip->vdp.w155 || chip->tmss.ext_test_2;
    chip->vdp_address_dir = !chip->vdp.w267 || chip->tmss.ext_test_2;

    if (!chip->vdp_data_dir)
    {
        chip->o_vdata = chip->vdp.io_data;
    }
    else
    {
        chip->vdp.io_data = chip->i_vdata;
    }
    if (!chip->vdp_address_dir)
    {
        chip->o_vaddress = chip->vdp.io_address & 0x3fffff;
        chip->o_vaddress |= (chip->vdp.io_address_22o << 22);
    }
    else
    {
        chip->vdp.io_address = chip->i_vaddress & 0x73ffff;
    }

    chip->arb.input.ext_bgack_in = chip->i_bgack;
    chip->vdp.input.i_bgack = chip->i_bgack;

    chip->arb.input.ext_bg = chip->i_bg;
    chip->vdp.input.i_bg = chip->i_bg;

    chip->arb.input.ext_iorq = chip->i_iorq;
    chip->vdp.input.i_iorq = chip->i_iorq;

    chip->arb.input.ext_zrd_in = chip->i_zrd;
    chip->arb.input.ext_zwr_in = chip->i_zwr;
    chip->vdp.input.i_rd = chip->i_zrd;
    chip->vdp.input.i_wr = chip->i_zwr;

    chip->arb.input.ext_m1 = chip->i_m1;
    chip->vdp.input.i_m1 = chip->i_m1;

    chip->vdp.input.i_as = chip->i_as;
    chip->arb.input.ext_as_in = chip->i_as;
    chip->tmss.ext_as_in = chip->i_as;
    chip->vdp.input.i_uds = chip->i_uds;
    chip->arb.input.ext_uds_in = chip->i_uds;
    chip->tmss.ext_uds_in = chip->i_uds;
    chip->vdp.input.i_lds = chip->i_uds;
    chip->arb.input.ext_lds_in = chip->i_lds;
    chip->tmss.ext_lds_in = chip->i_lds;

    chip->arb.input.ext_dtack_in = chip->i_dtack;
    chip->vdp.input.i_dtack = chip->i_dtack;

    chip->ioc.input.ext_lwr = chip->i_lwr;
    chip->ioc.input.ext_cas0 = chip->i_cas0;

    chip->o_ys = chip->tmss.ext_test_2 ? chip->arb.w353 : chip->vdp.w1009;
    chip->o_vsync = chip->tmss.ext_test_2 ? chip->arb.w310 : chip->vdp.w374;
    chip->o_hsync = chip->vdp.l136[1] || chip->tmss.ext_test_2 ? state_z : 0;
    chip->cpu_reset = (chip->tmss.ext_test_0 || chip->arb.ext_vres) && chip->tmss.ext_cpu_reset;
    chip->o_halt = chip->cpu_reset ? state_z : 0;
    chip->o_reset = chip->cpu_reset ? state_z : 0;
    chip->o_mreq = chip->arb.ext_vz ? state_z : chip->arb.ext_mreq_out;
    chip->o_sound = chip->tmss.ext_test_0 ? state_z : chip->arb.ext_sound;
    chip->o_zres = chip->tmss.ext_test_0 ? state_z : chip->arb.ext_zres;
    chip->o_zbr = (chip->tmss.ext_test_0 && chip->tmss.ext_test_1) ? state_z :
        (chip->tmss.ext_test_0 ? chip->hl_vdp : chip->arb.ext_zbr);
    chip->o_wait = chip->arb.ext_wait_out ? state_z : 0;

    chip->o_ce0 = chip->tmss.ext_test_4 ? chip->ce0_tmss : chip->tmss.ext_ce0_tmss;
    chip->o_disk = (!chip->tmss.ext_test_2 || chip->tmss.ext_test_0) ? state_z : chip->intak_vdp;

    chip->o_test0 = ((chip->fm.mode_test_2c[1] & 128) != 0 || chip->tmss.ext_test_3) ? state_z : chip->fm.fsm_sel23;
    chip->o_jap = (chip->tmss.ext_test_0 && !chip->tmss.ext_test_2) ? chip->oe0_arb : state_z;
    chip->o_fres = (chip->tmss.ext_test_0 && !chip->tmss.ext_test_1) ? state_z :
        (chip->tmss.ext_test_1 ? chip->mreq_vdp : chip->ioc.ext_fres);

    chip->o_zv = chip->tmss.ext_test_0 ? state_z : chip->arb.ext_zv;
    chip->o_vz = chip->tmss.ext_test_0 ? state_z : chip->arb.ext_vz;
    chip->o_io = chip->tmss.ext_test_0 ? state_z : chip->arb.ext_io;

    chip->o_zaddress = 0;
    chip->o_zaddress_dir = 0;

    chip->za0_dir = (chip->tmss.ext_test_1 ^ chip->tmss.ext_test_3) || chip->arb.ext_vz;
    chip->za1_dir = (chip->tmss.ext_test_1 && !chip->tmss.ext_test_3) || chip->ioc.ext_bc1;
    chip->za7_dir = (chip->tmss.ext_test_1 && chip->tmss.ext_test_3) || chip->ioc.ext_bc1;
    chip->o_zaddress_dir |= chip->za0_dir;
    chip->o_zaddress_dir |= chip->za1_dir << 1;
    chip->o_zaddress_dir |= chip->za7_dir << 7;
    if (chip->ioc.ext_bc1)
        chip->o_zaddress_dir |= 0x7c;
    if (chip->arb.ext_vz)
        chip->o_zaddress_dir |= 0xff00;
    chip->o_zaddress |= chip->arb.ext_zaddress_out & 1;
    chip->o_zaddress |= (chip->i_vaddress & 127) << 1;
    chip->o_zaddress |= chip->arb.ext_zaddress_out & 0xff00;

    chip->o_vclk = (chip->tmss.ext_test_2 || chip->i_sel1) ? state_z : chip->vdp.prescaler.mclk_cpu_clk1;
    chip->fm_clk = chip->tmss.ext_test_2 ? chip->i_vclk : chip->vdp.prescaler.mclk_cpu_clk1;
    chip->o_zclk = chip->tmss.ext_test_2 ? state_z : chip->vdp.prescaler.o_clk0;

    chip->o_edclk = (chip->tmss.ext_test_0 && (chip->tmss.ext_test_2 || (chip->vdp.reg_test1 & 2) == 0))
        ? state_z :
        ((chip->tmss.ext_test_0 && !chip->tmss.ext_test_2) ? chip->vdp.prescaler.mclk_dclk : chip->arb.edclk.ext_edclk);

    chip->o_vdata_dir = 0;
    chip->o_vdata = 0;
    if (chip->ioc.ext_bc2 && chip->tmss.ext_data_out_en && chip->vdp_data_dir)
    {
        chip->o_vdata_dir |= 0xff;
        chip->o_vdata &= ~0xff;
    }
    if (chip->ioc.ext_bc3 && chip->tmss.ext_data_out_en && chip->vdp_data_dir && chip->arb.w12)
    {
        chip->o_vdata_dir |= 0x100;
        chip->o_vdata &= ~0x100;
    }
    if (chip->ioc.ext_bc3 && chip->tmss.ext_data_out_en && chip->vdp_data_dir)
    {
        chip->o_vdata_dir |= 0xfe00;
        chip->o_vdata &= ~0xfe00;
    }
    if (chip->ioc.ext_bc5 && chip->vdp_address_dir)
    {
        chip->o_vaddress_dir |= 0x7f;
        chip->o_vaddress |= ~0x7f;
    }
    if (chip->arb.w131 && chip->vdp_address_dir)
    {
        chip->o_vaddress_dir |= 0xfff80;
        chip->o_vaddress |= ~0xfff80;
    }
    if (chip->arb.w142 && chip->vdp_address_dir)
    {
        chip->o_vaddress_dir |= 0x700000;
        chip->o_vaddress |= ~0x700000;
    }

    chip->br = 1;
    if (chip->tmss.ext_test_0 && chip->tmss.ext_test_2)
        chip->br &= !(chip->fm.status_timer_a_dlatch || chip->fm.status_timer_b_dlatch) || chip->tmss.ext_test_3;
    if (!chip->tmss.ext_test_0)
        chip->br &= chip->arb.ext_br;
    if (!chip->tmss.ext_test_2)
        chip->br &= chip->vdp.w42;
    chip->o_br = chip->br ? state_z : 0;

    chip->bgack = chip->arb.ext_bgack_out && (chip->tmss.ext_test_2 || chip->vdp.w64);
    chip->o_bgack = chip->bgack ? state_z : 0;

    chip->o_zrd = chip->arb.ext_vz ? state_z : chip->arb.ext_zrd_out;
    chip->o_zwr = chip->arb.ext_vz ? state_z : chip->arb.ext_zwr_out;
    chip->o_as = chip->arb.ext_strobe_dir ? state_z : chip->arb.ext_as_out;
    chip->o_uds = chip->arb.ext_strobe_dir ? state_z : chip->arb.ext_uds_out;
    chip->o_lds = chip->arb.ext_strobe_dir ? state_z : chip->arb.ext_lds_out;
    chip->dtack = chip->arb.ext_dtack_out && chip->tmss.ext_dtack_out && (chip->tmss.ext_test_2 || chip->vdp.w117);
    chip->o_dtack = chip->dtack ? state_z : 0;
    chip->o_lwr = chip->tmss.ext_test_2 ? state_z : chip->vdp.o_lwr;
    chip->o_cas0 = chip->tmss.ext_test_2 ? state_z : chip->vdp.o_cas0;

    chip->colorbus = !(chip->tmss.ext_test_1 && chip->tmss.ext_test_2 && chip->tmss.ext_test_3);
    chip->fm_read = !(chip->fm.cs && chip->fm.rd && !chip->fm.ic);


    chip->o_zdata_dir = 0;
    chip->o_zdata = 0;
    if (chip->colorbus && chip->ioc.ext_bc4 && chip->fm_read)
    {
        chip->o_zdata = 0;
        chip->o_zdata_dir = 0xff;
    }
    if (!chip->colorbus)
    {
        chip->o_zdata = chip->vdp.o_ram_addr;
    }
    if (!chip->fm_read)
    {
        chip->o_zdata = FM_ReadStatus(&chip->fm);
    }
}
