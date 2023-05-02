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

void FC1004_Clock(fc1004_t *chip, int mclk, uint64_t cycles)
{
    chip->hl_vdp = chip->tmss.ext_test_1 ? chip->i_zbr : chip->ioc.ext_hl;
    chip->intak_vdp = chip->tmss.ext_test_0 ? chip->i_disk : chip->arb.ext_intak;
    chip->oe0_arb = (!chip->tmss.ext_test_0 && chip->tmss.ext_test_2) ? chip->i_jap : chip->vdp.o_oe0;
    chip->mreq_vdp = chip->tmss.ext_test_0 ? chip->i_fres : chip->arb.ext_vdpm;
    chip->vz = chip->tmss.ext_test_0 ? chip->i_vz : chip->arb.ext_vz;


    chip->ce0_tmss = chip->tmss.ext_test_0 ? chip->i_sel1 : chip->arb.ext_ce0;


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
    chip->o_rw = chip->arb.ext_rw_dir ? state_z : chip->arb.ext_rw_out;

    chip->colorbus = !(chip->tmss.ext_test_1 && chip->tmss.ext_test_2 && chip->tmss.ext_test_3);
    chip->fm_read = !(chip->fm.input.cs && chip->fm.input.rd && !chip->fm.input.ic)
        || chip->tmss.ext_test_3;

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

    ARB_UpdateOutputBus(&chip->arb);
    IOC_UpdateOutputBus(&chip->ioc);
    TMSS_UpdateOutputBus(&chip->tmss);

    // FM
    chip->fm.prescaler.input.ic = chip->fm.input.ic = !chip->i_zres;
    FM_Prescaler2(&chip->fm.prescaler, chip->fm_clk);
    chip->fm.input.rd = !chip->i_zrd;
    chip->fm.input.wr = !chip->i_zwr;
    chip->fm.input.cs = !(chip->tmss.ext_test_0 ? chip->i_sound : chip->arb.ext_sound);
    chip->fm.input.address = chip->i_zaddress & 3;
    chip->fm.input.data = chip->i_zdata;
    chip->fm.input.test = chip->i_test0;
    chip->fm.input.i_fsm_reset = (chip->fm.prescaler.ic_check_latch[1] & 16) != 0;
    FM_Clock2(&chip->fm, chip->fm.prescaler.phi1_latch[1],
        chip->fm.prescaler.phi2_latch[1]);

    // EDCLK

    chip->arb.edclk.input.hsync = chip->i_hsync;
    chip->arb.edclk.input.sres = chip->i_sres;

    ARB_ClockEDCLK2(&chip->arb.edclk, mclk);

    // VDP
    chip->vdp.prescaler.input.i_reset = chip->i_sres;
    chip->vdp.prescaler.input.i_test_reset = chip->vdp.w100;
    chip->vdp.prescaler.input.i_clk1 = chip->i_vclk;
    chip->vdp.prescaler.input.i_edclk = chip->i_edclk;
    chip->vdp.prescaler.input.i_pal = chip->i_ntsc;
    chip->vdp.prescaler.input.i_rs0 = chip->vdp.reg_rs0;
    chip->vdp.prescaler.input.i_rs1 = chip->vdp.reg_rs1;
    chip->vdp.prescaler.input.i_test_psg = chip->vdp.reg_test1 & 1;
    //chip->vdp.prescaler.input.i_test_dclk = chip->vdp.reg_test1 & 1;
    VDP_ClockMCLK2(&chip->vdp.prescaler, mclk);

    // do externally: csync, vram(sd,rd,ad), spa
    chip->vdp.input.i_pal = chip->i_ntsc;
    chip->vdp.input.i_pen = chip->hl_vdp;
    chip->vdp.input.i_sel0 = chip->i_m3;
    chip->vdp.input.i_as = chip->i_as;
    chip->vdp.input.i_uds = chip->i_uds;
    chip->vdp.input.i_lds = chip->i_uds;
    chip->vdp.input.i_m1 = chip->i_m1;
    chip->vdp.input.i_rd = chip->i_zrd;
    chip->vdp.input.i_wr = chip->i_zwr;
    chip->vdp.input.i_iorq = chip->i_iorq;
    chip->vdp.input.i_mreq = chip->mreq_vdp;
    chip->vdp.input.i_rw = chip->i_rw;
    chip->vdp.input.i_cpu_clk0 = chip->vdp.prescaler.mclk_cpu_clk0;
    chip->vdp.input.i_cpu_clk1 = chip->i_vclk;
    chip->vdp.input.i_bg = chip->i_bg;
    chip->vdp.input.i_intak = chip->intak_vdp;
    chip->vdp.input.i_dtack = chip->i_dtack;
    chip->vdp.input.i_hsync = chip->i_hsync;
    chip->vdp.input.i_reset = chip->i_sres;
    chip->vdp.input.i_bgack = chip->i_bgack;
    {
        int phi1 = 0;
        int phi2 = 0;
        int dclk = chip->vdp.prescaler.mclk_dclk;
        chip->old_dclk[cycles % 3] = dclk;
        if (dclk != chip->old_dclk[(cycles + 1) % 3])
        {
            if (dclk)
                phi1 = 1;
            else
                phi2 = 1;
        }
        VDP_ClockDCLK2(&chip->vdp, phi1, phi2);
    }
    chip->vdp.psg.input.i_reset = chip->vdp.reset_comb;
    chip->vdp.psg.input.i_write = chip->vdp.w111;
    chip->vdp.psg.input.i_data = chip->vdp.io_data;
    chip->vdp.psg.input.i_test = chip->vdp.reg_test0;
    VDP_ClockPSG2(&chip->vdp.psg, chip->vdp.prescaler.mclk_cpu_clk0);
    if (chip->vdp.w93)
    {
        chip->vdp.io_data = chip->vdp.psg.o_psg_debug;
    }

    // Arbiter
    ARB_UpdateDelays(&chip->arb, cycles);
    // do externally: wres, wait, zbak, mreq, fc0, fc1,
    chip->arb.input.ext_vclk = chip->i_vclk;
    chip->arb.input.ext_zclk = chip->i_zclk;
    chip->arb.input.ext_data_in = chip->i_vdata;
    chip->arb.input.ext_zaddress_in = chip->i_zaddress;
    chip->arb.input.ext_vaddress_in = chip->i_vaddress;
    chip->arb.input.ext_zrd_in = chip->i_zrd;
    chip->arb.input.ext_m1 = chip->i_m1;
    chip->arb.input.ext_zwr_in = chip->i_zwr;
    chip->arb.input.ext_bgack_in = chip->i_bgack;
    chip->arb.input.ext_bg = chip->i_bg;
    chip->arb.input.ext_iorq = chip->i_iorq;
    chip->arb.input.ext_rw_in = chip->i_rw;
    chip->arb.input.ext_uds_in = chip->i_uds;
    chip->arb.input.ext_as_in = chip->i_as;
    chip->arb.input.ext_dtack_in = chip->i_dtack;
    chip->arb.input.ext_lds_in = chip->i_lds;
    chip->arb.input.ext_cas0 = chip->i_cas0;
    chip->arb.input.ext_m3 = chip->i_m3;
    chip->arb.input.ext_za0 = chip->i_zaddress & 1;
    chip->arb.input.ext_oe0 = chip->oe0_arb;
    chip->arb.input.ext_sres = chip->i_sres;
    chip->arb.input.ext_test_mode_0 = chip->tmss.ext_test_0;
    chip->arb.input.ext_zdata_in = chip->i_zdata;
    chip->arb.input.ext_cart = chip->i_cart;
    ARB_Clock2(&chip->arb);

    // do externally: port_a, port_b, port_c
    chip->ioc.input.ext_test = chip->i_test0;
    chip->ioc.input.ext_m3 = chip->i_m3;
    chip->ioc.input.ext_io = chip->tmss.ext_test_0 ? chip->i_io : chip->arb.ext_io;
    chip->ioc.input.ext_cas0 = chip->i_cas0;
    chip->ioc.input.ext_sres = chip->i_sres;
    chip->ioc.input.ext_vclk = chip->i_vclk;
    chip->ioc.input.ext_ntsc = chip->i_ntsc;
    chip->ioc.input.ext_disk = chip->i_disk;
    chip->ioc.input.ext_jap = chip->i_jap;
    chip->ioc.input.ext_zaddress_in = chip->i_zaddress;
    chip->ioc.input.ext_zdata_in = chip->i_zdata;
    chip->ioc.input.ext_vaddress_in = chip->i_vaddress;
    chip->ioc.input.ext_vdata_in = chip->i_vdata;
    chip->ioc.input.ext_lwr = chip->i_lwr;
    chip->ioc.input.ext_t1 = chip->tmss.ext_test_1;
    chip->ioc.input.ext_zv = chip->tmss.ext_test_0 ? chip->i_zv : chip->arb.ext_zv;
    chip->ioc.input.ext_vz = chip->tmss.ext_test_0 ? chip->i_vz : chip->arb.ext_vz;
    IOC_Clock2(&chip->ioc);

    // TMSS
    // do externally: TEST1-3
    chip->tmss.input.ext_data_in = chip->i_vdata;
    chip->tmss.input.ext_jap = chip->i_jap;
    chip->tmss.input.ext_as_in = chip->i_as;
    chip->tmss.input.ext_lds_in = chip->i_lds;
    chip->tmss.input.ext_uds_in = chip->i_uds;
    chip->tmss.input.ext_rw_in = chip->i_rw;
    chip->tmss.input.ext_address_in = chip->i_vaddress;
    chip->tmss.input.ext_sres = chip->i_sres;
    chip->tmss.input.ext_ce0_arb = chip->ce0_tmss;
    chip->tmss.input.ext_m3 = chip->i_m3;
    chip->tmss.input.ext_cart = chip->i_cart;
    chip->tmss.input.ext_intak_vdp = chip->intak_vdp;
    TMSS_Clock2(&chip->tmss);
}
