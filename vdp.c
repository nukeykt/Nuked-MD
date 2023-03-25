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
    int i;

    if (chip->hclk1)
    {
        i = chip->l105[1];
        i += chip->w436;
        if (chip->w437)
            i = chip->w428;

        i &= 511;
        chip->l105[0] = i;

        i = chip->l106[1];
        i += chip->w363;
        if (chip->w361)
            i = chip->w364;
        i &= 511;
        chip->l106[0] = i;

        chip->l107[0] = (chip->l107[1] << 1) | chip->tm_w1;
        chip->l127[0] = (chip->l127[1] << 1) | chip->w420;
        chip->l135[0] = (chip->l135[1] << 1) | chip->w421;
        chip->l158[0] = (chip->l158[1] << 1) | chip->l129[1];

        chip->l108[0] = chip->w476;
        chip->l109[0] = chip->w359;
        chip->l110[0] = chip->w504;
        chip->l111[0] = chip->w503;
        chip->l112[0] = chip->w490;
        chip->l113[0] = chip->l121[1];
        chip->l114[0] = chip->w491;
        chip->l115[0] = chip->w502;
        chip->l116[0] = chip->w384;
        chip->l117[0] = chip->w505;
        chip->l118[0] = chip->w477;
        chip->l119[0] = chip->w478;
        chip->l120[0] = chip->tm_w1;
        chip->l121[0] = chip->w376;
        chip->l122[0] = chip->w492;
        chip->l123[0] = chip->w501;
        chip->l124[0] = chip->w506;
        chip->l125[0] = chip->w479;
        chip->l126[0] = chip->w480;
        chip->l128[0] = chip->w397;
        chip->l129[0] = chip->t30;
        chip->l130[0] = chip->w493;
        chip->l131[0] = chip->w500;
        chip->l132[0] = chip->w403;
        chip->l133[0] = chip->w507;
        chip->l134[0] = chip->w481;
        chip->l136[0] = chip->w404;
        chip->l137[0] = chip->w494;
        chip->l138[0] = chip->w499;
        chip->l139[0] = chip->w410;
        chip->l140[0] = chip->w508;
        chip->l141[0] = chip->w482;
        chip->l142[0] = chip->w489;
        chip->l143[0] = chip->w495;
        chip->l144[0] = chip->w498;
        chip->l145[0] = chip->w510;
        chip->l146[0] = chip->w509;
        chip->l147[0] = chip->w487;
        chip->l148[0] = chip->w488;
        chip->l149[0] = chip->tm_w1;
        chip->l150[0] = chip->w412;
        chip->l151[0] = chip->w413;
        chip->l152[0] = chip->w496;
        chip->l153[0] = chip->w497;
        chip->l154[0] = chip->w511;
        chip->l155[0] = chip->w485;
        chip->l156[0] = chip->w484;
        chip->l157[0] = chip->l150[1];
        chip->l159[0] = chip->w512;

        i = chip->l160[1] ^ chip->tm_w1;
        if (chip->reset_comb)
            i = 0;
        chip->l160[0] = i;

        chip->l161[0] = chip->w420;
        chip->l162[0] = !chip->w475;
        chip->l163[0] = chip->w474;
        chip->l164[0] = chip->w373;
        chip->l165[0] = chip->w472;

        i = chip->w446;
        i ^= chip->w455;
        if (chip->w451)
            i = 0;
        chip->l166[0] = i;

        chip->l167[0] = chip->w471;
        chip->l168[0] = chip->w456;
        chip->l169[0] = chip->w470;
        chip->l170[0] = chip->w469;
        chip->l171[0] = chip->l114[1];
        chip->l172[0] = !chip->w468;
        chip->l173[0] = chip->l121[1];
        chip->l174[0] = chip->w467;
        chip->l175[0] = chip->w464;
        chip->l176[0] = chip->l175[1];
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

    if (chip->tm_w1)
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

    if (chip->tm_w1)
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

    chip->w356 = chip->w357 || (chip->l118[1] && chip->w380);

    chip->w358 = !(chip->w476 || chip->w477 || chip->w478 || chip->w479);
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

    chip->w384 = !(chip->w483 && !chip->l132[1]);

    chip->w385 = chip->w382 || (chip->w380 && chip->l125[1]);

    chip->w386 = !(chip->w480 || chip->w483 || chip->tm_w3);

    chip->w387 = chip->reg_m5 ? (chip->l127[1] & 128) != 0 : chip->w420;

    chip->w388 = chip->t29 && chip->tm_w2;

    chip->w389 = chip->reg_disp && chip->t29 && chip->t38;

    chip->w390 = chip->w441 || chip->w450;

    chip->w391 = chip->t31 && chip->w443;

    chip->w392 = chip->reset_comb || chip->tm_w2;

    if (chip->l130[1])
        chip->t29 = 1;
    else if (chip->w392)
        chip->t29 = 0;

    chip->w393 = chip->l133[1] && chip->w380;

    chip->w394 = chip->w384 || (chip->w380 && chip->l126[1]);

    chip->w395 = !(chip->w486 || chip->tm_w2 || chip->tm_w3 || chip->tm_w4);

    chip->w396 = chip->reg_m5 ? (chip->l135[1] & 64) != 0 : chip->w421;

    chip->w397 = !(!chip->reg_80_b0 && chip->w387);

    chip->w398 = !(chip->w441 || chip->w443 || chip->w450);

    chip->w399 = !chip->w398 && chip->t32;

    chip->w400 = chip->w390 && chip->t32;

    if (chip->w401)
        chip->t30 = 1;
    else if (chip->l152[1])
        chip->t30 = 0;

    chip->w401 = chip->reset_comb || chip->l143[1];
    
    chip->w402 = chip->w380 && chip->l140[1];

    chip->w403 = chip->l139[1] || chip->w410;

    chip->w404 = !(chip->tm_w1 && !chip->reg_8c_b5);

    chip->w405 = chip->w398 && chip->t33;

    chip->w406 = chip->w398 && chip->t33;

    if (chip->w407)
        chip->t31 = 1;
    else if (chip->w408)
        chip->t31 = 0;

    chip->w407 = chip->l137[1] || chip->l153[1];

    chip->w409 = chip->l131[1] || chip->l144[1];
    chip->w408 = chip->reset_comb || chip->w409;

    chip->w410 = chip->w361 && chip->w416;

    chip->w411 = chip->reg_8c_b5 && chip->l149[1];

    chip->w412 = chip->w405 || chip->w399;

    chip->w413 = chip->w405 || chip->w400 || chip->w391;

    if (chip->w414)
        chip->t32 = 1;
    else if (chip->l138[1])
        chip->t32 = 0;

    chip->w414 = chip->w409 || chip->reset_comb;

    chip->w415 = chip->w380 && chip->l154[1];

    chip->w416 = !chip->reg_8c_b4 && chip->reg_80_b0;

    chip->w417 = chip->l146[1] || chip->l145[1];

    chip->w418 = chip->l145[1] || chip->l155[1];

    chip->w419 = chip->w381 || (chip->w380 && chip->l148[1]);

    chip->w420 = chip->l151[1] ^ chip->tm_w2;

    chip->w421 = chip->w427 ? chip->l160[1] : chip->l157[1];

    chip->w422 = chip->reg_m5 ? (chip->l158[1] & 128) != 0 : chip->l129[1];

    if (chip->w423)
        chip->t33 = 1;
    else if (chip->l123[1])
        chip->t33 = 0;
    
    chip->w423 = chip->reset_comb || chip->l131[1];

    chip->w424 = chip->l159[1] && chip->tm_w2;

    chip->w425 = chip->w416 && !chip->reg_81_b0;

    chip->w426 = chip->w420 && !chip->l161[1];

    chip->w427 = chip->reg_m5 && chip->reg_80_b3;

    if (chip->w86)
        chip->w428 = chip->io_data & 511;
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
        chip->w428 = 384;
        if (!w431)
            chip->w428 |= 64;
        if (w429)
            chip->w428 |= 32;
        if (!chip->w107)
            chip->w428 |= 16;
        if (w433)
            chip->w428 |= 8;
        if (!chip->cpu_pal)
            chip->w428 |= 4;
        if (w434)
            chip->w428 |= 2;
        if (w435)
            chip->w428 |= 1;
    }

    chip->w438 = chip->l115[1] && chip->l174[1];

    chip->w437 = chip->w438 || chip->reset_comb || chip->w86 || chip->w460;

    chip->w436 = ((chip->reg_test1 & 4) == 0 && chip->l115[1] && !chip->w437) && ((chip->reg_test1 & 4) != 0 && !chip->cpu_bg);

    chip->w439 = !(chip->reg_disp && (chip->l162[1] || chip->t38));

    chip->w440 = chip->reset_comb || chip->w442;

    if (chip->w444)
        chip->t34 = 1;
    else if (chip->w440)
        chip->t34 = 0;

    chip->w441 = chip->t34 && chip->tm_w2;

    chip->w442 = chip->l163[1] && chip->w449;

    if (chip->w445)
        chip->t35 = 1;
    else if (chip->w444)
        chip->t35 = 0;

    chip->w443 = chip->t35 && chip->reg_m5;

    chip->w444 = chip->l164[1] && chip->w449;

    chip->w445 = chip->reset_comb || chip->w447;

    if (chip->w452)
        chip->t36 = 1;
    else if (chip->w448)
        chip->t36 = 0;

    chip->w446 = chip->l166[1];
    if (chip->l168[1])
        chip->w446 = 0;

    chip->w447 = chip->l165[1] && chip->w449;

    chip->w448 = chip->reset_comb || chip->w447;

    chip->w449 = chip->l111[1] || !chip->w446;

    chip->w450 = chip->reg_m5 && chip->t36;

    chip->w451 = chip->reset_comb || !chip->reg_lsm0 || (chip->w454 && !chip->t39);

    chip->w452 = chip->l169[1] && chip->w449;

    chip->w453 = chip->w452 || chip->reset_comb;

    if (chip->w453)
        chip->t37 = 1;
    else if (chip->l167[1])
        chip->t37 = 0;

    chip->w454 = chip->reg_80_b0 && chip->w459;

    chip->w455 = !chip->reg_80_b0 && chip->w459;

    chip->w456 = chip->w454 && chip->t39;

    chip->w457 = !chip->l170[1];

    chip->w458 = chip->reset_comb || chip->w457;

    if (chip->l172[1])
        chip->t38 = 1;
    else if (chip->w458)
        chip->t38 = 0;

    chip->w459 = !chip->l170[1] && chip->l110[1];

    if (chip->w465)
        chip->t39 = 1;
    else if (chip->w461)
        chip->t39 = 0;

    chip->w460 = chip->reg_80_b0 && !chip->l176[1] && chip->tm_w3;

    chip->w461 = chip->reset_comb || (chip->w460 && chip->l171[1]);

    chip->w462 = !(chip->l167[1] || chip->reset_comb);

    chip->w463 = chip->l120[1] && (chip->l121[1] || chip->l114[1]);

    chip->w464 = chip->w462 && (chip->l175[1] || chip->w463);

    chip->w465 = chip->w460 && chip->l173[1];

    chip->w466 = !chip->w439;

    chip->pla_vcnt[0] = chip->l105[1] == 511;
    chip->pla_vcnt[1] = chip->w446 && chip->cpu_pal && chip->w108 && chip->l105[1] == 471;
    chip->pla_vcnt[2] = chip->w446 && chip->cpu_pal && chip->w107 && chip->l105[1] == 463;
    chip->pla_vcnt[3] = chip->w446 && !chip->cpu_pal && chip->w107 && chip->l105[1] == 490;
    chip->pla_vcnt[4] = !chip->w446 && chip->cpu_pal && chip->w108 && chip->l105[1] == 472;
    chip->pla_vcnt[5] = !chip->w446 && chip->cpu_pal && chip->w107 && chip->l105[1] == 464;
    chip->pla_vcnt[6] = !chip->w446 && chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 448;
    chip->pla_vcnt[7] = !chip->w446 && !chip->cpu_pal && chip->w107 && chip->l105[1] == 491;
    chip->pla_vcnt[8] = !chip->w446 && !chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 475;
    chip->pla_vcnt[9] = chip->w446 && chip->cpu_pal && chip->w108 && chip->l105[1] == 468;
    chip->pla_vcnt[10] = chip->w446 && chip->cpu_pal && chip->w107 && chip->l105[1] == 460;
    chip->pla_vcnt[11] = chip->w446 && !chip->cpu_pal && chip->w107 && chip->l105[1] == 487;
    chip->pla_vcnt[12] = !chip->w446 && chip->cpu_pal && chip->w108 && chip->l105[1] == 469;
    chip->pla_vcnt[13] = !chip->w446 && chip->cpu_pal && chip->w107 && chip->l105[1] == 461;
    chip->pla_vcnt[14] = !chip->w446 && chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 445;
    chip->pla_vcnt[15] = !chip->w446 && !chip->cpu_pal && chip->w107 && chip->l105[1] == 488;
    chip->pla_vcnt[16] = !chip->w446 && !chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 472;
    chip->pla_vcnt[17] = chip->w446 && chip->cpu_pal && chip->w108 && chip->l105[1] == 465;
    chip->pla_vcnt[18] = chip->w446 && chip->cpu_pal && chip->w107 && chip->l105[1] == 457;
    chip->pla_vcnt[19] = chip->w446 && !chip->cpu_pal && chip->w107 && chip->l105[1] == 484;
    chip->pla_vcnt[20] = !chip->w446 && chip->cpu_pal && chip->w108 && chip->l105[1] == 466;
    chip->pla_vcnt[21] = !chip->w446 && chip->cpu_pal && chip->w107 && chip->l105[1] == 458;
    chip->pla_vcnt[22] = !chip->w446 && chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 442;
    chip->pla_vcnt[23] = !chip->w446 && !chip->cpu_pal && chip->w107 && chip->l105[1] == 485;
    chip->pla_vcnt[24] = !chip->w446 && !chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 469;
    chip->pla_vcnt[25] = chip->cpu_pal && chip->w108 && chip->l105[1] == 482;
    chip->pla_vcnt[26] = chip->cpu_pal && chip->w107 && chip->l105[1] == 474;
    chip->pla_vcnt[27] = chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 458;
    chip->pla_vcnt[28] = !chip->cpu_pal && chip->w107 && chip->l105[1] == 501;
    chip->pla_vcnt[29] = !chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 485;
    chip->pla_vcnt[30] = chip->reg_lsm0 && chip->cpu_pal && chip->w108 && chip->l105[1] == 263;
    chip->pla_vcnt[31] = chip->reg_lsm0 && chip->cpu_pal && chip->w107 && chip->l105[1] == 255;
    chip->pla_vcnt[32] = !chip->reg_lsm0 && chip->cpu_pal && chip->w108 && chip->l105[1] == 264;
    chip->pla_vcnt[33] = !chip->reg_lsm0 && chip->cpu_pal && chip->w107 && chip->l105[1] == 256;
    chip->pla_vcnt[34] = !chip->reg_lsm0 && chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 240;
    chip->pla_vcnt[35] = !chip->cpu_pal && chip->w107 && chip->l105[1] == 232;
    chip->pla_vcnt[36] = !chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 216;
    chip->pla_vcnt[37] = chip->w108 && chip->l105[1] == 240;
    chip->pla_vcnt[38] = chip->w107 && chip->l105[1] == 224;
    chip->pla_vcnt[39] = !chip->reg_m5 && chip->l105[1] == 192;
    chip->pla_vcnt[40] = chip->l105[1] == 0;
    chip->pla_vcnt[41] = chip->reg_lsm0 && chip->cpu_pal && chip->w108 && chip->l105[1] == 265;
    chip->pla_vcnt[42] = chip->reg_lsm0 && chip->cpu_pal && chip->w107 && chip->l105[1] == 257;
    chip->pla_vcnt[43] = !chip->reg_lsm0 && chip->cpu_pal && chip->w108 && chip->l105[1] == 257;
    chip->pla_vcnt[44] = !chip->reg_lsm0 && chip->cpu_pal && chip->w107 && chip->l105[1] == 258;
    chip->pla_vcnt[45] = !chip->reg_lsm0 && chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 242;
    chip->pla_vcnt[46] = !chip->cpu_pal && chip->w107 && chip->l105[1] == 234;
    chip->pla_vcnt[47] = !chip->cpu_pal && !chip->reg_m5 && chip->l105[1] == 218;
    
    chip->pla_hcnt1[0] = chip->w466 && !chip->reg_m5 && chip->l106[1] == 488;
    chip->pla_hcnt1[1] = chip->w466 && !chip->reg_m5 && chip->l106[1] == 484;
    chip->pla_hcnt1[2] = chip->w466 && !chip->reg_m5 && (chip->l106[1] & 507) == 472;
    chip->pla_hcnt1[3] = chip->w466 && !chip->reg_m5 && (chip->l106[1] & 503) == 272;
    chip->pla_hcnt1[4] = chip->w466 && !chip->reg_m5 && (chip->l106[1] & 495) == 268;
    chip->pla_hcnt1[5] = chip->w466 && chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 463) == 266;
    chip->pla_hcnt1[6] = chip->w466 && chip->reg_m5 && (chip->l106[1] & 271) == 10;
    chip->pla_hcnt1[7] = chip->w466 && chip->reg_m5 && chip->reg_rs1 && chip->l106[1] == 484;
    chip->pla_hcnt1[8] = chip->w466 && chip->reg_m5 && chip->reg_rs1 && chip->l106[1] == 462;
    chip->pla_hcnt1[9] = chip->w466 && chip->reg_m5 && chip->reg_rs1 && chip->l106[1] == 458;
    chip->pla_hcnt1[10] = chip->w466 && !chip->w425 && chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 505) == 344;
    chip->pla_hcnt1[11] = chip->w466 && !chip->w416 && chip->reg_m5 && chip->reg_rs1 && chip->l106[1] == 364;
    chip->pla_hcnt1[12] = chip->w466 && !chip->w416 && chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 509) == 360;
    chip->pla_hcnt1[13] = chip->w466 && !chip->w416 && chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 505) == 352;
    chip->pla_hcnt1[14] = chip->w466 && chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 505) == 336;
    chip->pla_hcnt1[15] = chip->w466 && chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 505) == 328;
    chip->pla_hcnt1[16] = chip->w466 && chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 509) == 324;
    chip->pla_hcnt1[17] = chip->w466 && !chip->w416 && chip->reg_m5 && !chip->reg_rs1 && chip->l106[1] == 290;
    chip->pla_hcnt1[18] = chip->w466 && !chip->w416 && chip->reg_m5 && !chip->reg_rs1 && (chip->l106[1] & 509) == 292;
    chip->pla_hcnt1[19] = chip->w466 && !chip->w425 && chip->reg_m5 && !chip->reg_rs1 && (chip->l106[1] & 505) == 280;
    chip->pla_hcnt1[20] = chip->w466 && chip->reg_m5 && !chip->reg_rs1 && (chip->l106[1] & 505) == 264;
    chip->pla_hcnt1[21] = chip->w466 && chip->reg_m5 && !chip->reg_rs1 && (chip->l106[1] & 509) == 260;
    chip->pla_hcnt1[22] = chip->w466 && chip->reg_m5 && !chip->reg_rs1 && (chip->l106[1] & 505) == 272;
    chip->pla_hcnt1[23] = chip->w466 && chip->reg_m5 && chip->l106[1] == 486;
    chip->pla_hcnt1[24] = chip->w466 && chip->reg_m5 && (chip->l106[1] & 503) == 498;
    chip->pla_hcnt1[25] = chip->w466 && chip->reg_m5 && (chip->l106[1] & 505) == 488;
    chip->pla_hcnt1[26] = chip->w466 && chip->reg_m5 && (chip->l106[1] & 509) == 480;
    chip->pla_hcnt1[27] = chip->w466 && chip->reg_m5 && (chip->l106[1] & 497) == 464;
    chip->pla_hcnt1[28] = chip->w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 488;
    chip->pla_hcnt1[29] = chip->w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 476;
    chip->pla_hcnt1[30] = chip->w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 284;
    chip->pla_hcnt1[31] = chip->w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 272;
    chip->pla_hcnt1[32] = chip->w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 484;
    chip->pla_hcnt1[33] = chip->w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 472;
    chip->pla_hcnt1[34] = chip->w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 280;
    chip->pla_hcnt1[35] = chip->w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 268;
    chip->pla_hcnt1[36] = chip->w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 480;
    chip->pla_hcnt1[37] = chip->w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 468;
    chip->pla_hcnt1[38] = chip->w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 276;
    chip->pla_hcnt1[39] = chip->w466 && !chip->reg_m5 && (chip->l106[1] & 509) == 264;
    chip->pla_hcnt1[40] = chip->w466 && !chip->reg_m5 && (chip->l106[1] & 279) == 18;
    chip->pla_hcnt1[41] = chip->w466 && !chip->reg_m5 && (chip->l106[1] & 287) == 10;
    chip->pla_hcnt1[42] = chip->w466 && !chip->reg_m5 && (chip->l106[1] & 497) == 496;
    chip->pla_hcnt1[43] = !chip->w466 && (chip->l106[1] & 259) == 0;
    chip->pla_hcnt1[44] = (chip->l106[1] & 1) == 1;
    chip->pla_hcnt1[45] = chip->w466 && chip->reg_m5 && chip->l106[1] == 510;
    chip->pla_hcnt1[46] = chip->w466 && chip->reg_m5 && chip->l106[1] == 502;
    chip->pla_hcnt1[47] = chip->w466 && chip->reg_m5 && chip->l106[1] == 508;
    chip->pla_hcnt1[48] = chip->w466 && chip->reg_m5 && chip->l106[1] == 500;
    chip->pla_hcnt1[49] = chip->w466 && chip->reg_m5 && chip->l106[1] == 504;
    chip->pla_hcnt1[50] = chip->w466 && chip->reg_m5 && chip->l106[1] == 496;
    chip->pla_hcnt1[51] = chip->w466 && chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 455) == 262;
    chip->pla_hcnt1[52] = chip->w466 && (chip->l106[1] & 263) == 6;
    chip->pla_hcnt1[53] = chip->w466 && chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 455) == 260;
    chip->pla_hcnt1[54] = chip->w466 && (chip->l106[1] & 263) == 4;
    chip->pla_hcnt1[55] = chip->w466 && chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 463) == 264;
    chip->pla_hcnt1[56] = chip->w466 && (chip->l106[1] & 271) == 8;
    chip->pla_hcnt1[57] = chip->w466 && !chip->reg_m5 && (chip->l106[1] & 271) == 8;
    chip->pla_hcnt1[58] = chip->w466 && chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 463) == 256;
    chip->pla_hcnt1[59] = chip->w466 && (chip->l106[1] & 271) == 0;
    chip->pla_hcnt1[60] = !chip->w466 && (chip->l106[1] & 63) == 50;
    chip->pla_hcnt1[61] = chip->w466 && chip->reg_m5 && chip->reg_rs1 && chip->l106[1] == 306;
    chip->pla_hcnt1[62] = chip->w466 && chip->reg_m5 && (chip->l106[1] & 319) == 50;

    chip->pla_hcnt2[0] = (chip->l106[1] & 239) == 227;
    chip->pla_hcnt2[1] = chip->l106[1] == 507;
    chip->pla_hcnt2[2] = chip->reg_m5 && chip->reg_rs1 && (chip->l106[1] & 463) == 269;
    chip->pla_hcnt2[3] = chip->reg_m5 && (chip->l106[1] & 271) == 13;
    chip->pla_hcnt2[4] = !chip->reg_m5 && chip->l106[1] == 483;
    chip->pla_hcnt2[5] = !chip->reg_m5 && chip->l106[1] == 470;
    chip->pla_hcnt2[6] = !chip->reg_m5 && chip->l106[1] == 278;
    chip->pla_hcnt2[7] = !chip->reg_m5 && chip->l106[1] == 267;
    chip->pla_hcnt2[8] = (chip->l106[1] & 15) == 15;
    chip->pla_hcnt2[9] = !chip->reg_m5 && (chip->l106[1] & 15) == 15;
    chip->pla_hcnt2[10] = (chip->l106[1] & 15) == 7;
    chip->pla_hcnt2[11] = (chip->l106[1] & 7) == 0;
    chip->pla_hcnt2[12] = chip->reg_rs1 && chip->l106[1] == 322;
    chip->pla_hcnt2[13] = !chip->reg_rs1 && chip->l106[1] == 259;
    chip->pla_hcnt2[14] = chip->l106[1] == 0;
    chip->pla_hcnt2[15] = chip->reg_rs1 && chip->l106[1] == 120;
    chip->pla_hcnt2[16] = !chip->reg_rs1 && chip->l106[1] == 95;
    chip->pla_hcnt2[17] = chip->reg_m5 && chip->reg_rs1 && chip->l106[1] == 328;
    chip->pla_hcnt2[18] = chip->reg_m5 && !chip->reg_rs1 && chip->l106[1] == 264;
    chip->pla_hcnt2[19] = !chip->reg_m5 && chip->l106[1] == 488;
    chip->pla_hcnt2[20] = chip->reg_rs1 && chip->l106[1] == 482;
    chip->pla_hcnt2[21] = !chip->reg_rs1 && chip->l106[1] == 488;
    chip->pla_hcnt2[22] = chip->reg_rs1 && chip->l106[1] == 358;
    chip->pla_hcnt2[23] = !chip->reg_rs1 && chip->l106[1] == 292;
    chip->pla_hcnt2[24] = chip->reg_rs1 && chip->l106[1] == 164;
    chip->pla_hcnt2[25] = chip->reg_rs1 && chip->l106[1] == 466;
    chip->pla_hcnt2[26] = !chip->reg_rs1 && chip->l106[1] == 134;
    chip->pla_hcnt2[27] = !chip->reg_rs1 && chip->l106[1] == 474;
    chip->pla_hcnt2[28] = chip->reg_rs1 && chip->l106[1] == 148;
    chip->pla_hcnt2[29] = !chip->reg_rs1 && chip->l106[1] == 121;
    chip->pla_hcnt2[30] = chip->reg_rs1 && chip->l106[1] == 120;
    chip->pla_hcnt2[31] = !chip->reg_rs1 && chip->l106[1] == 95;
    chip->pla_hcnt2[32] = chip->reg_rs1 && chip->l106[1] == 1;
    chip->pla_hcnt2[33] = !chip->reg_rs1 && chip->l106[1] == 0;
    chip->pla_hcnt2[34] = chip->reg_rs1 && chip->l106[1] == 348;
    chip->pla_hcnt2[35] = !chip->reg_rs1 && chip->l106[1] == 284;
    chip->pla_hcnt2[36] = chip->reg_rs1 && chip->l106[1] == 330;
    chip->pla_hcnt2[37] = !chip->reg_rs1 && chip->l106[1] == 266;
    chip->pla_hcnt2[38] = chip->l106[1] == 18;
    chip->pla_hcnt2[39] = !chip->reg_lcb && chip->l106[1] == 10;
    chip->pla_hcnt2[40] = chip->reg_rs1 && chip->l106[1] == 43;
    chip->pla_hcnt2[41] = !chip->reg_rs1 && chip->l106[1] == 36;
    chip->pla_hcnt2[42] = chip->reg_rs1 && chip->l106[1] == 253;
    chip->pla_hcnt2[43] = !chip->reg_rs1 && chip->l106[1] == 206;
    chip->pla_hcnt2[44] = chip->reg_rs1 && chip->l106[1] == 363;
    chip->pla_hcnt2[45] = !chip->reg_rs1 && chip->l106[1] == 294;

    chip->w467 = chip->pla_vcnt[41] || chip->pla_vcnt[42] || chip->pla_vcnt[43]
        || chip->pla_vcnt[44] || chip->pla_vcnt[45] || chip->pla_vcnt[46] || chip->pla_vcnt[47];
    chip->w468 = !chip->pla_vcnt[40];
    chip->w469 = !(chip->pla_vcnt[37] || chip->pla_vcnt[38] || chip->pla_vcnt[39]);
    chip->w470 = chip->pla_vcnt[30] || chip->pla_vcnt[31] || chip->pla_vcnt[32]
        || chip->pla_vcnt[33] || chip->pla_vcnt[34] || chip->pla_vcnt[35] || chip->pla_vcnt[36];
    chip->w471 = chip->pla_vcnt[25] || chip->pla_vcnt[26] || chip->pla_vcnt[27]
        || chip->pla_vcnt[28] || chip->pla_vcnt[29];
    chip->w472 = chip->pla_vcnt[17] || chip->pla_vcnt[18] || chip->pla_vcnt[19] || chip->pla_vcnt[20]
        || chip->pla_vcnt[21] || chip->pla_vcnt[22] || chip->pla_vcnt[23] || chip->pla_vcnt[24];
    chip->w473 = chip->pla_vcnt[9] || chip->pla_vcnt[10] || chip->pla_vcnt[11] || chip->pla_vcnt[12]
        || chip->pla_vcnt[13] || chip->pla_vcnt[14] || chip->pla_vcnt[15] || chip->pla_vcnt[16];
    chip->w474 = chip->pla_vcnt[1] || chip->pla_vcnt[2] || chip->pla_vcnt[3] || chip->pla_vcnt[4]
        || chip->pla_vcnt[5] || chip->pla_vcnt[6] || chip->pla_vcnt[7] || chip->pla_vcnt[8];
    chip->w475 = !chip->pla_vcnt[0];

    chip->w476 = chip->pla_hcnt1[60] || chip->pla_hcnt1[61] || chip->pla_hcnt1[62];
    chip->w477 = chip->pla_hcnt1[50] || chip->pla_hcnt1[57] || chip->pla_hcnt1[58] || chip->pla_hcnt1[59];
    chip->w478 = chip->pla_hcnt1[49] || chip->pla_hcnt1[55] || chip->pla_hcnt1[56];
    chip->w479 = chip->pla_hcnt1[47] || chip->pla_hcnt1[48] || chip->pla_hcnt1[53] || chip->pla_hcnt1[54];
    chip->w480 = chip->pla_hcnt1[45] || chip->pla_hcnt1[46] || chip->pla_hcnt1[51] || chip->pla_hcnt1[52];
    chip->w481 = chip->pla_hcnt1[5] || chip->pla_hcnt1[6] || chip->pla_hcnt1[36] ||
        chip->pla_hcnt1[37] || chip->pla_hcnt1[38] || chip->pla_hcnt1[39];
    chip->w482 = chip->pla_hcnt1[7] || chip->pla_hcnt1[8] || chip->pla_hcnt1[9] || chip->pla_hcnt1[10]
        || chip->pla_hcnt1[11] || chip->pla_hcnt1[12] || chip->pla_hcnt1[13] || chip->pla_hcnt1[14]
        || chip->pla_hcnt1[15] || chip->pla_hcnt1[16] || chip->pla_hcnt1[17] || chip->pla_hcnt1[18]
        || chip->pla_hcnt1[19] || chip->pla_hcnt1[20] || chip->pla_hcnt1[21] || chip->pla_hcnt1[22]
        || chip->pla_hcnt1[24] || chip->pla_hcnt1[25] || chip->pla_hcnt1[26] || chip->pla_hcnt1[27]
        || chip->pla_hcnt1[32] || chip->pla_hcnt1[33] || chip->pla_hcnt1[34] || chip->pla_hcnt1[35];
    chip->w483 = chip->pla_hcnt1[44];
    chip->w484 = chip->pla_hcnt1[0] || chip->pla_hcnt1[1] || chip->pla_hcnt1[2] || chip->pla_hcnt1[3] || chip->pla_hcnt1[4];
    chip->w485 = chip->pla_hcnt1[36] || chip->pla_hcnt1[37] || chip->pla_hcnt1[38] || chip->pla_hcnt1[39]
        || chip->pla_hcnt1[43];
    chip->w486 = chip->w403 || chip->pla_hcnt1[40] || chip->pla_hcnt1[41] || chip->pla_hcnt1[42];
    chip->w487 = chip->pla_hcnt1[7] || chip->pla_hcnt1[8] || chip->pla_hcnt1[9] || chip->pla_hcnt1[10]
        || chip->pla_hcnt1[11] || chip->pla_hcnt1[12] || chip->pla_hcnt1[13] || chip->pla_hcnt1[14]
        || chip->pla_hcnt1[17] || chip->pla_hcnt1[18] || chip->pla_hcnt1[19] || chip->pla_hcnt1[22] || chip->pla_hcnt1[23]
        || chip->pla_hcnt1[24] || chip->pla_hcnt1[25] || chip->pla_hcnt1[26] || chip->pla_hcnt1[27]
        || chip->pla_hcnt1[40] || chip->pla_hcnt1[41] || chip->pla_hcnt1[42]
        || chip->pla_hcnt1[46] || chip->pla_hcnt1[47] || chip->pla_hcnt1[48]
        || chip->pla_hcnt1[49] || chip->pla_hcnt1[50];
    chip->w488 = chip->pla_hcnt1[23];
    chip->w489 = chip->pla_hcnt1[31] || chip->pla_hcnt1[28] || chip->pla_hcnt1[29] || chip->pla_hcnt1[30];

    chip->w490 = chip->pla_hcnt2[44] || chip->pla_hcnt2[45];
    chip->w491 = chip->pla_hcnt2[42] || chip->pla_hcnt2[43];
    chip->w492 = chip->pla_hcnt2[40] || chip->pla_hcnt2[41];
    chip->w493 = chip->pla_hcnt2[38] || chip->pla_hcnt2[39];
    chip->w494 = chip->pla_hcnt2[36] || chip->pla_hcnt2[37];
    chip->w495 = chip->pla_hcnt2[34] || chip->pla_hcnt2[36];
    chip->w496 = chip->pla_hcnt2[32] || chip->pla_hcnt2[33];
    chip->w497 = chip->pla_hcnt2[30] || chip->pla_hcnt2[31];
    chip->w498 = chip->pla_hcnt2[28] || chip->pla_hcnt2[29];
    chip->w499 = chip->pla_hcnt2[24] || chip->pla_hcnt2[25] || chip->pla_hcnt2[26] || chip->pla_hcnt2[27];
    chip->w500 = chip->pla_hcnt2[22] || chip->pla_hcnt2[23];
    chip->w501 = chip->pla_hcnt2[20] || chip->pla_hcnt2[21];
    chip->w502 = !(chip->pla_hcnt2[17] || chip->pla_hcnt2[18] || chip->pla_hcnt2[19]);
    chip->w503 = chip->pla_hcnt2[15] || chip->pla_hcnt2[16];
    chip->w504 = chip->pla_hcnt2[14];
    chip->w505 = !(chip->pla_hcnt2[12] || chip->pla_hcnt2[13]);
    chip->w506 = chip->pla_hcnt2[11];
    chip->w507 = chip->pla_hcnt2[9] || chip->pla_hcnt2[10];
    chip->w508 = chip->pla_hcnt2[8];
    chip->w509 = chip->pla_hcnt2[4] || chip->pla_hcnt2[5] || chip->pla_hcnt2[6] || chip->pla_hcnt2[7];
    chip->w510 = chip->pla_hcnt2[2] || chip->pla_hcnt2[3];
    chip->w511 = chip->pla_hcnt2[1];
    chip->w512 = chip->pla_hcnt2[0];
}

