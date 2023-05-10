// YM7101 core
#include <string.h>
#include "vdp.h"

void DFF_Update(dff_t *dff, int clk, int input, int reset)
{
    if (!clk)
    {
        dff->l1 = input;
    }
    else
    {
        dff->l2 = dff->l1;
    }
    if (reset)
    {
        dff->l1 = 0;
        dff->l2 = 0;
    }
}

void VDP_ClockMCLK(vdp_prescaler_t *chip)
{
    int mclk = chip->input.mclk;
    DFF_Update(&chip->mclk_prescaler_dff1, mclk, !(chip->input.i_reset && chip->input.i_test_reset), 0);
    DFF_Update(&chip->mclk_prescaler_dff2, mclk, chip->mclk_prescaler_dff1.l2, 0);
    chip->mclk_and1 = chip->mclk_prescaler_dff2.l2 && !chip->mclk_prescaler_dff1.l2;

    DFF_Update(&chip->mclk_prescaler_dff3, mclk, chip->mclk_prescaler_dff4.l2, chip->mclk_and1);
    DFF_Update(&chip->mclk_prescaler_dff4, mclk, !chip->mclk_prescaler_dff3.l2, chip->mclk_and1);
    chip->mclk_clk1 = chip->mclk_prescaler_dff4.l2;

    DFF_Update(&chip->mclk_prescaler_dff5, mclk, chip->mclk_prescaler_dff7.l2, chip->mclk_and1);
    DFF_Update(&chip->mclk_prescaler_dff6, mclk, chip->mclk_prescaler_dff5.l2, chip->mclk_and1);
    DFF_Update(&chip->mclk_prescaler_dff7, mclk,
        !(chip->mclk_prescaler_dff5.l2 && chip->mclk_prescaler_dff6.l2), chip->mclk_and1);
    chip->mclk_clk2 = chip->mclk_prescaler_dff7.l2;

    DFF_Update(&chip->mclk_prescaler_dff8, mclk, chip->mclk_prescaler_dff11.l2, chip->mclk_and1);
    DFF_Update(&chip->mclk_prescaler_dff9, mclk, chip->mclk_prescaler_dff8.l2, chip->mclk_and1);
    DFF_Update(&chip->mclk_prescaler_dff10, mclk,
        !(chip->mclk_prescaler_dff8.l2 && chip->mclk_prescaler_dff9.l2), chip->mclk_and1);
    DFF_Update(&chip->mclk_prescaler_dff11, mclk, chip->mclk_prescaler_dff10.l2, chip->mclk_and1);
    chip->mclk_clk3 = !chip->mclk_prescaler_dff11.l2;

    DFF_Update(&chip->mclk_prescaler_dff12, chip->mclk_clk1,
        !(chip->mclk_prescaler_dff12.l2 || chip->mclk_prescaler_dff13.l2), chip->mclk_and1);
    DFF_Update(&chip->mclk_prescaler_dff13, chip->mclk_clk1, chip->mclk_prescaler_dff12.l2, chip->mclk_and1);
    DFF_Update(&chip->mclk_prescaler_dff14, !chip->mclk_clk1, chip->mclk_prescaler_dff13.l2, chip->mclk_and1);
    chip->mclk_clk4 = chip->mclk_prescaler_dff13.l2 || chip->mclk_prescaler_dff14.l2;

    DFF_Update(&chip->mclk_prescaler_dff15, chip->mclk_clk2,
        !(chip->mclk_prescaler_dff15.l2 || chip->mclk_prescaler_dff16.l2), chip->mclk_and1);
    DFF_Update(&chip->mclk_prescaler_dff16, chip->mclk_clk2, chip->mclk_prescaler_dff15.l2, chip->mclk_and1);
    DFF_Update(&chip->mclk_prescaler_dff17, !chip->mclk_clk2, chip->mclk_prescaler_dff16.l2, chip->mclk_and1);
    chip->mclk_clk5 = chip->mclk_prescaler_dff16.l2 || chip->mclk_prescaler_dff17.l2;

    if (chip->input.i_pal)
        chip->mclk_sbcr = chip->mclk_clk4;
    else
        chip->mclk_sbcr = chip->mclk_clk5;

    if (chip->input.i_test_psg)
        chip->mclk_cpu_clk0 = chip->input.i_clk1; // ext
    else
        chip->mclk_cpu_clk0 = chip->mclk_clk5;

    chip->mclk_cpu_clk1 = !chip->mclk_clk3;

    if (chip->input.i_rs0 || chip->input.i_test_psg)
        chip->mclk_dclk = chip->input.i_edclk; // ext
    else if (chip->input.i_rs1)
        chip->mclk_dclk = chip->mclk_clk1; // h40
    else
        chip->mclk_dclk = chip->mclk_clk2; // h32

#if 0
    if (chip->input.i_sel1)
        chip->o_clk1 = state_z;
    else
        chip->o_clk1 = chip->mclk_cpu_clk1;
#endif

    chip->o_sbcr = chip->mclk_sbcr;
    chip->o_clk0 = chip->mclk_cpu_clk0;
#if 0
    if (chip->input.i_test_dclk)
        chip->o_edclk = chip->mclk_dclk;
    else
        chip->o_edclk = state_z;
#endif
}

static void VDP_DCLKPrescale(vdp_t *chip, int clk1, int clk2)
{
    if (clk1)
    {
        chip->dclk_prescaler_l1[0] = !(chip->dclk_prescaler_l1[1] || chip->reset_pulse);
        chip->dclk_prescaler_l2 = chip->dclk_prescaler_l1[1];
        chip->dclk_prescaler_l3 = !chip->dclk_prescaler_l1[1];
    }
    if (clk2)
    {
        chip->dclk_prescaler_l1[1] = chip->dclk_prescaler_l1[0];
    }
    DFF_Update(&chip->dclk_prescaler_dff1, !clk1, 1, chip->dclk_prescaler_l2 && clk2);
    DFF_Update(&chip->dclk_prescaler_dff2, !clk1, 1, chip->dclk_prescaler_l3 && clk2);

    chip->hclk1 = !chip->dclk_prescaler_dff1.l2;
    chip->hclk2 = !chip->dclk_prescaler_dff2.l2;
}

static void VDP_ResetLogic(vdp_t *chip, int clk1, int clk2)
{
    chip->reset_comb = !(chip->input.i_reset && chip->w100);
    if (clk1)
    {
        chip->reset_l1[0] = !chip->reset_comb;
        chip->reset_l2[0] = chip->reset_l1[1];
    }
    if (clk2)
    {
        chip->reset_l1[1] = chip->reset_l1[0];
        chip->reset_l2[1] = chip->reset_l2[0];
    }

    chip->reset_pulse = chip->reset_l1[1] && !chip->reset_l2[1];

    chip->reset_ext = !chip->input.i_reset;
}

