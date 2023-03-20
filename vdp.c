// YM7101 core
#include <stdio.h>
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

void VDP_ClockMCLK(vdp_t *chip, int mclk)
{
    chip->reset_comb = !(chip->tm_w1 && chip->w100);
    DFF_Update(&chip->mclk_prescaler_dff1, mclk, chip->reset_comb, 0);
    DFF_Update(&chip->mclk_prescaler_dff2, mclk, chip->mclk_prescaler_dff1.l2, 0);
    chip->mclk_and1 = chip->mclk_prescaler_dff2.l1 && !chip->mclk_prescaler_dff1.l2;

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

    if (chip->tm_w1)
        chip->mclk_sbcr = chip->mclk_clk4;
    else
        chip->mclk_sbcr = chip->mclk_clk5;

    if (chip->reg_clk0_sel)
        chip->mclk_cpu_clk0 = chip->tm_w1; // ext
    else
        chip->mclk_cpu_clk0 = chip->mclk_clk5;

    chip->mclk_cpu_clk1 = !chip->mclk_clk3;

    if (chip->reg_rs0 || chip->reg_clk0_sel)
        chip->mclk_dclk = chip->tm_w1; // ext
    else if (chip->reg_rs1)
        chip->mclk_dclk = chip->mclk_clk1; // h40
    else
        chip->mclk_dclk = chip->mclk_clk2; // h32

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
    DFF_Update(&chip->dclk_prescaler_dff1, clk1, 1, chip->dclk_prescaler_l2 && clk2);
    DFF_Update(&chip->dclk_prescaler_dff2, clk1, 1, chip->dclk_prescaler_l3 && clk2);

    chip->hclk1 = !chip->dclk_prescaler_dff1.l2;
    chip->hclk2 = !chip->dclk_prescaler_dff2.l2;
}

static void VDP_ResetLogic(vdp_t *chip, int clk1, int clk2)
{
    chip->reset_comb = !(chip->tm_w1 && chip->w100);
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

    chip->reset_ext = !chip->tm_w1;
}

void VDP_ClockDCLK(vdp_t *chip, int clk1, int clk2)
{
    VDP_DCLKPrescale(chip, clk1, clk2);
    VDP_ResetLogic(chip, clk1, clk2);
}

