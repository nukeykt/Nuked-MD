// FC1004 (YM7101+YM3438+YM6045+YM6046+TMSS)
#include "fc1004.h"


void FC1004_Clock(fc1004_t *chip, int cycles)
{
    chip->vdp.i_hsync = chip->i_hsync;
    chip->arb.ext_hsync_in = chip->i_hsync;
    chip->vdp.i_sel0 = chip->i_m3;
    chip->arb.ext_m3 = chip->i_m3;
    chip->ioc.ext_m3 = chip->i_m3;
    chip->tmss.ext_m3 = chip->i_m3;
    chip->vdp.cpu_pal = chip->i_ntsc;
    chip->ioc.ext_ntsc = chip->i_ntsc;
    chip->fm.cs = !(chip->tmss.ext_test_0 ? chip->i_sound : chip->arb.ext_sound);
    chip->fm.ic = !chip->i_zres;
    chip->hl_vdp = chip->tmss.ext_test_1 ? chip->i_zbr : chip->ioc.ext_hl;
    chip->vdp.cpu_pen = chip->hl_vdp;
    chip->intak_vdp = chip->tmss.ext_test_0 ? chip->i_disk : chip->arb.ext_intak;
    chip->vdp.cpu_intak = chip->intak_vdp;
    chip->tmss.ext_intak_vdp = chip->intak_vdp;
    chip->fm.test = chip->i_test0;
    chip->ioc.ext_test = chip->i_test0;
    chip->oe0_arb = (!chip->tmss.ext_test_0 && chip->tmss.ext_test_2) ? chip->i_jap : chip->vdp.o_oe0;
    chip->arb.ext_oe0 = chip->oe0_arb;
    chip->mreq_vdp = chip->tmss.ext_test_0 ? chip->i_fres : chip->arb.ext_vdpm;
    chip->vdp.i_mreq = chip->mreq_vdp;
    chip->ioc.ext_zv = chip->tmss.ext_test_0 ? chip->i_zv : chip->arb.ext_zv;
    chip->vz = chip->tmss.ext_test_0 ? chip->i_vz : chip->arb.ext_vz;
    chip->ioc.ext_io = chip->tmss.ext_test_0 ? chip->i_io : chip->arb.ext_io;


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

    chip->o_ce0 = chip->tmss.ext_test_4 ? chip->arb.ext_ce0 : chip->tmss.ext_ce0_tmss;
    chip->o_disk = (!chip->tmss.ext_test_2 || chip->tmss.ext_test_0) ? state_z : chip->intak_vdp;

    chip->o_test0 = ((chip->fm.mode_test_2c[1] & 128) != 0 || chip->tmss.ext_test_3) ? state_z : chip->fm.fsm_sel23;
    chip->o_jap = (chip->tmss.ext_test_0 && !chip->tmss.ext_test_2) ? chip->oe0_arb : state_z;
    chip->o_fres = (chip->tmss.ext_test_0 && !chip->tmss.ext_test_1) ? state_z :
        (chip->tmss.ext_test_1 ? chip->mreq_vdp : chip->ioc.ext_fres);

    chip->o_zv = chip->tmss.ext_test_0 ? state_0 : chip->arb.ext_zv;
    chip->o_vz = chip->tmss.ext_test_0 ? state_0 : chip->arb.ext_vz;
    chip->o_io = chip->tmss.ext_test_0 ? state_0 : chip->arb.ext_io;
}