void VDP_ClockAsync(vdp_t *chip, int clk1, int clk2)
{
    int i, j, k, l, m;
    int cpu_sel = chip->input.i_sel0;
    int cpu_as = !chip->input.i_as && cpu_sel;
    int cpu_uds = !chip->input.i_uds && cpu_sel;
    int cpu_lds = !chip->input.i_lds && cpu_sel;
    int cpu_m1 = !chip->input.i_m1 && !cpu_sel;
    int cpu_rd = !chip->input.i_rd && !cpu_sel;
    int cpu_wr = !chip->input.i_wr && !cpu_sel;
    int cpu_mreq = !chip->input.i_mreq && !cpu_sel;
    int cpu_iorq = !chip->input.i_iorq && !cpu_sel;
    int cpu_rw = !chip->input.i_rw;
    chip->cpu_bg = !chip->input.i_bg;
    chip->cpu_intak = !chip->input.i_intak;
    int cpu_bgack = chip->input.i_bgack;
    chip->cpu_pal = chip->input.i_pal;
    chip->cpu_pen = chip->input.i_pen;

    int w37 = !cpu_as;

    int w140 = cpu_iorq && cpu_wr && (chip->io_address & 0xc0) == 0x80;

    int w141 = cpu_iorq && cpu_rd && (chip->io_address & 0xc0) == 0x40;

    int w130 = cpu_sel ? (chip->io_address & 2) != 0 : (chip->io_address & 1) != 0;

    int w147 = cpu_uds || cpu_lds;



    DFF_Update(&chip->io_m1_dff1, chip->input.i_cpu_clk0, cpu_m1, 0);
    DFF_Update(&chip->io_m1_dff2, chip->input.i_cpu_clk0, chip->io_m1_dff1.l2, 0);
    DFF_Update(&chip->io_m1_dff3, !chip->input.i_cpu_clk0, chip->io_m1_dff2.l2, 0);

    int io_m1_s1 = chip->io_m1_dff3.l2 && chip->io_m1_dff2.l2;
    int io_m1_s4 = cpu_mreq && (io_m1_s1 || (chip->io_address & 0xc000) == 0xc000);
    int io_m1_s2 = !io_m1_s1 && io_m1_s4;
    DFF_Update(&chip->io_m1_dff4, !chip->input.i_cpu_clk0, io_m1_s2, 0);

    int io_m1_s3 = chip->io_m1_dff4.l2 && io_m1_s2;

    int w25 = cpu_rd && chip->l17;

    int w27 = chip->dff17.l2 && !chip->dff19.l2;

    int w1 = !cpu_rw && (cpu_uds || cpu_lds);

    int io_wr = cpu_rw && chip->dff1.l2;
    int io_lwr = cpu_wr || (cpu_lds && io_wr);
    int io_uwr = cpu_uds && io_wr;


    DFF_Update(&chip->dff2, chip->input.i_cpu_clk1, chip->cpu_bg, 0);

    int w3 = chip->t2 || chip->t3;

    int w4 = chip->reset_comb || chip->l48[1];

    DFF_Update(&chip->dff4, chip->hclk2, w3, w4);
    DFF_Update(&chip->dff3, chip->hclk2, chip->dff4.l2, w4);

    int w295 = chip->l51[1] == (chip->l54[1] * 2 + chip->l53[1]);

    chip->w252 = (!chip->reset_comb && w295 && chip->l43[1])
        || (!chip->reset_comb && w295 && chip->l42[1]);


    if (chip->hclk1)
    {
        int w7, w8;
        chip->l1[0] = chip->l108[1];
        chip->l2[0] = chip->l1[1];
        chip->l3[0] = chip->l2[1];
        chip->l4[0] = !(chip->l108[1] || chip->l1[1] || chip->l2[1] || chip->l3[1]);
        chip->l5[0] = chip->w267;

        int w6 = !(chip->l1[1] || chip->l3[1]);
        w7 = !(w6 && chip->w252);
        w8 = chip->l5[1] && chip->w267;
        chip->l6 = w7 && w8 && chip->l116[1];
    }
    if (chip->hclk2)
    {
        chip->l1[1] = chip->l1[0];
        chip->l2[1] = chip->l2[0];
        chip->l3[1] = chip->l3[0];
        chip->l4[1] = chip->l4[0];
        chip->l5[1] = chip->l5[0];
    }
    if (clk1)
    {
        chip->l7 = !chip->l6;
    }
    if (clk2)
    {
        chip->l8 = !chip->l7;
    }


    int w10 = !chip->dff13.l2;

    int w17 = chip->l2[1] && chip->l8;
    
    int w18 = chip->w267 && chip->l4[1] && chip->l8;

    int w29 = !(w10 || chip->dff9.l2);

    int w26 = !(!chip->dff6.l2 && chip->dff8.l2);

    DFF_Update(&chip->dff5, !chip->input.i_cpu_clk1, chip->dff6.l2, w10);

    DFF_Update(&chip->dff6, chip->input.i_cpu_clk1, chip->dff7.l2, w10);

    DFF_Update(&chip->dff7, !chip->input.i_cpu_clk1, chip->dff8.l2, w10);

    int w28 = chip->dff16.l2 && !chip->dff19.l2;

    DFF_Update(&chip->dff8, !chip->input.i_cpu_clk1, chip->dff9.l2, w10);

    int w31 = chip->reset_comb || chip->dff21.l2 || chip->dff13.l2;

    int w32 = chip->dff11.l2 && w1;

    int w35 = !chip->cpu_intak;

    int w2 = w35 && (chip->io_address & 0x700000) == 0x700000;
    
    int w39 = !chip->dff15.l2;

    int w40 = w39 || chip->dff21.l2;

    int w36 = cpu_as && w40;

    int w33 = !w36;

    int w34 = w2 && w36;

    int w19 = w29 && w34;

    int w24 = w34 && (chip->dff6.l2 || (chip->dff11.l2 && w10));

    int w21 = w34 && w26;

    int w30 = w34 && chip->dff10.l2;

    DFF_Update(&chip->dff9, chip->input.i_cpu_clk1, w30, w10);

    int w23 = !((w10 && w30) || (chip->dff5.l2 && w34));
    DFF_Update(&chip->dff1, !chip->input.i_cpu_clk1, w23, 0);

    DFF_Update(&chip->dff10, !chip->input.i_cpu_clk1, chip->dff11.l2, w33);

    DFF_Update(&chip->dff11, chip->input.i_cpu_clk1, w36, w33);

    DFF_Update(&chip->dff12, w37, 1, w10);

    int w38 = chip->dff12.l2 || chip->reset_comb;

    int w44 = chip->dff28.l2 && chip->dff27.l2 && chip->dff29.l2;
    int w43 = chip->dff25.l2 && chip->dff24.l2 && chip->dff26.l2 && w44;

    DFF_Update(&chip->dff13, w34, w44, w38);

    DFF_Update(&chip->dff14, chip->input.i_cpu_clk1, w43, 0);

    DFF_Update(&chip->dff15, chip->dff14.l2, w44, w31);

    DFF_Update(&chip->dff16, chip->input.i_cpu_clk1, 1, w39);
    DFF_Update(&chip->dff17, chip->input.i_cpu_clk1, chip->dff16.l2, w39);
    DFF_Update(&chip->dff18, chip->input.i_cpu_clk1, chip->dff17.l2, w39);
    DFF_Update(&chip->dff19, !chip->input.i_cpu_clk1, chip->dff18.l2, w39);
    DFF_Update(&chip->dff20, chip->input.i_cpu_clk1, chip->dff19.l2, w39);

    DFF_Update(&chip->dff21, chip->input.i_cpu_clk1, chip->dff20.l2, 0);

    int w41 = !(!chip->dff21.l2 && cpu_sel && w26);

    DFF_Update(&chip->dff22, chip->input.i_cpu_clk1, chip->t4, 0);

    chip->w42 = !(chip->dff22.l2 && cpu_sel);

    i = chip->w64 + chip->dff23.l2;
    DFF_Update(&chip->dff23, chip->input.i_cpu_clk1, i & 1, w41);

    i = (i >> 1) + chip->dff24.l2;
    DFF_Update(&chip->dff24, chip->input.i_cpu_clk1, i & 1, w41);

    i = (i >> 1) + chip->dff25.l2;
    DFF_Update(&chip->dff25, chip->input.i_cpu_clk1, i & 1, w41);

    i = (i >> 1) + chip->dff26.l2;
    DFF_Update(&chip->dff26, chip->input.i_cpu_clk1, i & 1, w41);

    i = (i >> 1) + chip->dff27.l2;
    DFF_Update(&chip->dff27, chip->input.i_cpu_clk1, i & 1, w41);

    i = (i >> 1) + chip->dff28.l2;
    DFF_Update(&chip->dff28, chip->input.i_cpu_clk1, i & 1, w41);

    i = (i >> 1) + chip->dff29.l2;
    DFF_Update(&chip->dff29, chip->input.i_cpu_clk1, i & 1, w41);

    int w45 = cpu_as && chip->cpu_intak;

    chip->w47 = cpu_m1 && cpu_iorq;

    int w46 = w45 || chip->w47;

    if (w46)
        chip->t5 = 1;
    else if (chip->l9[1])
        chip->t5 = 0;

    int w48 = chip->t5 && chip->reg_m5;

    if (clk1)
    {
        chip->l9[0] = w48;
        chip->l10 = !chip->l9[1];
    }
    if (clk2)
    {
        chip->l9[1] = chip->l9[0];
        chip->l11 = chip->l10;
    }

    int w49 = chip->reset_comb || (chip->l11 && chip->l10);

    int w50 = chip->reset_comb || chip->w114;

    if (w50)
        chip->t6 = 1;
    else if (chip->l13[1])
        chip->t6 = 0;

    int w51 = !(chip->l12[1] || chip->reset_comb);

    if (chip->hclk1)
    {
        int w52;
        chip->l12[0] = chip->t6;
        chip->l13[0] = chip->l12[1];
        w52 = !(chip->l13[1] && w51);
        chip->l14 = !w52;
    }
    if (chip->hclk2)
    {
        chip->l12[1] = chip->l12[0];
        chip->l13[1] = chip->l13[0];
    }

    int w53 = chip->l14 && !chip->reg_m5;
    int w54 = w53 || chip->dff30.l2;
    int w55 = w53 || chip->dff31.l2;

    int w56 = w53 || chip->dff32.l2;

    int w60 = chip->t9 && chip->reg_ie0;

    int w57 = chip->t7 && !w60 && chip->reg_ie1;
    int w58 = !w57 && !w60 && chip->t8 && chip->reg_ie2;

    int w59 = chip->reg_m5 && chip->l81[1];

    DFF_Update(&chip->dff30, !w48, w58, w49);

    DFF_Update(&chip->dff31, !w48, w57, w49);
    DFF_Update(&chip->dff32, !w48, w60, w49);

    if (chip->l15[1])
        chip->t7 = 1;
    else if (w55)
        chip->t7 = 0;

    if (w59)
        chip->t8 = 1;
    else if (w54)
        chip->t8 = 0;

    int w9 = w58 || w57 || w60;

    int w61 = chip->reg_m1 && chip->reg_m5;

    chip->w64 = !chip->t3;

    int w65 = !(!chip->reg_m5 || (chip->io_address & 2) != 0 || cpu_sel);

    int w66 = !chip->t9 && chip->w1154;

    int w119 = cpu_sel ? chip->l110[1] : chip->l115[1];
    int w120 = w119 && chip->w457;

    if (w120)
        chip->t9 = 1;
    else if (w56)
        chip->t9 = 0;

    if (w66)
        chip->t10 = 1;
    else if (chip->l14)
        chip->t10 = 0;

    if (chip->l600[1])
        chip->t11 = 1;
    else if (chip->l14)
        chip->t11 = 0;



    if (chip->hclk1)
    {
        int w67, w68, w69;
        w67 = chip->l115[1] || (chip->reg_test0 & 8) != 0;
        w68 = !(chip->t38 || chip->l162[1] || (chip->reg_test0 & 8) != 0);
        w69 = w68 || chip->l15[1];
        i = w69 ? chip->reg_hit : chip->cnt1[1];
        i += w67;
        chip->cnt1[0] = i & 255;
        chip->l15[0] = (i & 256) != 0 && !w68;
    }
    if (chip->hclk2)
    {
        chip->cnt1[1] = chip->cnt1[0];
        chip->l15[1] = chip->l15[0];
    }


    int w70 = cpu_sel && (chip->io_address & 0x738070) == 0x600000;

    chip->w72 = w65 ? chip->w252 : chip->cpu_pal;
    chip->w73 = w65 ? chip->l46[1] : chip->dff3.l2;

    if (chip->reset_comb)
        chip->reg_hit = 0;

    int w74 = (chip->reg_test_18 & 0xf00) == 0xf00;
    int w75 = (chip->reg_test_18 & 0xf00) == 0x800;
    int w76 = (chip->reg_test_18 & 0xf00) == 0x700;
    int w77 = (chip->reg_test_18 & 0xf00) == 0x600;
    int w78 = (chip->reg_test_18 & 0xf00) == 0x500;
    int w79 = (chip->reg_test_18 & 0xf00) == 0x400;
    int w80 = (chip->reg_test_18 & 0xf00) == 0x300;
    int w81 = (chip->reg_test_18 & 0xf00) == 0x200;
    int w82 = (chip->reg_test_18 & 0xf00) == 0x100;
    int w83 = (chip->reg_test_18 & 0xf00) == 0x000;

    int w105 = (chip->reg_test0 & 1) != 0 ? chip->color_priority : chip->w1069;

    if (chip->hclk1)
    {
        chip->l16 = 0;
        chip->l16 |= (chip->color_index & 15) << 0;
        chip->l16 |= (chip->color_pal & 3) << 4;
        chip->l16 |= w105 << 6;
        chip->l16 |= chip->w1070 << 7;
    }

    if (chip->w457)
    {
        chip->reg_lsm0_latch = chip->reg_lsm0;
        chip->reg_lsm1_latch = chip->reg_lsm1;
    }

    chip->w106 = chip->reg_lsm0_latch && chip->reg_lsm1_latch;

    chip->w107 = !chip->reg_m2 && chip->reg_m5;
    chip->w108 = chip->reg_m2 && chip->reg_m5;
    chip->w109 = chip->reg_m5 && chip->reg_81_b7;

    int w115 = chip->reg_8b_b6 && w30;
    int w116 = w115 || w24;

    int w118 = (w1 && 0) || (w32 && w116) || w19;

    if (chip->input.i_cpu_clk0)
        chip->l17 = cpu_rd;

    int w121 = chip->reset_comb || chip->w360;
    if (w120)
        chip->t12 = 1;
    else if (w121)
        chip->t12 = 0;

    int w122 = !(cpu_sel ? chip->t12 : w9); // z80 int

    int w123 = chip->reg_lsm0_latch ? (chip->w355 & 256) != 0 : (chip->w355 & 1) != 0;

    int w158 = chip->t13 || chip->l23;

    int w124 = w70 && cpu_as && w158;

    int w128 = w124 && cpu_rw && (chip->io_address & 0x0c) == 0x0c && !w130; // test address

    int w129 = w124 && cpu_rw && (chip->io_address & 0x0c) == 0x0c && w130;

    int w131 = w124 && cpu_rw && (chip->io_address & 0x0c) == 0x00 && w147;

    int w132 = w124 && !cpu_rw && (chip->io_address & 0x0c) == 0x00 && w147;

    int w133 = w124 && cpu_rw && (chip->io_address & 0x0c) == 0x08;

    chip->w134 = w124 && !cpu_rw && (chip->io_address & 0x0c) == 0x04;

    int w135 = w124 && !cpu_rw && (chip->io_address & 0x0c) == 0x0c;

    int w139 = w131 || w140;

    int w168 = w139 && chip->t15_n && chip->l18 && chip->t18 && chip->reg_m5;

    int w182 = w168 && (chip->io_data & 128) != 0;

    int w63 = w61 && w182 && (chip->reg_dmd & 2) != 0;

    if (w63)
        chip->t2 = 1;
    else if (w4)
        chip->t2 = 0;

    if (w128)
        chip->reg_test_18 = chip->io_data & 0xfff;
    if (chip->reset_ext)
        chip->reg_test_18 = 0;

    int w84 = w83 && w129;
    int w85 = w82 && w129;
    chip->w86 = w81 && w129;
    chip->w87 = w81 && w135;
    chip->w88 = w80 && w129;
    chip->w89 = w80 && w135;
    chip->w90 = w79 && w129;
    chip->w91 = w79 && w135;
    chip->w92 = w78 && w129;
    chip->w93 = w78 && w135;
    chip->w94 = w77 && w129;
    chip->w95 = w77 && w135;
    chip->w96 = w76 && w129;
    chip->w97 = w76 && w135;
    chip->w98 = w75 && w129;
    chip->w99 = w75 && w135;
    chip->w100 = !(w74 && w129);

    if (w84)
        chip->reg_test0 = chip->io_data & 0x7fff;
    if (chip->reset_ext)
        chip->reg_test0 = 0;

    if (w85)
        chip->reg_test1 = chip->io_data & 0x7ff;
    if (chip->reset_ext)
        chip->reg_test1 = 0;

    int w62 = w61 && (chip->reg_dmd & 2) == 0 && w182;

    int w5 = chip->dff22.l2 && cpu_bgack && chip->input.i_dtack && chip->dff2.l2 && cpu_sel && w37;

    if (w62)
        chip->t4 = 1;
    else if (w4 || w5)
        chip->t4 = 0;

    if (w5)
        chip->t3 = 1;
    else if (w4)
        chip->t3 = 0;

    int w110 = (chip->io_address & 0xc0) == 0x40 && cpu_iorq && cpu_wr; // z80 psg
    chip->w111 = w110 || (w133 && cpu_lds);

    int w112 = (chip->io_address & 0xc0) == 0x80 && cpu_iorq && cpu_rd;
    int w113 = w112 || w132;
    chip->w114 = w113 && w130;

    int w163 = w113 || w139;

    int w159 = chip->l24 || chip->reset_comb;

    if (w163)
        chip->t13 = 1;
    else if (w159)
        chip->t13 = 0;

    int w136 = chip->l48[1] || chip->reset_comb;

    int w137 = chip->t1 && chip->t14 && w168;

    int w138 = chip->reset_comb || chip->l82[1];

    int w143 = !chip->l19 && w113;

    if (w138)
        chip->t14 = 1;
    else if (w143)
        chip->t14 = 0;

    int w142 = w141 || chip->w134; // HV cnt read

    chip->w71 = !cpu_sel && (chip->reg_test0 & 4) != 0 && w142;

    if (!w139)
        chip->l18 = w130;

    if (!w113)
        chip->l19 = w130;

    int w154 = !chip->l24 && !chip->l23;

    int w173 = w154 && chip->t16;

    int w172 = (chip->t16_n && w154) || chip->reset_comb;

    if (w173)
        chip->t15 = 1;
    else if (w172)
        chip->t15 = 0;
    if (w172)
        chip->t15_n = 1;
    else if (w173)
        chip->t15_n = 0;

    int w167 = chip->l18 && w140 && chip->t15;

    int w165 = w139 && chip->t18_n && chip->t15_n && chip->l18;

    int w164 = (cpu_sel && w165) || w167;

    int w169 = !chip->l18 && w139;

    int w170 = w164 || w169 || chip->w160 || w168 || chip->w114;

    int w171 = chip->w160 || w169 || w168 || chip->w114;

    int w174 = chip->reset_comb || w170;

    int w175 = chip->reset_comb || w171;

    int w166 = w165 && !cpu_sel;

    if (w166)
        chip->t16 = 1;
    else if (w174)
        chip->t16 = 0;
    if (w174)
        chip->t16_n = 1;
    else if (w166)
        chip->t16_n = 0;

    int w155 = chip->l22 && chip->l23;

    if (w175)
        chip->t17 = 1;
    else if (w155)
        chip->t17 = 0;

    int w192 = (chip->reg_code & 3) != 2;

    int w144 = (chip->t17 && w154) || chip->reset_comb;
    int w145 = w154 && chip->t25 && w192 && chip->reg_m5;

    if (w145)
        chip->t18 = 1;
    else if (w144)
        chip->t18 = 0;
    if (w144)
        chip->t18_n = 1;
    else if (w145)
        chip->t18_n = 0;

    int w204 = chip->reset_comb || !chip->reg_m5;

    if (w168)
    {
        chip->reg_code &= ~0x1c;
        chip->reg_code |= (chip->io_data >> 2) & 0x1c;
    }
    if (w204)
    {
        chip->reg_code &= ~0x1c;
    }

    int w183 = (chip->l21 && !chip->l22) || chip->reset_comb;

    if (cpu_uds)
        chip->t19 = 1;
    else if (w183)
        chip->t19 = 0;

    if (cpu_lds)
        chip->t20 = 1;
    else if (w183)
        chip->t20 = 0;

    int w149 = chip->t21 && w154;

    if (w169)
        chip->t21 = 1;
    else if (w183)
        chip->t21 = 0;

    int w153 = chip->l22 && !chip->l24;

    int w150 = chip->t21 && w153;

    int w148 = !(w150 || chip->w252);

    int w152 = w113 || w135 || w142;

    chip->w151 = w152 || chip->w47;

    int w156 = chip->l27[1] || w136;

    int w345 = chip->w109 && !cpu_sel && chip->l85[1];

    int w245 = chip->dff3.l2 && chip->reg_dmd == 3;
    int w246 = chip->dff3.l2 && chip->reg_dmd == 1;
    int w247 = chip->dff3.l2 && chip->reg_dmd == 0;
    int w248 = chip->dff3.l2 && chip->reg_dmd == 2;

    chip->w160 = w113 && !w130;

    int w161 = w154 || chip->reset_comb;

    if (w161)
        chip->t22 = 1;
    else if (chip->l82[1])
        chip->t22 = 0;

    int w162 = !(chip->t22 && chip->w160);

    int w176 = chip->reset_comb || w155;

    if (w168)
        chip->t23 = 1;
    else if (w176)
        chip->t23 = 0;

    if (w143)
        chip->t24 = 1;
    else if (w176)
        chip->t24 = 0;

    if (w164)
        chip->t25 = 1;
    else if (w176)
        chip->t25 = 0;

    int w188 = !w245 && chip->l27[1];

    int w189 = chip->l28[1] || w188;

    int w202 = w189 && (chip->reg_code & 12) == 8;

    chip->w178 = w202 && (chip->reg_test0 & 16) == 0;

    chip->w179 = w202 && (chip->reg_test0 & 16) != 0;

    int w350 = cpu_sel ? ((chip->io_data >> 8) & 255) : (chip->io_data & 255);

    if (w164)
    {
        chip->reg_code &= ~3;
        chip->reg_code |= (w350 >> 6) & 3;
    }

    if (clk1)
    {
        chip->l20 = w18;
        chip->l21 = chip->l22;
        chip->l23 = !chip->l24;
        chip->l25 = chip->t13;
    }
    if (clk2)
    {
        chip->l22 = !chip->l23;
        chip->l24 = chip->l25;
    }

    int w187 = chip->l27[1] && w245;

    int w190 = chip->l28[1] && !w245;

    int w191 = w190 || w187 || chip->l50[1];

    if (chip->hclk1)
    {
        int w186, w196;
        w186 = chip->t26 && chip->l46[1] && chip->l109[1];
        w196 = chip->t26_n && chip->t27 && chip->l46[1] && chip->l109[1];
        chip->l26 = !w191;
        chip->l27[0] = w186;
        chip->l28[0] = w196;
    }
    if (chip->hclk2)
    {
        chip->l27[1] = chip->l27[0];
        chip->l28[1] = chip->l28[0];
    }

    int w185 = chip->l26 && chip->l24;

    int w338 = !((chip->reg_code & 8) != 0 || (chip->reg_code & 4) != 0);

    int w346 = !chip->w109 && cpu_sel && w338;

    int w180 = w245 || w346;

    int w157 = w180 && chip->l28[1];

    if (w157)
        chip->t26 = 1;
    else if (w156)
        chip->t26 = 0;
    if (w156)
        chip->t26_n = 1;
    else if (w157)
        chip->t26_n = 0;

    int w194 = !(chip->t24 || chip->t23 || (chip->t25 && !chip->reg_m5));

    chip->w195 = chip->l28[1] && w245;

    int w197 = chip->l28[1] || w136;

    int w199 = w245 && (chip->reg_code & 16) != 0;

    int w200 = !((chip->reg_code & 19) != 0 || w194 || !w154);

    chip->w201 = w189 && (chip->reg_code & 12) == 4;

    if (chip->hclk1)
    {
        int w177 = !(chip->w201 || w202);
        chip->l29[0] = w177;
        chip->l30[0] = chip->l29[1];
    }
    if (chip->hclk2)
    {
        chip->l29[1] = chip->l29[0];
        chip->l30[1] = chip->l30[0];
    }

    int w203 = w154 && chip->t24 && !chip->reg_m5;

    int w198 = w199 || w200 || w203;

    if (w198)
        chip->t27 = 1;
    else if (w197)
        chip->t27 = 0;

    if (w164)
    {
        chip->reg_addr &= ~0x3f00;
        chip->reg_addr |= (w350 & 63) << 8;
    }

    if (w165)
    {
        chip->reg_addr &= ~0xff;
        chip->reg_addr |= chip->io_data & 0xff;
    }

    int w261 = w149 || 0;

    int w181 = chip->l20 || w164 || w168 || w191 || w261;

    i = chip->reg_data.l2 + chip->reg_inc + !chip->reg_m5;
    i &= 0x1ffff;
    if (w181)
    {
        chip->reg_data.l1 = w185 ? chip->reg_addr : i;
    }
    else
    {
        chip->reg_data.l2 = chip->reg_data.l1;
    }
    if (w204)
    {
        chip->reg_data.l1 &= ~0x1c000;
        chip->reg_data.l2 &= ~0x1c000;
    }
    if (chip->reset_comb)
    {
        chip->reg_data.l1 &= ~0x3fff;
        chip->reg_data.l2 &= ~0x3fff;
    }

    if (w168)
    {
        chip->reg_addr &= ~0x1c000;
        chip->reg_addr |= (chip->io_data & 7) << 14;
    }
    if (w204)
    {
        chip->reg_addr &= ~0x1c000;
    }

    if (chip->hclk2)
    {
        chip->l31 = !chip->l34;
    }
    if (clk1)
    {
        chip->l33[0] = chip->l32;
        chip->l34 = !(chip->l32 || chip->l33[1]);
    }
    if (clk2)
    {
        int w184, w193;
        w184 = !(chip->l23 || chip->l25);
        w193 = !(!w192 && w184 && chip->t25);
        chip->l32 = !w193;
        chip->l33[1] = chip->l33[0];
    }

    i = chip->l31 && chip->hclk1;

    j = i && (chip->reg_data.l2 & 0x1800) == 0;
    k = i && (chip->reg_data.l2 & 0x1800) == 0x800;
    l = i && (chip->reg_data.l2 & 0x1800) == 0x1000 && chip->reg_m5;
    m = i && (chip->reg_data.l2 & 0x1800) == 0x800 && chip->reg_m5;

    int w210 = (m && (chip->reg_data.l2 & 0x700) == 0x700) || chip->reset_comb; // 8f
    int w211 = (l && (chip->reg_data.l2 & 0x700) == 0x300) || chip->reset_comb; // 93
    int w212 = (l && (chip->reg_data.l2 & 0x700) == 0x400) || chip->reset_comb; // 94
    int w213 = (m && (chip->reg_data.l2 & 0x700) == 0x300) || chip->reset_comb; // 8b
    int w214 = (l && (chip->reg_data.l2 & 0x700) == 0x600) || chip->reset_comb; // 96
    int w215 = (m && (chip->reg_data.l2 & 0x700) == 0x400) || chip->reset_comb; // 8c
    int w216 = (j && (chip->reg_data.l2 & 0x700) == 0x000) || chip->reset_comb; // 80
    int w217 = (j && (chip->reg_data.l2 & 0x700) == 0x100) || chip->reset_comb; // 81
    chip->w218 = (j && (chip->reg_data.l2 & 0x700) == 0x200) || chip->reset_comb; // 82
    chip->w219 = (j && (chip->reg_data.l2 & 0x700) == 0x300) || chip->reset_comb; // 83
    chip->w220 = (j && (chip->reg_data.l2 & 0x700) == 0x400) || chip->reset_comb; // 84
    chip->w221 = (j && (chip->reg_data.l2 & 0x700) == 0x700) || chip->reset_comb; // 87
    chip->w222 = (l && (chip->reg_data.l2 & 0x700) == 0x200) || chip->reset_comb; // 92
    chip->w223 = (l && (chip->reg_data.l2 & 0x700) == 0x100) || chip->reset_comb; // 91
    chip->w224 = (l && (chip->reg_data.l2 & 0x700) == 0x000) || chip->reset_comb; // 90
    chip->w225 = (j && (chip->reg_data.l2 & 0x700) == 0x600) || chip->reset_comb; // 86
    chip->w226 = (j && (chip->reg_data.l2 & 0x700) == 0x500) || chip->reset_comb; // 85
    int w227 = (l && (chip->reg_data.l2 & 0x700) == 0x700) || chip->reset_comb; // 97
    int w228 = (l && (chip->reg_data.l2 & 0x700) == 0x500) || chip->reset_comb; // 95
    int w229 = k && (chip->reg_data.l2 & 0x700) == 0x200; // 8a
    chip->w230 = (k && (chip->reg_data.l2 & 0x700) == 0x100) || chip->reset_comb; // 89
    chip->w231 = (k && (chip->reg_data.l2 & 0x700) == 0x000) || chip->reset_comb; // 88
    chip->w232 = (m && (chip->reg_data.l2 & 0x700) == 0x600) || chip->reset_comb; // 8e
    chip->w233 = (m && (chip->reg_data.l2 & 0x700) == 0x500) || chip->reset_comb; // 8d

    if (w216)
    {
        chip->reg_80_b0 = (chip->reg_data.l2 >> 0) & 1;
        chip->reg_m3 = (chip->reg_data.l2 >> 1) & 1;
        chip->reg_80_b2 = (chip->reg_data.l2 >> 2) & 1;
        chip->reg_80_b3 = (chip->reg_data.l2 >> 3) & 1;
        chip->reg_ie1 = (chip->reg_data.l2 >> 4) & 1;
        chip->reg_lcb = (chip->reg_data.l2 >> 5) & 1;
        chip->reg_80_b6 = (chip->reg_data.l2 >> 6) & 1;
        chip->reg_80_b7 = (chip->reg_data.l2 >> 7) & 1;
    }

    if (w215)
    {
        chip->reg_rs1 = (chip->reg_data.l2 >> 0) & 1;
        chip->reg_lsm0 = (chip->reg_data.l2 >> 1) & 1;
        chip->reg_lsm1 = (chip->reg_data.l2 >> 2) & 1;
        chip->reg_ste = (chip->reg_data.l2 >> 3) & 1;
        chip->reg_8c_b4 = (chip->reg_data.l2 >> 4) & 1;
        chip->reg_8c_b5 = (chip->reg_data.l2 >> 5) & 1;
        chip->reg_8c_b6 = (chip->reg_data.l2 >> 6) & 1;
        chip->reg_rs0 = (chip->reg_data.l2 >> 7) & 1;
    }

    if (w217)
    {
        chip->reg_81_b0 = (chip->reg_data.l2 >> 0) & 1;
        chip->reg_81_b1 = (chip->reg_data.l2 >> 1) & 1;
        chip->reg_m5 = (chip->reg_data.l2 >> 2) & 1;
        chip->reg_m2 = (chip->reg_data.l2 >> 3) & 1;
        chip->reg_m1 = (chip->reg_data.l2 >> 4) & 1;
        chip->reg_ie0 = (chip->reg_data.l2 >> 5) & 1;
        chip->reg_disp = (chip->reg_data.l2 >> 6) & 1;
        chip->reg_81_b7 = (chip->reg_data.l2 >> 7) & 1;
    }

    if (w213)
    {
        chip->reg_lscr = (chip->reg_data.l2 >> 0) & 1;
        chip->reg_hscr = (chip->reg_data.l2 >> 1) & 1;
        chip->reg_vscr = (chip->reg_data.l2 >> 2) & 1;
        chip->reg_ie2 = (chip->reg_data.l2 >> 3) & 1;
        chip->reg_8b_b4 = (chip->reg_data.l2 >> 4) & 1;
        chip->reg_8b_b5 = (chip->reg_data.l2 >> 5) & 1;
        chip->reg_8b_b6 = (chip->reg_data.l2 >> 6) & 1;
        chip->reg_8b_b7 = (chip->reg_data.l2 >> 7) & 1;
    }

    if (w210)
    {
        chip->reg_inc = chip->reg_data.l2 & 0xff;
    }

    if (w229)
        chip->reg_hit = (chip->reg_data.l2 & 255) ^ 255;

    int w250 = w187 || chip->l50[1] || chip->l41;

    int w234 = w250 && (chip->reg_test0 & 2) != 0;

    int w235 = w250 && (chip->reg_test0 & 2) == 0;

    if (chip->w195)
    {
        chip->vram_address = chip->reg_sa_low[1];
        chip->vram_address |= (chip->reg_sa_high & 1) << 16;
    }

    if (w227)
    {
        chip->reg_sa_high = chip->reg_data.l2 & 63;
        chip->reg_dmd = (chip->reg_data.l2 >> 6) & 3;
    }

    if (chip->cpu_bg || chip->reset_comb)
        chip->t1 = 1;
    else if ((chip->reg_data.l2 & 128) == 0 && w227 && chip->reg_m5)
        chip->t1 = 0;

    if (chip->hclk1)
    {
        i = chip->reg_lg[1] & 255;
        j = chip->reg_lg[1] >> 8;
        if (w211)
        {
            i = (chip->reg_data.l2 & 255) ^ 255;
        }
        if (w212)
        {
            j = (chip->reg_data.l2 & 255) ^ 255;
        }
        i += w235;
        j += (i & 256) != 0 || w234;
        chip->reg_lg[0] = (i & 255) | ((j & 255) << 8);
    }
    if (chip->hclk2)
    {
        chip->reg_lg[1] = chip->reg_lg[0];
    }

#if 0
    chip->w236 = !((chip->reg_lg[1] & 3) == 2 && chip->w250);
    chip->w237 = !((chip->reg_lg[1] & 0xe000) == 0xe000);
    chip->w238 = !((chip->reg_lg[1] & 0x1c) == 0x1c);
    chip->w239 = !((chip->reg_lg[1] & 0x1c00) == 0x1c00);
    chip->w240 = !((chip->reg_lg[1] & 0x300) == 0x300);
    chip->w241 = !((chip->reg_lg[1] & 0xe0) == 0xe0);
    chip->w242 = !(chip->w239 || chip->w240 || chip->w237);
    chip->w243 = !(chip->w236 || chip->w238 || chip->w241);
    chip->w244 = chip->w242 && chip->w243;
#endif

    if (chip->hclk1)
    {
        i = chip->reg_sa_low[1] & 255;
        j = chip->reg_sa_low[1] >> 8;
        if (w228)
        {
            i = chip->reg_data.l2 & 255;
        }
        if (w214)
        {
            j = chip->reg_data.l2 & 255;
        }
        i += w235;
        j += (i & 256) != 0 || w234;
        chip->reg_sa_low[0] = (i & 255) | ((j & 255) << 8);
    }
    if (chip->hclk2)
    {
        chip->reg_sa_low[1] = chip->reg_sa_low[0];
    }
    if (w191)
    {
        chip->vram_address = chip->reg_data.l2 & 0x1ffff;
    }

    int w249 = chip->l40[1] && w18;

    int w264 = w249 || w150;

    int w253 = chip->l44[1] && !chip->l45[1] && !chip->l52[1];

    if (clk1)
    {
        int w254 = chip->reset_comb || (chip->l46[1] && w295) || (w295 && w253);
        chip->l40[0] = w18;
        chip->l42[0] = w264;
        chip->l43[0] = chip->w252;
        chip->l45[0] = chip->l44[1];
        chip->l46[0] = w254;
    }
    if (clk2)
    {
        chip->l40[1] = chip->l40[0];
        chip->l42[1] = chip->l42[0];
        chip->l43[1] = chip->l43[0];
        chip->l45[1] = chip->l45[0];
        chip->l46[1] = chip->l46[0];
    }

    if (chip->hclk1)
    {
        int w244 = chip->reg_lg[1] == 0xfffe && w250;
        chip->l44[0] = chip->l49[1];
        chip->l48[0] = w244;
    }
    if (chip->hclk2)
    {
        chip->l41 = w18;
        chip->l44[1] = chip->l44[0];
        chip->l48[1] = chip->l48[0];
    }

    int w256 = chip->l49[1] && !chip->l52[1];

    int w257 = w256 && chip->l53[1] && !chip->l54[1];
    int w258 = w256 && !chip->l53[1] && !chip->l54[1];
    int w259 = w256 && chip->l53[1] && chip->l54[1];
    int w260 = w256 && !chip->l53[1] && chip->l54[1];

    int w274 = !chip->w109 && cpu_sel;

    int w325 = !chip->w318 && !chip->w316;

    int w273 = w274 && w325;

    int w300 = w273 && chip->l49[1] && chip->l52[1];

    int w262 = w248 && w300;

    chip->w263 = w248 && chip->l46[1];

    chip->w265 = w245 && chip->l46[1];

    if (chip->hclk1 && chip->l116[1])
        chip->l47 = chip->vram_address & 1;

    chip->w267 = w247 || w246;

    int w268 = !chip->w265 && chip->l116[1];


    if (chip->hclk1)
    {
        int w269, w272;

        w269 = chip->l109[1] && !chip->l46[1];
        w272 = chip->t28 && chip->w263 && chip->l109[1];
        chip->l49[0] = w269;
        chip->l50[0] = w272;
    }
    if (chip->hclk2)
    {
        chip->l49[1] = chip->l49[0];
        chip->l50[1] = chip->l50[0];
    }

    int w270 = chip->reset_comb || chip->l48[1];

    int w271 = chip->dff3.l2 && chip->l49[1];

    if (w271)
        chip->t28 = 1;
    else if (w270)
        chip->t28 = 0;

    int w275 = w188 || w300;

    int w276 = chip->dff3.l2 || chip->t19;

    int w280 = (chip->reg_data.l2 & 1) != 0 && chip->reg_m5;

    int w277 = cpu_sel ? w276 : w280;

    int w278 = chip->dff3.l2 || chip->t20;

    int w279 = cpu_sel ? w278 : !w280;

    int w281 = w187 && (chip->w109 || (chip->vram_address & 1) != 0);

    int w282 = w187 && (chip->w109 || (chip->vram_address & 1) == 0);

    int w304 = w249 || w169;

    int w306 = chip->l53[1] && chip->l54[1];
    int w307 = !chip->l53[1] && chip->l54[1];
    int w308 = chip->l53[1] && !chip->l54[1];
    int w309 = !chip->l53[1] && !chip->l54[1];

    int w310 = (w306 && chip->l67) || (w307 && chip->l68)
        || (w308 && chip->l69) || (w309 && chip->l70);

    int w311 = (w306 && chip->l55) || (w307 && chip->l56)
        || (w308 && chip->l57) || (w309 && chip->l58);

    int w312 = (w306 && chip->l71) || (w307 && chip->l72)
        || (w308 && chip->l73) || (w309 && chip->l74);

    int w313 = (w306 && chip->l59) || (w307 && chip->l60)
        || (w308 && chip->l61) || (w309 && chip->l62);

    int w314 = (w306 && chip->l75) || (w307 && chip->l76)
        || (w308 && chip->l77) || (w309 && chip->l78);

    int w315 = (w306 && chip->l63) || (w307 && chip->l64)
        || (w308 && chip->l65) || (w309 && chip->l66);

    int w289 = chip->w301 && !chip->w316 && !chip->w318 && !chip->w320;

    chip->w316 = chip->l50[1] ? (chip->reg_code & 2) != 0 : w310;

    chip->w317 = chip->l50[1] ? w277 : w311;

    chip->w318 = chip->l50[1] ? (chip->reg_code & 4) != 0 : w312;

    chip->w319 = chip->l50[1] ? w279 : w313;

    chip->w320 = chip->l50[1] ? (chip->reg_code & 8) != 0 : w314;

    chip->w283 = w281 || (w289 && chip->w317);

    chip->w284 = w282 || (w289 && chip->w319);

    int w285 = chip->w319 || !chip->w109;

    chip->w286 = w187 || (w289 && w285);

    int w287 = chip->w109 && chip->w317;

    chip->w288 = w187 || (w287 && w289);

    int w290 = w149 || (w249 && clk1);

    if (clk1)
    {
        i = chip->l51[1];
        i += w264;
        i &= 3;
        chip->l51[0] = i;
        if (chip->reset_comb)
            chip->l51[0] = 0;
    }
    if (clk2)
    {
        chip->l51[1] = chip->l51[0];
    }

    int w291 = w290 && chip->l51[1] == 2;
    int w292 = w290 && chip->l51[1] == 3;
    int w293 = w290 && chip->l51[1] == 0;
    int w294 = w290 && chip->l51[1] == 1;

    int w332 = w311 ^ w313;

    if (chip->hclk1)
    {
        int w296, w297, w305;

        w305 = !(!w273 || w332);
        w296 = chip->l49[1] && w305;
        w297 = chip->l49[1] && !w305;
        i = chip->l52[1] + chip->l53[1] * 2 + chip->l54[1] * 4;
        i += w296 + w297 * 2;
        if (chip->reset_comb)
            i = 0;
        chip->l52[0] = (i & 1) != 0;
        chip->l53[0] = (i & 2) != 0;
        chip->l54[0] = (i & 4) != 0;
    }
    if (chip->hclk2)
    {
        chip->l52[1] = chip->l52[0];
        chip->l53[1] = chip->l53[0];
        chip->l54[1] = chip->l54[0];
    }

    int w298 = !(chip->l52[1] || w188);

    int w299 = chip->hclk1 && (w191 || (chip->l49[1] && w298));

    if (w292)
    {
        chip->l55 = w277;
        chip->l59 = w279;
        chip->l63 = (chip->reg_code & 1) != 0;
    }

    if (w291)
    {
        chip->l56 = w277;
        chip->l60 = w279;
        chip->l64 = (chip->reg_code & 1) != 0;
    }

    if (w294)
    {
        chip->l57 = w277;
        chip->l61 = w279;
        chip->l65 = (chip->reg_code & 1) != 0;
    }

    if (w293)
    {
        chip->l58 = w277;
        chip->l62 = w279;
        chip->l66 = (chip->reg_code & 1) != 0;
    }

    if (w292)
    {
        chip->l67 = (chip->reg_code & 2) != 0;
        chip->l71 = (chip->reg_code & 4) != 0;
        chip->l75 = (chip->reg_code & 8) != 0;
    }

    if (w291)
    {
        chip->l68 = (chip->reg_code & 2) != 0;
        chip->l72 = (chip->reg_code & 4) != 0;
        chip->l76 = (chip->reg_code & 8) != 0;
    }

    if (w294)
    {
        chip->l69 = (chip->reg_code & 2) != 0;
        chip->l73 = (chip->reg_code & 4) != 0;
        chip->l77 = (chip->reg_code & 8) != 0;
    }

    if (w293)
    {
        chip->l70 = (chip->reg_code & 2) != 0;
        chip->l74 = (chip->reg_code & 4) != 0;
        chip->l78 = (chip->reg_code & 8) != 0;
    }

    if (w299)
    {
        chip->l35 = chip->vram_address & 0x1ffff;
    }
    if (w275)
    {
        chip->vram_address = (chip->l35 ^ 1) & 0x1ffff;
    }

    if (w294)
    {
        chip->l36 = chip->reg_data.l2 & 0x1ffff;
    }
    if (w257)
    {
        chip->vram_address = chip->l36 & 0x1ffff;
    }

    if (w293)
    {
        chip->l37 = chip->reg_data.l2 & 0x1ffff;
    }
    if (w258)
    {
        chip->vram_address = chip->l37 & 0x1ffff;
    }

    if (w292)
    {
        chip->l38 = chip->reg_data.l2 & 0x1ffff;
    }
    if (w259)
    {
        chip->vram_address = chip->l38 & 0x1ffff;
    }

    if (w291)
    {
        chip->l39 = chip->reg_data.l2 & 0x1ffff;
    }
    if (w260)
    {
        chip->vram_address = chip->l39 & 0x1ffff;
    }

    int w322 = w315 || !chip->reg_m5;

    int w321 = chip->l50[1] ? (chip->reg_code & 1) != 0 : w322;

    int w326 = w268 && !chip->l53[1] && !chip->l54[1];
    int w327 = w268 && !chip->l53[1] && chip->l54[1];
    int w328 = w268 && chip->l53[1] && !chip->l54[1];
    int w329 = w268 && chip->l53[1] && chip->l54[1];

    int w330 = !(w273 && w332);

    int w331 = w330 ? chip->l52[1] : w311;

    int w333 = cpu_sel || (chip->io_address & 1) != 0;

    int w334 = !(!chip->reg_m5 || chip->reg_m3);

    if (chip->hclk1)
    {
        int w335;
        w335 = !chip->l79[1] && chip->l80[1];
        chip->l79[0] = chip->cpu_pen;
        chip->l80[0] = chip->l79[1];
        chip->l81[0] = w335;
    }
    if (chip->hclk2)
    {
        chip->l79[1] = chip->l79[0];
        chip->l80[1] = chip->l80[0];
        chip->l81[1] = chip->l81[0];
    }

    int w337 = w334 || (chip->hclk1 && chip->l81[1]);

    int w336 = !cpu_sel || w337;

    if (chip->hclk1)
    {
        int w339, w340, w341, w342;
        w339 = !(chip->l84[1] && w346);
        w340 = !(!chip->l84[1] && w346);
        w341 = chip->l87[1] && w340;
        w342 = chip->l87[1] && w339;
        chip->l82[0] = chip->l88[1];
        chip->l83[0] = chip->l47;
        chip->l84[0] = chip->l83[1];
        chip->l85[0] = chip->l84[1];
        chip->l86[0] = w189;
        chip->l87[0] = chip->l86[1];
        chip->l88[0] = w341;
        chip->l89[0] = w342;
    }
    if (chip->hclk2)
    {
        chip->l82[1] = chip->l82[0];
        chip->l83[1] = chip->l83[0];
        chip->l84[1] = chip->l84[0];
        chip->l85[1] = chip->l85[0];
        chip->l86[1] = chip->l86[0];
        chip->l87[1] = chip->l87[0];
        chip->l88[1] = chip->l88[0];
        chip->l89[1] = chip->l89[0];
    }

    if (w336)
        chip->l90 = chip->w355 & 255; // v counter

    if (w337)
        chip->l91 = (chip->l106[1] >> 1) & 255; // h counter
    chip->w347 = w333 ? chip->l91 : chip->l90;
    int w348 = w345 ? ((chip->vram_data >> 8) & 255) : (chip->vram_data & 255);
    if (chip->hclk1 && chip->l89[1])
        chip->l92 = w348;
    int w349 = w346 ? (chip->vram_data & 255) : ((chip->vram_data >> 8) & 255);
    if (chip->hclk1 && chip->l88[1])
        chip->l93 = w349;
    
    if (w304)
    {
        chip->l94 = w350;
        chip->l95 = chip->io_data & 255;
    }

    if (w294)
    {
        chip->l96 = chip->l94;
        chip->l97 = chip->l95;
    }
    int unk_data = 0;
    if (w328)
    {
        int w351;
        w351 = w331 ? chip->l96 : chip->l97;
        chip->vram_data = (w351 & 255) | ((chip->l96 & 255) << 8);
        unk_data = chip->l97;
    }

    if (w291)
    {
        chip->l98 = chip->l94;
        chip->l99 = chip->l95;
    }
    if (w327)
    {
        int w352;
        w352 = w331 ? chip->l98 : chip->l99;
        chip->vram_data = (w352 & 255) | ((chip->l98 & 255) << 8);
        unk_data = chip->l99;
    }

    if (w292)
    {
        chip->l100 = chip->l94;
        chip->l101 = chip->l95;
    }
    if (w329)
    {
        int w353;
        w353 = w331 ? chip->l100 : chip->l101;
        chip->vram_data = (w353 & 255) | ((chip->l100 & 255) << 8);
        unk_data = chip->l101;
    }

    if (w293)
    {
        chip->l102 = chip->l94;
        chip->l103 = chip->l95;
    }
    if (w326)
    {
        int w354;
        w354 = w331 ? chip->l102 : chip->l103;
        chip->vram_data = (w354 & 255) | ((chip->l102 & 255) << 8);
        unk_data = chip->l103;
    }

    if (!w268)
        unk_data = 0;

    if (chip->hclk1)
    {
        chip->l104[0] = unk_data;
    }
    if (chip->hclk2)
    {
        chip->l104[1] = chip->l104[0];
    }

    chip->o_zint = w122 ? state_z : 0;

#if 0
    if (chip->w151)
    {
        chip->o_data = chip->io_data;
        chip->o_data_z = 0;
    }
    else
    {
        chip->io_data = chip->i_data;
        chip->o_data_z = 1;
    }
#endif

#if 0
    if (chip->w267)
    {
        chip->o_address = chip->io_address & 0x3fffff;
        chip->o_address |= (chip->io_address_22o << 22);
        chip->o_address_z = 0;
    }
    else
    {
        chip->io_address = chip->i_address & 0x73ffff;
        chip->o_address_z = 1;
    }
#endif

    chip->w11 = w58 || w60;
    chip->w12 = w57 || w60;

    chip->w301 = w321 && (chip->l50[1] || chip->l49[1]);

    chip->w302 = chip->w301 && chip->w316 && !chip->w320 && chip->w317 && !chip->w318;

    chip->w303 = chip->w301 && chip->w316 && !chip->w320 && chip->w319 && !chip->w318;

    int io_ipl1 = !(chip->w11 && cpu_sel);
    int io_ipl2 = !(chip->w12 && cpu_sel);

    int w13 = chip->l4[1] && w246;

    int w14 = !chip->l7 || (chip->l6 && w13);

    int w16 = (!chip->l7 && w13) || (chip->l8 && w13); // check

    int w101 = w16 || chip->dff11.l2 || io_m1_s3;

    int w103;
    int w104;

    if (chip->reg_8b_b7)
    {
        w103 = chip->l16; // color code
        w104 = 1;
    }
    else if (w101)
    {
        w103 = 0;
        if (chip->io_address & 0x8000)
            w103 |= 128;
        if (chip->io_address & 0x2000)
            w103 |= 64;
        if (chip->io_address & 0x1000)
            w103 |= 32;
        if (chip->io_address & 0x800)
            w103 |= 16;
        if (chip->io_address & 0x400)
            w103 |= 8;
        if (chip->io_address & 0x200)
            w103 |= 4;
        if (chip->io_address & 0x100)
            w103 |= 2;
        if (chip->io_address & 0x4000)
            w103 |= 1;
        w104 = 1;
    }
    else
    {
        w103 = chip->io_address & 255;
        w104 = 0;
    }

    int w102 = io_m1_s3 && w104;

    int io_oe0 = (io_m1_s4 && io_m1_s1) || w25 || w27 || w118 || chip->l8;

    int io_cas0;
    int io_ras0;

    int w20 = w34 && chip->dff7.l2;

    int w22 = w10 ? w21 : w20;

    if (chip->reg_8b_b6)
    {
        int w15 = (!chip->l4[1] && chip->l6) || (chip->l8 && w13);
        io_cas0 = chip->io_m1_dff2.l2 || w15 || w28 || w30 || w102;
        io_ras0 = io_m1_s4 || w21 || w14 || w27;
    }
    else
    {
        io_cas0 = chip->l8 || w25 || (w1 && !w2);
        io_ras0 = io_m1_s2 || w22 || w16;
    }

    int w126 = w152 && w162;

    int w127 = w148 && w169;

    int w146 = w126 || w127 || w137 || w164 || w165;

    int w125 = cpu_sel && w146;

    chip->w117 = !(w24 || w125 || w128 || w129 || w133); // dtack

    chip->io_address_22o = !(chip->l4[1] && w247 && (chip->l6 || !chip->l7));

    chip->o_ipl1 = io_ipl1 ? state_z : 0;
    chip->o_ipl2 = io_ipl2 ? state_z : 0;
    chip->o_uwr = !io_uwr;
    chip->o_lwr = !io_lwr;
    chip->o_oe0 = !io_oe0;
    chip->o_cas0 = !io_cas0;
    chip->o_ras0 = !io_ras0;
    chip->o_br = chip->w42 ? state_z : 0;
    chip->o_bgack = chip->w64 ? state_z : 0;
    chip->o_dtack = chip->w117 ? state_z : 0;
    chip->o_ram_addr = w103 & 255;
}

