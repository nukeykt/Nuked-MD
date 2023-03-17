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
    chip->reset_comb = !(chip->tm_w1 && chip->tm_w2);
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
    chip->reset_comb = !(chip->tm_w1 && chip->tm_w2);
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
    int i;
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

    chip->io_oe0 = chip->io_m1_s5 || chip->w25 || chip->w27 || chip->tm_w4 || chip->tm_w5;

    if (chip->reg_8b_6)
    {
        chip->io_cas0 = chip->io_m1_dff2.l2 || chip->w15 || chip->w28 || chip->w30 || chip->tm_w5;
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
    else if (!chip->tm_w1 && chip->tm_w2 && chip->tm_w3)
        chip->t1 = 0;

    chip->w2 = chip->w35 && (chip->io_address & 0x700000) == 0x700000;

    chip->io_address_22o = chip->l4[1] && chip->tm_w2 && (chip->l6 || !chip->l7);
    DFF_Update(&chip->dff4, chip->hclk2, chip->w3, chip->w4);
    DFF_Update(&chip->dff3, chip->hclk2, chip->dff4.l2, chip->w4);

    chip->w3 = chip->t2 || chip->t3;

    chip->w4 = chip->reset_comb || chip->tm_w2;

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
        chip->l5[0] = chip->tm_w1;

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

    chip->w13 = chip->l4[1] && chip->tm_w2;

    chip->w14 = !chip->l7 || (chip->l6 && chip->w13);

    chip->w15 = (!chip->l4[1] && chip->l6) || (chip->l8 && chip->w13);

    chip->w16 = (!chip->l7 && chip->w13) || (chip->l8 && chip->w13); // check

    chip->w17 = chip->l2[1] && chip->l8;
    
    chip->w18 = chip->tm_w1 && chip->l4[1] && chip->l8;

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

    chip->w59 = chip->reg_m5 && chip->tm_w2;

    chip->w60 = chip->tm_w1 && chip->tm_w2;

    chip->w61 = chip->tm_w1 && chip->reg_m5;

    chip->w62 = chip->w61 && !chip->tm_w1 && chip->tm_w2;

    chip->w63 = chip->w61 && chip->tm_w1 && chip->tm_w2;

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
    
    if (chip->tm_w1)
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
        chip->io_data |= chip->tm_w1 << 8;
        chip->io_data |= chip->tm_w1 << 9;
    }

    chip->w72 = chip->w65 ? chip->tm_w1 : chip->tm_w2;
    chip->w73 = chip->w65 ? chip->tm_w1 : chip->tm_w2;

    if (chip->tm_w1)
        chip->reg_hit = (chip->tm_w2 & 255) ^ 255;
    if (chip->reset_comb)
        chip->reg_hit = 0;

    if (chip->tm_w1)
        chip->reg_test0 = chip->io_data & 0x7fff;
    if (chip->reset_ext)
        chip->reg_test0 = 0;

    if (chip->tm_w1)
        chip->reg_test0 = chip->io_data & 0x7ff;
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
        chip->reg_80_b0 = (chip->tm_w2 >> 0) & 1;
        chip->reg_m3 = (chip->tm_w2 >> 1) & 1;
        chip->reg_80_b2 = (chip->tm_w2 >> 2) & 1;
        chip->reg_80_b3 = (chip->tm_w2 >> 3) & 1;
        chip->reg_ie1 = (chip->tm_w2 >> 4) & 1;
        chip->reg_lcb = (chip->tm_w2 >> 5) & 1;
        chip->reg_80_b6 = (chip->tm_w2 >> 6) & 1;
        chip->reg_80_b7 = (chip->tm_w2 >> 7) & 1;
    }

    if (chip->tm_w1)
    {
        chip->reg_rs1 = (chip->tm_w2 >> 0) & 1;
        chip->reg_lsm0 = (chip->tm_w2 >> 1) & 1;
        chip->reg_lsm1 = (chip->tm_w2 >> 2) & 1;
        chip->reg_ste = (chip->tm_w2 >> 3) & 1;
        chip->reg_8c_b4 = (chip->tm_w2 >> 4) & 1;
        chip->reg_8c_b5 = (chip->tm_w2 >> 5) & 1;
        chip->reg_8c_b6 = (chip->tm_w2 >> 6) & 1;
        chip->reg_rs0 = (chip->tm_w2 >> 7) & 1;
    }

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