void VDP_ClockAsync(vdp_t *chip, int clk1, int clk2)
{
    int i, j;
    chip->cpu_sel = chip->i_sel0;
    chip->cpu_as = !chip->i_as && chip->cpu_sel;
    chip->cpu_uds = !chip->i_uds && chip->cpu_sel;
    chip->cpu_lds = !chip->i_lds && chip->cpu_sel;
    chip->cpu_m1 = !chip->i_m1 && !chip->cpu_sel;
    chip->cpu_rd = !chip->i_rd && !chip->cpu_sel;
    chip->cpu_wr = !chip->i_wr && !chip->cpu_sel;
    chip->cpu_mreq = !chip->i_mreq && !chip->cpu_sel;
    chip->cpu_iorq = !chip->i_iorq && !chip->cpu_sel;
    chip->cpu_rw = !chip->i_rw;
    chip->cpu_bg = !chip->i_bg;
    chip->cpu_intak = !chip->i_intak;
    chip->cpu_bgack = chip->i_bgack;

    DFF_Update(&chip->io_m1_dff1, chip->mclk_cpu_clk0, chip->cpu_m1, 0);
    DFF_Update(&chip->io_m1_dff2, chip->mclk_cpu_clk0, chip->io_m1_dff1.l2, 0);
    DFF_Update(&chip->io_m1_dff3, !chip->mclk_cpu_clk0, chip->io_m1_dff2.l2, 0);

    chip->io_m1_s1 = chip->io_m1_dff3.l2 && chip->io_m1_dff2.l2;
    chip->io_m1_s2 = !chip->io_m1_s1 && chip->io_m1_s4;
    DFF_Update(&chip->io_m1_dff4, !chip->mclk_cpu_clk0, chip->io_m1_s2, 0);

    chip->io_m1_s3 = chip->io_m1_dff4.l2 && chip->io_m1_s2;

    chip->io_m1_s4 = chip->cpu_mreq && (chip->io_m1_s1 || (chip->io_address & 0xc000) == 0xc000);

    chip->io_m1_s5 = chip->io_m1_s4 && chip->io_m1_s1;

    chip->io_oe0 = chip->io_m1_s5 || chip->w25 || chip->w27 || chip->w118 || chip->tm_w5;

    if (chip->reg_8b_b6)
    {
        chip->io_cas0 = chip->io_m1_dff2.l2 || chip->w15 || chip->w28 || chip->w30 || chip->w102;
        chip->io_ras0 = chip->io_m1_s4 || chip->w21 || chip->w14 || chip->tm_w4;
    }
    else
    {
        chip->io_cas0 = chip->tm_w1 || chip->tm_w2 || chip->tm_w3 || chip->tm_w4;
        chip->io_ras0 = chip->io_m1_s2 || chip->w22 || chip->w16;
    }

    chip->io_wr = chip->cpu_rw && chip->dff1.l2;
    chip->io_lwr = chip->cpu_wr || (chip->cpu_lds && chip->io_wr);
    chip->io_uwr = chip->cpu_uds && chip->io_wr;

    chip->w1 = !chip->cpu_rw && (chip->tm_w1 || chip->tm_w2);
    DFF_Update(&chip->dff1, !chip->i_cpu_clk1, chip->w23, 0);


    DFF_Update(&chip->dff2, chip->i_cpu_clk1, chip->cpu_bg, 0);

    if (chip->cpu_bg || chip->reset_comb)
        chip->t1 = 1;
    else if (!chip->tm_w1 && chip->w227 && chip->tm_w3)
        chip->t1 = 0;

    chip->w2 = chip->w35 && (chip->io_address & 0x700000) == 0x700000;

    chip->io_address_22o = !(chip->l4[1] && chip->w247 && (chip->l6 || !chip->l7));
    DFF_Update(&chip->dff4, chip->hclk2, chip->w3, chip->w4);
    DFF_Update(&chip->dff3, chip->hclk2, chip->dff4.l2, chip->w4);

    chip->w3 = chip->t2 || chip->t3;

    chip->w4 = chip->reset_comb || chip->l48[1];

    if (chip->tm_w1)
        chip->t2 = 1;
    else if (chip->w4)
        chip->t2 = 0;

    if (chip->w5)
        chip->t3 = 1;
    else if (chip->w4)
        chip->t3 = 0;

    if (chip->tm_w1)
        chip->t4 = 1;
    else if (chip->w4 || chip->w5)
        chip->t4 = 0;

    chip->w5 = chip->tm_w1 && chip->tm_w2 && chip->tm_w3 && chip->tm_w4 && chip->tm_w5 && chip->tm_w6;

    chip->io_ipl1 = !(chip->w11 && chip->tm_w2);
    chip->io_ipl2 = !(chip->w12 && chip->tm_w2);

    if (chip->hclk1)
    {
        chip->l1[0] = chip->tm_w1;
        chip->l2[0] = chip->l1[1];
        chip->l3[0] = chip->l2[1];
        chip->l4[0] = !(chip->tm_w1 || chip->l1[1] || chip->l2[1] || chip->l3[1]);
        chip->l5[0] = chip->w267;

        chip->l6 = chip->w7 && chip->w8 && chip->tm_w3;
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

    chip->w6 = !(chip->l1[1] || chip->l3[1]);
    chip->w7 = !(chip->w6 && chip->tm_w1);

    chip->w8 = chip->l5[1] && chip->tm_w1;

    chip->w9 = chip->tm_w1 || chip->tm_w2 || chip->tm_w3;
    chip->w10 = !chip->dff13.l2;

    chip->w11 = chip->tm_w1 || chip->tm_w2;
    chip->w12 = chip->tm_w1 || chip->tm_w2;

    chip->w13 = chip->l4[1] && chip->w246;

    chip->w14 = !chip->l7 || (chip->l6 && chip->w13);

    chip->w15 = (!chip->l4[1] && chip->l6) || (chip->l8 && chip->w13);

    chip->w16 = (!chip->l7 && chip->w13) || (chip->l8 && chip->w13); // check

    chip->w17 = chip->l2[1] && chip->l8;
    
    chip->w18 = chip->w267 && chip->l4[1] && chip->l8;

    chip->w19 = chip->w29 && chip->w34;

    chip->w20 = chip->w34 && chip->dff7.l2;

    chip->w21 = chip->w34 && chip->w26;

    chip->w22 = chip->w10 ? chip->w21 : chip->w20;

    chip->w23 = (chip->w10 && chip->w30) || (chip->dff5.l2 && chip->w34);

    chip->w24 = chip->w34 && (chip->dff6.l2 || (chip->dff11.l2 && chip->w10));

    chip->w25 = chip->tm_w1 && chip->tm_w2;

    DFF_Update(&chip->dff5, !chip->i_cpu_clk1, chip->dff6.l2, chip->w10);

    DFF_Update(&chip->dff6, chip->i_cpu_clk1, chip->dff7.l2, chip->w10);

    chip->w26 = !(!chip->dff6.l2 && chip->tm_w2);

    DFF_Update(&chip->dff7, !chip->i_cpu_clk1, chip->dff8.l2, chip->w10);

    chip->w27 = chip->dff17.l2 && !chip->dff19.l2;

    chip->w28 = chip->dff16.l2 && !chip->dff19.l2;

    DFF_Update(&chip->dff8, !chip->i_cpu_clk1, chip->dff9.l2, chip->w10);

    DFF_Update(&chip->dff9, chip->i_cpu_clk1, chip->w30, chip->w10);

    chip->w29 = !(chip->w10 || chip->tm_w2);

    chip->w30 = chip->w34 && chip->dff10.l2;

    chip->w31 = chip->reset_comb || chip->dff21.l2 || chip->dff13.l2;

    DFF_Update(&chip->dff10, !chip->i_cpu_clk1, chip->dff11.l2, chip->w33);

    DFF_Update(&chip->dff11, chip->i_cpu_clk1, chip->w36, chip->w33);

    chip->w32 = chip->dff11.l2 && chip->w1;

    chip->w33 = !chip->w36;

    chip->w34 = chip->tm_w1 && chip->w36;

    chip->w35 = !chip->cpu_intak;

    chip->w36 = chip->tm_w1 && chip->tm_w2;

    chip->w37 = !chip->tm_w1;

    DFF_Update(&chip->dff12, chip->w37, 1, chip->w10);

    chip->w38 = chip->dff12.l2 || chip->reset_comb;

    DFF_Update(&chip->dff13, chip->w34, chip->w44, chip->w38);

    DFF_Update(&chip->dff14, chip->i_cpu_clk1, chip->w43, 0);

    DFF_Update(&chip->dff15, chip->dff14.l2, chip->w44, chip->w31);
    
    chip->w39 = !chip->dff14.l2;

    chip->w40 = chip->w39 || chip->dff21.l2;

    DFF_Update(&chip->dff16, chip->i_cpu_clk1, 1, chip->w39);
    DFF_Update(&chip->dff17, chip->i_cpu_clk1, chip->dff16.l2, chip->w39);
    DFF_Update(&chip->dff18, chip->i_cpu_clk1, chip->dff17.l2, chip->w39);
    DFF_Update(&chip->dff19, chip->i_cpu_clk1, chip->dff18.l2, chip->w39);
    DFF_Update(&chip->dff20, chip->i_cpu_clk1, chip->dff19.l2, chip->w39);

    DFF_Update(&chip->dff21, chip->i_cpu_clk1, chip->dff20.l2, 0);

    chip->w41 = !(!chip->dff21.l2 && chip->cpu_sel && chip->w26);

    DFF_Update(&chip->dff22, chip->i_cpu_clk1, chip->t4, 0);

    chip->w42 = !(chip->dff2.l2 && chip->cpu_sel);

    i = chip->w64 + chip->dff23.l2;
    DFF_Update(&chip->dff23, chip->i_cpu_clk1, i & 1, chip->w41);

    i = (i >> 1) + chip->dff24.l2;
    DFF_Update(&chip->dff24, chip->i_cpu_clk1, i & 1, chip->w41);

    i = (i >> 1) + chip->dff25.l2;
    DFF_Update(&chip->dff25, chip->i_cpu_clk1, i & 1, chip->w41);

    i = (i >> 1) + chip->dff26.l2;
    DFF_Update(&chip->dff26, chip->i_cpu_clk1, i & 1, chip->w41);

    i = (i >> 1) + chip->dff27.l2;
    DFF_Update(&chip->dff27, chip->i_cpu_clk1, i & 1, chip->w41);

    i = (i >> 1) + chip->dff28.l2;
    DFF_Update(&chip->dff28, chip->i_cpu_clk1, i & 1, chip->w41);

    i = (i >> 1) + chip->dff29.l2;
    DFF_Update(&chip->dff29, chip->i_cpu_clk1, i & 1, chip->w41);

    chip->w44 = chip->dff28.l2 && chip->dff27.l2 && chip->dff29.l2;
    chip->w43 = chip->dff25.l2 && chip->dff24.l2 && chip->dff26.l2 && chip->w44;

    chip->w45 = chip->cpu_as && chip->cpu_intak;

    chip->w47 = chip->cpu_m1 && chip->cpu_iorq;

    chip->w46 = chip->w45 || chip->w47;

    if (chip->w46)
        chip->t5 = 1;
    else if (chip->l9[1])
        chip->t5 = 0;

    chip->w48 = chip->t5 && chip->reg_m5;

    if (clk1)
    {
        chip->l9[0] = chip->w48;
        chip->l10 = !chip->l9[1];
    }
    if (clk2)
    {
        chip->l9[1] = chip->l9[0];
        chip->l11 = chip->l10;
    }

    chip->w49 = chip->reset_comb || (chip->l11 && chip->l10);

    chip->w50 = chip->reset_comb || chip->tm_w1;

    if (chip->w50)
        chip->t6 = 1;
    else if (chip->l13[1])
        chip->t6 = 0;

    if (chip->hclk1)
    {
        chip->l12[0] = chip->t6;
        chip->l13[0] = chip->l12[1];
        chip->l14 = !chip->w52;
    }
    if (chip->hclk2)
    {
        chip->l12[1] = chip->l12[0];
        chip->l13[1] = chip->l13[0];
    }

    chip->w51 = !(chip->l12[1] || chip->reset_comb);
    chip->w52 = !(chip->l13[1] && chip->w51);

    chip->w53 = chip->l14 && !chip->reg_m5;

    DFF_Update(&chip->dff30, !chip->w48, chip->w58, chip->w49);
    chip->w54 = chip->w53 || chip->dff30.l2;

    DFF_Update(&chip->dff31, !chip->w48, chip->w57, chip->w49);
    chip->w55 = chip->w53 || chip->dff31.l2;

    DFF_Update(&chip->dff32, !chip->w48, chip->w60, chip->w49);
    chip->w56 = chip->w53 || chip->dff32.l2;

    chip->w57 = chip->t7 && !chip->w60 && chip->tm_w3;
    chip->w58 = !chip->w57 && !chip->w60 && chip->tm_w3 && chip->tm_w4;

    if (chip->l15[1])
        chip->t7 = 1;
    else if (chip->w55)
        chip->t7 = 0;

    if (chip->tm_w1)
        chip->t8 = 1;
    else if (chip->w54)
        chip->t8 = 0;

    chip->w59 = chip->reg_m5 && chip->l81[1];

    chip->w60 = chip->tm_w1 && chip->tm_w2;

    chip->w61 = chip->tm_w1 && chip->reg_m5;

    chip->w62 = chip->w61 && !chip->tm_w1 && chip->w182;

    chip->w63 = chip->w61 && chip->w182 && chip->tm_w2;

    chip->w64 = !chip->t3;

    chip->w65 = !(!chip->reg_m5 || (chip->io_address & 2) != 0 || chip->cpu_sel);

    chip->w66 = !chip->t9 && chip->tm_w2;

    if (chip->tm_w1)
        chip->t9 = 1;
    else if (chip->w56)
        chip->t9 = 0;

    if (chip->w66)
        chip->t10 = 1;
    else if (chip->l14)
        chip->t10 = 0;

    if (chip->tm_w1)
        chip->t11 = 1;
    else if (chip->l14)
        chip->t11 = 0;

    chip->w67 = chip->tm_w1 || (chip->reg_test0 & 8) != 0;

    chip->w68 = !(chip->tm_w1 || chip->tm_w2 || (chip->reg_test0 & 8) != 0);

    if (chip->hclk1)
    {
        i = chip->tm_w1 ? chip->cnt1[1] : chip->reg_hit;
        i += chip->w67;
        chip->cnt1[0] = i & 255;
        chip->l15[0] = (i & 256) != 0 && !chip->w68;
    }
    if (chip->hclk2)
    {
        chip->cnt1[1] = chip->cnt1[0];
        chip->l15[1] = chip->l15[0];
    }

    chip->w69 = chip->w68 || chip->l15[1];

    chip->w70 = chip->cpu_sel && (chip->io_address & 0x738070) == 0x600000;

    if (chip->w71)
    {
        chip->io_data &= ~(1024 + 512 + 256);
        chip->io_data |= (!chip->tm_w1) << 8;
        chip->io_data |= (!chip->tm_w1) << 9;
        chip->io_data |= (!chip->tm_w1) << 10;
    }
    
    if (chip->w128)
        chip->reg_test_18 = chip->io_data & 0xfff;
    if (chip->reset_ext)
        chip->reg_test_18 = 0;

    chip->w71 = !chip->cpu_sel && chip->tm_w2 && chip->tm_w3;

    if (chip->tm_w1)
    {
        chip->io_data &= ~0x3ff;
        chip->io_data |= chip->w72 << 0;
        chip->io_data |= chip->w73 << 1;
        chip->io_data |= chip->tm_w1 << 2;
        chip->io_data |= chip->tm_w1 << 3;
        chip->io_data |= chip->tm_w1 << 4;
        chip->io_data |= chip->tm_w1 << 5;
        chip->io_data |= chip->tm_w1 << 6;
        chip->io_data |= chip->tm_w1 << 7;
        chip->io_data |= chip->w252 << 8;
        chip->io_data |= chip->l46[1] << 9;
    }

    chip->w72 = chip->w65 ? chip->w252 : chip->tm_w2;
    chip->w73 = chip->w65 ? chip->l46[1] : chip->tm_w2;

    if (chip->tm_w1)
        chip->reg_hit = (chip->tm_w2 & 255) ^ 255;
    if (chip->reset_comb)
        chip->reg_hit = 0;

    if (chip->w84)
        chip->reg_test0 = chip->io_data & 0x7fff;
    if (chip->reset_ext)
        chip->reg_test0 = 0;

    if (chip->w85)
        chip->reg_test1 = chip->io_data & 0x7ff;
    if (chip->reset_ext)
        chip->reg_test1 = 0;

    chip->w74 = (chip->reg_test_18 & 0xf00) == 0xf00;
    chip->w75 = (chip->reg_test_18 & 0xf00) == 0x800;
    chip->w76 = (chip->reg_test_18 & 0xf00) == 0x700;
    chip->w77 = (chip->reg_test_18 & 0xf00) == 0x600;
    chip->w78 = (chip->reg_test_18 & 0xf00) == 0x500;
    chip->w79 = (chip->reg_test_18 & 0xf00) == 0x400;
    chip->w80 = (chip->reg_test_18 & 0xf00) == 0x300;
    chip->w81 = (chip->reg_test_18 & 0xf00) == 0x200;
    chip->w82 = (chip->reg_test_18 & 0xf00) == 0x100;
    chip->w83 = (chip->reg_test_18 & 0xf00) == 0x000;

    if (chip->tm_w1)
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

    if (chip->tm_w1)
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

    if (chip->tm_w1)
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

    if (chip->tm_w1)
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

    chip->w84 = chip->w83 && chip->w129;
    chip->w85 = chip->w82 && chip->w129;
    chip->w86 = chip->w81 && chip->w129;
    chip->w87 = chip->w81 && chip->tm_w2;
    chip->w88 = chip->w80 && chip->w129;
    chip->w89 = chip->w80 && chip->tm_w2;
    chip->w90 = chip->w79 && chip->w129;
    chip->w91 = chip->w79 && chip->tm_w2;
    chip->w92 = chip->w78 && chip->w129;
    chip->w93 = chip->w78 && chip->tm_w2;
    chip->w94 = chip->w77 && chip->w129;
    chip->w95 = chip->w77 && chip->tm_w2;
    chip->w96 = chip->w76 && chip->w129;
    chip->w97 = chip->w76 && chip->tm_w2;
    chip->w98 = chip->w75 && chip->w129;
    chip->w99 = chip->w75 && chip->tm_w2;
    chip->w100 = !(chip->w74 && chip->w129);

    chip->w101 = chip->w16 || chip->dff11.l2 || chip->io_m1_s3;
    chip->w102 = chip->io_m1_s3 && chip->w104;

    if (chip->reg_8b_b7)
    {
        chip->w103 = chip->l16; // color code
        chip->w104 = 1;
    }
    else if (chip->w101)
    {
        chip->w103 = 0;
        if (chip->io_address & 0x8000)
            chip->w103 |= 128;
        if (chip->io_address & 0x2000)
            chip->w103 |= 64;
        if (chip->io_address & 0x1000)
            chip->w103 |= 32;
        if (chip->io_address & 0x800)
            chip->w103 |= 16;
        if (chip->io_address & 0x400)
            chip->w103 |= 8;
        if (chip->io_address & 0x200)
            chip->w103 |= 4;
        if (chip->io_address & 0x100)
            chip->w103 |= 2;
        if (chip->io_address & 0x4000)
            chip->w103 |= 1;
        chip->w104 = 1;
    }
    else
    {
        chip->w103 = chip->io_address & 255;
        chip->w104 = 0;
    }

    if (chip->hclk1)
    {
        chip->l16 = 0;
        chip->l16 |= chip->w105 << 6;
        chip->l16 |= chip->tm_w1;
    }

    chip->w105 = (chip->reg_test0 & 1) != 0 ? chip->tm_w1 : chip->tm_w2;

    if (chip->tm_w1)
    {
        chip->reg_lsm0_latch = chip->reg_lsm0;
        chip->reg_lsm1_latch = chip->reg_lsm1;
    }

    chip->w106 = chip->reg_lsm0_latch && chip->reg_lsm1_latch;

    chip->w107 = !chip->reg_m2 && chip->reg_m5;
    chip->w108 = chip->reg_m2 && chip->reg_m5;
    chip->w109 = chip->reg_m5 && chip->reg_81_b7;

    chip->w110 = (chip->io_address & 0xc0) == 0x40 && chip->cpu_iorq && chip->cpu_wr; // z80 psg
    chip->w111 = chip->w110 || (chip->w133 && chip->tm_w2);

    chip->w112 = (chip->io_address & 0xc0) == 0x80 && chip->cpu_iorq && chip->cpu_rd;
    chip->w113 = chip->w112 || chip->w132;
    chip->w114 = chip->w112 && chip->tm_w1;

    chip->w115 = chip->reg_8b_b6 && chip->w30;
    chip->w116 = chip->w115 || chip->w24;

    chip->w117 = !(chip->w30 || chip->w125 || chip->w128 || chip->w129 || chip->w133); // dtack

    chip->w118 = (chip->w1 && 0) || (chip->w32 && chip->w116) || chip->w19;

    if (chip->mclk_cpu_clk0)
        chip->l17 = chip->cpu_rd;

    chip->w119 = chip->cpu_sel ? chip->tm_w2 : chip->tm_w3;
    chip->w120 = chip->w119 && chip->tm_w2;
    chip->w121 = chip->reset_comb || chip->tm_w2;
    if (chip->w120)
        chip->t12 = 1;
    else if (chip->w121)
        chip->t12 = 0;

    chip->w122 = !(chip->cpu_sel ? chip->t12 : chip->w9); // z80 int

    chip->w123 = chip->reg_lsm0_latch ? chip->tm_w1 : chip->tm_w2;

    chip->w124 = chip->w70 && chip->cpu_as && chip->w158;

    chip->w125 = chip->cpu_sel && chip->w146;

    chip->w126 = chip->w152 && chip->w162;

    chip->w127 = chip->w148 && chip->tm_w2;

    chip->w128 = chip->w124 && chip->cpu_rw && (chip->io_address & 0x0c) == 0x0c && !chip->w130; // test address

    chip->w129 = chip->w124 && chip->cpu_rw && (chip->io_address & 0x0c) == 0x0c && chip->w130;

    chip->w130 = chip->cpu_sel ? (chip->io_address & 2) != 0 : (chip->io_address & 1) != 0;

    chip->w131 = chip->w124 && chip->cpu_rw && (chip->io_address & 0x0c) == 0x00 && chip->w147;

    chip->w132 = chip->w124 && !chip->cpu_rw && (chip->io_address & 0x0c) == 0x00 && chip->w147;

    chip->w133 = chip->w124 && chip->cpu_rw && (chip->io_address & 0x0c) == 0x08;

    chip->w134 = chip->w124 && !chip->cpu_rw && (chip->io_address & 0x0c) == 0x04;

    chip->w135 = chip->w124 && !chip->cpu_rw && (chip->io_address & 0x0c) == 0x0c;

    if (chip->w163)
        chip->t13 = 1;
    else if (chip->w159)
        chip->t13 = 0;

    chip->w136 = chip->l48[1] || chip->tm_w2;

    chip->w137 = chip->t1 && chip->t14 && chip->w168;

    if (chip->w138)
        chip->t14 = 1;
    else if (chip->w143)
        chip->t14 = 0;

    chip->w138 = chip->reset_comb || chip->tm_w2;

    chip->w139 = chip->w131 || chip->w140;

    chip->w140 = chip->cpu_iorq && chip->cpu_wr && (chip->io_address & 0xc0) == 0x80;

    chip->w141 = chip->cpu_iorq && chip->cpu_rd && (chip->io_address & 0xc0) == 0x40;

    chip->w142 = chip->w141 || chip->w134; // HV cnt read

    if (!chip->w139)
        chip->l18 = chip->w130;

    if (!chip->w113)
        chip->l19 = chip->w130;

    chip->w143 = !chip->l19 && chip->w113;

    if (chip->w173)
        chip->t15 = 1;
    else if (chip->w172)
        chip->t15 = 0;
    if (chip->w172)
        chip->t15_n = 1;
    else if (chip->w173)
        chip->t15_n = 0;

    if (chip->w166)
        chip->t16 = 1;
    else if (chip->w174)
        chip->t16 = 0;
    if (chip->w174)
        chip->t16_n = 1;
    else if (chip->w166)
        chip->t16_n = 0;

    if (chip->w175)
        chip->t17 = 1;
    else if (chip->w155)
        chip->t17 = 0;

    chip->w144 = (chip->t17 && chip->w154) || chip->reset_comb;
    chip->w145 = chip->w154 && chip->t25 && chip->w192 && chip->tm_w4;

    if (chip->w145)
        chip->t18 = 1;
    else if (chip->w144)
        chip->t18 = 0;
    if (chip->w144)
        chip->t18_n = 1;
    else if (chip->w145)
        chip->t18_n = 0;

    if (chip->w168)
    {
        chip->reg_code &= ~0x1c;
        chip->reg_code |= (chip->io_data >> 2) & 0x1c;
    }
    if (chip->w204)
    {
        chip->reg_code &= ~0x1c;
    }

    chip->w146 = chip->w126 || chip->w127 || chip->w137 || chip->w164 || chip->tm_w5;

    if (chip->cpu_uds)
        chip->t19 = 1;
    else if (chip->w183)
        chip->t19 = 0;

    if (chip->cpu_lds)
        chip->t20 = 1;
    else if (chip->w183)
        chip->t20 = 0;

    chip->w147 = chip->cpu_uds || chip->cpu_lds;

    chip->w148 = !(chip->w150 || chip->w252);

    chip->w149 = chip->t21 && chip->w154;

    if (chip->w169)
        chip->t21 = 1;
    else if (chip->w183)
        chip->t21 = 0;

    chip->w150 = chip->t21 && chip->w153;

    chip->w151 = chip->w152 || chip->w47;

    chip->w152 = chip->w113 || chip->w135 || chip->w142;

    chip->w153 = chip->l22 && !chip->l24;

    chip->w154 = !chip->l24 && !chip->l23;

    chip->w155 = chip->l22 && chip->l23;

    chip->w156 = chip->l27[1] || chip->w136;

    chip->w157 = chip->w180 && chip->l28[1];

    chip->w158 = chip->t13 || chip->tm_w2;

    chip->w159 = chip->l24 || chip->reset_comb;

    chip->w160 = chip->w113 && !chip->w130;

    chip->w161 = chip->w154 || chip->reset_comb;

    if (chip->w161)
        chip->t22 = 1;
    else if (chip->l82[1])
        chip->t22 = 0;

    chip->w162 = !(chip->t22 && chip->w160);

    chip->w163 = chip->w113 || chip->w139;

    chip->w164 = (chip->cpu_sel && chip->w165) || chip->w167;

    chip->w165 = chip->w139 && chip->t18_n && chip->t15_n && chip->l18;

    chip->w166 = chip->w165 && !chip->cpu_sel;

    chip->w167 = chip->l18 && chip->w140 && chip->t15;

    chip->w168 = chip->w139 && chip->t15_n && chip->l18 && chip->t18 && chip->reg_m5;

    chip->w169 = !chip->l18 && chip->w139;

    if (chip->w168)
        chip->t23 = 1;
    else if (chip->w176)
        chip->t23 = 0;

    if (chip->w143)
        chip->t24 = 1;
    else if (chip->w176)
        chip->t24 = 0;

    chip->w170 = chip->w164 || chip->w169 || chip->w160 || chip->w168 || chip->w114;

    chip->w171 = chip->w160 || chip->w169 || chip->w168 || chip->w114;

    chip->w172 = (chip->t16_n && chip->w154) || chip->reset_comb;

    chip->w173 = chip->w154 && chip->t16;

    chip->w174 = chip->reset_comb || chip->w170;

    chip->w175 = chip->reset_comb || chip->w171;

    if (chip->w164)
        chip->t25 = 1;
    else if (chip->w176)
        chip->t25 = 0;

    chip->w176 = chip->reset_comb || chip->w155;

    chip->w177 = !(chip->w201 || chip->w202);

    chip->w178 = chip->w202 && (chip->reg_test0 & 16) == 0;

    chip->w179 = chip->w202 && (chip->reg_test0 & 16) != 0;

    if (chip->w164)
    {
        chip->reg_code &= ~3;
        chip->reg_code |= chip->tm_w1;
    }

    chip->w180 = chip->w245 || chip->w345;

    if (clk1)
    {
        chip->l20 = chip->w18;
        chip->l21 = chip->l22;
        chip->l23 = !chip->l24;
        chip->l25 = chip->t13;
    }
    if (clk2)
    {
        chip->l22 = !chip->l23;
        chip->l24 = chip->l25;
    }

    chip->w181 = chip->l20 || chip->w164 || chip->w168 || chip->w191 || chip->w261;

    chip->w182 = chip->w168 && (chip->io_data & 128) != 0;

    chip->w183 = (chip->l21 && !chip->l22) || chip->tm_w3;

    chip->w184 = !(chip->l23 || chip->l25);

    if (chip->hclk1)
    {
        chip->l26 = !chip->w191;
        chip->l27[0] = chip->w186;
        chip->l28[0] = chip->w196;
    }
    if (chip->hclk2)
    {
        chip->l27[1] = chip->l27[0];
        chip->l28[1] = chip->l28[0];
    }

    chip->w185 = chip->l26 && chip->l24;

    if (chip->w157)
        chip->t26 = 1;
    else if (chip->w156)
        chip->t26 = 0;
    if (chip->w156)
        chip->t26_n = 1;
    else if (chip->w157)
        chip->t26_n = 0;

    chip->w186 = chip->t26 && chip->l46[1] && chip->tm_w3;

    chip->w187 = chip->l27[1] && chip->w245;

    chip->w188 = !chip->w245 && chip->tm_w2;

    chip->w189 = chip->l28[1] || chip->tm_w2;

    chip->w190 = chip->l28[1] && !chip->w245;

    chip->w191 = chip->w190 || chip->w187 || chip->l50[1];

    chip->w192 = (chip->reg_code & 3) != 2;

    chip->w193 = !(!chip->w192 && chip->w184 && chip->t25);

    chip->w194 = !(chip->t24 || chip->t23 || (chip->t25 && !chip->reg_m5));

    chip->w195 = chip->l28[1] && chip->w245;

    chip->w196 = chip->t26_n && chip->t27 && chip->l46[1] && chip->tm_w4;

    if (chip->w198)
        chip->t27 = 1;
    else if (chip->w197)
        chip->t27 = 0;

    chip->w197 = chip->l28[1] || chip->w136;

    chip->w198 = chip->w199 || chip->w200 || chip->w203;

    chip->w199 = chip->w245 && (chip->reg_code & 16) != 0;

    chip->w200 = !((chip->reg_code & 19) != 0 || chip->w194 || !chip->w154);

    chip->w201 = chip->w189 && (chip->reg_code & 12) == 4;

    chip->w202 = chip->w189 && (chip->reg_code & 12) == 8;

    if (chip->hclk1)
    {
        chip->l29[0] = chip->w177;
        chip->l30[0] = chip->l29[1];
    }
    if (chip->hclk2)
    {
        chip->l29[1] = chip->l29[0];
        chip->l30[1] = chip->l30[0];
    }

    chip->w203 = chip->w154 && chip->t24 && !chip->reg_m5;

    if (chip->w164)
    {
        chip->reg_addr &= ~0x3f00;
        chip->reg_addr |= chip->tm_w1;
    }
    i = chip->reg_data.l2 + chip->reg_inc + !chip->reg_m5;
    i &= 0x1ffff;
    if (chip->w181)
    {
        chip->reg_data.l1 = chip->w185 ? chip->reg_addr : i;
    }
    else
    {
        chip->reg_data.l2 = chip->reg_data.l1;
    }
    if (chip->w204)
    {
        chip->reg_data.l1 &= ~0x1c000;
        chip->reg_data.l2 &= ~0x1c000;
    }
    if (chip->reset_comb)
    {
        chip->reg_data.l1 &= ~0x3fff;
        chip->reg_data.l2 &= ~0x3fff;
    }

    if (chip->w168)
    {
        chip->reg_addr &= ~0x1c000;
        chip->reg_addr |= (chip->io_data & 7) << 14;
    }
    if (chip->w204)
    {
        chip->reg_addr &= ~0x1c000;
    }

    chip->w204 = chip->reset_comb || !chip->reg_m5;

    if (chip->w210)
    {
        chip->reg_inc = chip->reg_data.l2 & 0xff;
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
        chip->l32 = !chip->w193;
        chip->l33[1] = chip->l33[0];
    }

    chip->w205 = chip->l31 && chip->hclk1;

    chip->w206 = chip->w205 && (chip->reg_data.l2 & 0x1800) == 0;
    chip->w207 = chip->w205 && (chip->reg_data.l2 & 0x1800) == 0x800;
    chip->w208 = chip->w205 && (chip->reg_data.l2 & 0x1800) == 0x1000 && chip->reg_m5;
    chip->w209 = chip->w205 && (chip->reg_data.l2 & 0x1800) == 0x800 && chip->reg_m5;

    chip->w210 = (chip->w209 && (chip->reg_data.l2 & 0x700) == 0x700) || chip->reset_comb; // 8f
    chip->w211 = (chip->w208 && (chip->reg_data.l2 & 0x700) == 0x300) || chip->reset_comb; // 93
    chip->w212 = (chip->w208 && (chip->reg_data.l2 & 0x700) == 0x400) || chip->reset_comb; // 94
    chip->w213 = (chip->w209 && (chip->reg_data.l2 & 0x700) == 0x300) || chip->reset_comb; // 8b
    chip->w214 = (chip->w208 && (chip->reg_data.l2 & 0x700) == 0x600) || chip->reset_comb; // 96
    chip->w215 = (chip->w209 && (chip->reg_data.l2 & 0x700) == 0x400) || chip->reset_comb; // 8c
    chip->w216 = (chip->w206 && (chip->reg_data.l2 & 0x700) == 0x000) || chip->reset_comb; // 80
    chip->w217 = (chip->w206 && (chip->reg_data.l2 & 0x700) == 0x100) || chip->reset_comb; // 81
    chip->w218 = (chip->w206 && (chip->reg_data.l2 & 0x700) == 0x200) || chip->reset_comb; // 82
    chip->w219 = (chip->w206 && (chip->reg_data.l2 & 0x700) == 0x300) || chip->reset_comb; // 83
    chip->w220 = (chip->w206 && (chip->reg_data.l2 & 0x700) == 0x400) || chip->reset_comb; // 84
    chip->w221 = (chip->w206 && (chip->reg_data.l2 & 0x700) == 0x700) || chip->reset_comb; // 87
    chip->w222 = (chip->w208 && (chip->reg_data.l2 & 0x700) == 0x200) || chip->reset_comb; // 92
    chip->w223 = (chip->w208 && (chip->reg_data.l2 & 0x700) == 0x100) || chip->reset_comb; // 91
    chip->w224 = (chip->w208 && (chip->reg_data.l2 & 0x700) == 0x000) || chip->reset_comb; // 90
    chip->w225 = (chip->w206 && (chip->reg_data.l2 & 0x700) == 0x400) || chip->reset_comb; // 86
    chip->w226 = (chip->w206 && (chip->reg_data.l2 & 0x700) == 0x300) || chip->reset_comb; // 85
    chip->w227 = (chip->w208 && (chip->reg_data.l2 & 0x700) == 0x700) || chip->reset_comb; // 97
    chip->w228 = (chip->w208 && (chip->reg_data.l2 & 0x700) == 0x500) || chip->reset_comb; // 95
    chip->w229 = chip->w207 && (chip->reg_data.l2 & 0x700) == 0x400; // 8a
    chip->w230 = (chip->w207 && (chip->reg_data.l2 & 0x700) == 0x100) || chip->reset_comb; // 89
    chip->w231 = (chip->w207 && (chip->reg_data.l2 & 0x700) == 0x000) || chip->reset_comb; // 88
    chip->w232 = (chip->w209 && (chip->reg_data.l2 & 0x700) == 0x600) || chip->reset_comb; // 8e
    chip->w233 = (chip->w209 && (chip->reg_data.l2 & 0x700) == 0x500) || chip->reset_comb; // 8d

    chip->w234 = chip->tm_w1 && (chip->reg_test0 & 2) != 0;

    chip->w235 = chip->tm_w1 && (chip->reg_test0 & 2) == 0;

    if (chip->w195)
    {
        chip->vram_address = chip->reg_sa_low[1];
        chip->vram_address |= (chip->reg_sa_high & 1) << 16;
    }

    if (chip->w299)
    {
        chip->l35 = chip->vram_address & 0x1ffff;
    }
    if (chip->w275)
    {
        chip->vram_address = chip->l35 & 0x1ffff;
    }

    if (chip->w294)
    {
        chip->l36 = chip->reg_data.l2 & 0x1ffff;
    }
    if (chip->w257)
    {
        chip->vram_address = chip->l36 & 0x1ffff;
    }

    if (chip->w293)
    {
        chip->l37 = chip->reg_data.l2 & 0x1ffff;
    }
    if (chip->w258)
    {
        chip->vram_address = chip->l37 & 0x1ffff;
    }

    if (chip->w292)
    {
        chip->l38 = chip->reg_data.l2 & 0x1ffff;
    }
    if (chip->w259)
    {
        chip->vram_address = chip->l38 & 0x1ffff;
    }

    if (chip->w291)
    {
        chip->l39 = chip->reg_data.l2 & 0x1ffff;
    }
    if (chip->w260)
    {
        chip->vram_address = chip->l39 & 0x1ffff;
    }

    if (chip->w227)
    {
        chip->reg_sa_high = chip->reg_data.l2 & 63;
        chip->reg_dmd = (chip->reg_data.l2 >> 6) & 3;
    }
    chip->io_address &= ~0xc0000;
    chip->io_address |= (chip->reg_sa_high << 16) & 0xc0000;
    if (chip->w267)
    {
        chip->io_address &= ~0x33ffff;
        chip->io_address |= (chip->reg_sa_high << 16) & 0x330000;
        chip->io_address |= chip->reg_sa_low[1];
    }

    i = chip->reg_lg[1] & 255;
    j = chip->reg_lg[1] >> 8;
    if (chip->w211)
    {
        i = (chip->reg_data.l2 & 255) ^ 255;
    }
    if (chip->w212)
    {
        j = (chip->reg_data.l2 & 255) ^ 255;
    }
    i += chip->w235;
    chip->w251 = (i & 256) != 0 || chip->w234;
    j += chip->w251;
    if (chip->hclk1)
    {
        chip->reg_lg[0] = (i & 255) | ((j & 255) << 8);
    }
    if (chip->hclk2)
    {
        chip->reg_lg[1] = chip->reg_lg[0];
    }

#if 0
    chip->w236 = !((chip->reg_lg[1] & 3) == 2 && chip->tm_w3);
    chip->w237 = !((chip->reg_lg[1] & 0xe000) == 0xe000);
    chip->w238 = !((chip->reg_lg[1] & 0x1c) == 0x1c);
    chip->w239 = !((chip->reg_lg[1] & 0x1c00) == 0x1c00);
    chip->w240 = !((chip->reg_lg[1] & 0x300) == 0x300);
    chip->w241 = !((chip->reg_lg[1] & 0xe0) == 0xe0);
    chip->w242 = !(chip->w239 || chip->w240 || chip->w237);
    chip->w243 = !(chip->w236 || chip->w238 || chip->w241);
    chip->w244 = chip->w242 && chip->w243;
#endif
    chip->w244 = chip->reg_lg[1] == 0xfffe && chip->tm_w3;

    i = chip->reg_sa_low[1] & 255;
    j = chip->reg_sa_low[1] >> 8;
    if (chip->w228)
    {
        i = chip->reg_data.l2 & 255;
    }
    if (chip->w214)
    {
        j = chip->reg_data.l2 & 255;
    }
    i += chip->w235;
    chip->w255 = (i & 256) != 0 || chip->w234;
    j += chip->w255;
    if (chip->hclk1)
    {
        chip->reg_sa_low[0] = (i & 255) | ((j & 255) << 8);
    }
    if (chip->hclk2)
    {
        chip->reg_sa_low[1] = chip->reg_sa_low[0];
    }
    if (chip->w191)
    {
        chip->vram_address = chip->reg_data.l2 & 0x1ffff;
    }

    chip->w245 = chip->dff3.l2 && chip->reg_dmd == 3;
    chip->w246 = chip->dff3.l2 && chip->reg_dmd == 1;
    chip->w247 = chip->dff3.l2 && chip->reg_dmd == 0;
    chip->w248 = chip->dff3.l2 && chip->reg_dmd == 2;

    if (clk1)
    {
        chip->l40[0] = chip->w18;
        chip->l42[0] = chip->w264;
        chip->l43[0] = chip->w252;
        chip->l45[0] = chip->l44[1];
        chip->l46[0] = chip->w254;
    }
    if (clk2)
    {
        chip->l40[1] = chip->l40[0];
        chip->l42[1] = chip->l42[0];
        chip->l43[1] = chip->l43[0];
        chip->l45[1] = chip->l45[0];
        chip->l46[1] = chip->l46[0];
    }

    chip->w249 = chip->l40[1] && chip->w18;

    if (chip->hclk1)
    {
        chip->l44[0] = chip->l49[1];
        chip->l48[0] = chip->w244;
    }
    if (chip->hclk2)
    {
        chip->l41 = chip->w18;
        chip->l44[1] = chip->l44[0];
        chip->l48[1] = chip->l48[0];
    }

    chip->w250 = chip->w187 || chip->l50[1] || chip->l41;

    chip->w252 = (!chip->reset_comb && chip->w295 && chip->l43[1])
        || (!chip->reset_comb && chip->w295 && chip->l42[1]);

    chip->w253 = chip->l44[1] && !chip->l45[1] && !chip->l52[1];
    
    chip->w254 = chip->reset_comb || (chip->l46[1] && chip->w295) || (chip->w295 && chip->w253);

    chip->w256 = chip->l49[1] && !chip->l52[1];

    chip->w257 = chip->w256 && chip->l53[1] && !chip->l54[1];
    chip->w258 = chip->w256 && !chip->l53[1] && !chip->l54[1];
    chip->w259 = chip->w256 && chip->l53[1] && chip->l54[1];
    chip->w260 = chip->w256 && !chip->l53[1] && chip->l54[1];

    chip->w261 = chip->w149 || 0;

    chip->w262 = chip->w248 && chip->w300;

    chip->w263 = chip->w248 && chip->l46[1];

    chip->w264 = chip->w249 || chip->w150;

    chip->w265 = chip->w245 && chip->l46[1];

    if (chip->w266)
        chip->l47 = chip->vram_address & 1;

    chip->w266 = chip->hclk1 && chip->tm_w2;

    chip->w267 = chip->w247 || chip->w246;

    chip->w268 = !chip->w265 && chip->tm_w2;

    chip->w269 = chip->tm_w1 && !chip->l46[1];

    if (chip->hclk1)
    {
        chip->l49[0] = chip->w269;
        chip->l50[0] = chip->w272;
    }
    if (chip->hclk2)
    {
        chip->l49[1] = chip->l49[0];
        chip->l50[1] = chip->l50[0];
    }

    chip->w270 = chip->reset_comb || chip->l48[1];

    chip->w271 = chip->dff3.l2 && chip->l49[1];

    if (chip->w271)
        chip->t28 = 1;
    else if (chip->w270)
        chip->t28 = 0;

    chip->w272 = chip->t28 && chip->w263 && chip->tm_w3;

    chip->w273 = chip->w274 && chip->w325;

    chip->w274 = !chip->w109 && chip->cpu_sel;

    chip->w275 = chip->w188 || chip->w300;

    chip->w276 = chip->dff3.l2 || chip->t19;

    chip->w277 = chip->cpu_sel ? chip->w276 : chip->w280;

    chip->w278 = chip->dff3.l2 || chip->t20;

    chip->w279 = chip->cpu_sel ? chip->w278 : !chip->w280;

    chip->w280 = (chip->reg_data.l2 & 1) != 0 && chip->reg_m5;

    chip->w281 = chip->w187 && (chip->w109 || (chip->vram_address & 1) != 0);

    chip->w282 = chip->w187 && (chip->w109 || (chip->vram_address & 1) == 0);

    chip->w283 = chip->w281 || (chip->w289 && chip->w317);

    chip->w284 = chip->w282 || (chip->w289 && chip->w319);

    chip->w285 = chip->w319 || !chip->w109;

    chip->w286 = chip->w187 || (chip->w289 && chip->w285);

    chip->w287 = chip->w109 && chip->w317;

    chip->w288 = chip->w187 || (chip->w287 && chip->w289);

    chip->w289 = chip->w301 && !chip->w316 && !chip->w318 && !chip->w320;

    chip->w290 = chip->w149 || (chip->w249 && clk1);

    i = chip->l51[1];
    i += chip->w264;
    i &= 3;
    if (clk1)
    {
        chip->l51[0] = i;
        if (chip->reset_comb)
            chip->l51[0] = 0;
    }
    if (clk2)
    {
        chip->l51[1] = chip->l51[0];
    }

    chip->w291 = chip->w290 && i == 2;
    chip->w292 = chip->w290 && i == 3;
    chip->w293 = chip->w290 && i == 0;
    chip->w294 = chip->w290 && i == 1;

    chip->w295 = i == (chip->l54[1] * 2 + chip->l53[1]);

    chip->w296 = chip->l49[1] && chip->w305;
    chip->w297 = chip->l49[1] && !chip->w305;

    i = chip->l52[1] + chip->l53[1] * 2 + chip->l54[1] * 4;
    i += chip->w296 + chip->w297 * 2;
    if (chip->reset_comb)
        i = 0;

    if (chip->hclk1)
    {
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

    chip->w298 = !(chip->l52[1] || chip->w188);

    chip->w299 = chip->hclk1 && (chip->w191 || (chip->l49[1] && chip->w298));

    chip->w300 = chip->w273 && chip->l49[1] && chip->l52[1];

    if (chip->w292)
    {
        chip->l55 = chip->w277;
        chip->l59 = chip->w279;
        chip->l63 = (chip->reg_code & 1) != 0;
    }

    if (chip->w291)
    {
        chip->l56 = chip->w277;
        chip->l60 = chip->w279;
        chip->l64 = (chip->reg_code & 1) != 0;
    }

    if (chip->w294)
    {
        chip->l57 = chip->w277;
        chip->l61 = chip->w279;
        chip->l65 = (chip->reg_code & 1) != 0;
    }

    if (chip->w293)
    {
        chip->l58 = chip->w277;
        chip->l62 = chip->w279;
        chip->l66 = (chip->reg_code & 1) != 0;
    }

    chip->w301 = chip->w321 && (chip->l50[1] || chip->l49[1]);

    chip->w302 = chip->w301 && chip->w316 && !chip->w320 && chip->w317 && !chip->w318;

    chip->w303 = chip->w301 && chip->w316 && !chip->w320 && chip->w319 && !chip->w318;

    chip->w304 = chip->w249 || chip->w169;
    
    chip->w305 = !(!chip->w273 || chip->w332);

    chip->w306 = chip->l53[1] && chip->l54[1];
    chip->w307 = !chip->l53[1] && chip->l54[1];
    chip->w308 = chip->l53[1] && !chip->l54[1];
    chip->w309 = !chip->l53[1] && !chip->l54[1];

    chip->w310 = (chip->w306 && chip->l67) || (chip->w307 && chip->l68)
        || (chip->w308 && chip->l69) || (chip->w309 && chip->l70);

    chip->w311 = (chip->w306 && chip->l55) || (chip->w307 && chip->l56)
        || (chip->w308 && chip->l57) || (chip->w309 && chip->l58);

    chip->w312 = (chip->w306 && chip->l71) || (chip->w307 && chip->l72)
        || (chip->w308 && chip->l73) || (chip->w309 && chip->l74);

    chip->w313 = (chip->w306 && chip->l59) || (chip->w307 && chip->l60)
        || (chip->w308 && chip->l61) || (chip->w309 && chip->l62);

    chip->w314 = (chip->w306 && chip->l75) || (chip->w307 && chip->l76)
        || (chip->w308 && chip->l77) || (chip->w309 && chip->l78);

    chip->w315 = (chip->w306 && chip->l63) || (chip->w307 && chip->l64)
        || (chip->w308 && chip->l65) || (chip->w309 && chip->l66);

    if (chip->w292)
    {
        chip->l67 = (chip->reg_code & 2) != 0;
        chip->l71 = (chip->reg_code & 4) != 0;
        chip->l75 = (chip->reg_code & 8) != 0;
    }

    if (chip->w291)
    {
        chip->l68 = (chip->reg_code & 2) != 0;
        chip->l72 = (chip->reg_code & 4) != 0;
        chip->l76 = (chip->reg_code & 8) != 0;
    }

    if (chip->w294)
    {
        chip->l69 = (chip->reg_code & 2) != 0;
        chip->l73 = (chip->reg_code & 4) != 0;
        chip->l77 = (chip->reg_code & 8) != 0;
    }

    if (chip->w293)
    {
        chip->l70 = (chip->reg_code & 2) != 0;
        chip->l74 = (chip->reg_code & 4) != 0;
        chip->l78 = (chip->reg_code & 8) != 0;
    }

    chip->w316 = chip->l50[1] ? (chip->reg_code & 2) != 0 : chip->w310;

    chip->w317 = chip->l50[1] ? chip->w277 : chip->w311;

    chip->w318 = chip->l50[1] ? (chip->reg_code & 4) != 0 : chip->w312;

    chip->w319 = chip->l50[1] ? chip->w279 : chip->w313;

    chip->w320 = chip->l50[1] ? (chip->reg_code & 8) != 0 : chip->w314;

    chip->w321 = chip->l50[1] ? (chip->reg_code & 1) != 0 : chip->w322;

    chip->w322 = chip->w315 || !chip->reg_m5;

    chip->w323 = chip->w301 && chip->w317 && !chip->w316 && chip->w318 && !chip->w320;

    chip->w324 = chip->w301 && chip->w319 && !chip->w316 && chip->w318 && !chip->w320;

    chip->w325 = !chip->w318 && !chip->w316;

    chip->w326 = chip->w268 && !chip->l53[1] && !chip->l54[1];
    chip->w327 = chip->w268 && !chip->l53[1] && chip->l54[1];
    chip->w328 = chip->w268 && chip->l53[1] && !chip->l54[1];
    chip->w329 = chip->w268 && chip->l53[1] && chip->l54[1];

    chip->w330 = !(chip->w273 && chip->w332);

    chip->w331 = chip->w330 ? chip->l52[1] : chip->w311;

    chip->w332 = chip->w311 ^ chip->w313;

    chip->w333 = chip->cpu_sel || (chip->io_address & 1) != 0;

    chip->w334 = !(!chip->reg_m5 || chip->reg_m3);

    if (chip->hclk1)
    {
        chip->l79[0] = chip->tm_w1;
        chip->l80[0] = chip->l79[1];
        chip->l81[0] = chip->w335;
    }
    if (chip->hclk2)
    {
        chip->l79[1] = chip->l79[0];
        chip->l80[1] = chip->l80[0];
        chip->l81[1] = chip->l81[0];
    }

    chip->w335 = !chip->l79[1] && chip->l80[1];

    chip->w337 = chip->w334 || (chip->hclk1 && chip->l81[1]);

    chip->w336 = !chip->cpu_sel || chip->w337;

    chip->w338 = !((chip->reg_code & 8) != 0 || (chip->reg_code & 4) != 0);

    if (chip->hclk1)
    {
        chip->l82[0] = chip->tm_w1;
        chip->l83[0] = chip->l47;
        chip->l84[0] = chip->l83[1];
        chip->l85[0] = chip->l84[1];
        chip->l86[0] = chip->w189;
        chip->l87[0] = chip->l86[1];
        chip->l88[0] = chip->w341;
        chip->l89[0] = chip->w342;
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

    chip->w339 = !(chip->l84[1] && chip->w345);

    chip->w340 = !(!chip->l84[1] && chip->w345);

    chip->w341 = chip->l87[1] && chip->w340;

    chip->w342 = chip->l87[1] && chip->w339;

    chip->w343 = chip->hclk1 && chip->l88[1];

    chip->w344 = chip->hclk1 && chip->l89[1];

    chip->w345 = chip->w109 && !chip->cpu_sel && chip->l85[1];

    chip->w346 = !chip->w109 && chip->cpu_sel && chip->w338;

    if (chip->w336)
        chip->l90 = chip->tm_w1; // v counter
    if (chip->w134)
    {
        chip->io_data &= ~0xff00;
        chip->io_data |= (chip->l90 & 255) << 8;
    }

    if (chip->w337)
        chip->l91 = chip->tm_w1; // h counter
    chip->w347 = chip->w333 ? chip->l91 : chip->l90;
    if (chip->w134)
    {
        chip->io_data &= ~0xff;
        chip->io_data |= chip->w347 & 255;
    }
    chip->w348 = chip->w345 ? ((chip->vram_data >> 8) & 255) : (chip->vram_data & 255);
    if (chip->w344)
        chip->l92 = chip->w348;
    chip->w349 = chip->w346 ? ((chip->vram_data >> 8) & 255) : (chip->vram_data & 255);
    if (chip->w344)
        chip->l93 = chip->w349;
    if (chip->w160)
    {
        chip->io_data = (chip->l92 & 255) | ((chip->l93 & 255) << 8);
    }
    chip->w350 = chip->cpu_sel ? ((chip->io_data >> 8) & 255) : (chip->io_data & 255);
    
    if (chip->w304)
    {
        chip->l94 = chip->w350;
        chip->l95 = chip->io_data & 255;
    }

    if (chip->w294)
    {
        chip->l96 = chip->l94;
        chip->l97 = chip->l95;
    }
    chip->w351 = chip->w331 ? chip->l96 : chip->l97;
    if (chip->w328)
    {
        chip->vram_address = (chip->w351 & 255) | ((chip->l96 & 255) << 8);
        chip->unk_data = chip->l96;
    }

    if (chip->w291)
    {
        chip->l98 = chip->l94;
        chip->l99 = chip->l95;
    }
    chip->w352 = chip->w331 ? chip->l98 : chip->l99;
    if (chip->w327)
    {
        chip->vram_address = (chip->w352 & 255) | ((chip->l98 & 255) << 8);
        chip->unk_data = chip->l98;
    }

    if (chip->w292)
    {
        chip->l100 = chip->l94;
        chip->l101 = chip->l95;
    }
    chip->w353 = chip->w331 ? chip->l100 : chip->l101;
    if (chip->w329)
    {
        chip->vram_address = (chip->w353 & 255) | ((chip->l100 & 255) << 8);
        chip->unk_data = chip->l100;
    }

    if (chip->w293)
    {
        chip->l102 = chip->l94;
        chip->l103 = chip->l95;
    }
    chip->w354 = chip->w331 ? chip->l102 : chip->l103;
    if (chip->w326)
    {
        chip->vram_address = (chip->w354 & 255) | ((chip->l102 & 255) << 8);
        chip->unk_data = chip->l102;
    }

    if (chip->w47)
    {
        chip->io_data &= ~255;
        chip->io_data |= chip->w11 << 1;
        chip->io_data |= chip->w12 << 2;
    }

    if (!chip->w268)
        chip->unk_data = 0;

    if (chip->hclk1)
    {
        chip->l104[0] = chip->unk_data;
    }
    if (chip->hclk2)
    {
        chip->l104[1] = chip->l104[0];
    }
}

void VDP_ClockHVCounters(vdp_t* chip)
{
    int i, j;

    if (chip->hclk1)
    {
        i = chip->l105[1];
        i += chip->tm_w1;
        if (chip->tm_w1)
            i = chip->tm_w2;

        i &= 511;
        chip->l105[0] = i;

        i = chip->l106[1];
        i += chip->w363;
        if (chip->w361)
            i = chip->w364;
        i &= 511;
        chip->l106[0] = i;

        chip->l107[0] = (chip->l107[1] << 1) | chip->tm_w1;
        chip->l127[0] = (chip->l127[1] << 1) | chip->tm_w1;
        chip->l135[0] = (chip->l127[1] << 1) | chip->tm_w1;

        chip->l108[0] = chip->tm_w1;
        chip->l109[0] = chip->w359;
        chip->l110[0] = chip->tm_w1;
        chip->l111[0] = chip->tm_w1;
        chip->l112[0] = chip->tm_w1;
        chip->l113[0] = chip->l121[1];
        chip->l114[0] = chip->tm_w1;
        chip->l115[0] = chip->tm_w1;
        chip->l116[0] = chip->w384;
        chip->l117[0] = chip->tm_w1;
        chip->l118[0] = chip->tm_w1;
        chip->l119[0] = chip->tm_w1;
        chip->l120[0] = chip->tm_w1;
        chip->l121[0] = chip->w376;
        chip->l122[0] = chip->tm_w1;
        chip->l123[0] = chip->tm_w1;
        chip->l124[0] = chip->tm_w1;
        chip->l125[0] = chip->tm_w1;
        chip->l126[0] = chip->tm_w1;
        chip->l128[0] = chip->tm_w1;
        chip->l129[0] = chip->tm_w1;
        chip->l130[0] = chip->tm_w1;
        chip->l131[0] = chip->tm_w1;
        chip->l132[0] = chip->tm_w1;
        chip->l133[0] = chip->tm_w1;
        chip->l134[0] = chip->tm_w1;
    }
    if (chip->hclk2)
    {
        chip->l105[1] = chip->l105[0];
        chip->l106[1] = chip->l106[0];
        chip->l107[1] = chip->l107[0];
        chip->l127[1] = chip->l127[0];
        chip->l135[1] = chip->l135[0];
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
    }

    chip->w380 = (chip->reg_test1 & 64) == 0 && (chip->reg_test1 & 32) == 0 && (chip->reg_test1 & 16) == 0;
    chip->w357 = (chip->reg_test1 & 64) == 0 && (chip->reg_test1 & 32) == 0 && (chip->reg_test1 & 16) != 0;
    chip->w371 = (chip->reg_test1 & 64) == 0 && (chip->reg_test1 & 32) != 0 && (chip->reg_test1 & 16) == 0;
    chip->w382 = (chip->reg_test1 & 64) == 0 && (chip->reg_test1 & 32) != 0 && (chip->reg_test1 & 16) != 0;
    chip->w383 = (chip->reg_test1 & 64) != 0 && (chip->reg_test1 & 32) == 0 && (chip->reg_test1 & 16) == 0;
    chip->w381 = (chip->reg_test1 & 64) != 0 && (chip->reg_test1 & 32) == 0 && (chip->reg_test1 & 16) != 0;

    if (chip->tm_w1)
        chip->w355 = (chip->l105[1] << 1) | chip->tm_w2;
    else
        chip->w355 = chip->l105[1];

    if (chip->tm_w1)
    {
        chip->io_data &= ~255;
        chip->io_data |= (!chip->l110[1]) << 8;
        chip->io_data |= (!chip->w360) << 7;
        chip->io_data |= (!chip->w379) << 6;
        chip->io_data |= (!chip->w393) << 5;
    }

    if (chip->tm_w1)
    {
        chip->io_data = 0;
        chip->io_data |= (!chip->l109[1]) << 0;
        chip->io_data |= (!chip->l108[1]) << 1;
        chip->io_data |= (!chip->w356) << 2;
        chip->io_data |= (!chip->w372) << 3;
        chip->io_data |= (!chip->w385) << 4;
        chip->io_data |= (!chip->w394) << 5;
        chip->io_data |= (!chip->l116[1]) << 7;
        chip->io_data |= (!chip->l134[1]) << 7;
    }

    chip->w356 = chip->w357 || (chip->l118[1] && chip->w380);

    chip->w358 = !(chip->tm_w1 || chip->tm_w2 || chip->tm_w3 || chip->tm_w4);
    chip->w359 = chip->w358 && chip->w386 && chip->w395;

    chip->w360 = !chip->l117[1];

    chip->w361 = chip->l112[1] || chip->w88 || chip->reset_comb || chip->w370;

    chip->w362 = !(chip->w361 || (chip->reg_test1 & 8) != 0);

    chip->w363 = chip->w362 || ((chip->reg_test1 & 8) != 0 && !chip->cpu_intak);

    if (chip->w88)
        chip->w364 = chip->io_data & 511;
    else
    {
        int w365;
        int w366;
        int w367;
        int w368;
        int w369;
        chip->w364 = 64 | 128 | 256;

        w365 = !chip->reg_80_b0 && chip->reg_rs1 && chip->reg_m5;
        w366 = !chip->reg_80_b0 && !chip->reg_rs1;
        w367 = chip->reg_80_b0 && !chip->reg_rs1;
        w369 = !chip->reg_rs1 && chip->reg_80_b0 && chip->reg_m5;
        w368 = w365 || w369;
        if (w365)
            chip->w364 |= 1;
        if (w366)
            chip->w364 |= 2;
        if (w367)
            chip->w364 |= 4;
        if (w368)
            chip->w364 |= 8;
        if (!w365)
            chip->w364 |= 16;

        // h40: 457
        // h32: 466
        // m4: 466
    }

    chip->w370 = !chip->l113[1] && chip->l121[1] && chip->reg_80_b0;


    chip->w372 = chip->w371 || (chip->l119[1] && chip->w380);

    chip->w373 = !(chip->reg_m5 ? (chip->l107[1] & 128) != 0 : chip->tm_w1);

    chip->w374 = chip->reg_8c_b6 ? chip->hclk2 : chip->w373;

    chip->w375 = chip->tm_w1 || chip->tm_w2;

    chip->w377 = !(chip->l114[1] || chip->reset_comb);

    chip->w376 = chip->w377 && (chip->l121[1] || chip->w375);

    chip->w378 = chip->reg_vscr ? chip->l124[1] : !chip->l117[1];

    chip->w379 = chip->w378 && chip->w380;

    chip->w384 = !(chip->tm_w1 && !chip->l132[1]);

    chip->w385 = chip->w382 || (chip->w380 && chip->l125[1]);

    chip->w386 = !(chip->tm_w1 || chip->tm_w2 || chip->tm_w3);

    chip->w387 = chip->reg_m5 ? (chip->l127[1] & 128) != 0 : chip->tm_w1;

    chip->w388 = chip->t29 && chip->tm_w2;

    chip->w389 = chip->reg_disp && chip->t29 && chip->tm_w3;

    chip->w390 = chip->tm_w1 || chip->tm_w2;

    chip->w391 = chip->tm_w1 && chip->tm_w2;

    chip->w392 = chip->tm_w1 || chip->tm_w2;

    if (chip->l130[1])
        chip->t29 = 1;
    else if (chip->w392)
        chip->t29 = 0;

    chip->w393 = chip->l133[1] && chip->w380;

    chip->w394 = chip->w384 || (chip->w380 && chip->l126[1]);

    chip->w395 = !(chip->tm_w1 || chip->tm_w2 || chip->tm_w3 || chip->tm_w4);

    chip->w396 = chip->reg_m5 ? (chip->l135[1] & 64) != 0 : chip->tm_w1;
}

vdp_t vdp;

int main()
{
#if 0
    for (int i = 0; i < 100; i++)
    {
        VDP_ClockDCLK(&vdp, i & 1, !(i & 1));
        VDP_ClockDCLK(&vdp, 0, 0);
        printf("clk1 %i clk2 %i\n", vdp.clk1, vdp.clk2);
    }
#endif
    for (int i = 0; i < 200; i++)
    {
        VDP_ClockMCLK(&vdp, i & 1);
        VDP_ClockMCLK(&vdp, i & 1);
        printf("clk1 %i clk2 %i clk3 %i clk4 %i clk5 %i\n", vdp.mclk_clk1, vdp.mclk_clk2, vdp.mclk_clk3, vdp.mclk_clk4, vdp.mclk_clk5);
    }
}