void VDP_ClockHVCounters(vdp_t* chip)
{
    int i;
    int w460 = chip->reg_80_b0 && !chip->l176[1] && chip->l175[1];

    if (chip->hclk1)
    {
        int pla_vcnt[48];
        int pla_hcnt1[63];
        int pla_hcnt2[46];


        int w416 = !chip->reg_8c_b4 && chip->reg_80_b0;

        int w361 = chip->l112[1] || chip->w88 || chip->reset_comb || chip->w370;
        int w410 = w361 && w416;
        int w403 = chip->l139[1] || w410;


        int w425 = w416 && !chip->reg_81_b0;

        pla_vcnt[0] = chip->l105[1] == 511;
        pla_vcnt[1] = chip->w446 && chip->cpu_pal && chip->w108 && chip->l105[1] == 471;
        pla_vcnt[2] = chip->w446 && chip->cpu_pal && chip->w107 && chip->l105[1] == 463;
        pla_vcnt[3] = chip->w446 && !chip->cpu_pal && chip->w107 && chip->l105[1] == 490;
        pla_vcnt[4] = !chip->w446 && chip->cpu_pal && chip->w108 && chip->l105[1] == 472;
        pla_vcnt[5] = !chip->w446 && chip->cpu_pal && chip->w107 && chip->l105[1] == 464;
        pla_vcnt[6] = !chip->w446 && chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 448;
        pla_vcnt[7] = !chip->w446 && !chip->cpu_pal && chip->w107 && chip->l105[1] == 491;
        pla_vcnt[8] = !chip->w446 && !chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 475;
        pla_vcnt[9] = chip->w446 && chip->cpu_pal && chip->w108 && chip->l105[1] == 468;
        pla_vcnt[10] = chip->w446 && chip->cpu_pal && chip->w107 && chip->l105[1] == 460;
        pla_vcnt[11] = chip->w446 && !chip->cpu_pal && chip->w107 && chip->l105[1] == 487;
        pla_vcnt[12] = !chip->w446 && chip->cpu_pal && chip->w108 && chip->l105[1] == 469;
        pla_vcnt[13] = !chip->w446 && chip->cpu_pal && chip->w107 && chip->l105[1] == 461;
        pla_vcnt[14] = !chip->w446 && chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 445;
        pla_vcnt[15] = !chip->w446 && !chip->cpu_pal && chip->w107 && chip->l105[1] == 488;
        pla_vcnt[16] = !chip->w446 && !chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 472;
        pla_vcnt[17] = chip->w446 && chip->cpu_pal && chip->w108 && chip->l105[1] == 465;
        pla_vcnt[18] = chip->w446 && chip->cpu_pal && chip->w107 && chip->l105[1] == 457;
        pla_vcnt[19] = chip->w446 && !chip->cpu_pal && chip->w107 && chip->l105[1] == 484;
        pla_vcnt[20] = !chip->w446 && chip->cpu_pal && chip->w108 && chip->l105[1] == 466;
        pla_vcnt[21] = !chip->w446 && chip->cpu_pal && chip->w107 && chip->l105[1] == 458;
        pla_vcnt[22] = !chip->w446 && chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 442;
        pla_vcnt[23] = !chip->w446 && !chip->cpu_pal && chip->w107 && chip->l105[1] == 485;
        pla_vcnt[24] = !chip->w446 && !chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 469;
        pla_vcnt[25] = chip->cpu_pal && chip->w108 && chip->l105[1] == 482;
        pla_vcnt[26] = chip->cpu_pal && chip->w107 && chip->l105[1] == 474;
        pla_vcnt[27] = chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 458;
        pla_vcnt[28] = !chip->cpu_pal && chip->w107 && chip->l105[1] == 501;
        pla_vcnt[29] = !chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 485;
        pla_vcnt[30] = chip->reg_lsm0 && chip->cpu_pal && chip->w108 && chip->l105[1] == 263;
        pla_vcnt[31] = chip->reg_lsm0 && chip->cpu_pal && chip->w107 && chip->l105[1] == 255;
        pla_vcnt[32] = !chip->reg_lsm0 && chip->cpu_pal && chip->w108 && chip->l105[1] == 264;
        pla_vcnt[33] = !chip->reg_lsm0 && chip->cpu_pal && chip->w107 && chip->l105[1] == 256;
        pla_vcnt[34] = !chip->reg_lsm0 && chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 240;
        pla_vcnt[35] = !chip->cpu_pal && chip->w107 && chip->l105[1] == 232;
        pla_vcnt[36] = !chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 216;
        pla_vcnt[37] = chip->w108 && chip->l105[1] == 240;
        pla_vcnt[38] = chip->w107 && chip->l105[1] == 224;
        pla_vcnt[39] = !chip->reg_m5 && chip->l105[1] == 192;
        pla_vcnt[40] = chip->l105[1] == 0;
        pla_vcnt[41] = chip->reg_lsm0 && chip->cpu_pal && chip->w108 && chip->l105[1] == 265;
        pla_vcnt[42] = chip->reg_lsm0 && chip->cpu_pal && chip->w107 && chip->l105[1] == 257;
        pla_vcnt[43] = !chip->reg_lsm0 && chip->cpu_pal && chip->w108 && chip->l105[1] == 266;
        pla_vcnt[44] = !chip->reg_lsm0 && chip->cpu_pal && chip->w107 && chip->l105[1] == 258;
        pla_vcnt[45] = !chip->reg_lsm0 && chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 242;
        pla_vcnt[46] = !chip->cpu_pal && chip->w107 && chip->l105[1] == 234;
        pla_vcnt[47] = !chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 218;


        int w466 = !chip->w439;
        pla_hcnt1[0] = w466 && !chip->reg_m5 && chip->l106[1] == 488;
        pla_hcnt1[1] = w466 && !chip->reg_m5 && chip->l106[1] == 484;
        pla_hcnt1[2] = w466 && !chip->reg_m5 && (chip->l106[1] & 507) == 472;
        pla_hcnt1[3] = w466 && !chip->reg_m5 && (chip->l106[1] & 503) == 272;
        pla_hcnt1[4] = w466 && !chip->reg_m5 && (chip->l106[1] & 495) == 268;
        pla_hcnt1[5] = w466 && chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 463) == 266;
        pla_hcnt1[6] = w466 && chip->reg_m5 && (chip->l106[1] & 271) == 10;
        pla_hcnt1[7] = w466 && chip->reg_m5 && chip->reg_rs1 && chip->l106[1] == 484;
        pla_hcnt1[8] = w466 && chip->reg_m5 && chip->reg_rs1 && chip->l106[1] == 460;
        pla_hcnt1[9] = w466 && chip->reg_m5 && chip->reg_rs1 && chip->l106[1] == 458;
        pla_hcnt1[10] = w466 && !w425 && chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 505) == 344;
        pla_hcnt1[11] = w466 && !w416 && chip->reg_m5 && chip->reg_rs1 && chip->l106[1] == 364;
        pla_hcnt1[12] = w466 && !w416 && chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 509) == 360;
        pla_hcnt1[13] = w466 && !w416 && chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 505) == 352;
        pla_hcnt1[14] = w466 && chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 505) == 336;
        pla_hcnt1[15] = w466 && chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 505) == 328;
        pla_hcnt1[16] = w466 && chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 509) == 324;
        pla_hcnt1[17] = w466 && !w416 && chip->reg_m5 && !chip->reg_rs1 && chip->l106[1] == 290;
        pla_hcnt1[18] = w466 && !w416 && chip->reg_m5 && !chip->reg_rs1 && (chip->l106[1] & 509) == 292;
        pla_hcnt1[19] = w466 && !w425 && chip->reg_m5 && !chip->reg_rs1 && (chip->l106[1] & 505) == 280;
        pla_hcnt1[20] = w466 && chip->reg_m5 && !chip->reg_rs1 && (chip->l106[1] & 505) == 264;
        pla_hcnt1[21] = w466 && chip->reg_m5 && !chip->reg_rs1 && (chip->l106[1] & 509) == 260;
        pla_hcnt1[22] = w466 && chip->reg_m5 && !chip->reg_rs1 && (chip->l106[1] & 505) == 272;
        pla_hcnt1[23] = w466 && chip->reg_m5 && chip->l106[1] == 486;
        pla_hcnt1[24] = w466 && chip->reg_m5 && (chip->l106[1] & 503) == 498;
        pla_hcnt1[25] = w466 && chip->reg_m5 && (chip->l106[1] & 505) == 488;
        pla_hcnt1[26] = w466 && chip->reg_m5 && (chip->l106[1] & 509) == 480;
        pla_hcnt1[27] = w466 && chip->reg_m5 && (chip->l106[1] & 497) == 464;
        pla_hcnt1[28] = w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 488;
        pla_hcnt1[29] = w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 476;
        pla_hcnt1[30] = w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 284;
        pla_hcnt1[31] = w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 272;
        pla_hcnt1[32] = w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 484;
        pla_hcnt1[33] = w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 472;
        pla_hcnt1[34] = w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 280;
        pla_hcnt1[35] = w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 268;
        pla_hcnt1[36] = w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 480;
        pla_hcnt1[37] = w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 468;
        pla_hcnt1[38] = w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 276;
        pla_hcnt1[39] = w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 264;
        pla_hcnt1[40] = w466 && !chip->reg_m5 && (chip->l106[1] & 279) == 18;
        pla_hcnt1[41] = w466 && !chip->reg_m5 && (chip->l106[1] & 287) == 10;
        pla_hcnt1[42] = w466 && !chip->reg_m5 && (chip->l106[1] & 497) == 496;
        pla_hcnt1[43] = !w466 && (chip->l106[1] & 259) == 0;
        pla_hcnt1[44] = (chip->l106[1] & 1) == 1;
        pla_hcnt1[45] = w466 && chip->reg_m5 && chip->l106[1] == 510;
        pla_hcnt1[46] = w466 && chip->reg_m5 && chip->l106[1] == 502;
        pla_hcnt1[47] = w466 && chip->reg_m5 && chip->l106[1] == 508;
        pla_hcnt1[48] = w466 && chip->reg_m5 && chip->l106[1] == 500;
        pla_hcnt1[49] = w466 && chip->reg_m5 && chip->l106[1] == 504;
        pla_hcnt1[50] = w466 && chip->reg_m5 && chip->l106[1] == 496;
        pla_hcnt1[51] = w466 && chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 455) == 262;
        pla_hcnt1[52] = w466 && (chip->l106[1] & 263) == 6;
        pla_hcnt1[53] = w466 && chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 455) == 260;
        pla_hcnt1[54] = w466 && (chip->l106[1] & 263) == 4;
        pla_hcnt1[55] = w466 && chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 463) == 264;
        pla_hcnt1[56] = w466 && (chip->l106[1] & 271) == 8;
        pla_hcnt1[57] = w466 && !chip->reg_m5 && (chip->l106[1] & 271) == 8;
        pla_hcnt1[58] = w466 && chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 463) == 256;
        pla_hcnt1[59] = w466 && (chip->l106[1] & 271) == 0;
        pla_hcnt1[60] = !w466 && (chip->l106[1] & 63) == 50;
        pla_hcnt1[61] = w466 && chip->reg_m5 && chip->reg_rs1 && chip->l106[1] == 306;
        pla_hcnt1[62] = w466 && chip->reg_m5 && (chip->l106[1] & 319) == 50;

        pla_hcnt2[0] = (chip->l106[1] & 15) == 3;
        pla_hcnt2[1] = chip->l106[1] == 507;
        pla_hcnt2[2] = chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 463) == 269;
        pla_hcnt2[3] = chip->reg_m5 && (chip->l106[1] & 271) == 13;
        pla_hcnt2[4] = !chip->reg_m5 && chip->l106[1] == 483;
        pla_hcnt2[5] = !chip->reg_m5 && chip->l106[1] == 471;
        pla_hcnt2[6] = !chip->reg_m5 && chip->l106[1] == 279;
        pla_hcnt2[7] = !chip->reg_m5 && chip->l106[1] == 267;
        pla_hcnt2[8] = (chip->l106[1] & 15) == 15;
        pla_hcnt2[9] = !chip->reg_m5 && (chip->l106[1] & 15) == 15;
        pla_hcnt2[10] = (chip->l106[1] & 15) == 7;
        pla_hcnt2[11] = (chip->l106[1] & 7) == 0;
        pla_hcnt2[12] = chip->reg_rs1 && chip->l106[1] == 322;
        pla_hcnt2[13] = !chip->reg_rs1 && chip->l106[1] == 258;
        pla_hcnt2[14] = chip->l106[1] == 0;
        pla_hcnt2[15] = chip->reg_rs1 && chip->l106[1] == 120;
        pla_hcnt2[16] = !chip->reg_rs1 && chip->l106[1] == 95;
        pla_hcnt2[17] = chip->reg_m5 && chip->reg_rs1 && chip->l106[1] == 328;
        pla_hcnt2[18] = chip->reg_m5 && !chip->reg_rs1 && chip->l106[1] == 264;
        pla_hcnt2[19] = !chip->reg_m5 && chip->l106[1] == 488;
        pla_hcnt2[20] = chip->reg_rs1 && chip->l106[1] == 482;
        pla_hcnt2[21] = !chip->reg_rs1 && chip->l106[1] == 488;
        pla_hcnt2[22] = chip->reg_rs1 && chip->l106[1] == 358;
        pla_hcnt2[23] = !chip->reg_rs1 && chip->l106[1] == 292;
        pla_hcnt2[24] = chip->reg_rs1 && chip->l106[1] == 164;
        pla_hcnt2[25] = chip->reg_rs1 && chip->l106[1] == 466;
        pla_hcnt2[26] = !chip->reg_rs1 && chip->l106[1] == 134;
        pla_hcnt2[27] = !chip->reg_rs1 && chip->l106[1] == 475;
        pla_hcnt2[28] = chip->reg_rs1 && chip->l106[1] == 148;
        pla_hcnt2[29] = !chip->reg_rs1 && chip->l106[1] == 121;
        pla_hcnt2[30] = chip->reg_rs1 && chip->l106[1] == 120;
        pla_hcnt2[31] = !chip->reg_rs1 && chip->l106[1] == 95;
        pla_hcnt2[32] = chip->reg_rs1 && chip->l106[1] == 1;
        pla_hcnt2[33] = !chip->reg_rs1 && chip->l106[1] == 0;
        pla_hcnt2[34] = chip->reg_rs1 && chip->l106[1] == 348;
        pla_hcnt2[35] = !chip->reg_rs1 && chip->l106[1] == 284;
        pla_hcnt2[36] = chip->reg_rs1 && chip->l106[1] == 330;
        pla_hcnt2[37] = !chip->reg_rs1 && chip->l106[1] == 266;
        pla_hcnt2[38] = chip->l106[1] == 18;
        pla_hcnt2[39] = !chip->reg_lcb && chip->l106[1] == 10;
        pla_hcnt2[40] = chip->reg_rs1 && chip->l106[1] == 43;
        pla_hcnt2[41] = !chip->reg_rs1 && chip->l106[1] == 36;
        pla_hcnt2[42] = chip->reg_rs1 && chip->l106[1] == 253;
        pla_hcnt2[43] = !chip->reg_rs1 && chip->l106[1] == 206;
        pla_hcnt2[44] = chip->reg_rs1 && chip->l106[1] == 363;
        pla_hcnt2[45] = !chip->reg_rs1 && chip->l106[1] == 294;

        int w467 = pla_vcnt[41] || pla_vcnt[42] || pla_vcnt[43]
            || pla_vcnt[44] || pla_vcnt[45] || pla_vcnt[46] || pla_vcnt[47];
        int w468 = !pla_vcnt[40];
        int w469 = !(pla_vcnt[37] || pla_vcnt[38] || pla_vcnt[39]);
        int w470 = pla_vcnt[30] || pla_vcnt[31] || pla_vcnt[32]
            || pla_vcnt[33] || pla_vcnt[34] || pla_vcnt[35] || pla_vcnt[36];
        int w471 = pla_vcnt[25] || pla_vcnt[26] || pla_vcnt[27]
            || pla_vcnt[28] || pla_vcnt[29];
        int w472 = pla_vcnt[17] || pla_vcnt[18] || pla_vcnt[19] || pla_vcnt[20]
            || pla_vcnt[21] || pla_vcnt[22] || pla_vcnt[23] || pla_vcnt[24];
        int w473 = pla_vcnt[9] || pla_vcnt[10] || pla_vcnt[11] || pla_vcnt[12]
            || pla_vcnt[13] || pla_vcnt[14] || pla_vcnt[15] || pla_vcnt[16];
        int w474 = pla_vcnt[1] || pla_vcnt[2] || pla_vcnt[3] || pla_vcnt[4]
            || pla_vcnt[5] || pla_vcnt[6] || pla_vcnt[7] || pla_vcnt[8];
        int w475 = !pla_vcnt[0];

        int w476 = pla_hcnt1[60] || pla_hcnt1[61] || pla_hcnt1[62];
        int w477 = pla_hcnt1[50] || pla_hcnt1[57] || pla_hcnt1[58] || pla_hcnt1[59];
        int w478 = pla_hcnt1[49] || pla_hcnt1[55] || pla_hcnt1[56];
        int w479 = pla_hcnt1[47] || pla_hcnt1[48] || pla_hcnt1[53] || pla_hcnt1[54];
        int w480 = pla_hcnt1[45] || pla_hcnt1[46] || pla_hcnt1[51] || pla_hcnt1[52];
        int w481 = pla_hcnt1[5] || pla_hcnt1[6] || pla_hcnt1[36] ||
            pla_hcnt1[37] || pla_hcnt1[38] || pla_hcnt1[39];
        int w482 = pla_hcnt1[7] || pla_hcnt1[8] || pla_hcnt1[9] || pla_hcnt1[10]
            || pla_hcnt1[11] || pla_hcnt1[12] || pla_hcnt1[13] || pla_hcnt1[14]
            || pla_hcnt1[15] || pla_hcnt1[16] || pla_hcnt1[17] || pla_hcnt1[18]
            || pla_hcnt1[19] || pla_hcnt1[20] || pla_hcnt1[21] || pla_hcnt1[22]
            || pla_hcnt1[24] || pla_hcnt1[25] || pla_hcnt1[26] || pla_hcnt1[27]
            || pla_hcnt1[32] || pla_hcnt1[33] || pla_hcnt1[34] || pla_hcnt1[35];
        int w483 = pla_hcnt1[44];
        int w484 = pla_hcnt1[0] || pla_hcnt1[1] || pla_hcnt1[2] || pla_hcnt1[3] || pla_hcnt1[4];
        int w485 = pla_hcnt1[36] || pla_hcnt1[37] || pla_hcnt1[38] || pla_hcnt1[39]
            || pla_hcnt1[43];
        int w486 = w403 || pla_hcnt1[40] || pla_hcnt1[41] || pla_hcnt1[42];
        int w487 = pla_hcnt1[7] || pla_hcnt1[8] || pla_hcnt1[9] || pla_hcnt1[10]
            || pla_hcnt1[11] || pla_hcnt1[12] || pla_hcnt1[13] || pla_hcnt1[14]
            || pla_hcnt1[17] || pla_hcnt1[18] || pla_hcnt1[19] || pla_hcnt1[22] || pla_hcnt1[23]
            || pla_hcnt1[24] || pla_hcnt1[25] || pla_hcnt1[26] || pla_hcnt1[27]
            || pla_hcnt1[40] || pla_hcnt1[41] || pla_hcnt1[42]
            || pla_hcnt1[46] || pla_hcnt1[47] || pla_hcnt1[48]
            || pla_hcnt1[49] || pla_hcnt1[50];
        int w488 = pla_hcnt1[23];
        int w489 = pla_hcnt1[31] || pla_hcnt1[28] || pla_hcnt1[29] || pla_hcnt1[30];

        int w490 = pla_hcnt2[44] || pla_hcnt2[45];
        int w491 = pla_hcnt2[42] || pla_hcnt2[43];
        int w492 = pla_hcnt2[40] || pla_hcnt2[41];
        int w493 = pla_hcnt2[38] || pla_hcnt2[39];
        int w494 = pla_hcnt2[36] || pla_hcnt2[37];
        int w495 = pla_hcnt2[34] || pla_hcnt2[35];
        int w496 = pla_hcnt2[32] || pla_hcnt2[33];
        int w497 = pla_hcnt2[30] || pla_hcnt2[31];
        int w498 = pla_hcnt2[28] || pla_hcnt2[29];
        int w499 = pla_hcnt2[24] || pla_hcnt2[25] || pla_hcnt2[26] || pla_hcnt2[27];
        int w500 = pla_hcnt2[22] || pla_hcnt2[23];
        int w501 = pla_hcnt2[20] || pla_hcnt2[21];
        int w502 = !(pla_hcnt2[17] || pla_hcnt2[18] || pla_hcnt2[19]);
        int w503 = pla_hcnt2[15] || pla_hcnt2[16];
        int w504 = pla_hcnt2[14];
        int w505 = !(pla_hcnt2[12] || pla_hcnt2[13]);
        int w506 = pla_hcnt2[11];
        int w507 = pla_hcnt2[9] || pla_hcnt2[10];
        int w508 = pla_hcnt2[8];
        int w509 = pla_hcnt2[4] || pla_hcnt2[5] || pla_hcnt2[6] || pla_hcnt2[7];
        int w510 = pla_hcnt2[2] || pla_hcnt2[3];
        int w511 = pla_hcnt2[1];
        int w512 = pla_hcnt2[0];

        int w420 = chip->l151[1] ^ chip->l663[1];


        int w387 = chip->reg_m5 ? (chip->l127[1] & 128) != 0 : w420;
        int w397 = !(!chip->reg_80_b0 && w387);


        int w426 = w420 && !chip->l161[1];

        int w438 = chip->l115[1] && chip->l174[1];

        int w437 = w438 || chip->reset_comb || chip->w86 || w460;
        int w436 = ((chip->reg_test1 & 4) == 0 && chip->l115[1] && !w437) || ((chip->reg_test1 & 4) != 0 && !chip->cpu_bg);


        int w428;
        if (chip->w86)
            w428 = chip->io_data & 511;
        else
        {
            int w429;
            int w430;
            int w431;
            int w432;
            int w433;
            int w434;
            int w435;
            w430 = !chip->cpu_pal && chip->w107;
            w431 = chip->cpu_pal && !chip->reg_m5;
            w432 = chip->cpu_pal && chip->w107;
            w429 = w430 || w431;
            w433 = w432 || w431;
            w434 = chip->cpu_pal && !chip->w446;
            w435 = (!chip->cpu_pal) ^ chip->w446;
            w428 = 384;
            if (!w431)
                w428 |= 64;
            if (w429)
                w428 |= 32;
            if (!chip->w107)
                w428 |= 16;
            if (w433)
                w428 |= 8;
            if (!chip->cpu_pal)
                w428 |= 4;
            if (w434)
                w428 |= 2;
            if (w435)
                w428 |= 1;
        }

        int w362 = !(w361 || (chip->reg_test1 & 8) != 0);

        int w363 = w362 || ((chip->reg_test1 & 8) != 0 && !chip->cpu_intak);

        int w358 = !(w476 || w477 || w478 || w479);
        int w386 = !(w480 || w483 || w481);
        int w395 = !(w486 || w489 || w482 || w488);
        int w359 = w358 && w386 && w395;


        int w364;
        if (chip->w88)
            w364 = chip->io_data & 511;
        else
        {
            int w365;
            int w366;
            int w367;
            int w368;
            int w369;
            w364 = 64 | 128 | 256;

            w365 = !chip->reg_80_b0 && chip->reg_rs1 && chip->reg_m5;
            w366 = !chip->reg_80_b0 && !chip->reg_rs1;
            w367 = chip->reg_80_b0 && !chip->reg_rs1;
            w369 = !chip->reg_rs1 && chip->reg_80_b0 && chip->reg_m5;
            w368 = w365 || w369;
            if (w365)
                w364 |= 1;
            if (w366)
                w364 |= 2;
            if (w367)
                w364 |= 4;
            if (w368)
                w364 |= 8;
            if (!w365)
                w364 |= 16;

            // h40: 457
            // h32: 466
            // m4: 466
        }




        int w462 = !(chip->l167[1] || chip->reset_comb);
        int w463 = chip->l120[1] && (chip->l122[1] || chip->l114[1]);
        int w464 = w462 && (chip->l175[1] || w463);


        int w377 = !(chip->l114[1] || chip->reset_comb);

        int w375 = chip->l120[1] || (chip->reg_8c_b5 && chip->l149[1]);
        int w376 = w377 && (chip->l121[1] || w375);

        int w421 = (chip->reg_m5 && chip->reg_80_b3) ? chip->l160[1] : chip->l157[1];
        int w396 = chip->reg_m5 ? (chip->l135[1] & 64) != 0 : w421;
        int w404 = !(w396 && !chip->reg_8c_b5);



        int w441 = chip->t34 && chip->reg_m5;
        int w450 = chip->reg_m5 && chip->t36;
        int w443 = chip->t35 && chip->reg_m5;
        int w398 = !(w441 || w443 || w450);
        int w405 = w398 && chip->t33;
        int w399 = !w398 && chip->t32;
        int w412 = w405 || w399;

        int w390 = w441 || w450;

        int w406 = w398 && chip->t33;
        int w413 = w406 || (w390 && chip->t32) || (chip->t31 && w443);



        int w459 = !chip->l170[1] && chip->l110[1];
        int w454 = chip->reg_80_b0 && w459;

        int w451 = chip->reset_comb || !chip->reg_lsm0 || (w454 && !chip->t39);
        int w456 = w454 && chip->t39;

        int w455 = !chip->reg_80_b0 && w459;

        ////////////////////



        i = chip->l105[1];
        i += w436;
        if (w437)
            i = w428;

        i &= 511;
        chip->l105[0] = i;

        i = chip->l106[1];
        i += w363;
        if (w361)
            i = w364;
        i &= 511;
        chip->l106[0] = i;

        chip->l107[0] = (chip->l107[1] << 1) | chip->l663[1];
        chip->l127[0] = (chip->l127[1] << 1) | w420;
        chip->l135[0] = (chip->l135[1] << 1) | w421;
        chip->l158[0] = (chip->l158[1] << 1) | chip->l129[1];

        chip->l108[0] = w476;
        chip->l109[0] = w359;
        chip->l110[0] = w504;
        chip->l111[0] = w503;
        chip->l112[0] = w490;
        chip->l113[0] = chip->l121[1];
        chip->l114[0] = w491;
        chip->l115[0] = w502;
        chip->l116[0] = !(w483 && !chip->l132[1]);
        chip->l117[0] = w505;
        chip->l118[0] = w477;
        chip->l119[0] = w478;
        chip->l120[0] = !chip->input.i_csync;
        chip->l121[0] = w376;
        chip->l122[0] = w492;
        chip->l123[0] = w501;
        chip->l124[0] = w506;
        chip->l125[0] = w479;
        chip->l126[0] = w480;
        chip->l128[0] = w397;
        chip->l129[0] = chip->t30;
        chip->l130[0] = w493;
        chip->l131[0] = w500;
        chip->l132[0] = w403;
        chip->l133[0] = w507;
        chip->l134[0] = w481;
        chip->l136[0] = w404;
        chip->l137[0] = w494;
        chip->l138[0] = w499;
        chip->l139[0] = w410;
        chip->l140[0] = w508;
        chip->l141[0] = w482;
        chip->l142[0] = w489;
        chip->l143[0] = w495;
        chip->l144[0] = w498;
        chip->l145[0] = w510;
        chip->l146[0] = w509;
        chip->l147[0] = w487;
        chip->l148[0] = w488;
        chip->l149[0] = !chip->input.i_hsync;
        chip->l150[0] = w412;
        chip->l151[0] = w413;
        chip->l152[0] = w496;
        chip->l153[0] = w497;
        chip->l154[0] = w511;
        chip->l155[0] = w485;
        chip->l156[0] = w484;
        chip->l157[0] = chip->l150[1];
        chip->l159[0] = w512;

        i = chip->l160[1] ^ w426;
        if (chip->reset_comb)
            i = 0;
        chip->l160[0] = i;

        chip->l161[0] = w420;
        chip->l162[0] = !w475;
        chip->l163[0] = w474;
        chip->l164[0] = w473;
        chip->l165[0] = w472;

        i = chip->w446;
        i ^= w455;
        if (w451)
            i = 0;
        chip->l166[0] = i;

        chip->l167[0] = w471;
        chip->l168[0] = w456;
        chip->l169[0] = w470;
        chip->l170[0] = w469;
        chip->l171[0] = chip->l114[1];
        chip->l172[0] = !w468;
        chip->l173[0] = chip->l122[1];
        chip->l174[0] = w467;
        chip->l175[0] = w464;
        chip->l176[0] = chip->l175[1];
        chip->l663[0] = chip->t35;
    }
    if (chip->hclk2)
    {
        chip->l105[1] = chip->l105[0];
        chip->l106[1] = chip->l106[0];
        chip->l107[1] = chip->l107[0];
        chip->l127[1] = chip->l127[0];
        chip->l135[1] = chip->l135[0];
        chip->l158[1] = chip->l158[0];
        chip->l108[1] = chip->l108[0];
        chip->l109[1] = chip->l109[0];
        chip->l110[1] = chip->l110[0];
        chip->l111[1] = chip->l111[0];
        chip->l112[1] = chip->l112[0];
        chip->l113[1] = chip->l113[0];
        chip->l114[1] = chip->l114[0];
        chip->l115[1] = !chip->l115[0];
        chip->l116[1] = !chip->l116[0];
        chip->l117[1] = chip->l117[0];
        chip->l118[1] = chip->l118[0];
        chip->l119[1] = chip->l119[0];
        chip->l120[1] = chip->l120[0];
        chip->l121[1] = chip->l121[0];
        chip->l122[1] = chip->l122[0];
        chip->l123[1] = chip->l123[0];
        chip->l124[1] = chip->l124[0];
        chip->l125[1] = chip->l125[0];
        chip->l126[1] = chip->l126[0];
        chip->l128[1] = chip->l128[0];
        chip->l129[1] = chip->l129[0];
        chip->l130[1] = chip->l130[0];
        chip->l131[1] = chip->l131[0];
        chip->l132[1] = chip->l132[0];
        chip->l133[1] = chip->l133[0];
        chip->l134[1] = chip->l134[0];
        chip->l136[1] = chip->l136[0];
        chip->l137[1] = chip->l137[0];
        chip->l138[1] = chip->l138[0];
        chip->l139[1] = chip->l139[0];
        chip->l140[1] = chip->l140[0];
        chip->l141[1] = chip->l141[0];
        chip->l142[1] = chip->l142[0];
        chip->l143[1] = chip->l143[0];
        chip->l144[1] = chip->l144[0];
        chip->l145[1] = chip->l145[0];
        chip->l146[1] = chip->l146[0];
        chip->l147[1] = chip->l147[0];
        chip->l148[1] = chip->l148[0];
        chip->l149[1] = chip->l149[0];
        chip->l150[1] = chip->l150[0];
        chip->l151[1] = chip->l151[0];
        chip->l152[1] = chip->l152[0];
        chip->l153[1] = chip->l153[0];
        chip->l154[1] = chip->l154[0];
        chip->l155[1] = chip->l155[0];
        chip->l156[1] = chip->l156[0];
        chip->l157[1] = chip->l157[0];
        chip->l159[1] = chip->l159[0];
        chip->l160[1] = chip->l160[0];
        chip->l161[1] = chip->l161[0];
        chip->l162[1] = chip->l162[0];
        chip->l163[1] = chip->l163[0];
        chip->l164[1] = chip->l164[0];
        chip->l165[1] = chip->l165[0];
        chip->l166[1] = chip->l166[0];
        chip->l167[1] = chip->l167[0];
        chip->l168[1] = chip->l168[0];
        chip->l169[1] = chip->l169[0];
        chip->l170[1] = chip->l170[0];
        chip->l171[1] = chip->l171[0];
        chip->l172[1] = chip->l172[0];
        chip->l173[1] = chip->l173[0];
        chip->l174[1] = chip->l174[0];
        chip->l175[1] = chip->l175[0];
        chip->l176[1] = chip->l176[0];
        chip->l663[1] = chip->l663[0];


        chip->w360 = !chip->l117[1];

        chip->w446 = chip->l166[1];
        if (chip->l168[1])
            chip->w446 = 0;

        chip->w457 = !chip->l170[1];
    }

    chip->w380 = (chip->reg_test1 & 64) == 0 && (chip->reg_test1 & 32) == 0 && (chip->reg_test1 & 16) == 0;
    chip->w357 = (chip->reg_test1 & 64) == 0 && (chip->reg_test1 & 32) == 0 && (chip->reg_test1 & 16) != 0;
    chip->w371 = (chip->reg_test1 & 64) == 0 && (chip->reg_test1 & 32) != 0 && (chip->reg_test1 & 16) == 0;
    chip->w382 = (chip->reg_test1 & 64) == 0 && (chip->reg_test1 & 32) != 0 && (chip->reg_test1 & 16) != 0;
    chip->w383 = (chip->reg_test1 & 64) != 0 && (chip->reg_test1 & 32) == 0 && (chip->reg_test1 & 16) == 0;
    chip->w381 = (chip->reg_test1 & 64) != 0 && (chip->reg_test1 & 32) == 0 && (chip->reg_test1 & 16) != 0;

    if (chip->w106)
        chip->w355 = (chip->l105[1] << 1) | chip->w446;
    else
        chip->w355 = chip->l105[1];

    chip->w356 = chip->w357 || (chip->l118[1] && chip->w380);

    chip->w370 = !chip->l113[1] && chip->l121[1] && chip->reg_80_b0;


    chip->w372 = chip->w371 || (chip->l119[1] && chip->w380);

    int w373 = !(chip->reg_m5 ? (chip->l107[1] & 128) != 0 : chip->l663[1]);

    int w374 = chip->reg_8c_b6 ? chip->hclk2 : w373;

    int w378 = chip->reg_vscr ? chip->l124[1] : !chip->l117[1];

    chip->w379 = w378 && chip->w380;

    chip->w385 = chip->w382 || (chip->w380 && chip->l125[1]);

    chip->w388 = chip->t29 && !chip->w439;

    chip->w389 = chip->reg_disp && chip->t29 && chip->t38;

    if (chip->l130[1])
        chip->t29 = 1;
    else if (chip->reset_comb || chip->l137[1])
        chip->t29 = 0;

    chip->w393 = chip->l133[1] && chip->w380;

    chip->w394 = chip->w383 || (chip->w380 && chip->l126[1]);

    if (chip->reset_comb || chip->l143[1])
        chip->t30 = 1;
    else if (chip->l152[1])
        chip->t30 = 0;
    
    chip->w402 = chip->w380 && chip->l140[1];

    int w409 = chip->l131[1] || chip->l144[1];
    if (chip->l137[1] || chip->l153[1])
        chip->t31 = 1;
    else if (chip->reset_comb || w409)
        chip->t31 = 0;

    if (w409 || chip->reset_comb)
        chip->t32 = 1;
    else if (chip->l138[1])
        chip->t32 = 0;

    chip->w415 = chip->w380 && chip->l154[1];

    chip->w417 = chip->l146[1] || chip->l145[1];

    chip->w418 = chip->l145[1] || chip->l155[1];

    chip->w419 = chip->w381 || (chip->w380 && chip->l148[1]);

    chip->w422 = chip->reg_m5 ? (chip->l158[1] & 128) != 0 : chip->l129[1];
    
    int w423 = chip->reset_comb || chip->l131[1];

    if (w423)
        chip->t33 = 1;
    else if (chip->l123[1])
        chip->t33 = 0;

    chip->w424 = chip->l159[1] && chip->w380;

    chip->w439 = !(chip->reg_disp && (chip->l162[1] || chip->t38));

    int w449 = chip->l111[1] || !chip->w446;

    int w444 = chip->l164[1] && w449;
    if (w444)
        chip->t34 = 1;
    else if (chip->reset_comb || (chip->l163[1] && w449))
        chip->t34 = 0;

    int w447 = chip->l165[1] && w449;

    if (chip->reset_comb || w447)
        chip->t35 = 1;
    else if (w444)
        chip->t35 = 0;


    int w452 = chip->l169[1] && w449;
    if (w452)
        chip->t36 = 1;
    else if (chip->reset_comb || w447)
        chip->t36 = 0;

    if (w452 || chip->reset_comb)
        chip->t37 = 1;
    else if (chip->l167[1])
        chip->t37 = 0;

    int w458 = chip->reset_comb || chip->w457;

    if (chip->l172[1])
        chip->t38 = 1;
    else if (w458)
        chip->t38 = 0;

    int w461 = chip->reset_comb || (w460 && chip->l171[1]);

    if (w460 && chip->l173[1])
        chip->t39 = 1;
    else if (w461)
        chip->t39 = 0;

    chip->o_vsync = w374;
    chip->o_csync = chip->l128[1] ? state_z : 0;
    chip->o_hsync = chip->l136[1] ? state_z : 0;
}