void VDP_ClockPlanes(vdp_t *chip, int clk1, int clk2)
{
    if (chip->hclk1)
    {
        chip->l178[0] = (chip->l106[1] & 8) != 0;
        chip->l181[0] = chip->l104[1] | (chip->l182[1] << 8);
        chip->l182[0] = (chip->vram_data >> 8) & 7;
        chip->l183[0] = chip->l209[1];
        chip->l186[0] = chip->w519;
        chip->l196[0] = chip->w548;
        chip->l197[0] = (chip->l106[1] & 8) != 0;
        chip->l198[0] = !chip->w550;
        chip->l199[0] = chip->w551;
        chip->l200[0] = chip->w556;
        chip->l201[0] = chip->w557;
        chip->l202[0] = chip->w559;
        chip->l203[0] = chip->w560;
        chip->l204[0] = chip->l203[1];
        chip->l205[0] = chip->l204[1];
        chip->l206[0] = chip->w201;
        chip->l207[0] = chip->w323;
        chip->l208[0] = chip->w324;
        chip->l209[0] = chip->l206[1];
        chip->l210[0] = chip->l207[1];
        chip->l211[0] = chip->l208[1];
        chip->l212[0] = chip->w626;
        chip->l217[0] = chip->tm_w1;
        chip->l218[0] = chip->tm_w1;
        chip->l242[0] = chip->w614;
        chip->l267[0] = chip->w612;
        chip->l268[0] = chip->l267[1];
        chip->l269[0] = chip->w607;
        chip->l270[0] = chip->l269[1];
        chip->l271[0] = chip->w604 * 2 + chip->w603;
        chip->l272[0] = chip->l271[1];
        chip->l273[0] = chip->w605;
        chip->l274[0] = chip->l273[1];
        chip->l293[0] = (chip->vram_address >> 1) & 63;
        chip->l312[0] = chip->w638;
        chip->l313[0] = chip->l312[1];
        chip->l314[0] = chip->tm_w1;
        chip->l315[0] = chip->l314[1];
        chip->l316[0] = chip->l315[1];
        chip->l318[0] = chip->w647;
        chip->l319[0] = chip->l318[1];
        chip->l320[0] = chip->w637;
        chip->l321[0] = chip->l320[1];
        chip->l322[0] = chip->w636 * 2 + chip->w635;
        chip->l323[0] = chip->l322[1];
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
    }

    chip->w513 = (chip->hclk1 && chip->w379) || (chip->reg_test1 & 128) != 0;
    chip->w514 = chip->hclk1 && chip->l115[1] && (chip->reg_m5 || chip->l162[1]);
    chip->w517 = chip->w514 || (chip->reg_test1 & 128) != 0;

    if (chip->w230)
    {
        chip->l179 = chip->reg_data.l2 & 255;
    }

    chip->w515 = chip->reg_m5 ? chip->vsram_out : chip->l179;

    if (chip->w516)
        chip->l180 = chip->vsram_out;
    if (chip->l183[1])
    {
        chip->vram_data &= ~0x7ff;
        chip->vram_data |= chip->l180;
    }

    chip->w516 = chip->l209[1] && chip->hclk1;

    if (chip->w517)
    {
        chip->l184 = chip->w515;
    }

    if (chip->w513)
    {
        chip->l185 = chip->vsram_out;
    }
    
    chip->w519 = !((chip->l106[1] & 192) == 192 && chip->reg_80_b7);

    chip->w518 = chip->l184;
    if (!chip->l186[1])
        chip->w518 &= ~255;

    chip->w520 = chip->reg_m5 && (chip->l178 || chip->reg_vscr);

    chip->w521 = chip->w520 ? chip->l185 : chip->w518;

    chip->w522 = (chip->w521 + (chip->w355 & 511)) & 2047;

    if (chip->w224)
    {
        chip->reg_hsz = chip->reg_data.l2 & 3;
        chip->reg_vsz = (chip->reg_data.l2 >> 4) & 3;
    }

    chip->w523 = chip->reg_hsz == 0;
    chip->w524 = chip->reg_hsz == 1;
    chip->w525 = chip->reg_hsz == 3;

    chip->w526 = chip->w106 ? ((chip->w522 >> 4) & 127) : ((chip->w522 >> 3) & 127);

    chip->w530 = (chip->w526 & 28) == 28 || (chip->w526 & 32) != 0;

    chip->w529 = !chip->reg_m5 && chip->w530;

    chip->w528 = chip->w526 & 3;
    chip->w528 |= ((((chip->w526 >> 2) & 7) + chip->w529) << 2) & 28;
    if (chip->reg_vsz & 1)
        chip->w528 |= chip->w526 & 32;
    if (chip->reg_vsz & 2)
        chip->w528 |= chip->w526 & 64;

    chip->w527 = 0;
    if (chip->w523)
    {
        chip->w527 |= chip->w528;
    }
    if (chip->w524)
    {
        chip->w527 |= (chip->w528 << 1) & 126;
        chip->w527 |= (chip->w556 >> 5) & 1;
    }
    if (chip->w524)
    {
        chip->w527 |= (chip->w528 << 2) & 124;
        chip->w527 |= (chip->w556 >> 5) & 3;
    }

    chip->w531 = chip->reg_m5 && chip->w558;

    if (chip->w218)
    {
        chip->reg_sa = (chip->reg_data.l2 >> 3) & 15;
        chip->reg_nt = (chip->reg_data.l2 >> 1) & 3;
    }
    if (chip->w220)
    {
        chip->reg_sb = chip->reg_data.l2 & 15;
    }

    chip->w532 = chip->tm_w1 ? chip->reg_sb : chip->reg_sa;
    chip->w533 = chip->reg_m5 ? ((chip->w527 >> 5) & 3) : chip->reg_nt;

    if (chip->w531)
    {
        chip->vram_address &= ~0x1c000;
        chip->vram_address |= (chip->w532 & 14) << 13;
    }
    if (chip->w558)
    {
        chip->vram_address &= ~0x3f80;
        chip->vram_address |= (chip->w532 & 1) << 13;
        chip->vram_address |= chip->w533 << 11;
        chip->vram_address |= ((chip->w527 >> 1) & 15) << 7;
    }

    if (chip->w643) // hscroll
    {
        chip->vram_address = chip->reg_hs << 10;
        chip->vram_address |= chip->w535 << 2;
    }
    if (chip->l202[1]) // window
    {
        chip->vram_address = 0;
        chip->vram_address |= ((chip->l106[1] >> 4) & 15) << 2;
        chip->vram_address |= chip->w536 << 6;
        chip->vram_address |= ((chip->reg_wd >> 1) & 31) << 12;
    }
    if (chip->w232)
    {
        chip->reg_8e_b0 = (chip->reg_data.l2 >> 0) & 1;
        chip->reg_8e_b4 = (chip->reg_data.l2 >> 4) & 1;
    }

    chip->w534 = (chip->l106[1] & 384) == 0;

    chip->w535 = chip->w537;
    if (!chip->reg_lscr)
        chip->w535 &= ~7;
    if (!chip->reg_hscr)
        chip->w535 &= ~248;

    if (chip->reg_rs1)
    {
        chip->w536 = (chip->l106[1] >> 8) & 1;
        chip->w536 = (chip->w537 >> 2) & 62;
    }
    else
    {
        chip->w536 = (chip->w537 >> 3) & 31;
        chip->w536 = (chip->reg_wd & 1) << 5;
    }

    if (chip->w219)
    {
        chip->reg_wd = (chip->reg_data.l2 >> 1) & 63;
    }

    if (chip->w233)
    {
        chip->reg_wd = chip->reg_data.l2 & 127;
    }

    chip->w537 = chip->w106 ? ((chip->w355 >> 1) & 255) : (chip->w355 & 255);

    chip->w538 = chip->w546 ^ (!chip->l187);

    chip->w539 = chip->w538 && chip->w534;

    chip->w540 = chip->w545 ^ chip->l189;

    chip->w541 = (chip->w540 || chip->w539) && (chip->l106[1] & 8) == 0 && chip->reg_m5;

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

    chip->w542 = (chip->reg_test1 & 128) != 0 || chip->l115[1];

    chip->w543 = chip->l115[1] && (chip->reg_m5 || chip->l162[1]);
    chip->w544 = chip->w542 || (chip->reg_test1 & 128) != 0;

    if (chip->w542)
    {
        chip->l188 = chip->reg_whp;
        chip->l187 = chip->reg_rigt;
    }

    if (chip->w542)
    {
        chip->l190 = chip->reg_wvp;
        chip->l189 = chip->reg_down;
    }

    chip->w545 = ((chip->w537>>3) & 31) < chip->l190;

    chip->w546 = chip->l188 <= ((chip->l106[1] >> 4) & 31);

    chip->w547 = (chip->reg_test1 & 128) != 0 || chip->l115[1];

    if (chip->w231)
    {
        chip->reg_88 = chip->reg_data.l2 & 255;
    }

    if (chip->w570)
    {
        chip->l191 = chip->vram_serial;
    }

    if (chip->w572)
    {
        chip->l192 = chip->vram_serial;
    }

    if (chip->w571)
    {
        chip->l194 = chip->vram_serial & 3;
    }

    if (chip->w573)
    {
        chip->l195 = chip->vram_serial & 3;
    }

    chip->w548 = chip->w394 || chip->w385;

    chip->w549 = chip->w372 || ((chip->reg_test1 & 256) != 0 && chip->cpu_pen);

    chip->w550 = chip->w394 && !chip->reg_m5;

    chip->w551 = chip->w550 || chip->w385;

    chip->w552 = !(!chip->reg_80_b6 || (chip->w355 & 32) != 0 || (chip->w355 & 64) != 0 || (chip->w355 & 16) != 0 || (chip->w355 & 128) != 0);
    chip->w553 = chip->w552 || chip->reg_m5;

    if (chip->w547)
    {
        chip->l193 = chip->reg_88;
    }

    chip->w554 = 0;
    if (!chip->w553)
        chip->w554 |= chip->l193;
    if (chip->w574)
    {
        chip->w554 |= chip->l191;
        chip->w554 |= chip->l194 << 8;
    }
    if (chip->w575)
    {
        chip->w554 |= chip->l192;
        chip->w554 |= chip->l195 << 8;
    }
    chip->w554 ^= 1023;

    chip->w555 = (1 + (chip->w564 | ((chip->w554 >> 3) & 126))
        + (chip->w563 | (chip->w565<<1) | (chip->w567 << 5))
        ) & 127;

    chip->w556 = chip->reg_m5 && (chip->reg_test1 & 256) == 0 && chip->w549;

    chip->w557 = !chip->w541 && chip->w356;

    chip->w558 = chip->l200[1] || chip->l201[1];

    chip->w559 = chip->w356 && chip->w541;

    chip->w560 = chip->w356 && chip->w549;

    if (chip->w558)
    {
        chip->vram_address &= ~0x7f;
        chip->vram_address |= (chip->w527 & 1) << 7;
        chip->vram_address |= (chip->w556 & 31) << 1;
    }

    chip->w561 = chip->reg_rs1 ? chip->tm_w2 : (chip->l106[1] & 256) != 0;

    chip->w562 = !(chip->w561 || chip->reg_m5);

    chip->w563 = chip->w562 && (chip->l106[1] & 8) != 0;
    chip->w564 = ((chip->w554 >> 3) & 1) || chip->reg_m5;

    chip->w565 = (chip->l106[1] >> 4) & 15;
    if (chip->w561)
        chip->w565 |= 15;

    chip->w566 = chip->reg_m5 && chip->l199[1];

    chip->w568 = (chip->l106[1] & 256) != 0 && ((chip->l106[1] & 128) != 0 || (chip->l106[1] & 64) != 0);
    chip->w567 = chip->w561 ? chip->reg_hsz : (((chip->l106[1] >> 8) & 1) | (chip->w568 << 1));

    chip->w569 = chip->l206[1] || chip->l207[1] || chip->l208[1];

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

    chip->w570 = chip->l213 && clk2;
    chip->w571 = chip->l214[1] && clk2;
    chip->w572 = chip->l215[1] && clk2;
    chip->w573 = chip->l216[1] && clk2;

    chip->w574 = !chip->w541 && chip->reg_m5 && (chip->l106[1] & 8) == 0;
    chip->w575 = !chip->w541 && chip->reg_m5 && (chip->l106[1] & 8) == 0;

    chip->w576 = chip->l217[1] ? (chip->w355 & 15) : (chip->w522 & 15);

    chip->w577 = chip->w576;
    if (chip->w583)
        chip->w577 ^= 15;

    if (chip->l196[1])
    {
        chip->vram_address &= ~0x1f;
        chip->vram_address |= ((chip->w577 & 7) ^ 7) << 2;
        chip->vram_address |= (!chip->l198[1]) << 1;
    }

    chip->w578 = chip->w106 ? ((chip->w577 >> 3) & 1) | (chip->l219 << 1) : chip->l219 | ((chip->l220 & 1) << 8);

    if (chip->l198[1])
    {
        chip->vram_address &= ~0x3fe0;
        chip->vram_address |= chip->w578 << 5;
    }

    chip->w579 = chip->w106 ? (chip->l220 & 7) : ((chip->l220 >> 1) & 3) | (chip->w581 << 2);

    if (chip->w566)
    {
        chip->vram_address &= ~0x1c000;
        chip->vram_address |= chip->w579 << 14;
    }

    chip->w580 = chip->w106 ? ((chip->w577 >> 3) & 1) | (chip->l221 << 1) | ((chip->l222 & 7) << 9)
        : chip->l221 | (chip->l222 << 8) | ((chip->w581 & 7) << 11);

    if (chip->l218[1])
    {
        chip->vram_address &= ~0x1ffe0;
        chip->vram_address |= chip->w580;
    }


    chip->w581 = chip->l197[1] ? chip->reg_8e_b4 : chip->reg_8e_b0;

    chip->w582 = chip->w394 && chip->reg_m5;

    chip->w583 = chip->l218[1] ? (chip->l222 & 16) != 0 : chip->w585;

    if (chip->w615)
    {
        chip->l219 = chip->vram_serial;
    }

    if (chip->w616)
    {
        chip->l220 = chip->vram_serial;
    }

    if (chip->w617)
    {
        chip->l221 = chip->vram_serial;
    }

    if (chip->w618)
    {
        chip->l222 = chip->vram_serial;
    }

    chip->w584 = chip->reg_m5 ? (chip->l220 & 8) != 0 : (chip->l220 & 2) != 0;
    chip->w585 = chip->reg_m5 ? (chip->l220 & 16) != 0 : (chip->l220 & 4) != 0;
    chip->w586 = chip->reg_m5 ? (chip->l220 >> 5) & 3 : (chip->l220 >> 3) & 1;
    chip->w587 = chip->reg_m5 ? (chip->l220 & 128) != 0 : (chip->l220 & 16) != 0;

    if (chip->w591)
    {
        chip->l223 = chip->vram_serial;
    }

    if (chip->w590)
    {
        chip->l224 = chip->vram_serial;
    }

    if (chip->w589)
    {
        chip->l225 = chip->vram_serial;
    }

    if (chip->w588)
    {
        chip->l226 = chip->vram_serial;
    }

    if (clk1)
    {
        chip->l227 = !chip->w613;
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
    
    chip->w588 = chip->l227 && clk2;
    chip->w589 = chip->l228[1] && clk2;
    chip->w590 = chip->l229[1] && clk2;
    chip->w591 = chip->l230[1] && clk2;

    if (chip->w592)
    {
        chip->l232 = chip->l223;
    }

    if (chip->w592)
    {
        chip->l233 = chip->l224;
    }

    if (chip->w592)
    {
        chip->l234 = chip->l225;
    }

    if (chip->w592)
    {
        chip->l235 = chip->l226;
    }

    chip->w592 = chip->w598 && clk2;

    if (chip->l242[1])
    {
        chip->l236 = chip->w554 & 15;
    }

    chip->w593 = chip->w614 && chip->l236 == 15;

    if (chip->w611)
    {
        chip->l237 = chip->l232;
    }

    if (chip->w611)
    {
        chip->l238 = chip->l233;
    }

    if (chip->w611)
    {
        chip->l239 = chip->l234;
    }

    if (chip->w611)
    {
        chip->l240 = chip->l235;
    }

    if (chip->hclk1)
    {
        int i;
        i = chip->w614 ? chip->l236 : chip->l241[1];
        i++;
        chip->l241[0] = i & 15;
    }
    if (chip->hclk2)
    {
        chip->l241[1] = chip->l241[0];
    }

    if (chip->w597)
    {
        chip->l243 = chip->vram_serial;
    }

    if (chip->w596)
    {
        chip->l244 = chip->vram_serial;
    }

    if (chip->w595)
    {
        chip->l245 = chip->vram_serial;
    }

    if (chip->w594)
    {
        chip->l246 = chip->vram_serial;
    }

    if (clk1)
    {
        chip->l247 = !chip->w600;
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
    chip->w594 = chip->l247 && clk2;
    chip->w595 = chip->l248[1] && clk2;
    chip->w596 = chip->l249[1] && clk2;
    chip->w597 = chip->l250[1] && clk2;

    if (clk1)
    {
        chip->l251 = !chip->w633;
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

    if (chip->w592)
    {
        chip->l255 = chip->l243;
    }

    if (chip->w592)
    {
        chip->l256 = chip->l244;
    }

    if (chip->w592)
    {
        chip->l257 = chip->l245;
    }

    if (chip->w592)
    {
        chip->l258 = chip->l246;
    }

    if (chip->w591)
    {
        chip->l259 = 0;
        if (chip->l222 & 8)
            chip->l259 |= 1;
        if (chip->l222 & 32)
            chip->l259 |= 4;
        if (chip->l222 & 64)
            chip->l259 |= 16;
        if (chip->l222 & 128)
            chip->l259 |= 64;
        if (chip->w584)
            chip->l259 |= 2;
        if (chip->w586 & 1)
            chip->l259 |= 8;
        if (chip->w586 & 2)
            chip->l259 |= 32;
        if (chip->w587)
            chip->l259 |= 128;
    }

    if (chip->w592)
    {
        chip->l260 = chip->l259;
    }

    if (chip->w611)
    {
        chip->l261 = chip->l255;
    }
    if (chip->w611)
    {
        chip->l262 = chip->l256;
    }
    if (chip->w611)
    {
        chip->l263 = chip->l257;
    }
    if (chip->w611)
    {
        chip->l264 = chip->l258;
    }

    if (chip->w611)
    {
        chip->l265 = chip->l260;
    }

    chip->w598 = chip->reg_m5 ? chip->tm_w1 : chip->l231[1];

    chip->w599 = chip->reg_m5 && (chip->l241[1] & 8) != 0;

    chip->w600 = !(chip->hclk1 && chip->tm_w2);

    chip->w601 = chip->reg_m5 ^ ((chip->l241[1] & 2) != 0);

    chip->w602 = chip->w599 ? (chip->l265 & 1) != 0 : (chip->l265 & 2) != 0;
    chip->w603 = chip->w599 ? (chip->l265 & 4) != 0 : (chip->l265 & 8) != 0;
    chip->w604 = chip->w599 ? (chip->l265 & 16) != 0 : (chip->l265 & 32) != 0;
    chip->w605 = chip->w599 ? (chip->l265 & 64) != 0 : (chip->l265 & 128) != 0;

    chip->w606 = ((chip->l241[1] & 5) | (chip->w601 << 1));
    if (chip->w602)
        chip->w606 ^= 7;

    if (!chip->reg_m5)
    {
        int mask = 1 << (chip->w606 ^ 7);
        chip->w607 = 0;
        if (chip->l264 & mask)
            chip->w607 |= 1;
        if (chip->l263 & mask)
            chip->w607 |= 2;
        if (chip->l240 & mask)
            chip->w607 |= 4;
        if (chip->l239 & mask)
            chip->w607 |= 8;
    }
    else if (chip->l241[1] & 8)
    {
        if (chip->w606 == 7)
            chip->w607 = chip->l261 & 15;
        else if (chip->w606 == 6)
            chip->w607 = (chip->l261 >> 4) & 15;
        else if (chip->w606 == 5)
            chip->w607 = chip->l262 & 15;
        else if (chip->w606 == 4)
            chip->w607 = (chip->l262 >> 4) & 15;
        else if (chip->w606 == 3)
            chip->w607 = chip->l263 & 15;
        else if (chip->w606 == 2)
            chip->w607 = (chip->l263 >> 4) & 15;
        else if (chip->w606 == 1)
            chip->w607 = chip->l264 & 15;
        else if (chip->w606 == 0)
            chip->w607 = (chip->l264 >> 4) & 15;
    }
    else
    {
        if (chip->w606 == 7)
            chip->w607 = chip->l237 & 15;
        else if (chip->w606 == 6)
            chip->w607 = (chip->l237 >> 4) & 15;
        else if (chip->w606 == 5)
            chip->w607 = chip->l238 & 15;
        else if (chip->w606 == 4)
            chip->w607 = (chip->l238 >> 4) & 15;
        else if (chip->w606 == 3)
            chip->w607 = chip->l239 & 15;
        else if (chip->w606 == 2)
            chip->w607 = (chip->l239 >> 4) & 15;
        else if (chip->w606 == 1)
            chip->w607 = chip->l240 & 15;
        else if (chip->w606 == 0)
            chip->w607 = (chip->l240 >> 4) & 15;
    }

    chip->w608 = (chip->l241[1] & 8) != 0 || !chip->reg_m5;

    chip->w609 = chip->w608 && (chip->l241[1] & 7) == 7;

    chip->w610 = !(chip->w609 || chip->w593);

    if (chip->hclk1)
        chip->l266 = !chip->w610;

    chip->w611 = chip->hclk2 && chip->l266;

    chip->w612 = chip->w393 || ((chip->reg_test1 & 512) != 0 && chip->cpu_pen);

    chip->w613 = !(chip->l268[1] && chip->hclk1);

    chip->w614 = chip->w424 || chip->w90;

    if (chip->tm_w1)
    {
        chip->color_index = chip->l270[1];
        chip->color_pal = chip->l272[1];
        chip->color_priority = chip->l274[1];
    }

    if (chip->w619)
    {
        chip->l275 = chip->vram_serial;
    }
    if (chip->w620)
    {
        chip->l276 = chip->vram_serial;
    }
    if (chip->w621)
    {
        chip->l277 = chip->vram_serial;
    }
    if (chip->w622)
    {
        chip->l278 = chip->vram_serial;
    }

    if (chip->w631)
    {
        chip->l279 = chip->l275;
    }
    if (chip->w631)
    {
        chip->l280 = chip->l276;
    }
    if (chip->w631)
    {
        chip->l281 = chip->l277;
    }
    if (chip->w631)
    {
        chip->l282 = chip->l278;
    }

    chip->w615 = chip->l251 && clk2;
    chip->w616 = chip->l252[1] && clk2;
    chip->w617 = chip->l253[1] && clk2;
    chip->w618 = chip->l254[1] && clk2;

    if (clk1)
    {
        chip->l283 = !chip->w640;
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

    chip->w619 = chip->l283 && clk2;
    chip->w620 = chip->l284[1] && clk2;
    chip->w621 = chip->l285[1] && clk2;
    chip->w622 = chip->l286[1] && clk2;

    if (chip->tm_w1)
    {
        chip->l287 = chip->l279;
    }
    if (chip->tm_w1)
    {
        chip->l288 = chip->l280;
    }
    if (chip->tm_w1)
    {
        chip->l289 = chip->l281;
    }
    if (chip->tm_w1)
    {
        chip->l290 = chip->l282;
    }

    if (chip->w631)
    {
        chip->l291 = 0;
        if (chip->l222 & 8)
            chip->l291 |= 1;
        if (chip->l222 & 32)
            chip->l291 |= 4;
        if (chip->l222 & 64)
            chip->l291 |= 16;
        if (chip->l222 & 128)
            chip->l291 |= 64;
        if (chip->w584)
            chip->l291 |= 2;
        if (chip->w586 & 1)
            chip->l291 |= 8;
        if (chip->w586 & 2)
            chip->l291 |= 32;
        if (chip->w587)
            chip->l291 |= 128;
    }

    if (chip->w645)
    {
        chip->l292 = chip->l291;
    }

    chip->w623 = !(chip->reg_m5 && chip->reg_vscr);

    chip->w624 = chip->w623 ^ ((chip->l106[1] & 8) != 0);

    chip->w625 = (chip->l106[1] >> 4) & 31;
    if (!chip->reg_vscr)
        chip->w625 = 0;

    if (chip->w569)
        chip->w626 = chip->l293[1];
    else
        chip->w626 = (chip->w625 << 1) | chip->w624;

    if (chip->w627)
    {
        chip->l294 = chip->vram_serial;
    }
    if (chip->w628)
    {
        chip->l295 = chip->vram_serial;
    }
    if (chip->w629)
    {
        chip->l296 = chip->vram_serial;
    }
    if (chip->w630)
    {
        chip->l297 = chip->vram_serial;
    }

    if (clk1)
    {
        chip->l298 = !chip->w639;
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

    chip->w627 = chip->l298 && clk2;
    chip->w628 = chip->l299[1] && clk2;
    chip->w629 = chip->l300[1] && clk2;
    chip->w630 = chip->l301[1] && clk2;
    chip->w631 = chip->l302[1] && clk2;

    if (chip->w631)
    {
        chip->l303 = chip->l294;
    }
    if (chip->w631)
    {
        chip->l304 = chip->l295;
    }
    if (chip->w631)
    {
        chip->l305 = chip->l296;
    }
    if (chip->w631)
    {
        chip->l306 = chip->l297;
    }

    if (chip->w645)
    {
        chip->l307 = chip->l303;
    }
    if (chip->w645)
    {
        chip->l308 = chip->l304;
    }
    if (chip->w645)
    {
        chip->l309 = chip->l305;
    }
    if (chip->w645)
    {
        chip->l310 = chip->l306;
    }

    if (chip->hclk1)
    {
        int i;
        i = chip->w649 ? ((chip->w554 & 15) ^ 8) : chip->l311[1];
        i++;
        chip->l311[0] = i & 15;
    }
    if (chip->hclk2)
    {
        chip->l311[1] = chip->l311[0];
    }

    chip->w632 = chip->l311[1] & 7;
    if (chip->w634)
        chip->w632 ^= 7;

    chip->w633 = !(chip->hclk1 && chip->l205[1]);

    chip->w634 = (chip->l311[1] & 8) != 0 ? (chip->l292 & 1) != 0 : (chip->l292 & 2) != 0;
    chip->w635 = (chip->l311[1] & 8) != 0 ? (chip->l292 & 4) != 0 : (chip->l292 & 8) != 0;
    chip->w636 = (chip->l311[1] & 8) != 0 ? (chip->l292 & 16) != 0 : (chip->l292 & 32) != 0;
    chip->w637 = (chip->l311[1] & 8) != 0 ? (chip->l292 & 64) != 0 : (chip->l292 & 128) != 0;

    chip->w638 = chip->w402 || ((chip->reg_test1 & 1024) != 0 && chip->cpu_pen);

    chip->w639 = !(chip->hclk1 && chip->l313[1]);
    chip->w640 = !(chip->hclk1 && chip->w638);

    chip->w641 = chip->w632 ^ 2;

    chip->w642 = chip->w419 || ((chip->reg_test1 & 128) != 0 && chip->cpu_pen);

    chip->w643 = chip->l314[1] && (chip->reg_test1 & 128) == 0;

    chip->w644 = !(chip->l311[1] == 15);

    if (chip->hclk1)
    {
        chip->l317 = !chip->w644;
    }

    chip->w646 = chip->l269[1] != 0;
    if (chip->l311[1] & 8)
    {
        if (chip->w641 == 7)
            chip->w647 = chip->l307 & 15;
        else if (chip->w641 == 6)
            chip->w647 = (chip->l307 >> 4) & 15;
        else if (chip->w641 == 5)
            chip->w647 = chip->l308 & 15;
        else if (chip->w641 == 4)
            chip->w647 = (chip->l308 >> 4) & 15;
        else if (chip->w641 == 3)
            chip->w647 = chip->l309 & 15;
        else if (chip->w641 == 2)
            chip->w647 = (chip->l309 >> 4) & 15;
        else if (chip->w641 == 1)
            chip->w647 = chip->l310 & 15;
        else if (chip->w641 == 0)
            chip->w647 = (chip->l310 >> 4) & 15;
    }
    else
    {
        if (chip->w641 == 7)
            chip->w647 = chip->l287 & 15;
        else if (chip->w641 == 6)
            chip->w647 = (chip->l287 >> 4) & 15;
        else if (chip->w641 == 5)
            chip->w647 = chip->l288 & 15;
        else if (chip->w641 == 4)
            chip->w647 = (chip->l288 >> 4) & 15;
        else if (chip->w641 == 3)
            chip->w647 = chip->l289 & 15;
        else if (chip->w641 == 2)
            chip->w647 = (chip->l289 >> 4) & 15;
        else if (chip->w641 == 1)
            chip->w647 = chip->l290 & 15;
        else if (chip->w641 == 0)
            chip->w647 = (chip->l290 >> 4) & 15;
    }

    chip->w648 = chip->l318[1] != 0;

    if (chip->tm_w1)
    {
        chip->color_index = chip->l319[1];
        chip->color_pal = chip->l323[1];
        chip->color_priority = chip->l321[1];
    }

    chip->w649 = chip->w92 || chip->w415;

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
    int i;
    chip->w650 = chip->l325[1] ? chip->tm_w1 : chip->tm_w2;

    if (chip->w651)
        chip->l324 = chip->w650;

    if (chip->l330[1])
    {
        chip->vram_data &= 0x7ff;
        chip->vram_data |= chip->l324;
    }

    if (chip->hclk1)
    {
        chip->l325[0] = chip->tm_w1;
        chip->l326[0] = chip->tm_w1;
        chip->l327[0] = chip->tm_w1; // 7 link, 2 vsize, 2 hsize
        chip->l328 = chip->l327[1] ^ 0x7ff;
        chip->l329[0] = chip->l326[1];
        chip->l330[0] = chip->l329[1];
        chip->l331[0] = chip->tm_w1;
        chip->l333 = !chip->w679;
        chip->l336[0] = (chip->l332 & 1024) == 0;
        chip->l337[0] = (chip->l332 & 512) == 0;
        chip->l338[0] = chip->w656;
        chip->l339[0] = chip->w657;
        chip->l340 = chip->w666 ^ 1023;
        chip->l345[0] = chip->tm_w1;
        chip->l346 = chip->l345[1] ^ 1023;
        chip->l347[0] = chip->tm_w1;
        chip->l348[0] = chip->l347[1];
        chip->l349[0] = chip->l348[1];
        chip->l350[0] = chip->l349[1];
    }
    if (chip->hclk2)
    {
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
        chip->l341 = chip->w662 ^ 0x3c0;
        chip->l344 = chip->l343 ^ 1023;
        chip->l345[1] = chip->l345[0];
        chip->l347[1] = chip->l347[0];
        chip->l348[1] = chip->l348[0];
        chip->l349[1] = chip->l349[0];
        chip->l350[1] = chip->l350[0];
    }

    chip->w651 = chip->hclk1 && chip->l326[1];

    if (chip->w652)
        chip->l332 = chip->l328;

    chip->w652 = chip->hclk2 && chip->tm_w2 && chip->l333;

    chip->w653 = chip->w355;
    i = 0;
    if (chip->w654)
        i |= 129;
    if (chip->w106)
        i |= 258;
    chip->w653 += i;
    chip->w653 &= 1023;

    chip->w654 = !chip->w106 && chip->reg_m5;

    chip->w655 = chip->reg_m5 && (chip->l332 & 127) == 127;

    chip->w656 = chip->reg_m5 && (chip->l332 & 512) == 0;

    chip->w657 = chip->reg_m5 ? (chip->l332 & 256) == 0 : chip->reg_81_b1;

    chip->w658 = chip->w676 && (chip->w655 || chip->w667);

    chip->w659 = !(chip->hclk1 && !chip->w679);

    if (clk1)
    {
        chip->l334 = !chip->w659;
        chip->l335[1] = chip->l335[0];
    }
    if (clk2)
    {
        chip->l335[0] = chip->l334;
    }

    chip->w660 = chip->l334 && clk2;
    chip->w661 = chip->l335[1] && clk2;

    chip->w662 = 1 + chip->w653;
    chip->w662 += chip->l340;
    chip->w662 &= 1023;

    chip->w663 = !(chip->l338[1] || chip->l339[1]);
    chip->w664 = chip->l338[1] && !chip->l339[1];

    chip->w665 = chip->w668 && chip->w669 && chip->w670 && chip->w671
        && chip->w672 && (chip->l341 & 128) != 0 && (chip->l341 & 64) != 0
        && !chip->w675 && chip->tm_w3;

    chip->w666 = chip->w677 ? (chip->l342 & 255) : chip->tm_w3;


    chip->w667 = chip->w666 == 208 && !chip->reg_m5;

    chip->w668 = !(chip->w663 && chip->w673);

    chip->w669 = !(!chip->l338[1] && chip->w674);

    chip->w670 = !(chip->w664 && chip->w673 && chip->w674);

    chip->w671 = (chip->l341 & 512) != 0 || !chip->w106;

    chip->w672 = (chip->l341 & 256) != 0 || !chip->reg_m5;

    if (chip->w661)
        chip->l342 = chip->vram_serial;

    if (chip->w660)
        chip->l343 = chip->w680;

    chip->w673 = chip->w106 ? (chip->l341 & 16) != 0 : (chip->l341 & 8) != 0;
    chip->w674 = chip->w106 ? (chip->l341 & 32) != 0 : (chip->l341 & 16) != 0;
    chip->w675 = chip->w106 ? 0 : (chip->l341 & 32) != 0;

    chip->w676 = chip->reg_m5 ? chip->w681 : chip->w682;

    chip->w677 = !chip->reg_m5 && chip->l350[1];

    chip->w678 = chip->l347[1] || chip->l348[1] || chip->tm_w3;

    chip->w679 = !(chip->reg_m5 ? chip->w678 : chip->l348[1]);

    chip->w680 = chip->reg_m5 ? chip->l346 : (chip->vram_serial ^ 1023);

    chip->w681 = chip->l348[1] || chip->l349[1];
    chip->w682 = chip->l349[1] || chip->l350[1];
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