void VDP_ClockPlanes(vdp_t *chip, int clk1, int clk2)
{

    int w537 = chip->w106 ? ((chip->w355 >> 1) & 255) : (chip->w355 & 255);

    int w546 = chip->l188 <= ((chip->l106[1] >> 4) & 31);

    int w538 = w546 ^ (!chip->l187);

    int w539 = w538 && (chip->l106[1] & 384) != 384;


    int w545 = ((w537 >> 3) & 31) < chip->l190;
    int w540 = w545 ^ chip->l189;

    int w541 = (w540 || w539) && (chip->l106[1] & 8) == 0 && chip->reg_m5;

    int w612 = chip->w393 || ((chip->reg_test1 & 512) != 0 && chip->cpu_pen);

    int w638 = chip->w402 || ((chip->reg_test1 & 1024) != 0 && chip->cpu_pen);

    if (chip->hclk1)
    {
        int i;

        int w519 = !((chip->l106[1] & 192) == 192 && chip->reg_80_b7);

        int w548 = chip->w394 || chip->w385;

        int w550 = chip->w394 && !chip->reg_m5;

        int w551 = w550 || chip->w385;

        int w549 = chip->w372 || ((chip->reg_test1 & 256) != 0 && chip->cpu_pen);

        int w556 = chip->reg_m5 && (chip->reg_test1 & 256) == 0 && w549;

        int w557 = !w541 && chip->w356;

        int w559 = chip->w356 && w541;

        int w560 = chip->w356 || w549;

        int w323 = chip->w301 && chip->w317 && !chip->w316 && chip->w318 && !chip->w320;

        int w324 = chip->w301 && chip->w319 && !chip->w316 && chip->w318 && !chip->w320;

        int w623 = !(chip->reg_m5 && chip->reg_vscr);

        int w624 = w623 ^ ((chip->l106[1] & 8) != 0);

        int w625 = (chip->l106[1] >> 4) & 31;
        if (!chip->reg_vscr)
            w625 = 0;

        int w569 = chip->l206[1] || chip->l207[1] || chip->l208[1];

        int w626;
        if (w569)
            w626 = chip->l293[1];
        else
            w626 = (w625 << 1) | w624;

        int w582 = chip->w394 && chip->reg_m5;

        int w614 = chip->w424 || chip->w90;

        int w601 = chip->reg_m5 ^ ((chip->l241[1] & 2) != 0);

        int w599 = chip->reg_m5 && (chip->l241[1] & 8) != 0;

        int w602 = w599 ? (chip->l265 & 1) != 0 : (chip->l265 & 2) != 0;
        int w605 = w599 ? (chip->l265 & 64) != 0 : (chip->l265 & 128) != 0;

        int w606 = ((chip->l241[1] & 5) | (w601 << 1));
        if (w602)
            w606 ^= 7;

        int w607;
        if (!chip->reg_m5)
        {
            int mask = 1 << (w606 ^ 7);
            w607 = 0;
            if (chip->l264 & mask)
                w607 |= 1;
            if (chip->l263 & mask)
                w607 |= 2;
            if (chip->l240 & mask)
                w607 |= 4;
            if (chip->l239 & mask)
                w607 |= 8;
        }
        else if ((chip->l241[1] & 8) == 0)
        {
            if (w606 == 7)
                w607 = chip->l261 & 15;
            else if (w606 == 6)
                w607 = (chip->l261 >> 4) & 15;
            else if (w606 == 5)
                w607 = chip->l262 & 15;
            else if (w606 == 4)
                w607 = (chip->l262 >> 4) & 15;
            else if (w606 == 3)
                w607 = chip->l263 & 15;
            else if (w606 == 2)
                w607 = (chip->l263 >> 4) & 15;
            else if (w606 == 1)
                w607 = chip->l264 & 15;
            else if (w606 == 0)
                w607 = (chip->l264 >> 4) & 15;
        }
        else
        {
            if (w606 == 7)
                w607 = chip->l237 & 15;
            else if (w606 == 6)
                w607 = (chip->l237 >> 4) & 15;
            else if (w606 == 5)
                w607 = chip->l238 & 15;
            else if (w606 == 4)
                w607 = (chip->l238 >> 4) & 15;
            else if (w606 == 3)
                w607 = chip->l239 & 15;
            else if (w606 == 2)
                w607 = (chip->l239 >> 4) & 15;
            else if (w606 == 1)
                w607 = chip->l240 & 15;
            else if (w606 == 0)
                w607 = (chip->l240 >> 4) & 15;
        }

        int w603 = w599 ? (chip->l265 & 4) != 0 : (chip->l265 & 8) != 0;
        int w604 = w599 ? (chip->l265 & 16) != 0 : (chip->l265 & 32) != 0;

        int w642 = chip->w419 || ((chip->reg_test1 & 128) != 0 && chip->cpu_pen);

        int w634 = (chip->l311[1] & 8) != 0 ? (chip->l292 & 1) != 0 : (chip->l292 & 2) != 0;
        int w632 = chip->l311[1] & 7;
        if (w634)
            w632 ^= 7;

        int w641 = w632 ^ 2;

        int w647;
        if (chip->l311[1] & 8)
        {
            if (w641 == 7)
                w647 = chip->l307 & 15;
            else if (w641 == 6)
                w647 = (chip->l307 >> 4) & 15;
            else if (w641 == 5)
                w647 = chip->l308 & 15;
            else if (w641 == 4)
                w647 = (chip->l308 >> 4) & 15;
            else if (w641 == 3)
                w647 = chip->l309 & 15;
            else if (w641 == 2)
                w647 = (chip->l309 >> 4) & 15;
            else if (w641 == 1)
                w647 = chip->l310 & 15;
            else if (w641 == 0)
                w647 = (chip->l310 >> 4) & 15;
        }
        else
        {
            if (w641 == 7)
                w647 = chip->l287 & 15;
            else if (w641 == 6)
                w647 = (chip->l287 >> 4) & 15;
            else if (w641 == 5)
                w647 = chip->l288 & 15;
            else if (w641 == 4)
                w647 = (chip->l288 >> 4) & 15;
            else if (w641 == 3)
                w647 = chip->l289 & 15;
            else if (w641 == 2)
                w647 = (chip->l289 >> 4) & 15;
            else if (w641 == 1)
                w647 = chip->l290 & 15;
            else if (w641 == 0)
                w647 = (chip->l290 >> 4) & 15;
        }

        int w635 = (chip->l311[1] & 8) != 0 ? (chip->l292 & 4) != 0 : (chip->l292 & 8) != 0;
        int w636 = (chip->l311[1] & 8) != 0 ? (chip->l292 & 16) != 0 : (chip->l292 & 32) != 0;
        int w637 = (chip->l311[1] & 8) != 0 ? (chip->l292 & 64) != 0 : (chip->l292 & 128) != 0;

        chip->l178[0] = (chip->l106[1] & 8) != 0;
        chip->l181[0] = chip->l104[1] | (chip->l182[1] << 8);
        chip->l182[0] = (chip->vram_data >> 8) & 7;
        chip->l183[0] = chip->l209[1];
        chip->l186[0] = w519;
        chip->l196[0] = w548;
        chip->l197[0] = (chip->l106[1] & 8) != 0;
        chip->l198[0] = !w550;
        chip->l199[0] = w551;
        chip->l200[0] = w556;
        chip->l201[0] = w557;
        chip->l202[0] = w559;
        chip->l203[0] = w560;
        chip->l204[0] = chip->l203[1];
        chip->l205[0] = chip->l204[1];
        chip->l206[0] = chip->w201;
        chip->l207[0] = w323;
        chip->l208[0] = w324;
        chip->l209[0] = chip->l206[1];
        chip->l210[0] = chip->l207[1];
        chip->l211[0] = chip->l208[1];
        chip->l212[0] = w626;
        chip->l217[0] = w541;
        chip->l218[0] = w582;
        chip->l242[0] = w614;
        chip->l267[0] = w612;
        chip->l268[0] = chip->l267[1];
        chip->l269[0] = w607;
        chip->l270[0] = chip->l269[1];
        chip->l271[0] = w604 * 2 + w603;
        chip->l272[0] = chip->l271[1];
        chip->l273[0] = w605;
        chip->l274[0] = chip->l273[1];
        chip->l293[0] = (chip->vram_address >> 1) & 63;
        chip->l312[0] = w638;
        chip->l313[0] = chip->l312[1];
        chip->l314[0] = w642;
        chip->l315[0] = chip->l314[1];
        chip->l316[0] = chip->l315[1];
        chip->l318[0] = w647;
        chip->l319[0] = chip->l318[1];
        chip->l320[0] = w637;
        chip->l321[0] = chip->l320[1];
        chip->l322[0] = w636 * 2 + w635;
        chip->l323[0] = chip->l322[1];


        int w608 = (chip->l241[1] & 8) != 0 || !chip->reg_m5;

        int w609 = w608 && (chip->l241[1] & 7) == 7;

        int w593 = w614 && chip->l236 == 15;
        chip->l266 = (w609 || w593);

        i = w614 ? chip->l236 : chip->l241[1];
        i++;
        chip->l241[0] = i & 15;
    }

    if (chip->hclk2)
    {
        chip->l178[1] = chip->l178[0];
        chip->l181[1] = chip->l181[0];
        chip->l182[1] = chip->l182[0];
        chip->l183[1] = chip->l183[0];
        chip->l186[1] = chip->l186[0];
        chip->l196[1] = chip->l196[0];
        chip->l197[1] = chip->l197[0];
        chip->l198[1] = chip->l198[0];
        chip->l199[1] = chip->l199[0];
        chip->l200[1] = chip->l200[0];
        chip->l201[1] = chip->l201[0];
        chip->l202[1] = chip->l202[0];
        chip->l203[1] = chip->l203[0];
        chip->l204[1] = chip->l204[0];
        chip->l205[1] = chip->l205[0];
        chip->l206[1] = chip->l206[0];
        chip->l207[1] = chip->l207[0];
        chip->l208[1] = chip->l208[0];
        chip->l209[1] = chip->l209[0];
        chip->l210[1] = chip->l210[0];
        chip->l211[1] = chip->l211[0];
        chip->l212[1] = chip->l212[0];
        chip->l217[1] = chip->l217[0];
        chip->l218[1] = chip->l218[0];
        chip->l242[1] = chip->l242[0];
        chip->l267[1] = chip->l267[0];
        chip->l268[1] = chip->l268[0];
        chip->l269[1] = chip->l269[0];
        chip->l270[1] = chip->l270[0];
        chip->l271[1] = chip->l271[0];
        chip->l272[1] = chip->l272[0];
        chip->l273[1] = chip->l273[0];
        chip->l274[1] = chip->l274[0];
        chip->l293[1] = chip->l293[0];
        chip->l312[1] = chip->l312[0];
        chip->l313[1] = chip->l313[0];
        chip->l314[1] = chip->l314[0];
        chip->l315[1] = chip->l315[0];
        chip->l316[1] = chip->l316[0];
        chip->l318[1] = chip->l318[0];
        chip->l319[1] = chip->l319[0];
        chip->l320[1] = chip->l320[0];
        chip->l321[1] = chip->l321[0];
        chip->l322[1] = chip->l322[0];
        chip->l323[1] = chip->l323[0];
        chip->l241[1] = chip->l241[0];

        chip->w646 = chip->l269[1] != 0;

        chip->w648 = chip->l318[1] != 0;
    }

    int w513 = (chip->hclk1 && chip->w379) || (chip->reg_test1 & 128) != 0;
    int w514 = chip->hclk1 && chip->l115[1] && (chip->reg_m5 || chip->l162[1]);

    if (chip->w230)
    {
        chip->l179 = chip->reg_data.l2 & 255;
    }

    if (chip->l209[1] && chip->hclk1)
        chip->l180 = chip->vsram_out;
    if (chip->l183[1])
    {
        chip->vram_data &= ~0x7ff;
        chip->vram_data |= chip->l180;
    }

    if (w514 || (chip->reg_test1 & 128) != 0)
    {
        chip->l184 = chip->reg_m5 ? chip->vsram_out : chip->l179;
    }

    if (w513)
    {
        chip->l185 = chip->vsram_out;
    }

    int w521;
    if (chip->reg_m5 && (chip->l178[1] || chip->reg_vscr))
        w521 = chip->l185;
    else
    {
        int w518 = chip->l184;
        if (!chip->l186[1])
            w518 &= ~255;
        w521 = w518;
    }

    int w522 = (w521 + (chip->w355 & 511)) & 2047;

    if (chip->w224)
    {
        chip->reg_hsz = chip->reg_data.l2 & 3;
        chip->reg_vsz = (chip->reg_data.l2 >> 4) & 3;
    }


    if (chip->w218)
    {
        chip->reg_sa = (chip->reg_data.l2 >> 3) & 15;
        chip->reg_nt = (chip->reg_data.l2 >> 1) & 3;
    }
    if (chip->w220)
    {
        chip->reg_sb = chip->reg_data.l2 & 15;
    }


    int w552 = !(!chip->reg_80_b6 || (chip->w355 & 32) != 0 || (chip->w355 & 64) != 0 || (chip->w355 & 16) != 0 || (chip->w355 & 128) != 0);
    int w553 = w552 || chip->reg_m5;
    int w574 = !w541 && chip->reg_m5 && (chip->l106[1] & 8) == 0;
    int w575 = !w541 && chip->reg_m5 && (chip->l106[1] & 8) != 0;
    int w554 = 0;
    if (!w553)
        w554 |= chip->l193;
    if (w574)
    {
        w554 |= chip->l191;
        w554 |= chip->l194 << 8;
    }
    if (w575)
    {
        w554 |= chip->l192;
        w554 |= chip->l195 << 8;
    }
    w554 ^= 1023;

    int w532 = chip->l200[1] ? chip->reg_sb : chip->reg_sa;
    int w558 = chip->l200[1] || chip->l201[1];
    if (chip->reg_m5 && w558)
    {
        chip->vram_address &= ~0x1c000;
        chip->vram_address |= (w532 & 14) << 13;
    }
    if (w558)
    {
        int w568 = (chip->l106[1] & 256) != 0 && ((chip->l106[1] & 128) != 0 || (chip->l106[1] & 64) != 0);

        int w561 = chip->reg_rs1 ? w568 : (chip->l106[1] & 256) != 0;

        int w562 = !(w561 || chip->reg_m5);

        int w563 = w562 && (chip->l106[1] & 8) != 0;
        int w565 = (chip->l106[1] >> 4) & 15;
        if (w561)
            w565 |= 15;

        int w567 = w561 ? chip->reg_hsz : (((chip->l106[1] >> 8) & 1) | (w568 << 1));

        int w564 = ((w554 >> 3) & 1) || chip->reg_m5;
        int w555 = (1 + (w564 | ((w554 >> 3) & 126))
            + (w563 | (w565 << 1) | (w567 << 5))
            ) & 127;

        int w526 = chip->w106 ? ((w522 >> 4) & 127) : ((w522 >> 3) & 127);

        int w530 = (w526 & 28) == 28 || (w526 & 32) != 0;

        int w529 = !chip->reg_m5 && w530;

        int w528 = w526 & 3;
        w528 |= ((((w526 >> 2) & 7) + w529) << 2) & 28;
        if (chip->reg_vsz & 1)
            w528 |= w526 & 32;
        if (chip->reg_vsz & 2)
            w528 |= w526 & 64;

        int w527 = 0;
        if (chip->reg_hsz == 0)
        {
            w527 |= w528;
        }
        if (chip->reg_hsz == 1)
        {
            w527 |= (w528 << 1) & 126;
            w527 |= (w555 >> 5) & 1;
        }
        if (chip->reg_hsz == 3)
        {
            w527 |= (w528 << 2) & 124;
            w527 |= (w555 >> 5) & 3;
        }
        int w533 = chip->reg_m5 ? ((w527 >> 5) & 3) : chip->reg_nt;

        chip->vram_address &= ~0x3fff;
        chip->vram_address |= (w532 & 1) << 13;
        chip->vram_address |= w533 << 11;
        chip->vram_address |= (w527 & 31) << 6;
        chip->vram_address |= (w555 & 31) << 1;
    }

    if (chip->l314[1] && (chip->reg_test1 & 128) == 0) // hscroll
    {
        int w535 = w537;
        if (!chip->reg_lscr)
            w535 &= ~7;
        if (!chip->reg_hscr)
            w535 &= ~248;
        chip->vram_address = chip->reg_hs << 10;
        chip->vram_address |= w535 << 2;
    }
    if (chip->l202[1]) // window
    {

        int w536;
        if (chip->reg_rs1)
        {
            w536 = (chip->l106[1] >> 8) & 1;
            w536 |= (w537 >> 2) & 62;
        }
        else
        {
            w536 = (w537 >> 3) & 31;
            w536 |= (chip->reg_wd & 1) << 5;
        }
        chip->vram_address = 0;
        chip->vram_address |= ((chip->l106[1] >> 4) & 15) << 2;
        chip->vram_address |= w536 << 6;
        chip->vram_address |= ((chip->reg_wd >> 1) & 31) << 12;
    }
    if (chip->w232)
    {
        chip->reg_8e_b0 = (chip->reg_data.l2 >> 0) & 1;
        chip->reg_8e_b4 = (chip->reg_data.l2 >> 4) & 1;
    }

    if (chip->w219)
    {
        chip->reg_wd = (chip->reg_data.l2 >> 1) & 63;
    }

    if (chip->w233)
    {
        chip->reg_hs = chip->reg_data.l2 & 127;
    }

    if (chip->w223)
    {
        chip->reg_whp = chip->reg_data.l2 & 63;
        chip->reg_rigt = (chip->reg_data.l2 >> 7) & 1;
    }

    if (chip->w222)
    {
        chip->reg_wvp = chip->reg_data.l2 & 63;
        chip->reg_rigt = (chip->reg_data.l2 >> 7) & 1;
    }

    int w542 = (chip->reg_test1 & 128) != 0 || chip->l115[1];
    int w543 = chip->l115[1] && (chip->reg_m5 || chip->l162[1]);
    int w544 = w543 || (chip->reg_test1 & 128) != 0;

    if (w542)
    {
        chip->l188 = chip->reg_whp;
        chip->l187 = chip->reg_rigt;
    }

    if (w544)
    {
        chip->l190 = chip->reg_wvp;
        chip->l189 = chip->reg_down;
    }

    if (chip->w231)
    {
        chip->reg_88 = chip->reg_data.l2 & 255;
    }

    if (chip->l213 && clk2)
    {
        chip->l191 = chip->vram_serial;
    }

    if (chip->l215[1] && clk2)
    {
        chip->l192 = chip->vram_serial;
    }

    if (chip->l214[1] && clk2)
    {
        chip->l194 = chip->vram_serial & 3;
    }

    if (chip->l216[1] && clk2)
    {
        chip->l195 = chip->vram_serial & 3;
    }

    if ((chip->reg_test1 & 128) != 0 || chip->l115[1])
    {
        chip->l193 = chip->reg_88;
    }

    if (clk1)
    {
        chip->l213 = chip->hclk1 && chip->l316[1];
        chip->l214[1] = chip->l214[0];
        chip->l215[1] = chip->l215[0];
        chip->l216[1] = chip->l216[0];
    }
    if (clk2)
    {
        chip->l214[0] = chip->l213;
        chip->l215[0] = chip->l214[1];
        chip->l216[0] = chip->l215[1];
    }

    if (chip->l251 && clk2)
    {
        chip->l219 = chip->vram_serial;
    }

    if (chip->l252[1] && clk2)
    {
        chip->l220 = chip->vram_serial;
    }

    if (chip->l253[1] && clk2)
    {
        chip->l221 = chip->vram_serial;
    }

    if (chip->l254[1] && clk2)
    {
        chip->l222 = chip->vram_serial;
    }

    int w584 = chip->reg_m5 ? (chip->l220 & 8) != 0 : (chip->l220 & 2) != 0;
    int w585 = chip->reg_m5 ? (chip->l220 & 16) != 0 : (chip->l220 & 4) != 0;
    int w586 = chip->reg_m5 ? (chip->l220 >> 5) & 3 : (chip->l220 >> 3) & 1;
    int w587 = chip->reg_m5 ? (chip->l220 & 128) != 0 : (chip->l220 & 16) != 0;

    int w583 = chip->l218[1] ? (chip->l222 & 16) != 0 : w585;
    int w577 = chip->l217[1] ? (chip->w355 & 15) : (w522 & 15);
    if (w583)
        w577 ^= 15;

    if (chip->l196[1])
    {
        chip->vram_address &= ~0x1f;
        chip->vram_address |= (w577 & 7) << 2;
        chip->vram_address |= (!chip->l198[1]) << 1;
    }


    if (chip->l199[1])
    {
        int w578 = chip->w106 ? ((w577 >> 3) & 1) | (chip->l219 << 1) : chip->l219 | ((chip->l220 & 1) << 8);
        chip->vram_address &= ~0x3fe0;
        chip->vram_address |= w578 << 5;
    }

    int w581 = chip->l197[1] ? chip->reg_8e_b4 : chip->reg_8e_b0;

    if (chip->reg_m5 && chip->l199[1])
    {
        int w579 = chip->w106 ? (chip->l220 & 7) : ((chip->l220 >> 1) & 3) | (w581 << 2);
        chip->vram_address &= ~0x1c000;
        chip->vram_address |= w579 << 14;
    }

    if (chip->l218[1])
    {
        int w580 = chip->w106 ? ((w577 >> 3) & 1) | (chip->l221 << 1) | ((chip->l222 & 7) << 9)
            : chip->l221 | ((chip->l222 & 7) << 8) | (w581 << 11);
        chip->vram_address &= ~0x1ffe0;
        chip->vram_address |= w580 << 5;
    }

    if (chip->l230[1] && clk2)
    {
        chip->l223 = chip->vram_serial;

        chip->l259 = 0;
        if (chip->l222 & 8)
            chip->l259 |= 1;
        if (chip->l222 & 32)
            chip->l259 |= 4;
        if (chip->l222 & 64)
            chip->l259 |= 16;
        if (chip->l222 & 128)
            chip->l259 |= 64;
        if (w584)
            chip->l259 |= 2;
        if (w586 & 1)
            chip->l259 |= 8;
        if (w586 & 2)
            chip->l259 |= 32;
        if (w587)
            chip->l259 |= 128;
    }

    if (chip->l229[1] && clk2)
    {
        chip->l224 = chip->vram_serial;
    }

    if (chip->l228[1] && clk2)
    {
        chip->l225 = chip->vram_serial;
    }

    if (chip->l227 && clk2)
    {
        chip->l226 = chip->vram_serial;
    }

    if (clk1)
    {
        chip->l227 = (chip->l268[1] && chip->hclk1);
        chip->l228[1] = chip->l228[0];
        chip->l229[1] = chip->l229[0];
        chip->l230[1] = chip->l230[0];
        chip->l231[1] = chip->l231[0];
    }
    if (clk2)
    {
        chip->l228[0] = chip->l227;
        chip->l229[0] = chip->l228[1];
        chip->l230[0] = chip->l229[1];
        chip->l231[0] = chip->l230[1];
    }

    int w598 = chip->reg_m5 ? chip->l302[1] : chip->l231[1];

    if (w598 && clk2)
    {
        chip->l232 = chip->l223;
        chip->l233 = chip->l224;
        chip->l234 = chip->l225;
        chip->l235 = chip->l226;
        chip->l255 = chip->l243;
        chip->l256 = chip->l244;
        chip->l257 = chip->l245;
        chip->l258 = chip->l246;
        chip->l260 = chip->l259;
    }

    if (chip->l242[1])
    {
        chip->l236 = w554 & 15;
    }

    if (chip->hclk2 && chip->l266)
    {
        chip->l237 = chip->l232;
        chip->l238 = chip->l233;
        chip->l239 = chip->l234;
        chip->l240 = chip->l235;
        chip->l261 = chip->l255;
        chip->l262 = chip->l256;
        chip->l263 = chip->l257;
        chip->l264 = chip->l258;
        chip->l265 = chip->l260;
    }

    if (chip->l250[1] && clk2)
    {
        chip->l243 = chip->vram_serial;
    }

    if (chip->l249[1] && clk2)
    {
        chip->l244 = chip->vram_serial;
    }

    if (chip->l248[1] && clk2)
    {
        chip->l245 = chip->vram_serial;
    }

    if (chip->l247 && clk2)
    {
        chip->l246 = chip->vram_serial;
    }

    if (clk1)
    {
        chip->l247 = (chip->hclk1 && w612);
        chip->l248[1] = chip->l248[0];
        chip->l249[1] = chip->l249[0];
        chip->l250[1] = chip->l250[0];
    }
    if (clk2)
    {
        chip->l248[0] = chip->l247;
        chip->l249[0] = chip->l248[1];
        chip->l250[0] = chip->l249[1];
    }

    if (clk1)
    {
        chip->l251 = (chip->hclk1 && chip->l205[1]);
        chip->l252[1] = chip->l252[0];
        chip->l253[1] = chip->l253[0];
        chip->l254[1] = chip->l254[0];
    }
    if (clk2)
    {
        chip->l252[0] = chip->l251;
        chip->l253[0] = chip->l252[1];
        chip->l254[0] = chip->l253[1];
    }

    if (chip->l286[1] && clk2)
    {
        chip->l275 = chip->vram_serial;
    }
    if (chip->l285[1] && clk2)
    {
        chip->l276 = chip->vram_serial;
    }
    if (chip->l284[1] && clk2)
    {
        chip->l277 = chip->vram_serial;
    }
    if (chip->l283 && clk2)
    {
        chip->l278 = chip->vram_serial;
    }

    if (clk1)
    {
        chip->l283 = (chip->hclk1 && w638);
        chip->l284[1] = chip->l284[0];
        chip->l285[1] = chip->l285[0];
        chip->l286[1] = chip->l286[0];
    }
    if (clk2)
    {
        chip->l284[0] = chip->l283;
        chip->l285[0] = chip->l284[1];
        chip->l286[0] = chip->l285[1];
    }

    if (chip->l317 && chip->hclk2)
    {
        chip->l307 = chip->l303;
        chip->l308 = chip->l304;
        chip->l309 = chip->l305;
        chip->l310 = chip->l306;
        chip->l287 = chip->l279;
        chip->l288 = chip->l280;
        chip->l289 = chip->l281;
        chip->l290 = chip->l282;
        chip->l292 = chip->l291;
    }

    if (chip->l301[1] && clk2)
    {
        chip->l294 = chip->vram_serial;
    }
    if (chip->l300[1] && clk2)
    {
        chip->l295 = chip->vram_serial;
    }
    if (chip->l299[1] && clk2)
    {
        chip->l296 = chip->vram_serial;
    }
    if (chip->l298 && clk2)
    {
        chip->l297 = chip->vram_serial;
    }

    if (clk1)
    {
        chip->l298 = (chip->hclk1 && chip->l313[1]);
        chip->l299[1] = chip->l299[0];
        chip->l300[1] = chip->l300[0];
        chip->l301[1] = chip->l301[0];
        chip->l302[1] = chip->l302[0];
    }
    if (clk2)
    {
        chip->l299[0] = chip->l298;
        chip->l300[0] = chip->l299[1];
        chip->l301[0] = chip->l300[1];
        chip->l302[0] = chip->l301[1];
    }

    if (chip->l302[1] && clk2)
    {
        chip->l303 = chip->l294;
        chip->l304 = chip->l295;
        chip->l305 = chip->l296;
        chip->l306 = chip->l297;

        chip->l279 = chip->l275;
        chip->l280 = chip->l276;
        chip->l281 = chip->l277;
        chip->l282 = chip->l278;

        chip->l291 = 0;
        if (chip->l222 & 8)
            chip->l291 |= 1;
        if (chip->l222 & 32)
            chip->l291 |= 4;
        if (chip->l222 & 64)
            chip->l291 |= 16;
        if (chip->l222 & 128)
            chip->l291 |= 64;
        if (w584)
            chip->l291 |= 2;
        if (w586 & 1)
            chip->l291 |= 8;
        if (w586 & 2)
            chip->l291 |= 32;
        if (w587)
            chip->l291 |= 128;
    }

    if (chip->hclk1)
    {
        int i;
        int w649 = chip->w92 || chip->w415;
        i = w649 ? ((w554 & 15) ^ 8) : chip->l311[1];
        i++;
        chip->l311[0] = i & 15;
    }
    if (chip->hclk2)
    {
        chip->l311[1] = chip->l311[0];
    }

    if (chip->hclk1)
    {
        chip->l317 = (chip->l311[1] == 15);
    }

    // vsram
    {
        int index = chip->l212[1];
        if (chip->hclk1 && chip->l211[1])
        {
            if (index < 40)
            {
                chip->vsram[index] &= ~255;
                chip->vsram[index] |= chip->l181[1] & 255;
            }
        }
        if (chip->hclk1 && chip->l210[1])
        {
            if (index < 40)
            {
                chip->vsram[index] &= ~0x700;
                chip->vsram[index] |= chip->l181[1] & 0x700;
            }
        }
        if (index < 40)
        {
            chip->vsram_out = chip->vsram[index];
        }
        else
        {
            chip->vsram_out = 0; // FIXME: undefined behaviour
        }
    }
}

void VDP_ClockSprites(vdp_t *chip, int clk1, int clk2)
{
    int i, j;

    int w684 = !chip->reg_m5 && chip->l353[1];

    if (chip->l330[1])
    {
        chip->vram_data &= 0x7ff;
        chip->vram_data |= chip->l324;
    }

    int w678 = chip->l347[1] || chip->l348[1] || chip->l359[1];
    int w679 = !(chip->reg_m5 ? w678 : chip->l348[1]);

    if (chip->hclk1)
    {
        int w692 = chip->l358[1] || chip->l363[1] || chip->l364[1] || chip->l361[1];
        int index;
        if (w692)
        {
            index = (chip->l360[1] >> 3) & 63;
            if (chip->l362[1])
                index |= 64;
        }
        else
        {
            index = chip->l351[1];
        }
        int sat_link, sat_size, sat_ypos;

        int w687 = chip->l364[1] && (chip->l360[1] & 2) != 0;
        int w688 = chip->l363[1] && (chip->l360[1] & 2) != 0;
        int w689 = chip->l363[1] && (chip->l360[1] & 2) == 0;
        int w690 = chip->l364[1] && (chip->l360[1] & 2) == 0;
        if (w687) // link
        {
            if (index < 80)
            {
                chip->sat_cache_link[index] = chip->l104[1] & 127;
            }
        }
        if (w688) // size
        {
            if (index < 80)
            {
                chip->sat_cache_size[index] = chip->l366[1];
            }
        }
        if (w689) // ypos
        {
            if (index < 80)
            {
                chip->sat_cache_ypos[index] &= ~0x300;
                chip->sat_cache_ypos[index] |= (chip->l366[1] & 3) << 8;
            }
        }
        if (w690) // ypos
        {
            if (index < 80)
            {
                chip->sat_cache_ypos[index] &= ~255;
                chip->sat_cache_ypos[index] |= chip->l104[1] & 255;
            }
        }
        if (index < 80)
        {
            sat_link = chip->sat_cache_link[index];
            sat_size = chip->sat_cache_size[index];
            sat_ypos = chip->sat_cache_ypos[index];
        }
        else
        {
            // FIXME: undefined behaviour
            sat_link = 0;
            sat_size = 0;
            sat_ypos = 0;
        }

        int w656 = chip->reg_m5 && (chip->l332 & 256) == 0;

        int w657 = chip->reg_m5 ? (chip->l332 & 128) == 0 : chip->reg_81_b1;

        int w677 = !chip->reg_m5 && chip->l350[1];

        int w673 = chip->w106 ? (chip->l341 & 16) != 0 : (chip->l341 & 8) != 0;
        int w674 = chip->w106 ? (chip->l341 & 32) != 0 : (chip->l341 & 16) != 0;
        int w675 = chip->w106 ? 0 : (chip->l341 & 32) != 0;

        int w663 = !(chip->l338[1] || chip->l339[1]);
        int w664 = chip->l338[1] && !chip->l339[1];
        int w668 = !(w663 && w673);

        int w669 = !(!chip->l338[1] && w674);

        int w670 = !(w664 && w673 && w674);

        int w671 = (chip->l341 & 512) != 0 || !chip->w106;

        int w672 = (chip->l341 & 256) != 0 || !chip->reg_m5;

        int w665 = w668 && w669 && w670 && w671
            && w672 && (chip->l341 & 128) != 0 && (chip->l341 & 64) != 0
            && !w675 && chip->l383[1];

        int w666 = w677 ? (chip->l342 & 255) : chip->l344;

        int w667 = w666 == 208 && !chip->reg_m5;

        int w681 = chip->l348[1] || chip->l349[1];
        int w682 = chip->l349[1] || chip->l350[1];

        int w676 = chip->reg_m5 ? w681 : w682;

        int w655 = chip->reg_m5 && (chip->l332 & 127) == 127;
        int w658 = w676 && (w655 || w667);

        int w650 = chip->l325[1] ? (sat_size << 7) | sat_link : sat_ypos;
        if (chip->l326[1])
            chip->l324 = w650;

        int w685 = chip->reset_comb || chip->l115[1] || (!chip->l355[1] && chip->l356[1]);

        int w686 = chip->l147[1] && (chip->t38 || chip->l162[1]);

        int w691 = chip->reg_rs1 && (chip->vram_address & 512) != 0;

        int w696;
        if (chip->reg_m5)
        {
            w696 = chip->l351[1];
        }
        else
        {
            w696 = 64 | (chip->l365[3] << 1);
            if (chip->l116[1])
                w696 |= 1;
        }

        int w700 = !(chip->l368[1] || chip->l429);
        int w699 = chip->reg_m5 && chip->l370[1] && !w700;

        int w701 = chip->w360 || chip->l110[1];

        int w771 = chip->l420[1] == 0;

        int w784 = chip->l431[1] && w771;

        int w702 = !chip->reg_m5 || chip->l375[1] || w784;

        int w703 = w702 && !0;
        int w704 = w702 && 0;

        i = chip->reg_at;
        j = (chip->vram_address >> 9) & 255;
        if (chip->reg_rs1)
        {
            i |= 1;
            j |= 1;
        }
        int w740 = i == j;

        int w741 = w740 && (chip->vram_address & 4) == 0 && chip->reg_m5;

        int w693 = w741 && chip->w283;
        int w694 = w741 && chip->w284;

        int w698 = chip->l367[1] && (chip->l371[1] & 16) != 0 && (chip->l371[1] & 4) != 0;

        int w727 = !(chip->t40 || !w676);


        int w743 = (chip->reg_m5 && chip->reg_rs1 && (chip->l410[1] & 0x80000) != 0)
            || (chip->reg_m5 && !chip->reg_rs1 && (chip->l410[1] & 0x8000) != 0)
            || (!chip->reg_m5 && (chip->l410[1] & 0x80) != 0);

        int w716 = !w743 && chip->l396[1];

        int w719 = w665 && w743;
        int w720 = w665 && !w743;

        int w717 = w719 || chip->l382[1];

        int w738 = (chip->reg_test0 & 0x4000) == 0 && w717;
        int w732 = w738 || chip->w94 || chip->w95;

        int w708 = chip->w96 && (chip->reg_test_18 & 64) != 0 && (chip->reg_test_18 & 32) == 0;

        int w710 = chip->w96 && (chip->reg_test_18 & 64) == 0 && (chip->reg_test_18 & 32) != 0;

        int w711 = chip->w96 && (chip->reg_test_18 & 64) == 0 && (chip->reg_test_18 & 32) == 0;

        int w713 = chip->l374[1] && (chip->reg_test0 & 4096) == 0;

        int w712 = w711 || w713;

        int w715 = w710 || w713 || !chip->l426[1];
        int w709 = w708 || w713;

        int w772 = w771 && chip->l141[1];

        int w714 = !((chip->l376[1] & 512) != 0 && !chip->reg_m5);
        int w773 = chip->l423[1] && chip->l511[1] && w714;

        int w776 = !(!chip->reg_m5 || w772);

        int w777 = chip->l372[1] || w784;

        int w750 = chip->reg_m5 ? chip->w417 : chip->l397[1];

        int w781 = chip->l141[1] && chip->reg_m5;


        int w809 = chip->l106[1] + 1 + (chip->reg_m5 * (1 + 8) + !chip->reg_m5 * 16 + 4 + 32 + 64 + 128 + 256);
        w809 &= 511;

        int w848 = chip->l156[1] || (chip->reg_m5 && chip->l141[1]);

        int w849 = chip->reg_m5 ? chip->l509[1] : chip->l510[1];

        int w759 = chip->l426[1] && (chip->reg_test0 & 4096) != 0;
        int w760 = chip->l426[1] && (chip->reg_test0 & 4096) == 0;

        int w758 = 0; // h flip
        if (w759)
            w758 |= (chip->io_data >> 0) & 1;
        if (w760)
            w758 |= (chip->l387 >> 3) & 1;

        int w761 = 0; // pal 0
        if (w759)
            w761 |= (chip->io_data >> 1) & 3;
        if (w760)
            w761 |= (chip->l387 >> 5) & 3;

        int w763 = 0; // priority
        if (w759)
            w763 |= (chip->io_data >> 3) & 1;
        if (w760)
            w763 |= (chip->l387 >> 7) & 1;

        int w764 = 0; // xsize 0
        if (w759)
            w764 |= (chip->io_data >> 4) & 3;
        if (w760)
            w764 |= (chip->l379 >> 2) & 3;

        int w766 = 0; // ysize 0
        if (w759)
            w766 |= (chip->io_data >> 6) & 3;
        if (w760)
            w766 |= (chip->l379 >> 0) & 3;

        int w722 = (chip->l387 & 16) != 0 && (chip->l379 & 3) != 0;

        int w723 = (chip->l387 & 16) != 0 && (chip->l379 & 3) == 2;

        int w724 = (chip->l387 & 16) != 0 && (chip->l379 & 2) != 0;

        int w725 = chip->w106 ? ((chip->l380 >> 4) & 3) : ((chip->l380 >> 3) & 3);
        int w726 = (w725 + w723) & 3;

        int w728 = chip->l380 & 15;
        if (chip->l387 & 16)
            w728 ^= 15;

        int w730 = w726;
        if (w722)
            w730 ^= 1;
        if (w724)
            w730 ^= 2;

        int w729;
        if (chip->w106)
        {
            w729 = 0;
            w729 |= (w728 >> 3) & 1;
            w729 |= w730 << 1;
        }
        else
        {
            w729 = w730;
            w729 |= (chip->l380 >> 3) & 4;
        }

        int yoff = (w728 & 7) | (w729 << 3);

        int w768 = 0; // yoff
        if (w759)
            w768 |= (chip->io_data >> 8) & 63;
        if (w760)
            w768 |= yoff;

        int w774 = 0;
        if (w759)
            w774 |= chip->io_data & 0x7ff;
        if (w760)
            w774 |= (chip->l435 & 255) | ((chip->l387 & 7) << 8);

        int w775 = 0;
        if (w759)
            w775 |= chip->io_data & 0x1ff;
        if (w760)
            w775 |= (chip->l436 & 255) | ((chip->l386 & 1) << 8);

        int index2 = (chip->reg_test0 & 4096) != 0 ? (chip->reg_test_18 & 31) : chip->l371[1];
        if (w712)
        {
            if (index2 < 20)
            {
                chip->sprdata_pattern[index2] = w774;
            }
        }
        if (w715)
        {
            if (index2 < 20)
            {
                chip->sprdata_hpos[index2] = w775;
            }
        }
        if (w709)
        {
            if (index2 < 20)
            {
                chip->sprdata_hflip[index2] = w758;
                chip->sprdata_pal[index2] = w761;
                chip->sprdata_priority[index2] = w763;
                chip->sprdata_xs[index2] = w764;
                chip->sprdata_ys[index2] = w766;
                chip->sprdata_yoffset[index2] = w768;
            }
        }
        int w769 = (chip->w97 || w772);
        int sprdata_pattern_o;
        int sprdata_hpos_o;
        int sprdata_hflip_o;
        int sprdata_pal_o;
        int sprdata_priority_o;
        int sprdata_xs_o;
        int sprdata_ys_o;
        int sprdata_yoffset_o;
        if (index2 < 20)
        {
            sprdata_pattern_o = chip->sprdata_pattern[index2];
            sprdata_hpos_o = chip->sprdata_hpos[index2];
            sprdata_hflip_o = chip->sprdata_hflip[index2];
            sprdata_pal_o = chip->sprdata_pal[index2];
            sprdata_priority_o = chip->sprdata_priority[index2];
            sprdata_xs_o = chip->sprdata_xs[index2];
            sprdata_ys_o = chip->sprdata_ys[index2];
            sprdata_yoffset_o = chip->sprdata_yoffset[index2];
        }
        else
        {
            // FIXME: undefined behaviour
            sprdata_pattern_o = 0;
            sprdata_hpos_o = 0;
            sprdata_hflip_o = 0;
            sprdata_pal_o = 0;
            sprdata_priority_o = 0;
            sprdata_xs_o = 0;
            sprdata_ys_o = 0;
            sprdata_yoffset_o = 0;
        }

        if (w769)
        {
            chip->l413 = sprdata_hflip_o;
            chip->l414 = sprdata_pal_o;
            chip->l415 = sprdata_priority_o;
            chip->l416 = sprdata_xs_o;
            chip->l417 = sprdata_ys_o;
            chip->l418 = sprdata_yoffset_o;
            chip->l424 = sprdata_pattern_o;
            chip->l425 = sprdata_hpos_o;
        }

        chip->l325[0] = (chip->vram_address & 2) != 0;
        chip->l326[0] = chip->w179;
        chip->l327[0] = (sat_size << 7) | sat_link; // 7 link, 2 vsize, 2 hsize
        chip->l328 = chip->l327[1] ^ 0x7ff;
        chip->l329[0] = chip->l326[1];
        chip->l330[0] = chip->l329[1];
        chip->l331[0] = chip->l134[1];
        chip->l333 = !w679;
        chip->l336[0] = (chip->l332 & 1024) == 0;
        chip->l337[0] = (chip->l332 & 512) == 0;
        chip->l338[0] = w656;
        chip->l339[0] = w657;
        chip->l340 = w666 ^ 1023;
        chip->l345[0] = sat_ypos;
        chip->l346 = chip->l345[1] ^ 1023;
        chip->l347[0] = chip->l357[1];
        chip->l348[0] = chip->l347[1];
        chip->l349[0] = chip->l348[1];
        chip->l350[0] = chip->l349[1];
        chip->l352[0] = chip->l353[1];
        chip->l353[0] = chip->l147[1];
        chip->l354[0] = w685;
        chip->l355[0] = chip->l356[1];
        chip->l356[0] = chip->l162[1];
        chip->l357[0] = w686;
        chip->l358[0] = chip->l331[1];
        chip->l359[0] = chip->l358[1];
        chip->l360[0] = chip->vram_address & 0x1fa;
        chip->l361[0] = chip->w179;
        chip->l362[0] = w691;
        chip->l363[0] = w693;
        chip->l364[0] = w694;
        chip->l365[0] = chip->l351[1] & 31;
        chip->l365[2] = chip->l365[1];
        chip->l366[0] = (chip->vram_data >> 8) & 15;
        chip->l367[0] = w784;
        chip->l368[0] = w698;
        chip->l369[0] = w699;
        chip->l370[0] = w700;
        chip->l372[0] = chip->w360;
        chip->l373[0] = w701;
        chip->l374[0] = chip->l377[1];
        chip->l375[0] = chip->l374[1];
        chip->l376[0] = (chip->l376[1] << 1) | w743;
        chip->l377[0] = w716;
        chip->l378[0] = chip->l382[1];
        chip->l381[0] = chip->l115[1];
        chip->l382[0] = chip->w418;
        chip->l383[0] = w727;
        chip->l384[0] = w658;
        chip->l385[0] = w720;
        chip->l396[0] = w750;
        chip->l397[0] = chip->w417;
        chip->l398[0] = w696;
        chip->l399[0] = chip->l398[1];
        chip->l400[0] = chip->l399[1];
        chip->l401[0] = chip->l141[1];
        chip->l402[0] = chip->l142[1];
        chip->l411[0] = chip->l147[1];
        chip->l412[0] = chip->l134[1];
        chip->l419[0] = chip->l511[1];
        chip->l422[0] = chip->l421[1];
        chip->l423[0] = chip->t42;
        chip->l426[0] = w776;
        chip->l427[0] = w777;
        chip->l428[0] = w781;
        chip->l430[0] = chip->l431[1];
        chip->l431[0] = chip->l141[1];
        chip->l438[0] = w773;
        chip->l455[0] = chip->l438[1];
        chip->l456[0] = chip->l455[1];
        chip->l467[0] = (w809 & 4) != 0;
        chip->l468[0] = (w809 & 2) != 0;
        chip->l469[0] = (w809 & 1) != 0;
        chip->l470[0] = chip->l471[1];
        chip->l471[0] = chip->w388;
        chip->l475[0] = (w809 >> 3) & 63;
        chip->l507[0] = w848;
        chip->l508[0] = chip->l507[1];
        chip->l509[0] = chip->l508[1];
        chip->l510[0] = chip->l509[1];
        chip->l511[0] = w849;
        chip->l512 = !chip->w388;


        int w683 = chip->reg_m5 && (chip->l352[1] || chip->l353[1]);
        i = w683 ? sat_link : chip->l351[1];
        if (w684)
            i++;
        if (chip->l354[1])
            i = 0;
        i &= 127;
        chip->l351[0] = i;

        i = chip->l371[1];
        if (w703)
            i++;
        if (w704)
            i += 31;
        if (chip->l373[1])
            i = 0;
        chip->l371[0] = i & 31;

        i = w772 ? (sprdata_xs_o ^ 3) : chip->l420[1];
        i += chip->l141[1];
        if (chip->l372[1])
            i = 0;
        chip->l420[0] = i & 3;

        int w783 = chip->l372[1] || w772;
        chip->l432 = !w783;
        chip->l433 = chip->l430[1];

        if (w732)
        {
            int w739 = chip->w94 ? (chip->io_data & 15) : (chip->l341 & 15);
            chip->l388[0] = chip->l388[1] << 1;
            if (w739 & 1)
                chip->l388[0] |= 1;
            chip->l389[0] = chip->l389[1] << 1;
            if (w739 & 2)
                chip->l389[0] |= 1;
            chip->l390[0] = chip->l390[1] << 1;
            if (w739 & 4)
                chip->l390[0] |= 1;
            chip->l391[0] = chip->l391[1] << 1;
            if (w739 & 8)
                chip->l391[0] |= 1;
        }
        else
        {
            chip->l388[0] = chip->l388[1];
            chip->l389[0] = chip->l389[1];
            chip->l390[0] = chip->l390[1];
            chip->l391[0] = chip->l391[1];
        }
        if (w732)
        {
            int w752 = chip->w94 ? (chip->io_data >> 4) & 127 : chip->l400[1];

            int w753 = chip->w94 ? (chip->io_data & 2048) != 0 : chip->l382[1];
            chip->l403[0] = chip->l403[1] << 1;
            if (w752 & 1)
                chip->l403[0] |= 1;
            chip->l404[0] = chip->l404[1] << 1;
            if (w752 & 2)
                chip->l404[0] |= 1;
            chip->l405[0] = chip->l405[1] << 1;
            if (w752 & 4)
                chip->l405[0] |= 1;
            chip->l406[0] = chip->l406[1] << 1;
            if (w752 & 8)
                chip->l406[0] |= 1;
            chip->l407[0] = chip->l407[1] << 1;
            if (w752 & 16)
                chip->l407[0] |= 1;
            chip->l408[0] = chip->l408[1] << 1;
            if (w752 & 32)
                chip->l408[0] |= 1;
            chip->l409[0] = chip->l409[1] << 1;
            if (w752 & 64)
                chip->l409[0] |= 1;
            chip->l410[0] = chip->l410[1] << 1;
            if (w753)
                chip->l410[0] |= 1;
        }
        else
        {
            chip->l403[0] = chip->l403[1];
            chip->l404[0] = chip->l404[1];
            chip->l405[0] = chip->l405[1];
            chip->l406[0] = chip->l406[1];
            chip->l407[0] = chip->l407[1];
            chip->l408[0] = chip->l408[1];
            chip->l409[0] = chip->l409[1];
            chip->l410[0] = chip->l410[1];
        }
    }
    if (chip->hclk2)
    {
        int w654 = !chip->w106 && chip->reg_m5;

        int w653 = chip->w355;
        i = 0;
        if (w654)
            i |= 129;
        if (chip->w106)
            i |= 258;
        w653 += i;
        w653 &= 1023;

        int w662 = 1 + w653;
        w662 += chip->l340;
        w662 &= 1023;

        chip->l325[1] = chip->l325[0];
        chip->l326[1] = chip->l326[0];
        chip->l327[1] = chip->l327[0];
        chip->l329[1] = chip->l329[0];
        chip->l330[1] = chip->l330[0];
        chip->l331[1] = chip->l331[0];
        chip->l336[1] = chip->l336[0];
        chip->l337[1] = chip->l337[0];
        chip->l338[1] = chip->l338[0];
        chip->l339[1] = chip->l339[0];
        chip->l341 = w662 ^ 0x3c0;
        chip->l344 = chip->l343 ^ 1023;
        chip->l345[1] = chip->l345[0];
        chip->l347[1] = chip->l347[0];
        chip->l348[1] = chip->l348[0];
        chip->l349[1] = chip->l349[0];
        chip->l350[1] = chip->l350[0];
        chip->l352[1] = chip->l352[0];
        chip->l353[1] = chip->l353[0];
        chip->l354[1] = chip->l354[0];
        chip->l355[1] = chip->l355[0];
        chip->l356[1] = chip->l356[0];
        chip->l357[1] = chip->l357[0];
        chip->l358[1] = chip->l358[0];
        chip->l359[1] = chip->l359[0];
        chip->l360[1] = chip->l360[0];
        chip->l361[1] = chip->l361[0];
        chip->l362[1] = chip->l362[0];
        chip->l363[1] = chip->l363[0];
        chip->l364[1] = chip->l364[0];
        chip->l365[1] = chip->l365[0];
        chip->l365[3] = chip->l365[2];
        chip->l366[1] = chip->l366[0];
        chip->l367[1] = chip->l367[0];
        chip->l368[1] = chip->l368[0];
        chip->l369[1] = chip->l369[0];
        chip->l370[1] = chip->l370[0];
        chip->l372[1] = chip->l372[0];
        chip->l373[1] = chip->l373[0];
        chip->l374[1] = chip->l374[0];
        chip->l375[1] = chip->l375[0];
        chip->l376[1] = chip->l376[0];
        chip->l377[1] = chip->l377[0];
        chip->l378[1] = chip->l378[0];
        chip->l381[1] = chip->l381[0];
        chip->l382[1] = chip->l382[0];
        chip->l383[1] = chip->l383[0];
        chip->l384[1] = chip->l384[0];
        chip->l385[1] = chip->l385[0];
        chip->l396[1] = chip->l396[0];
        chip->l397[1] = chip->l397[0];
        chip->l398[1] = chip->l398[0];
        chip->l399[1] = chip->l399[0];
        chip->l400[1] = chip->l400[0];
        chip->l401[1] = chip->l401[0];
        chip->l402[1] = chip->l402[0];
        chip->l411[1] = chip->l411[0];
        chip->l412[1] = chip->l412[0];
        chip->l419[1] = chip->l419[0];
        chip->l422[1] = chip->l422[0];
        chip->l423[1] = chip->l423[0];
        chip->l426[1] = chip->l426[0];
        chip->l427[1] = chip->l427[0];
        chip->l428[1] = chip->l428[0];
        chip->l430[1] = chip->l430[0];
        chip->l431[1] = chip->l431[0];
        chip->l438[1] = chip->l438[0];
        chip->l455[1] = chip->l455[0];
        chip->l456[1] = chip->l456[0];
        chip->l464[1] = chip->l464[0];
        chip->l467[1] = chip->l467[0];
        chip->l468[1] = chip->l468[0];
        chip->l469[1] = chip->l469[0];
        chip->l470[1] = chip->l470[0];
        chip->l471[1] = chip->l471[0];
        chip->l475[1] = chip->l475[0];
        chip->l507[1] = chip->l507[0];
        chip->l508[1] = chip->l508[0];
        chip->l509[1] = chip->l509[0];
        chip->l510[1] = chip->l510[0];
        chip->l511[1] = chip->l511[0];

        chip->l351[1] = chip->l351[0];
        chip->l371[1] = chip->l371[0];
        chip->l420[1] = chip->l420[0];

        int w721 = chip->l384[1] || chip->l385[1];

        if (w721)
            chip->t40 = 1;
        else if (chip->l381[1])
            chip->t40 = 0;

        if (chip->l385[1])
            chip->t41 = 1;
        else if (chip->l381[1])
            chip->t41 = 0;

        if (chip->l372[1])
            chip->t42 = 1;
        else if (chip->l369[1])
            chip->t42 = 0;

        chip->l388[1] = chip->l388[0];
        chip->l389[1] = chip->l389[0];
        chip->l390[1] = chip->l390[0];
        chip->l391[1] = chip->l391[0];

        chip->l403[1] = chip->l403[0];
        chip->l404[1] = chip->l404[0];
        chip->l405[1] = chip->l405[0];
        chip->l406[1] = chip->l406[0];
        chip->l407[1] = chip->l407[0];
        chip->l408[1] = chip->l408[0];
        chip->l409[1] = chip->l409[0];
        chip->l410[1] = chip->l410[0];
    }


    int w652 = chip->hclk2 && clk2 && chip->l333;
    if (w652)
        chip->l332 = chip->l328;

    if (clk1)
    {
        chip->l334 = (chip->hclk1 && !w679);
        chip->l335[1] = chip->l335[0];
    }
    if (clk2)
    {
        chip->l335[0] = chip->l334;
    }

    if (chip->l335[1] && clk2)
        chip->l342 = chip->vram_serial;

    if (chip->l334 && clk2)
        chip->l343 = chip->reg_m5 ? chip->l346 : (chip->vram_serial ^ 1023);

    if (w684)
    {
        chip->vram_address &= ~255;
        chip->vram_address |= (chip->l351[1] & 31) << 1;
    }

    int w718 = chip->hclk1 && chip->l378[1] && clk1;

    if (w718)
    {
        chip->l379 = chip->l339[1] + chip->l338[1] * 2
            + chip->l337[1] * 4 + chip->l336[1] * 8;
        chip->l380 = chip->l341 & 63;
    }

    chip->w1154 = chip->t41 && chip->l115[1];

    int w745 = chip->l392[1] && clk2;
    if (w745)
    {
        chip->l386 = chip->vram_serial;
    }

    int w746 = chip->l393[1] && clk2;
    if (w746)
    {
        chip->l387 = chip->vram_serial;
    }


    int w751 = chip->l402[1] || chip->l401[1];
    int w742 = !chip->reg_m5 && w751;
    if (w742)
    {
        int w731 = chip->l401[1] ? chip->l387 : chip->l386;
        int w733 = chip->l401[1] ? (chip->l388[1] & 512) != 0 : (chip->l388[1] & 256) != 0;
        int w734 = chip->l401[1] ? (chip->l389[1] & 512) != 0 : (chip->l389[1] & 256) != 0;
        int w735 = chip->l401[1] ? (chip->l390[1] & 512) != 0 : (chip->l390[1] & 256) != 0;
        int w736 = chip->l401[1] ? (chip->l391[1] & 512) != 0 : (chip->l391[1] & 256) != 0;

        int w737 = chip->reg_81_b1 ? w736 : (w731 & 1) != 0;

        chip->vram_address &= ~0x3fff;

        if ((chip->l106[1] & 2) == 0)
            chip->vram_address |= 2;

        chip->vram_address |= (w731 & 254) << 5;

        chip->vram_address |= w733 << 2;
        chip->vram_address |= w734 << 3;
        chip->vram_address |= w735 << 4;
        chip->vram_address |= w737 << 5;

        chip->vram_address |= chip->reg_86_b2 << 13;
    }

    if (chip->w225)
    {
        chip->reg_86_b2 = (chip->reg_data.l2 >> 2) & 1;
        chip->reg_86_b5 = (chip->reg_data.l2 >> 5) & 1;
    }

    if (chip->w226)
    {
        chip->reg_at = chip->reg_data.l2 & 255;
    }

    int w754 = !chip->reg_m5 && (chip->l411[1] || chip->l412[1]);
    if (w754)
    {
        chip->vram_address &= ~0x3f00;
        chip->vram_address |= (chip->reg_at & 126) << 7;
    }

    if (clk1)
        chip->vram_serial = chip->input.i_vram_sd;

    if (clk1)
    {
        int w747 = !(chip->l396[1] && chip->hclk1);
        int w748 = !(chip->w417 && chip->hclk1);

        chip->l392[1] = chip->l392[0];
        chip->l393[1] = chip->l393[0];
        chip->l394 = !w747;
        chip->l395 = !w748;
    }
    if (clk2)
    {
        chip->l392[0] = chip->l394;
        chip->l393[0] = chip->l395;
    }

    int w756 = chip->reg_m5 && chip->l412[1];

    if (w756)
    {
        int w757 = 0;
        if (chip->reg_rs1)
        {
            if (chip->l409[1] & 0x80000)
                w757 |= 0x200;
            if (chip->l408[1] & 0x80000)
                w757 |= 0x100;
            if (chip->l407[1] & 0x80000)
                w757 |= 0x80;
            if (chip->l406[1] & 0x80000)
                w757 |= 0x40;
            if (chip->l405[1] & 0x80000)
                w757 |= 0x20;
            if (chip->l404[1] & 0x80000)
                w757 |= 0x10;
            if (chip->l403[1] & 0x80000)
                w757 |= 0x8;
        }
        else
        {
            if (chip->reg_at & 0x01)
                w757 |= 0x200;
            if (chip->l408[1] & 0x8000)
                w757 |= 0x100;
            if (chip->l407[1] & 0x8000)
                w757 |= 0x80;
            if (chip->l406[1] & 0x8000)
                w757 |= 0x40;
            if (chip->l405[1] & 0x8000)
                w757 |= 0x20;
            if (chip->l404[1] & 0x8000)
                w757 |= 0x10;
            if (chip->l403[1] & 0x8000)
                w757 |= 0x8;
        }

        chip->vram_address &= ~0x1fc00;
        chip->vram_address |= (chip->reg_at & 254) << 9;

        chip->vram_address &= ~0x3ff;
        
        chip->vram_address |= 4;
        chip->vram_address |= w757 & 0x3f8;
    }

    int w755 = !chip->reg_m5 && chip->l412[1];
    if (w755)
    {
        chip->vram_address &= ~0xff;
        if (chip->l409[1] & 0x80)
            chip->vram_address |= 0x80;
        if (chip->l408[1] & 0x80)
            chip->vram_address |= 0x40;
        if (chip->l407[1] & 0x80)
            chip->vram_address |= 0x20;
        if (chip->l406[1] & 0x80)
            chip->vram_address |= 0x10;
        if (chip->l405[1] & 0x80)
            chip->vram_address |= 0x8;
        if (chip->l404[1] & 0x80)
            chip->vram_address |= 0x4;
        if (chip->l403[1] & 0x80)
            chip->vram_address |= 0x2;
    }

    if (chip->hclk1)
    {
        i = chip->l421[1];
        i += chip->l419[1];
        if (chip->w360)
            i = 0;
        chip->l421[0] = i & 1;
    }
    if (chip->hclk2)
    {
        chip->l421[1] = chip->l421[0];
    }

    int w785 = chip->l433 ? chip->l417 : 0;
    int w787 = (chip->l433 + chip->l434[1] + w785) & 15;
    int w786 = chip->l432 ? w787 : 0;
    if (chip->l428[1])
    {
        int w778 = chip->w106 ? (chip->l418 >> 4) & 3 : (chip->l418 >> 3) & 3;
        int w779 = (w778 + w786) & 15;
        int w780 = (chip->l424 + w779) & 0x7ff;
        chip->vram_address = 0;
        chip->vram_address |= (chip->l418 & 7) << 2;
        if (chip->w106)
        {
            chip->vram_address |= (chip->l418 & 8) << 2;
            chip->vram_address |= w780 << 6;
        }
        else
        {
            chip->vram_address |= w780 << 5;
            chip->vram_address |= chip->reg_86_b5 << 16;
        }
    }

    if (chip->hclk2)
    {
        int w782 = (chip->l425 & 0x1ff) != 0;
        chip->l429 = !w782;
    }

    if (chip->hclk1)
    {
        chip->l434[1] = chip->l434[0];
    }
    if (chip->hclk2)
    {
        chip->l434[0] = w786;
    }

    int w749 = chip->l395 && clk2;
    if (w749)
        chip->l435 = chip->vram_serial;

    int w744 = chip->l394 && clk2;
    if (w744)
        chip->l436 = chip->vram_serial;

    if (chip->l438[1])
    {
        int w788 = chip->l422[1] ? chip->l436 : chip->l435;
        chip->l437 = w788;
    }

    if (chip->hclk1)
    {
        chip->l439[1] = chip->l439[0];
        chip->l439[3] = chip->l439[2];
        chip->l439[5] = chip->l439[4];
        chip->l439[7] = chip->l439[6];
        chip->l439[9] = chip->l439[8];

        chip->l440[1] = chip->l440[0];
        chip->l440[3] = chip->l440[2];
        chip->l440[5] = chip->l440[4];
        chip->l440[7] = chip->l440[6];
        chip->l440[9] = chip->l440[8];

        chip->l441[1] = chip->l441[0];
        chip->l441[3] = chip->l441[2];
        chip->l441[5] = chip->l441[4];
        chip->l441[7] = chip->l441[6];
        chip->l441[9] = chip->l441[8];

        chip->l442[1] = chip->l442[0];
        chip->l442[3] = chip->l442[2];
        chip->l442[5] = chip->l442[4];
        chip->l442[7] = chip->l442[6];
        chip->l442[9] = chip->l442[8];

        chip->l443[1] = chip->l443[0];
        chip->l443[3] = chip->l443[2];
        chip->l443[5] = chip->l443[4];
        chip->l443[7] = chip->l443[6];
        chip->l443[9] = chip->l443[8];
    }
    if (chip->hclk2)
    {
        chip->l439[0] = chip->l413;
        chip->l439[2] = chip->l439[1];
        chip->l439[4] = chip->l439[3];
        chip->l439[6] = chip->l439[5];
        chip->l439[8] = chip->l439[7];
        chip->l439[10] = chip->l439[9];

        chip->l440[0] = chip->l414;
        chip->l440[2] = chip->l440[1];
        chip->l440[4] = chip->l440[3];
        chip->l440[6] = chip->l440[5];
        chip->l440[8] = chip->l440[7];
        chip->l440[10] = chip->l440[9];

        chip->l441[0] = chip->l415;
        chip->l441[2] = chip->l441[1];
        chip->l441[4] = chip->l441[3];
        chip->l441[6] = chip->l441[5];
        chip->l441[8] = chip->l441[7];
        chip->l441[10] = chip->l441[9];

        chip->l442[0] = chip->l416;
        chip->l442[2] = chip->l442[1];
        chip->l442[4] = chip->l442[3];
        chip->l442[6] = chip->l442[5];
        chip->l442[8] = chip->l442[7];
        chip->l442[10] = chip->l442[9];

        chip->l443[0] = chip->l425;
        chip->l443[2] = chip->l443[1];
        chip->l443[4] = chip->l443[3];
        chip->l443[6] = chip->l443[5];
        chip->l443[8] = chip->l443[7];
        chip->l443[10] = chip->l443[9];
    }


    int w795 = chip->l439[10] && chip->reg_m5;
    int w808 = chip->l457[1] == 0;
    int w805 = chip->l456[1] && w808 && chip->hclk1;
    int w799 = chip->reg_m5 ? chip->l443[10] : chip->l437;

    int w814 = chip->l458[1] && (!chip->l454 || chip->l460[1]);

    if (clk1)
    {
        int w789 = !(chip->l444[1] || chip->l445[1]);
        int w790 = w789 && chip->l449[1];
        int w792 = (chip->l442[10] & 1) != 0 && w795;
        int w793 = (chip->l442[10] & 2) != 0 && w795;
        int w796 = !chip->reg_m5 && chip->reg_80_b3;
        int w797 = chip->reg_m5 || w796;
        int w794 = w793 || w796;
        int w791 = w792 || w796;
        int w798 = w789 && !chip->l449[1];
        int w800 = (w799 >> 3) + w795 + (w791 + w794 * 2 + w796 * (4 + 8) + w797 * (16 + 32));
        w800 &= 63;
        int w801 = chip->l444[1] ? chip->l446[1] : chip->l447[1];
        int w802 = w801 + w798 + (w790 * (1 + 2 + 4 + 8 + 16 + 32));
        w802 &= 63;
        int w810 = !(((w802 & 32) != 0 && chip->reg_rs1 && (w802 & 24) != 0)
            || ((w802 & 32) != 0 && !chip->reg_rs1));
        int w813 = chip->l460[1] ^ chip->l449[1];
        int w819 = !(chip->hclk2 && chip->l466);

        chip->l444[0] = w805;
        chip->l445[0] = chip->l454;
        chip->l446[0] = w800;
        chip->l447[0] = w802;
        chip->l449[0] = chip->l448;
        chip->l458[0] = w810;
        chip->l459[0] = !chip->l454;
        chip->l460[0] = chip->l459[1];
        chip->l461 = w813;
        chip->l462 = !w814;
        chip->l463[0] = w814;
        chip->l465 = !w819;
        chip->l472[0] = chip->l473;
        chip->l474[0] = w802;
    }
    if (clk2)
    {
        chip->l444[1] = chip->l444[0];
        chip->l445[1] = chip->l445[0];
        chip->l446[1] = chip->l446[0];
        chip->l447[1] = chip->l447[0];
        chip->l449[1] = chip->l449[0];
        chip->l458[1] = chip->l458[0];
        chip->l459[1] = chip->l459[0];
        chip->l460[1] = chip->l460[0];
        chip->l463[1] = chip->l463[0];
        chip->l472[1] = chip->l472[0];
        chip->l474[1] = chip->l474[0];
    }

    if (w805)
    {
        chip->l448 = w795;
        chip->l450 = chip->l441[10];
        chip->l452 = chip->l440[10];
    }


    int w803 = clk2 && chip->l499;
    if (w803)
    {
        chip->l451 = chip->l450;
        chip->l453 = chip->l452;
    }

    if (clk2)
    {
        chip->l454 = !chip->l499;
    }



    if (chip->hclk1)
    {
        int w804 = chip->l456[1] && w808;
        int w806 = !(chip->reg_m5 && (chip->l442[10] & 1) != 0);
        int w807 = !(chip->reg_m5 && (chip->l442[10] & 2) != 0);
        i = w804 ? (w806 + w807 * 2) : chip->l457[1];
        i += chip->l456[1];
        if (chip->w360)
            i = 0;
        chip->l457[0] = i & 3;
    }
    if (chip->hclk2)
    {
        chip->l457[1] = chip->l457[0];
    }

    int w816 = w814 || chip->l463[1];
    int w821 = !(chip->reg_m5 ? chip->l470[1] : chip->w388);
    int w820 = w821 || chip->l467[1] || chip->l468[1] || chip->l469[1];
    int w951 = !w820;

    int w817 = chip->l464[1] || w816 || w951 || (chip->reg_test0 & 8192) != 0;

    if (chip->hclk1)
        chip->l466 = !w820;
    if (chip->hclk1)
        chip->l464[0] = w951;

    if (w805)
    {
        chip->l473 = w799 & 7;
    }

    int w836 = !(chip->l500 && chip->hclk2);

    if (clk1)
    {
        int w850 = chip->l513[1] && !chip->l512;
        int w831 = !(chip->l509[1] && chip->hclk1);
        int w832 = !(chip->l511[1] && chip->hclk1);

        chip->l483 = !w831;
        chip->l484 = !w832;
        chip->l482[1] = chip->l482[0];
        chip->l485[1] = chip->l485[0];
        chip->l489[1] = chip->l489[0];
        chip->l490[1] = chip->l490[0];
        chip->l495[0] = w836;
        chip->l496[0] = chip->l495[1];
        chip->l497[0] = chip->l496[1];
        chip->l498[0] = chip->l497[1];
        chip->l499 = !chip->l498[1];
        chip->l501[0] = w795;
        chip->l504 = (chip->l503[1] << 1) | chip->l506[1];
        chip->l506[0] = chip->l505;
        chip->l513[0] = chip->l512;
        chip->l514[0] = w850;
    }
    if (clk2)
    {
        chip->l482[0] = chip->l483;
        chip->l485[0] = chip->l484;
        chip->l489[0] = chip->l485[1];
        chip->l490[0] = chip->l489[1];
        chip->l495[1] = chip->l495[0];
        chip->l496[1] = chip->l496[0];
        chip->l497[1] = chip->l497[0];
        chip->l498[1] = chip->l498[0];
        chip->l501[1] = chip->l501[0];
        chip->l506[1] = chip->l506[0];
        chip->l513[1] = chip->l513[0];
        chip->l514[1] = chip->l514[0];
    }

    if (clk2)
    {
        int w829 = chip->l482[1];
        int w830 = chip->l483;

        int w833 = chip->l484;
        int w834 = chip->l485[1];

        if (w834)
        {
            chip->l486 = chip->l479;
            chip->l487 = chip->l480;
            chip->l488 = chip->l481;
        }

        if (w834)
        {
            chip->l478 = chip->vram_serial;
        }
        if (w833)
        {
            chip->l479 = chip->vram_serial;
        }
        if (w829)
        {
            chip->l480 = chip->vram_serial;
        }
        if (w830)
        {
            chip->l481 = chip->vram_serial;
        }
    }

    int w835 = chip->l490[1] && clk2;
    if (w835)
    {
        chip->l491 = chip->l478;
        chip->l492 = chip->l486;
        chip->l493 = chip->l487;
        chip->l494 = chip->l488;
    }

    if (chip->hclk1)
        chip->l500 = chip->l438[1];

    if (clk1)
    {
        int w844 = 0;

        int w843 = 0;
        int w841 = !(!chip->reg_m5 || chip->l514[1]);
        if (w841)
        {
            int w837 = chip->l501[1] ? chip->l495[1] : chip->l498[1];
            int w838 = chip->l501[1] ? chip->l496[1] : chip->l497[1];
            int w839 = chip->l501[1] ? chip->l497[1] : chip->l496[1];
            int w840 = chip->l501[1] ? chip->l498[1] : chip->l495[1];
            if (!w837)
            {
                w843 |= chip->l492;
            }
            if (!w838)
            {
                w843 |= chip->l491;
            }
            if (!w839)
            {
                w843 |= chip->l494;
            }
            if (!w840)
            {
                w843 |= chip->l493;
            }
        }
        int w842 = !(chip->reg_m5 || chip->l514[1]);
        if (w842)
        {
            if (!chip->l495[1])
            {
                if (chip->l491 & 128)
                    w843 |= 128;
                if (chip->l492 & 128)
                    w843 |= 64;
                if (chip->l493 & 128)
                    w843 |= 32;
                if (chip->l494 & 128)
                    w843 |= 16;
                if (chip->l491 & 64)
                    w843 |= 8;
                if (chip->l492 & 64)
                    w843 |= 4;
                if (chip->l493 & 64)
                    w843 |= 2;
                if (chip->l494 & 64)
                    w843 |= 1;
            }
            if (!chip->l496[1])
            {
                if (chip->l491 & 32)
                    w843 |= 128;
                if (chip->l492 & 32)
                    w843 |= 64;
                if (chip->l493 & 32)
                    w843 |= 32;
                if (chip->l494 & 32)
                    w843 |= 16;
                if (chip->l491 & 16)
                    w843 |= 8;
                if (chip->l492 & 16)
                    w843 |= 4;
                if (chip->l493 & 16)
                    w843 |= 2;
                if (chip->l494 & 16)
                    w843 |= 1;
            }
            if (!chip->l497[1])
            {
                if (chip->l491 & 8)
                    w843 |= 128;
                if (chip->l492 & 8)
                    w843 |= 64;
                if (chip->l493 & 8)
                    w843 |= 32;
                if (chip->l494 & 8)
                    w843 |= 16;
                if (chip->l491 & 4)
                    w843 |= 8;
                if (chip->l492 & 4)
                    w843 |= 4;
                if (chip->l493 & 4)
                    w843 |= 2;
                if (chip->l494 & 4)
                    w843 |= 1;
            }
            if (!chip->l498[1])
            {
                if (chip->l491 & 2)
                    w843 |= 128;
                if (chip->l492 & 2)
                    w843 |= 64;
                if (chip->l493 & 2)
                    w843 |= 32;
                if (chip->l494 & 2)
                    w843 |= 16;
                if (chip->l491 & 1)
                    w843 |= 8;
                if (chip->l492 & 1)
                    w843 |= 4;
                if (chip->l493 & 1)
                    w843 |= 2;
                if (chip->l494 & 1)
                    w843 |= 1;
            }
        }

        int w847 = chip->l506[1] ^ chip->l501[1];
        if (w847)
        {
            w844 = ((w843 >> 4) & 15) | ((w843 << 4) & 240);
        }
        else
        {
            w844 = w843;
        }
        chip->l502 = w844;
    }

    int w846 = !w836;
    
    if (clk1)
    {
        i = w846 ? (w799>>1)&3 : chip->l503[1];
        i += !w846;
        chip->l503[0] = i & 3;
    }
    if (clk2)
    {
        chip->l503[1] = chip->l503[0];
    }

    if (w846)
        chip->l505 = w799 & 1;

    if (clk2)
    {
        int w877 = !((chip->reg_test0 & 8192) == 0 && chip->l563);
        int w860 = chip->l504 == 0;
        int w861 = chip->l504 == 1;
        int w862 = chip->l504 == 2;
        int w863 = chip->l504 == 3;
        int w828 = chip->l504 == 4;
        int w864 = chip->l504 == 5;
        int w865 = chip->l504 == 6;
        int w866 = chip->l504 == 7;

        int w873 = w861 || w877;
        int w876 = w863 || w877;
        int w880 = w864 || w877;
        int w883 = w866 || w877;
        int w872 = (w860 || w883);
        int w874 = (w873 || w860);
        int w875 = (w862 || w873);
        int w878 = (w876 || w862);
        int w879 = (w828 || w876);
        int w881 = (w880 || w828);
        int w882 = (w865 || w880);
        int w884 = (w883 || w865);

        int w845;
        if (chip->reg_test0 & 8192)
        {
            w845 = 0;
            if (chip->io_data & 64)
                w845 |= 8;
            if (chip->io_data & 32)
                w845 |= 4;
            if (chip->io_data & 16)
                w845 |= 2;
            if (chip->io_data & 8)
                w845 |= 1;
            if (chip->io_data & 16384)
                w845 |= 128;
            if (chip->io_data & 8192)
                w845 |= 64;
            if (chip->io_data & 4096)
                w845 |= 32;
            if (chip->io_data & 2048)
                w845 |= 16;
        }
        else
            w845 = chip->l502;

        if (w872)
        {
            chip->l515 = (w845 >> 4) & 15;
        }

        if (w874)
        {
            chip->l516 = w845 & 15;
        }

        if (w875)
        {
            chip->l517 = (w845 >> 4) & 15;
        }

        if (w878)
        {
            chip->l518 = w845 & 15;
        }

        if (w879)
        {
            chip->l519 = (w845 >> 4) & 15;
        }

        if (w881)
        {
            chip->l520 = w845 & 15;
        }

        if (w882)
        {
            chip->l521 = (w845 >> 4) & 15;
        }

        if (w884)
        {
            chip->l522 = w845 & 15;
        }

        int w885 = (chip->l562[1] || chip->l499);

        if (w885)
        {
            chip->l523 = chip->l515;
            chip->l524 = chip->l516;
            chip->l525 = chip->l517;
            chip->l526 = chip->l518;
            chip->l527 = chip->l519;
            chip->l528 = chip->l520;
            chip->l529 = chip->l521;
            chip->l530 = chip->l522;
        }

        chip->l562[0] = w877;
    }

    if (clk1)
    {
        int w851 = chip->l472[1] >= 1;
        int w867 = chip->l472[1] >= 2;
        int w868 = chip->l472[1] >= 3;
        int w869 = chip->l472[1] >= 4;
        int w827 = chip->l472[1] >= 5;
        int w870 = chip->l472[1] >= 6;
        int w871 = chip->l472[1] >= 7;
        chip->l531 = !w851;
        chip->l532 = !w867;
        chip->l533 = !w868;
        chip->l534 = !w869;
        chip->l535 = !w827;
        chip->l536 = !w870;
        chip->l537 = !w871;
    }

    if (clk2)
    {
        int w852 = !((chip->reg_test_18 & 128) == 0 && (chip->reg_test_18 & 64) == 0 && chip->w98);
        int w853 = !((chip->reg_test_18 & 128) == 0 && (chip->reg_test_18 & 64) != 0 && chip->w98);
        int w854 = !((chip->reg_test_18 & 128) != 0 && (chip->reg_test_18 & 64) == 0 && chip->w98);
        int w855 = !((chip->reg_test_18 & 128) != 0 && (chip->reg_test_18 & 64) != 0 && chip->w98);

        int w886 = chip->l531 ^ chip->l461;
        int w887 = chip->l532 ^ chip->l461;
        int w888 = chip->l533 ^ chip->l461;
        int w889 = chip->l534 ^ chip->l461;
        int w890 = chip->l535 ^ chip->l461;
        int w891 = chip->l536 ^ chip->l461;
        int w892 = chip->l537 ^ chip->l461;
        int w893 = !chip->l461;

        int w918 = chip->linebuffer_out[0].index != 0;
        int w919 = chip->linebuffer_out[1].index != 0;
        int w920 = chip->linebuffer_out[2].index != 0;
        int w921 = chip->linebuffer_out[3].index != 0;
        int w922 = chip->linebuffer_out[4].index != 0;
        int w923 = chip->linebuffer_out[5].index != 0;
        int w924 = chip->linebuffer_out[6].index != 0;
        int w925 = chip->linebuffer_out[7].index != 0;

        int w934 = chip->l523 != 0;
        int w935 = chip->l524 != 0;
        int w936 = chip->l525 != 0;
        int w937 = chip->l526 != 0;
        int w938 = chip->l527 != 0;
        int w939 = chip->l528 != 0;
        int w940 = chip->l529 != 0;
        int w941 = chip->l530 != 0;

        int w950 = 0;
        int w942 = w950 ? w934 : !w918;
        int w943 = w950 ? w935 : !w919;
        int w944 = w950 ? w936 : !w920;
        int w945 = w950 ? w937 : !w921;
        int w946 = w950 ? w938 : !w922;
        int w947 = w950 ? w939 : !w923;
        int w948 = w950 ? w940 : !w924;
        int w949 = w950 ? w941 : !w925;


        int w815 = !(chip->l462 || (chip->reg_test0 & 8192) != 0);
        int w894 = w886 && w815;
        int w895 = w887 && w815;
        int w896 = w888 && w815;
        int w897 = w889 && w815;
        int w898 = w890 && w815;
        int w899 = w891 && w815;
        int w900 = w892 && w815;
        int w901 = w893 && w815;

        int w818 = !(chip->l465 && (chip->reg_test0 & 8192) == 0);

        int w856 = !(w852 && w818);
        int w857 = !(w853 && w818);
        int w858 = !(w854 && w818);
        int w859 = !(w855 && w818);
        int w902 = !(w856 || (w894 && w942));
        int w903 = !(w856 || (w895 && w943));
        int w904 = !(w857 || (w896 && w944));
        int w905 = !(w857 || (w897 && w945));
        int w906 = !(w858 || (w898 && w946));
        int w907 = !(w858 || (w899 && w947));
        int w908 = !(w859 || (w900 && w948));
        int w909 = !(w859 || (w901 && w949));
        chip->l538 = !w902;
        chip->l539 = !w903;
        chip->l540 = !w904;
        chip->l541 = !w905;
        chip->l542 = !w906;
        chip->l543 = !w907;
        chip->l544 = !w908;
        chip->l545 = !w909;


        int w926 = w918 && w894 && w934;
        int w927 = w919 && w895 && w935;
        int w928 = w920 && w896 && w936;
        int w929 = w921 && w897 && w937;
        int w930 = w922 && w898 && w938;
        int w931 = w923 && w899 && w939;
        int w932 = w924 && w900 && w940;
        int w933 = w925 && w901 && w941;

        int w1020 = w926 || w927 || w928 || w929
            || w930 || w931 || w932 || w933;
        chip->l600[0] = w1020;
    }

    {
        int clk = w817;

        if (clk)
        {
            int index = 0;

            int w822 = w821 && (chip->reg_test0 & 8192) == 0;
            int w823 = !w821 && (chip->reg_test0 & 8192) == 0;
            int w824 = (chip->reg_test0 & 8192) != 0;
            if (w822)
                index |= chip->l474[1];
            if (w823)
                index |= chip->l475[1];
            if (w824)
                index |= chip->reg_test_18 & 63;
            int w979;
            int w980;
            int w982;
            int w983;
            if (chip->reg_test0 & 8192)
            {
                w979 = (chip->io_data & 1024) != 0;
                w980 = (chip->io_data >> 8) & 3;
                w982 = (chip->io_data & 4) != 0;
                w983 = chip->io_data & 3;
            }
            else
            {
                int w811 = chip->l451 && w821;
                int w812 = w821 ? chip->l453 : 0;
                w983 = w812;
                w980 = w812;
                w982 = w811;
                w979 = w811;
            }
            int w910 = chip->l538 && clk1;
            int w911 = chip->l539 && clk1;
            int w912 = chip->l540 && clk1;
            int w913 = chip->l541 && clk1;
            int w914 = chip->l542 && clk1;
            int w915 = chip->l543 && clk1;
            int w916 = chip->l544 && clk1;
            int w917 = chip->l545 && clk1;
            if (index < 40)
            {
                for (i = 0; i < 8; i++)
                {
                    chip->linebuffer_out[i] = chip->linebuffer[index][i];
                }
            }
            else
            {
                // FIXME: undefined behaviour
                for (i = 0; i < 8; i++)
                {
                    chip->linebuffer_out[i].priority = 0;
                    chip->linebuffer_out[i].pal = 0;
                    chip->linebuffer_out[i].index = 0;
                }
            }
            if (w910)
            {
                if (index < 40)
                {
                    chip->linebuffer[index][0].priority = w982;
                    chip->linebuffer[index][0].pal = w983;
                    chip->linebuffer[index][0].index = chip->l523;
                }
            }
            if (w911)
            {
                if (index < 40)
                {
                    chip->linebuffer[index][1].priority = w979;
                    chip->linebuffer[index][1].pal = w980;
                    chip->linebuffer[index][1].index = chip->l524;
                }
            }
            if (w912)
            {
                if (index < 40)
                {
                    chip->linebuffer[index][2].priority = w982;
                    chip->linebuffer[index][2].pal = w983;
                    chip->linebuffer[index][2].index = chip->l525;
                }
            }
            if (clk && w913)
            {
                if (index < 40)
                {
                    chip->linebuffer[index][3].priority = w979;
                    chip->linebuffer[index][3].pal = w980;
                    chip->linebuffer[index][3].index = chip->l526;
                }
            }
            if (w914)
            {
                if (index < 40)
                {
                    chip->linebuffer[index][4].priority = w982;
                    chip->linebuffer[index][4].pal = w983;
                    chip->linebuffer[index][4].index = chip->l527;
                }
            }
            if (w915)
            {
                if (index < 40)
                {
                    chip->linebuffer[index][5].priority = w979;
                    chip->linebuffer[index][5].pal = w980;
                    chip->linebuffer[index][5].index = chip->l528;
                }
            }
            if (w916)
            {
                if (index < 40)
                {
                    chip->linebuffer[index][6].priority = w982;
                    chip->linebuffer[index][6].pal = w983;
                    chip->linebuffer[index][6].index = chip->l529;
                }
            }
            if (w917)
            {
                if (index < 40)
                {
                    chip->linebuffer[index][7].priority = w979;
                    chip->linebuffer[index][7].pal = w980;
                    chip->linebuffer[index][7].index = chip->l530;
                }
            }
        }
        else
        {
            for (i = 0; i < 8; i++)
            {
                chip->linebuffer_out[i].priority = 1;
                chip->linebuffer_out[i].pal = 3;
                chip->linebuffer_out[i].index = 15;
            }
        }
    }

    if (chip->hclk1)
    {
        chip->l546[0] = chip->l546[1] >> 1;
        chip->l547[0] = chip->l547[1] >> 1;
        chip->l548[0] = chip->l548[1] >> 1;
        chip->l549[0] = chip->l549[1] >> 1;
        chip->l550[0] = chip->l550[1] >> 1;
        chip->l551[0] = chip->l551[1] >> 1;
        chip->l552[0] = chip->l552[1] >> 1;
        if (w951)
        {
            for (i = 0; i < 8; i++)
            {
                if (chip->linebuffer_out[i].pal & 1)
                    chip->l546[0] |= 1 << i;
            }
            for (i = 0; i < 8; i++)
            {
                if (chip->linebuffer_out[i].pal & 2)
                    chip->l547[0] |= 1 << i;
            }
            for (i = 0; i < 8; i++)
            {
                if (chip->linebuffer_out[i].priority)
                    chip->l548[0] |= 1 << i;
            }
            for (i = 0; i < 8; i++)
            {
                if (chip->linebuffer_out[i].index & 1)
                    chip->l549[0] |= 1 << i;
            }
            for (i = 0; i < 8; i++)
            {
                if (chip->linebuffer_out[i].index & 2)
                    chip->l550[0] |= 1 << i;
            }
            for (i = 0; i < 8; i++)
            {
                if (chip->linebuffer_out[i].index & 4)
                    chip->l551[0] |= 1 << i;
            }
            for (i = 0; i < 8; i++)
            {
                if (chip->linebuffer_out[i].index & 8)
                    chip->l552[0] |= 1 << i;
            }
        }
    }
    if (chip->hclk2)
    {
        chip->l546[1] = chip->l546[0] & 255;
        chip->l547[1] = chip->l547[0] & 255;
        chip->l548[1] = chip->l548[0] & 255;
        chip->l549[1] = chip->l549[0] & 255;
        chip->l550[1] = chip->l550[0] & 255;
        chip->l551[1] = chip->l551[0] & 255;
        chip->l552[1] = chip->l552[0] & 255;
    }

    chip->w973 = chip->l557[1] && chip->reg_m5;

    if (chip->hclk1)
    {
        int spr_pal = 0;
        if (chip->l546[1] & 1)
            spr_pal |= 1;
        if (chip->l547[1] & 1)
            spr_pal |= 2;
        int spr_priority = chip->l548[1] & 1;
        int spr_index = 0;
        if (chip->l549[1] & 1)
            spr_index |= 1;
        if (chip->l550[1] & 1)
            spr_index |= 2;
        if (chip->l551[1] & 1)
            spr_index |= 4;
        if (chip->l552[1] & 1)
            spr_index |= 8;
        int w970 = chip->reg_m5 ? chip->l553[1] : spr_pal;
        int w971 = chip->reg_m5 ? chip->l554[1] : spr_priority;
        int w972 = chip->reg_m5 ? chip->l555[1] : spr_index;
        int w974 = chip->reg_m5 ? chip->l556[1] : 1;

        chip->l553[0] = spr_pal;
        chip->l554[0] = spr_priority;
        chip->l555[0] = spr_index;
        chip->l556[0] = w970;
        chip->l557[0] = w971;
        chip->l558[0] = w972;

        chip->l559[0] = w974;
        chip->l560[0] = chip->w973;
        chip->l561[0] = chip->l558[1];
    }
    if (chip->hclk2)
    {
        chip->l553[1] = chip->l553[0];
        chip->l554[1] = chip->l554[0];
        chip->l555[1] = chip->l555[0];
        chip->l556[1] = chip->l556[0];
        chip->l557[1] = chip->l557[0];
        chip->l558[1] = chip->l558[0];

        chip->l559[1] = chip->l559[0];
        chip->l560[1] = chip->l560[0];
        chip->l561[1] = chip->l561[0];
    }

    chip->w975 = chip->l556[1] == 3;
    chip->w976 = chip->l558[1] != 0;
    chip->w977 = chip->l558[1] == 14;
    chip->w978 = chip->l558[1] == 15;

    if (clk1)
    {
        chip->l562[1] = chip->l562[0];
        chip->l563 = !chip->l514[1];
    }

    if (clk1)
    {
        chip->l600[1] = chip->l600[0];
    }
}

void VDP_ClockVRAMCtrl(vdp_t *chip, int clk1, int clk2)
{
    if (chip->hclk1)
    {
        chip->l564 = !chip->l116[1];
        chip->l568[0] = chip->w991;
        chip->l570 = !chip->w1000;
        chip->l571[0] = chip->w286;
        chip->l573 = !chip->l590[1];
        chip->l574[0] = chip->l109[1];
        chip->l575 = !chip->w1001;
        chip->l580 = !chip->w994;
        chip->l581[0] = chip->l582[1];
        chip->l582[0] = chip->w195;
        chip->l583[0] = chip->w1004;
        chip->l584[0] = chip->w999;
        chip->l585[0] = chip->w288;
        chip->l587[0] = chip->w1008;
        chip->l588[0] = chip->l108[1];
        chip->l589[0] = chip->l588[1];
        chip->l590[0] = chip->l574[1];
        chip->l591[0] = chip->w265;
    }
    if (chip->hclk2)
    {
        chip->l568[1] = chip->l568[0];
        chip->l569 = !chip->l570;
        chip->l571[1] = chip->l571[0];
        chip->l572 = !chip->l573;
        chip->l574[1] = chip->l574[0];
        chip->l581[1] = chip->l581[0];
        chip->l582[1] = chip->l582[0];
        chip->l583[1] = chip->l583[0];
        chip->l584[1] = chip->l584[0];
        chip->l585[1] = chip->l585[0];
        chip->l587[1] = chip->l587[0];
        chip->l588[1] = chip->l588[0];
        chip->l589[1] = chip->l589[0];
        chip->l590[1] = chip->l590[0];
        chip->l591[1] = chip->l591[0];
    }
    if (clk1)
    {
        chip->l565[0] = chip->l564;
        chip->l566 = !chip->l565[1];
        chip->l576[0] = !chip->l564;
        chip->l577 = !chip->l576[1];
        chip->l579 = chip->l578;
        chip->l586[0] = chip->w1007;
    }
    if (clk2)
    {
        chip->l565[1] = chip->l565[0];
        chip->l567 = !chip->l566;
        chip->l576[1] = chip->l576[0];
        chip->l578 = !chip->l577;
        chip->l586[1] = chip->l586[0];
    }

    chip->w985 = (chip->l565[1] && chip->w993 && chip->l579)
        || (chip->l575 && chip->l576[1])
        || (chip->l575 && !!!!chip->l576[1]); // FIXME

    chip->w986 = chip->l568[1] && chip->l577 && chip->l579;
    chip->w987 = chip->l577 && chip->l584[1] && chip->l579;

    chip->w988 = (chip->l566 && chip->l587[1]) || chip->l579;
    chip->w989 = (chip->l566 && !chip->l587[1]) || chip->l578;

    chip->w990 = (chip->w992 && chip->l579) || chip->l576[1] || (chip->reg_test0 & 32) != 0;

    chip->w991 = chip->w286 || chip->l571[1];

    chip->w992 = chip->l569 || !chip->l570;

    chip->w993 = !chip->w992 && (chip->l572 || !chip->l573);

    chip->w994 = !((chip->l116[1] && !chip->w265 && !chip->w263) || (chip->w265 && chip->l581[1]));

    chip->w995 = chip->l565[1];
    chip->w996 = chip->l576[1] && chip->l567; // addr high
    chip->w997 = chip->l578 && chip->l576[1]; // addr low

    chip->w998 = chip->l577 && chip->l579;

    chip->w999 = chip->w288 || chip->l585[1];

    chip->w1000 = chip->l585[1] || chip->l571[1];

    chip->w1001 = chip->l574[1] || chip->l590[1] || chip->w1008;

    chip->w1002 = chip->l116[1] && chip->hclk1;

    chip->w1003 = chip->hclk2 && chip->l580;

    chip->w1004 = chip->l116[1] && chip->l30[1];

    chip->w1005 = chip->hclk1 && chip->l116[1];

    chip->w1006 = clk1 && (!chip->w109 || chip->hclk2);

    chip->w1007 = chip->w109 && chip->hclk1;

    chip->w1008 = chip->l588[1] || chip->l589[1];

    chip->w1009 = (chip->reg_test0 & 32) != 0 ? (chip->vram_address & 0x10000) != 0 : chip->l614[1];

    chip->w1010 = chip->reg_m5 && (chip->vram_address & 2) != 0;
    chip->w1011 = chip->w1010 || (!chip->reg_m5 && (chip->vram_address & 0x200) != 0);

    chip->w1013 = chip->reg_8b_b4 ? chip->reg_8b_b5 : (chip->vram_address & 0x10000) != 0;

    chip->w1012 = 0;
    if (chip->w109) // 128k
    {
        chip->w1012 |= chip->w1010;
        chip->w1012 |= (chip->vram_address >> 9) & 0x7e;
        chip->w1012 |= chip->w1013 << 7;
    }
    else
    {
        chip->w1012 |= chip->vram_address & 1;
        chip->w1012 |= chip->w1011 << 1;
        chip->w1012 |= (chip->vram_address >> 8) & 0xfc;
    }
    chip->w1014 = 0;
    if (chip->reg_m5)
    {
        chip->w1014 |= (chip->vram_address >> 2) & 0xff;
    }
    else
    {
        chip->w1014 |= (chip->vram_address >> 1) & 0xff;
    }
    if (chip->w1002)
    {
        chip->l592 = chip->w1012;
        chip->l593 = chip->w1014;
    }

    chip->w1015 = 0;
    if (chip->w997)
    {
        chip->w1015 |= chip->l592; // addr high
    }
    if (chip->w996)
    {
        chip->w1015 |= chip->l593; // addr low
    }
    if (chip->w995)
    {
        chip->w1015 |= chip->l594;
    }

    if (chip->w1003)
    {
        chip->l594 = chip->w1016;
    }

    if (chip->l591[1])
    {
        chip->w1016 = chip->l599;
    }
    else
    {
        chip->w1016 = chip->l595;
    }

    if (chip->w1005)
    {
        chip->l595 = chip->vram_data & 255;
        chip->l596 = (chip->vram_data >> 8) & 255;
    }

    if (chip->l591[1])
    {
        chip->w1017 = chip->l598;
    }
    else
    {
        chip->w1017 = chip->l596;
    }

    if (chip->w1003)
    {
        chip->l597 = chip->w1017;
    }
    if (chip->w998)
    {
        chip->l598 = chip->input.i_vram_rd;
    }

    if (chip->w998)
    {
        chip->l599 = chip->input.i_vram_ad;
    }

    if (chip->l583[1])
    {
        chip->vram_data = chip->l599 & 255;
        chip->vram_data |= (chip->l598 & 255) << 8;
    }

    chip->w1018 = (chip->reg_test0 & 32) != 0 ? (chip->vram_address & 0xff) : chip->w1015;
    chip->w1019 = (chip->reg_test0 & 32) != 0 ? ((chip->vram_address >> 8) & 0xff) : chip->l597;

    chip->o_vram_se0 = chip->l586[1];
    chip->o_vram_se1 = !chip->l586[1];
    chip->o_vram_sc = !chip->w1006;
    chip->o_vram_ras = !chip->w989;
    chip->o_vram_cas = !chip->w988;
    chip->o_vram_we1 = !chip->w987;
    chip->o_vram_we0 = !chip->w986;
    chip->o_vram_oe1 = !chip->w985;

    if (chip->w990)
    {
        chip->o_vram_rd = chip->w1019;
        chip->o_vram_rd_z = 0;
        chip->o_vram_ad = chip->w1018;
        chip->o_vram_ad_z = 0;
    }
    else
    {
        chip->o_vram_rd_z = 1;
        chip->o_vram_ad_z = 1;
    }

    chip->o_ys = chip->w1009;

    chip->o_spa = chip->l613[1] ? state_z : state_0;
}

// FIXME: crude approximation

int rgb_val_m5[15] = {
    0, 18, 36, 54, 72, 91, 109, 127, 145, 163, 182, 200, 218, 236, 255
};

int rgb_val_m4_rg[2] = {
    85, 170
};

int rgb_val_m4_b[2] = {
    102, 170
};

void VDP_ClockVideoMux(vdp_t *chip)
{
    int i;
    int rgb[3];
    if (chip->hclk1)
    {
        chip->l601[0] = chip->w302;
        chip->l602[0] = chip->w303;
        chip->l603[0] = chip->w1044;
        chip->l604[0] = chip->w1051;
        chip->l605[0] = chip->w1058;
        chip->l606[0] = chip->w1061;
        chip->l607[0] = chip->w1066;
        chip->l608[0] = chip->w1068;
        chip->l609[0] = chip->w1069;
        chip->l610[0] = chip->l609[1];
        chip->l611[0] = chip->w1070;
        chip->l612[0] = chip->l611[1];
        chip->l613[0] = chip->w1071;
        chip->l614[0] = chip->w1074;
        chip->l615[0] = !chip->input.i_spa;
        chip->l616[0] = chip->l616[1] << 1;
        chip->l616[0] |= chip->w389;
        chip->l617[0] = chip->w1076;
        chip->l618[0] = chip->l618[1] << 1;
        chip->l618[0] |= chip->w1075;
        chip->l619[0] = chip->w1077;
        chip->l620[0] = (chip->vram_data >> 9) & 7;
        chip->l622[0] = chip->color_ram_out;
        chip->l623[0] = chip->l623[1] << 1;
        chip->l623[0] |= chip->w178;
        chip->l624[0] = chip->w1081;
        chip->l625[0] = chip->l619[1];
        chip->l626[0] = chip->w1100 | (chip->w1089 << 1) | (chip->w1090 << 2);
        chip->l627[0] = chip->w1099 | (chip->w1091 << 1) | (chip->w1092 << 2);
        chip->l628[0] = chip->w1098 | (chip->w1093 << 1) | (chip->w1094 << 2);
        chip->l629[0] = chip->l610[1];
        chip->l630[0] = chip->l612[1];
    }
    if (chip->hclk2)
    {
        chip->l601[1] = chip->l601[0];
        chip->l602[1] = chip->l602[0];
        chip->l603[1] = chip->l603[0];
        chip->l604[1] = chip->l604[0];
        chip->l605[1] = chip->l605[0];
        chip->l606[1] = chip->l606[0];
        chip->l607[1] = chip->l607[0];
        chip->l608[1] = chip->l608[0];
        chip->l609[1] = chip->l609[0];
        chip->l610[1] = chip->l610[0];
        chip->l611[1] = chip->l611[0];
        chip->l612[1] = chip->l612[0];
        chip->l613[1] = chip->l613[0];
        chip->l614[1] = chip->l614[0];
        chip->l615[1] = chip->l615[0];
        chip->l616[1] = chip->l616[0];
        chip->l617[1] = chip->l617[0];
        chip->l618[1] = chip->l618[0];
        chip->l619[1] = chip->l619[0];
        chip->l620[1] = chip->l620[0];
        chip->l622[1] = chip->l622[0];
        chip->l623[1] = chip->l623[0];
        chip->l624[1] = chip->l624[0];
        chip->l625[1] = chip->l625[0];
        chip->l626[1] = chip->l626[0];
        chip->l627[1] = chip->l627[0];
        chip->l628[1] = chip->l628[0];
        chip->l629[1] = chip->l629[0];
        chip->l630[1] = chip->l630[0];
    }
    chip->w1021 = chip->w302 || chip->w178 || chip->w303;

    // l273[1] - A priority
    // l320[1] - B priority
    // w973 - sprite priority

    chip->w1022 = chip->l273[1] ? chip->w973 : !chip->l320[1];
    chip->w1023 = !chip->l273[1] && chip->w973 && chip->l320[1];
    chip->w1024 = chip->l273[1] && !chip->w973 && !chip->l320[1];
    chip->w1025 = !chip->l273[1] && !chip->w973 && chip->l320[1];
    chip->w1026 = chip->l273[1] && !chip->w973 && chip->l320[1];
    chip->w1029 = chip->reg_ste && chip->reg_m5;
    chip->w1027 = chip->w1029 && !chip->l273[1] && !chip->w973 && !chip->l320[1];
    chip->w1028 = chip->w1029 && !chip->l273[1] && chip->w973 && !chip->l320[1];
    chip->w1030 = chip->w1029 && chip->w975 && chip->w1065;
    chip->w1031 = chip->w1030 || !chip->w976;

    chip->w1032 = !chip->w646 && (chip->reg_m5 || chip->w976);
    chip->w1033 = !chip->reg_m5 || !chip->w648;

    chip->w1034 = (chip->reg_test0 & 384) == 128;
    chip->w1035 = (chip->reg_test0 & 384) == 256;
    chip->w1036 = (chip->reg_test0 & 384) == 384;
    chip->w1037 = (chip->reg_test0 & 384) == 0;

    chip->w1062 = (chip->reg_test0 & 64) == 0 && (chip->l618[1] & 4) != 0;

    chip->w1038 = chip->w1032 && chip->w1024;
    chip->w1039 = chip->w1025 && chip->w1033;
    chip->w1040 = chip->w1032 && chip->w1033 && chip->w1026;
    chip->w1041 = chip->w1038 || chip->w1039 || chip->w1040 || chip->w1022 || chip->w1023;
    chip->w1042 = chip->w1041 && chip->w976 && chip->w1062;

    chip->w1043 = chip->w1042 && !chip->w1030;
    chip->w1044 = chip->w1043 || chip->w1034;

    chip->w1045 = chip->w1042 && chip->w1030;
    chip->w1046 = chip->w1031 && chip->w1022;

    chip->w1047 = chip->w1031 && chip->w1033 && chip->w1023;
    chip->w1048 = chip->w1031 && chip->w1033 && chip->w1025;

    chip->w1049 = chip->w1048 || chip->w1047 || chip->w1046 || chip->w1026 || chip->w1024;
    chip->w1050 = chip->w1049 && !chip->w1032 && chip->w1062;
    chip->w1051 = chip->w1050 || chip->w1035;

    chip->w1052 = chip->w1031 && chip->w1023;
    chip->w1053 = chip->w1032 && chip->w1026;
    chip->w1054 = chip->w1032 && chip->w1031 && chip->w1022;
    chip->w1055 = chip->w1032 && chip->w1031 && chip->w1024;
    chip->w1056 = chip->w1055 || chip->w1053 || chip->w1052 || chip->w1054 || chip->w1025;
    chip->w1057 = chip->w1056 && !chip->w1033 && chip->w1062;
    chip->w1058 = chip->w1057 || chip->w1036;

    chip->w1059 = chip->w1032 && chip->w1031 && chip->w1033;
    chip->w1060 = chip->w1059 || !chip->w1062;
    chip->w1061 = chip->w1060 && chip->w1037;

    chip->w1063 = !chip->w1044 && !chip->w977;
    chip->w1064 = !chip->w1027 && !chip->w1028;
    chip->w1065 = chip->w977 || chip->w978;

    chip->w1066 = chip->w1064 && chip->w977 && chip->w1045;

    chip->w1067 = (chip->w1045 && chip->w978) || (!chip->w977 && chip->w1027)
        || (!chip->w1064 && chip->w1063);

    chip->w1068 = chip->w1067 && (chip->l618[1] & 4) != 0;

    chip->w1069 = (chip->reg_test0 & 64) != 0 ? chip->reg_col_b6 : chip->l608[1];

    chip->w1070 = (chip->reg_test0 & 64) != 0 ? chip->reg_col_b7 : chip->l607[1];

    chip->w1071 = !(chip->l603[1] && chip->reg_8c_b4);

    chip->w1072 = chip->reg_m5 && chip->w1021;
    chip->w1073 = !chip->reg_m5 && chip->w1021;

    if (chip->w221)
    {
        chip->reg_col_index = (chip->reg_data.l2 >> 0) & 15;
        chip->reg_col_pal = (chip->reg_data.l2 >> 4) & 3;
        chip->reg_col_b6 = (chip->reg_data.l2 >> 6) & 1;
        chip->reg_col_b7 = (chip->reg_data.l2 >> 7) & 1;
    }

    if (chip->l606[1] + chip->l603[1] + chip->l605[1] + chip->l604[1] > 1)
    {
        // overdrive 2 plane mixing hack
        chip->color_index = 15;
        chip->color_pal = 3;
        chip->color_priority = 1;
        if (chip->l606[1])
        {
            chip->color_index &= chip->reg_col_index;
            chip->color_pal &= chip->reg_m5 ? chip->reg_col_pal : 1;
            chip->color_priority &= 0;
        }

        if (chip->l603[1])
        {
            chip->color_pal &= chip->l559[1];
            chip->color_priority &= chip->l560[1];
            chip->color_index &= chip->l561[1];
        }

        if (chip->l605[1])
        {
            chip->color_index &= chip->l319[1];
            chip->color_pal &= chip->l323[1];
            chip->color_priority &= chip->l321[1];
        }

        if (chip->l604[1])
        {
            chip->color_index &= chip->l270[1];
            chip->color_pal &= chip->l272[1];
            chip->color_priority &= chip->l274[1];
        }
    }
    else
    {
        if (chip->l606[1])
        {
            chip->color_index = chip->reg_col_index;
            chip->color_pal = chip->reg_m5 ? chip->reg_col_pal : 1;
            chip->color_priority = 0;
        }

        if (chip->l603[1])
        {
            chip->color_pal = chip->l559[1];
            chip->color_priority = chip->l560[1];
            chip->color_index = chip->l561[1];
        }

        if (chip->l605[1])
        {
            chip->color_index = chip->l319[1];
            chip->color_pal = chip->l323[1];
            chip->color_priority = chip->l321[1];
        }

        if (chip->l604[1])
        {
            chip->color_index = chip->l270[1];
            chip->color_pal = chip->l272[1];
            chip->color_priority = chip->l274[1];
        }
    }

    chip->w1074 = !(chip->w1082 || (chip->l615[1] && !chip->reg_8c_b4));

    chip->w1075 = chip->reg_m5 ? (chip->l616[1] & 128) != 0 : chip->w389;

    chip->w1076 = 0;
    if (!chip->w1021)
    {
        chip->w1076 |= (chip->color_index & 15) | ((chip->color_pal & 3) << 4);
    }
    if (chip->w1072)
    {
        chip->w1076 |= (chip->vram_address >> 1) & 63;
    }
    if (chip->w1073)
    {
        chip->w1076 |= chip->vram_address & 31;
    }

    chip->w1077 = (chip->color_index & 15) == 0;

    if (chip->reg_m5)
        chip->w1078 = (chip->l104[1] >> 1) & 7;
    else
        chip->w1078 = chip->l104[1] & 7;

    if (chip->reg_m5)
        chip->w1079 = (chip->l104[1] >> 5) & 7;
    else
        chip->w1079 = (chip->l104[1] >> 3) & 7;

    // color ram
    {
        int index = chip->l617[1] & 63;
        if (chip->hclk1 && chip->l602[1])
        {
            chip->color_ram[index] &= ~63;
            chip->color_ram[index] |= (chip->w1078 & 7) << 0;
            chip->color_ram[index] |= (chip->w1079 & 7) << 3;
        }
        if (chip->hclk1 && chip->l601[1])
        {
            chip->color_ram[index] &= ~0x1c0;
            chip->color_ram[index] |= (chip->l620[1] & 7) << 6;
        }
        chip->color_ram_out = chip->color_ram[index];
    }

    if (chip->w1080)
    {
        chip->l621 = chip->color_ram_out;
    }
    if (chip->l623[1] & 4)
    {
        chip->vram_data &= ~0xeee;
        chip->vram_data |= (chip->l621 & 7) << 1;
        chip->vram_data |= (chip->l621 & 0x38) << 2;
        chip->vram_data |= (chip->l621 & 0x1c0) << 3;
    }

    chip->w1080 = (chip->l623[1] & 1) != 0 && chip->hclk1;

    chip->w1081 = !(chip->w422 || chip->t37);

    chip->w1082 = chip->l625[1] && chip->l624[1];

    chip->w1083 = chip->reg_m5 ? (chip->l622[1] & 2) != 0 : (chip->l622[1] & 1) != 0;
    chip->w1084 = chip->reg_m5 ? (chip->l622[1] & 4) != 0 : (chip->l622[1] & 2) != 0;
    chip->w1085 = chip->reg_m5 ? (chip->l622[1] & 16) != 0 : (chip->l622[1] & 4) != 0;
    chip->w1086 = chip->reg_m5 ? (chip->l622[1] & 32) != 0 : (chip->l622[1] & 8) != 0;
    chip->w1087 = chip->reg_m5 ? (chip->l622[1] & 128) != 0 : (chip->l622[1] & 16) != 0;
    chip->w1088 = chip->reg_m5 ? (chip->l622[1] & 256) != 0 : (chip->l622[1] & 32) != 0;

    chip->w1089 = chip->w1083 && chip->l624[1] && chip->reg_80_b2;
    chip->w1090 = chip->w1084 && chip->l624[1] && chip->reg_80_b2;
    chip->w1091 = chip->w1085 && chip->l624[1] && chip->reg_80_b2;
    chip->w1092 = chip->w1086 && chip->l624[1] && chip->reg_80_b2;
    chip->w1093 = chip->w1087 && chip->l624[1] && chip->reg_80_b2;
    chip->w1094 = chip->w1088 && chip->l624[1] && chip->reg_80_b2;

    chip->w1098 = (chip->l622[1] & 64) != 0 && chip->l624[1] && chip->reg_m5;
    chip->w1099 = (chip->l622[1] & 8) != 0 && chip->l624[1] && chip->reg_m5;
    chip->w1100 = (chip->l622[1] & 1) != 0 && chip->l624[1] && chip->reg_m5;

    chip->w1101 = !(chip->l629[1] || chip->l630[1] || !chip->reg_m5);
    chip->w1102 = !chip->l630[1] && chip->l629[1];

    rgb[0] = chip->l626[1];
    rgb[1] = chip->l627[1];
    rgb[2] = chip->l628[1];

    for (i = 0; i < 3; i++)
    {
        chip->w1103[i][0] = 0;
        chip->w1103[i][1] = 0;
        chip->w1103[i][2] = 0;
        chip->w1103[i][3] = 0;
        chip->w1103[i][4] = 0;
        chip->w1103[i][5] = 0;
        chip->w1103[i][6] = 0;
        chip->w1103[i][7] = 0;
        chip->w1103[i][8] = 0;
        chip->w1103[i][9] = 0;
        chip->w1103[i][10] = 0;
        chip->w1103[i][11] = 0;
        chip->w1103[i][12] = 0;
        chip->w1103[i][13] = 0;
        chip->w1103[i][14] = 0;
        chip->w1103[i][15] = 0;
        chip->w1103[i][16] = 0;
        if (chip->w1101)
        {
            switch (rgb[i])
            {
            case 0:
                chip->w1103[i][0] = 1;
                break;
            case 1:
                chip->w1103[i][2] = 1;
                break;
            case 2:
                chip->w1103[i][4] = 1;
                break;
            case 3:
                chip->w1103[i][7] = 1;
                break;
            case 4:
                chip->w1103[i][9] = 1;
                break;
            case 5:
                chip->w1103[i][12] = 1;
                break;
            case 6:
                chip->w1103[i][14] = 1;
                break;
            case 7:
                chip->w1103[i][16] = 1;
                break;
            }
        }
        if (!chip->reg_m5)
        {
            switch (rgb[i])
            {
            case 0:
            case 1:
                chip->w1103[i][0] = 1;
                break;
            case 2:
            case 3:
                chip->w1103[i][5] = 1;
                break;
            case 4:
            case 5:
                chip->w1103[i][11] = 1;
                break;
            case 6:
            case 7:
                chip->w1103[i][16] = 1;
                break;
            }
        }
        if (chip->w1102)
        {
            switch (rgb[i])
            {
            case 0:
                chip->w1103[i][0] = 1;
                break;
            case 1:
                chip->w1103[i][1] = 1;
                break;
            case 2:
                chip->w1103[i][2] = 1;
                break;
            case 3:
                chip->w1103[i][3] = 1;
                break;
            case 4:
                chip->w1103[i][4] = 1;
                break;
            case 5:
                chip->w1103[i][6] = 1;
                break;
            case 6:
                chip->w1103[i][7] = 1;
                break;
            case 7:
                chip->w1103[i][8] = 1;
                break;
            }
        }
        if (chip->l630[1])
        {
            switch (rgb[i])
            {
            case 0:
                chip->w1103[i][8] = 1;
                break;
            case 1:
                chip->w1103[i][9] = 1;
                break;
            case 2:
                chip->w1103[i][10] = 1;
                break;
            case 3:
                chip->w1103[i][12] = 1;
                break;
            case 4:
                chip->w1103[i][13] = 1;
                break;
            case 5:
                chip->w1103[i][14] = 1;
                break;
            case 6:
                chip->w1103[i][15] = 1;
                break;
            case 7:
                chip->w1103[i][16] = 1;
                break;
            }
        }
        chip->rgb_out[i] = 0;
        // FIXME: S/H and m4 conflict
        if (chip->w1103[i][0])
            chip->rgb_out[i] = rgb_val_m5[0];
        if (chip->w1103[i][1])
            chip->rgb_out[i] = rgb_val_m5[1];
        if (chip->w1103[i][2])
            chip->rgb_out[i] = rgb_val_m5[2];
        if (chip->w1103[i][3])
            chip->rgb_out[i] = rgb_val_m5[3];
        if (chip->w1103[i][4])
            chip->rgb_out[i] = rgb_val_m5[4];
        if (chip->w1103[i][5])
            chip->rgb_out[i] = i == 2 ? rgb_val_m4_b[0] : rgb_val_m4_rg[0];
        if (chip->w1103[i][6])
            chip->rgb_out[i] = rgb_val_m5[5];
        if (chip->w1103[i][7])
            chip->rgb_out[i] = rgb_val_m5[6];
        if (chip->w1103[i][8])
            chip->rgb_out[i] = rgb_val_m5[7];
        if (chip->w1103[i][9])
            chip->rgb_out[i] = rgb_val_m5[8];
        if (chip->w1103[i][10])
            chip->rgb_out[i] = rgb_val_m5[9];
        if (chip->w1103[i][11])
            chip->rgb_out[i] = i == 2 ? rgb_val_m4_b[1] : rgb_val_m4_rg[1];
        if (chip->w1103[i][12])
            chip->rgb_out[i] = rgb_val_m5[10];
        if (chip->w1103[i][13])
            chip->rgb_out[i] = rgb_val_m5[11];
        if (chip->w1103[i][14])
            chip->rgb_out[i] = rgb_val_m5[12];
        if (chip->w1103[i][15])
            chip->rgb_out[i] = rgb_val_m5[13];
        if (chip->w1103[i][16])
            chip->rgb_out[i] = rgb_val_m5[14];
    }
}

const float ympsg_vol[17] = {
    1.f, 0.772f, 0.622f, 0.485f, 0.382f, 0.29f, 0.229f, 0.174f, 0.132f, 0.096f, 0.072f, 0.051f, 0.034f, 0.019f, 0.009f, 0.f, -1.059f
};

void VDP_ClockPSG(vdp_psg_t *chip)
{
    int i;
    chip->psg_clk1 = chip->input.i_cpu_clk0;
    chip->psg_clk2 = !chip->input.i_cpu_clk0;

    if (chip->psg_clk1)
    {
        chip->l631[0] = chip->input.i_reset;
        chip->l632[0] = chip->l631[1];
        chip->l633[0] = chip->w1105;
        chip->l634 = !chip->l649[1];
        chip->l635[0] = chip->w1106;
        chip->l636[0] = chip->l635[1];
    }
    if (chip->psg_clk2)
    {
        chip->l631[1] = chip->l631[0];
        chip->l632[1] = chip->l632[0];
        chip->l633[1] = chip->l633[0];
        chip->l635[1] = chip->l635[0];
        chip->l636[1] = chip->l636[0];
    }

    chip->w1104 = chip->l631[1] && !chip->l632[1];
    chip->w1105 = !chip->w1104 && !chip->l633[1];

    if (chip->psg_clk1)
    {
        i = chip->l649[1];
        i += chip->l633[1];
        if (chip->w1104)
            i = 0;
        chip->l649[0] = i & 1;
    }
    if (chip->psg_clk2)
    {
        chip->l649[1] = chip->l649[0];
    }

    chip->psg_hclk1 = chip->l634 && chip->l633[1];
    chip->psg_hclk2 = !chip->l634 && chip->l633[1];

    if (chip->l635[1])
        chip->t43 = 1;
    else if (chip->input.i_write)
        chip->t43 = 0;

    chip->w1106 = !chip->t43 && !chip->input.i_write;

    if (chip->psg_hclk1)
    {
        chip->l637[0] = chip->input.i_reset;
        chip->l638[0] = chip->t44;
        chip->l639[0] = chip->w1111;
        chip->l650[0] = chip->l650[1] << 1;
        chip->l650[0] |= chip->w1132;
        chip->l651[0] = chip->l637[1];
        chip->l652[0] = chip->l652[1] << 1;
        chip->l652[0] |= chip->w1127;
    }
    if (chip->psg_hclk2)
    {
        chip->l637[1] = chip->l637[0];
        chip->l638[1] = chip->l638[0];
        chip->l639[1] = chip->l639[0];
        chip->l650[1] = chip->l650[0];
        chip->l651[1] = chip->l651[0];
        chip->l652[1] = chip->l652[0];
    }

    if (chip->w1142)
        chip->t44 = 1;
    else if (chip->l638[1])
        chip->t44 = 0;

    chip->w1107 = !chip->l638[1] && !chip->l637[1];

    chip->w1108 = chip->w1107 && !chip->w1110;
    chip->w1109 = chip->w1107 && chip->w1110;

    chip->w1110 = !chip->l639[1] && chip->w1111;

    chip->w1111 = (chip->l662 & 3) == 3 ? chip->l647[1] : chip->l648[1];

    chip->w1112 = (chip->input.i_test & 512) != 0 && (chip->input.i_test & 0xc00) != 0x000;
    chip->w1113 = (chip->input.i_test & 512) != 0 && (chip->input.i_test & 0xc00) != 0x400;
    chip->w1114 = (chip->input.i_test & 512) != 0 && (chip->input.i_test & 0xc00) != 0x800;
    chip->w1115 = (chip->input.i_test & 512) != 0 && (chip->input.i_test & 0xc00) != 0xc00;

    chip->w1116 = chip->w1121 ? chip->l644[1] : 0;
    chip->w1117 = (chip->w1116 + 1) & 1023;

    chip->w1118 = ((chip->l640[1] >> 15) ^ (chip->l640[1] >> 12)) & 1;

    if (chip->psg_hclk1)
    {
        i = 0;
        if (chip->w1109)
        {
            i = chip->l640[1] << 1;
            i |= !chip->w1119 || !chip->w1120;
        }
        if (chip->w1108)
        {
            i = chip->l640[1];
        }
        chip->l640[0] = i & 0xffff;
    }
    if (chip->psg_hclk2)
    {
        chip->l640[1] = chip->l640[0];
    }
    chip->w1119 = (chip->l640[1] & 0x7fff) != 0;
    chip->w1120 = !(chip->w1118 && (chip->l662 & 4) != 0);

    if (chip->psg_hclk1)
    {
        chip->l641[0] = chip->w1117;
        chip->l642[0] = chip->l641[1];
        chip->l643[0] = chip->l642[1];
        chip->l644[0] = chip->l643[1];
    }
    if (chip->psg_hclk2)
    {
        chip->l641[1] = chip->l641[0];
        chip->l642[1] = chip->l642[0];
        chip->l643[1] = chip->l643[0];
        chip->l644[1] = chip->l644[0];
    }

    chip->w1121 = !chip->l651[1] && !chip->w1127;

    chip->w1122 = (chip->l650[1] & 1) != 0 && (chip->l652[1] & 8) != 0;
    chip->w1123 = (chip->l650[1] & 1) != 0 && (chip->l652[1] & 4) != 0;
    chip->w1124 = (chip->l650[1] & 1) != 0 && (chip->l652[1] & 2) != 0;
    chip->w1125 = (chip->l650[1] & 1) != 0 && (chip->l652[1] & 1) != 0;

    if (chip->psg_hclk1)
    {
        i = chip->l645[1];
        i += chip->w1122;
        if (chip->l651[1])
            i = 0;
        chip->l645[0] = i & 1;

        i = chip->l646[1];
        i += chip->w1123;
        if (chip->l651[1])
            i = 0;
        chip->l646[0] = i & 1;

        i = chip->l647[1];
        i += chip->w1124;
        if (chip->l651[1])
            i = 0;
        chip->l647[0] = i & 1;

        i = chip->l648[1];
        i += chip->w1125;
        if (chip->l651[1])
            i = 0;
        chip->l648[0] = i & 1;
    }
    if (chip->psg_hclk2)
    {
        chip->l645[1] = chip->l645[0];
        chip->l646[1] = chip->l646[0];
        chip->l647[1] = chip->l647[0];
        chip->l648[1] = chip->l648[0];
    }

    chip->w1126 = 0;
    if (chip->w1131)
        chip->w1126 |= chip->l659;
    if (chip->w1130)
        chip->w1126 |= chip->l660;
    if (chip->w1129)
        chip->w1126 |= chip->l661;
    if (chip->w1128)
    {
        if ((chip->l662 & 3) == 0)
        {
            chip->w1126 |= 16;
        }
        if ((chip->l662 & 3) == 1)
        {
            chip->w1126 |= 32;
        }
        if ((chip->l662 & 3) == 2)
        {
            chip->w1126 |= 64;
        }
    }

    chip->w1127 = chip->w1126 <= chip->l644[1];

    chip->w1128 = (chip->l650[1] & 8) != 0 && !chip->l651[1];
    chip->w1129 = (chip->l650[1] & 4) != 0 && !chip->l651[1];
    chip->w1130 = (chip->l650[1] & 2) != 0 && !chip->l651[1];
    chip->w1131 = (chip->l650[1] & 1) != 0 && !chip->l651[1];

    chip->w1132 = (chip->l650[1] & 7) == 0 && !chip->l637[1];

    chip->w1133 = !chip->l651[1];

    if (chip->input.i_write)
    {
        chip->l653 = chip->input.i_data & 255;
    }

    chip->w1134 = chip->w1133 ? chip->l653 : 0;

    if (chip->l635[1] && (chip->w1134 & 128) != 0)
    {
        chip->l654 = (chip->w1134 >> 4) & 7;
    }

    chip->w1143 = chip->w1134 & 15;
    if (!chip->w1133)
        chip->w1143 = 15;

    chip->w1135 = chip->l637[1] || (chip->l636[1] && chip->l654 == 1);
    chip->w1136 = chip->l637[1] || (chip->l636[1] && chip->l654 == 3);
    chip->w1137 = chip->l637[1] || (chip->l636[1] && chip->l654 == 4);
    chip->w1138 = chip->l637[1] || (chip->l636[1] && chip->l654 == 2);
    chip->w1139 = chip->l637[1] || (chip->l636[1] && chip->l654 == 5);
    chip->w1140 = chip->l637[1] || (chip->l636[1] && chip->l654 == 0);
    chip->w1141 = chip->l637[1] || (chip->l636[1] && chip->l654 == 7);
    chip->w1142 = chip->l637[1] || (chip->l636[1] && chip->l654 == 6);

    if (chip->w1135)
    {
        chip->l655 = chip->w1143;
    }
    if (chip->w1136)
    {
        chip->l656 = chip->w1143;
    }
    if (chip->w1139)
    {
        chip->l657 = chip->w1143;
    }
    if (chip->w1141)
    {
        chip->l658 = chip->w1143;
    }

    chip->w1144 = (chip->w1134 & 128) != 0 || chip->l637[1];

    if (chip->w1137)
    {
        if ((chip->w1134 & 128) == 0)
        {
            chip->l661 &= ~1008;
            chip->l661 |= (chip->w1134 << 4) & 1008;
        }
        if (chip->w1144)
        {
            chip->l661 &= ~15;
            chip->l661 |= chip->w1134 & 15;
        }
    }
    if (chip->w1138)
    {
        if ((chip->w1134 & 128) == 0)
        {
            chip->l660 &= ~1008;
            chip->l660 |= (chip->w1134 << 4) & 1008;
        }
        if (chip->w1144)
        {
            chip->l660 &= ~15;
            chip->l660 |= chip->w1134 & 15;
        }
    }
    if (chip->w1140)
    {
        if ((chip->w1134 & 128) == 0)
        {
            chip->l659 &= ~1008;
            chip->l659 |= (chip->w1134 << 4) & 1008;
        }
        if (chip->w1144)
        {
            chip->l659 &= ~15;
            chip->l659 |= chip->w1134 & 15;
        }
    }
    if (chip->w1142)
    {
        chip->l662 = chip->w1134 & 7;
    }

    chip->w1145 = (chip->input.i_test & 512) == 0 && !chip->l645[1];
    chip->w1146 = (chip->input.i_test & 512) == 0 && !chip->l646[1];
    chip->w1147 = (chip->input.i_test & 512) == 0 && !chip->l647[1];
    chip->w1148 = (chip->input.i_test & 512) == 0 && (chip->l640[1] & 0x4000) == 0;

    chip->w1149 = chip->w1145 ? 15 : chip->l655;
    chip->w1150 = chip->w1146 ? 15 : chip->l656;
    chip->w1151 = chip->w1147 ? 15 : chip->l657;
    chip->w1152 = chip->w1148 ? 15 : chip->l658;

    chip->o_psg_debug = 0;
    chip->o_psg_debug |= (chip->w1149 ^ 15) << 12;
    chip->o_psg_debug |= (chip->w1150 ^ 15) << 8;
    chip->o_psg_debug |= (chip->w1151 ^ 15) << 4;
    chip->o_psg_debug |= (chip->w1152 ^ 15) << 0;

    chip->psg_out = 0.f;

    if (chip->w1112)
        chip->psg_out += ympsg_vol[16];
    else
        chip->psg_out += ympsg_vol[chip->w1149];
    if (chip->w1113)
        chip->psg_out += ympsg_vol[16];
    else
        chip->psg_out += ympsg_vol[chip->w1150];
    if (chip->w1114)
        chip->psg_out += ympsg_vol[16];
    else
        chip->psg_out += ympsg_vol[chip->w1151];
    if (chip->w1115)
        chip->psg_out += ympsg_vol[16];
    else
        chip->psg_out += ympsg_vol[chip->w1152];
}


void VDP_ClockDCLK(vdp_t* chip, int clk1, int clk2)
{
    VDP_DCLKPrescale(chip, clk1, clk2);
    VDP_ResetLogic(chip, clk1, clk2);
    VDP_ClockAsync(chip, clk1, clk2);
    VDP_ClockHVCounters(chip);
    VDP_ClockPlanes(chip, clk1, clk2);
    VDP_ClockSprites(chip, clk1, clk2);
    VDP_ClockVRAMCtrl(chip, clk1, clk2);
    VDP_ClockVideoMux(chip);
}

void VDP_ClockMCLK2(vdp_prescaler_t *chip, int mclk)
{
    chip->input.mclk = mclk;
    if (!memcmp(&chip->input, &chip->input_old, sizeof(chip->input)))
        return;

    VDP_ClockMCLK(chip);
    VDP_ClockMCLK(chip);
    chip->input_old = chip->input;
}

void VDP_ClockDCLK2(vdp_t *chip, int clk1, int clk2)
{
    chip->input.i_clk1 = clk1;
    chip->input.i_clk2 = clk2;
    if (!memcmp(&chip->input, &chip->input_old, sizeof(chip->input)))
        return;

    if (clk1 == 0 && clk2 == 0)
    {
        VDP_ClockDCLK(chip, clk1, clk2);
        //VDP_ClockDCLK(chip, clk1, clk2);
    }
    else
    {
        VDP_ClockDCLK(chip, clk1, clk2);
        VDP_ClockDCLK(chip, clk1, clk2);
        //VDP_ClockDCLK(chip, clk1, clk2);
        //VDP_ClockDCLK(chip, clk1, clk2);
    }
    chip->input_old = chip->input;
}

void VDP_ClockPSG2(vdp_psg_t *chip, int clk)
{
    chip->input.i_cpu_clk0 = clk;
    if (!memcmp(&chip->input, &chip->input_old, sizeof(chip->input)))
        return;
    VDP_ClockPSG(chip);
    VDP_ClockPSG(chip);
    VDP_ClockPSG(chip);
    chip->input_old = chip->input;
}


void VDP_UpdateBusOutput(vdp_t *chip)
{
    if (chip->w97)
    {
        int w705 = (chip->reg_test_18 & 96) != 64;
        int w706 = (chip->reg_test_18 & 96) != 32;
        int w707 = (chip->reg_test_18 & 96) != 0;
        int w770 = 0;
        if (!w705)
        {
            w770 |= chip->l413 << 0;
            w770 |= chip->l414 << 1;
            w770 |= chip->l415 << 3;
            w770 |= chip->l416 << 4;
            w770 |= chip->l417 << 6;
            w770 |= (chip->l418 & 7) << 8;
        }
        if (!w706)
        {
            w770 |= chip->l425;
        }
        if (!w707)
        {
            w770 |= chip->l424;
        }

        chip->io_data &= ~0x3fff;
        chip->io_data |= w770 & 0x7ff;
        chip->io_data |= (chip->l418 & 0x38) << 8;
    }

    if (chip->w71)
    {
        chip->io_data &= ~(1024 + 512 + 256);
        chip->io_data |= (!(chip->l106[1] & 1)) << 8;
        chip->io_data |= (!(chip->w355 & 256)) << 9;
        chip->io_data |= (!(chip->w355 & 512)) << 10;
    }

    if (chip->w114)
    {
        chip->io_data &= ~0x3ff;
        chip->io_data |= chip->w72 << 0;
        chip->io_data |= chip->w73 << 1;
        chip->io_data |= chip->w422 << 2;
        chip->io_data |= chip->w439 << 3;
        chip->io_data |= chip->w446 << 4;
        chip->io_data |= chip->t11 << 5;
        chip->io_data |= chip->t10 << 6;
        chip->io_data |= chip->t9 << 7;
        chip->io_data |= chip->w252 << 8;
        chip->io_data |= chip->l46[1] << 9;
    }
    if (chip->w134)
    {
        chip->io_data &= ~0xff00;
        chip->io_data |= (chip->l90 & 255) << 8;
    }
    if (chip->w134)
    {
        chip->io_data &= ~0xff;
        chip->io_data |= chip->w347 & 255;
    }
    if (chip->w160)
    {
        chip->io_data = (chip->l92 & 255) | ((chip->l93 & 255) << 8);
    }

    if (chip->w47)
    {
        chip->io_data &= ~255;
        chip->io_data |= chip->w11 << 1;
        chip->io_data |= chip->w12 << 2;
    }

    if (chip->w87)
    {
        chip->io_data &= ~255;
        chip->io_data |= (!chip->l110[1]) << 7;
        chip->io_data |= (!chip->w360) << 6;
        chip->io_data |= (!chip->w379) << 5;
        chip->io_data |= (!chip->w393) << 4;
        chip->io_data |= (!chip->w402) << 3;
        chip->io_data |= (!chip->w417) << 2;
        chip->io_data |= (!chip->w415) << 1;
        chip->io_data |= (!chip->w424) << 0;
    }

    if (chip->w89)
    {
        chip->io_data &= ~0x3fff;
        chip->io_data |= (!chip->l109[1]) << 0;
        chip->io_data |= (!chip->l108[1]) << 1;
        chip->io_data |= (!chip->w356) << 2;
        chip->io_data |= (!chip->w372) << 3;
        chip->io_data |= (!chip->w385) << 4;
        chip->io_data |= (!chip->w394) << 5;
        chip->io_data |= (!chip->l116[1]) << 6;
        chip->io_data |= (!chip->l134[1]) << 7;
        chip->io_data |= (!chip->l141[1]) << 8;
        chip->io_data |= (!chip->l142[1]) << 9;
        chip->io_data |= (!chip->l147[1]) << 10;
        chip->io_data |= (!chip->w419) << 11;
        chip->io_data |= (!chip->w418) << 12;
        chip->io_data |= (!chip->l156[1]) << 13;
    }

    if (chip->w95)
    {
        chip->io_data &= ~15;
        if ((chip->l388[1] & 512) == 0)
            chip->io_data |= 1;
        if ((chip->l389[1] & 512) == 0)
            chip->io_data |= 2;
        if ((chip->l390[1] & 512) == 0)
            chip->io_data |= 4;
        if ((chip->l391[1] & 512) == 0)
            chip->io_data |= 8;
    }

    if (chip->w95)
    {
        chip->io_data &= ~0xff0;
        if ((chip->l403[1] & 0x80000) == 0)
            chip->io_data |= 16;
        if ((chip->l404[1] & 0x80000) == 0)
            chip->io_data |= 32;
        if ((chip->l405[1] & 0x80000) == 0)
            chip->io_data |= 64;
        if ((chip->l406[1] & 0x80000) == 0)
            chip->io_data |= 128;
        if ((chip->l407[1] & 0x80000) == 0)
            chip->io_data |= 256;
        if ((chip->l408[1] & 0x80000) == 0)
            chip->io_data |= 512;
        if ((chip->l409[1] & 0x80000) == 0)
            chip->io_data |= 1024;
        if ((chip->l410[1] & 0x80000) == 0)
            chip->io_data |= 2048;
    }
    if (chip->w99)
    {
        int w952 = (chip->reg_test_18 & 192) == 0;
        int w953 = (chip->reg_test_18 & 192) == 64;
        int w954 = (chip->reg_test_18 & 192) == 128;
        int w955 = (chip->reg_test_18 & 192) == 192;

        int w956 = 0;
        int w957 = 0;
        int w958 = 0;
        int w959 = 0;
        int w960 = 0;
        int w961 = 0;
        int w962 = 0;
        int w963 = 0;
        int w964 = 0;
        int w965 = 0;
        int w966 = 0;
        int w967 = 0;
        int w968 = 0;
        int w969 = 0;
        if (w952)
        {
            if (chip->linebuffer_out[0].pal & 1)
                w956 = 1;
            if (chip->linebuffer_out[1].pal & 1)
                w963 = 1;
            if (chip->linebuffer_out[0].pal & 2)
                w957 = 1;
            if (chip->linebuffer_out[1].pal & 2)
                w964 = 1;
            if (chip->linebuffer_out[0].priority)
                w958 = 1;
            if (chip->linebuffer_out[1].priority)
                w965 = 1;
            if (chip->linebuffer_out[0].index & 1)
                w959 = 1;
            if (chip->linebuffer_out[1].index & 1)
                w966 = 1;
            if (chip->linebuffer_out[0].index & 2)
                w960 = 1;
            if (chip->linebuffer_out[1].index & 2)
                w967 = 1;
            if (chip->linebuffer_out[0].index & 4)
                w961 = 1;
            if (chip->linebuffer_out[1].index & 4)
                w968 = 1;
            if (chip->linebuffer_out[0].index & 8)
                w962 = 1;
            if (chip->linebuffer_out[1].index & 8)
                w969 = 1;
        }
        if (w953)
        {
            if (chip->linebuffer_out[2].pal & 1)
                w956 = 1;
            if (chip->linebuffer_out[3].pal & 1)
                w963 = 1;
            if (chip->linebuffer_out[2].pal & 2)
                w957 = 1;
            if (chip->linebuffer_out[3].pal & 2)
                w964 = 1;
            if (chip->linebuffer_out[2].priority)
                w958 = 1;
            if (chip->linebuffer_out[3].priority)
                w965 = 1;
            if (chip->linebuffer_out[2].index & 1)
                w959 = 1;
            if (chip->linebuffer_out[3].index & 1)
                w966 = 1;
            if (chip->linebuffer_out[2].index & 2)
                w960 = 1;
            if (chip->linebuffer_out[3].index & 2)
                w967 = 1;
            if (chip->linebuffer_out[2].index & 4)
                w961 = 1;
            if (chip->linebuffer_out[3].index & 4)
                w968 = 1;
            if (chip->linebuffer_out[2].index & 8)
                w962 = 1;
            if (chip->linebuffer_out[3].index & 8)
                w969 = 1;
        }
        if (w954)
        {
            if (chip->linebuffer_out[4].pal & 1)
                w956 = 1;
            if (chip->linebuffer_out[5].pal & 1)
                w963 = 1;
            if (chip->linebuffer_out[4].pal & 2)
                w957 = 1;
            if (chip->linebuffer_out[5].pal & 2)
                w964 = 1;
            if (chip->linebuffer_out[4].priority)
                w958 = 1;
            if (chip->linebuffer_out[5].priority)
                w965 = 1;
            if (chip->linebuffer_out[4].index & 1)
                w959 = 1;
            if (chip->linebuffer_out[5].index & 1)
                w966 = 1;
            if (chip->linebuffer_out[4].index & 2)
                w960 = 1;
            if (chip->linebuffer_out[5].index & 2)
                w967 = 1;
            if (chip->linebuffer_out[4].index & 4)
                w961 = 1;
            if (chip->linebuffer_out[5].index & 4)
                w968 = 1;
            if (chip->linebuffer_out[4].index & 8)
                w962 = 1;
            if (chip->linebuffer_out[5].index & 8)
                w969 = 1;
        }
        if (w955)
        {
            if (chip->linebuffer_out[6].pal & 1)
                w956 = 1;
            if (chip->linebuffer_out[7].pal & 1)
                w963 = 1;
            if (chip->linebuffer_out[6].pal & 2)
                w957 = 1;
            if (chip->linebuffer_out[7].pal & 2)
                w964 = 1;
            if (chip->linebuffer_out[6].priority)
                w958 = 1;
            if (chip->linebuffer_out[7].priority)
                w965 = 1;
            if (chip->linebuffer_out[6].index & 1)
                w959 = 1;
            if (chip->linebuffer_out[7].index & 1)
                w966 = 1;
            if (chip->linebuffer_out[6].index & 2)
                w960 = 1;
            if (chip->linebuffer_out[7].index & 2)
                w967 = 1;
            if (chip->linebuffer_out[6].index & 4)
                w961 = 1;
            if (chip->linebuffer_out[7].index & 4)
                w968 = 1;
            if (chip->linebuffer_out[6].index & 8)
                w962 = 1;
            if (chip->linebuffer_out[7].index & 8)
                w969 = 1;
        }

        chip->io_data &= ~0x7f7f;
        chip->io_data |= (!w956) << 0;
        chip->io_data |= (!w957) << 1;
        chip->io_data |= (!w958) << 2;
        chip->io_data |= (!w959) << 3;
        chip->io_data |= (!w960) << 4;
        chip->io_data |= (!w961) << 5;
        chip->io_data |= (!w962) << 6;
        chip->io_data |= (!w963) << 8;
        chip->io_data |= (!w964) << 9;
        chip->io_data |= (!w965) << 10;
        chip->io_data |= (!w966) << 11;
        chip->io_data |= (!w967) << 12;
        chip->io_data |= (!w968) << 13;
        chip->io_data |= (!w969) << 14;
    }

    if (chip->w91)
    {
        chip->io_data &= ~0x7ff;
        chip->io_data |= (!chip->w1089) << 3;
        chip->io_data |= (!chip->w1090) << 4;
        chip->io_data |= (!chip->w1091) << 6;
        chip->io_data |= (!chip->w1092) << 7;
        chip->io_data |= (!chip->w1093) << 9;
        chip->io_data |= (!chip->w1094) << 10;
        chip->io_data |= (!chip->w1100) << 2;
        chip->io_data |= (!chip->w1099) << 5;
        chip->io_data |= (!chip->w1098) << 8;
        chip->io_data |= (!chip->l612[1]) << 0;
        chip->io_data |= (!chip->l610[1]) << 1;
    }
    if (chip->w93)
    {
        chip->io_data = chip->psg.o_psg_debug;
    }
    chip->io_address &= ~0xc0000;
    chip->io_address |= (chip->reg_sa_high << 16) & 0xc0000;
    if (chip->w267)
    {
        chip->io_address &= ~0x33ffff;
        chip->io_address |= (chip->reg_sa_high << 16) & 0x330000;
        chip->io_address |= chip->reg_sa_low[1];
    }
}
