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
    chip->reset_comb = !(chip->i_reset && chip->w100);
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

    if (chip->cpu_pal)
        chip->mclk_sbcr = chip->mclk_clk4;
    else
        chip->mclk_sbcr = chip->mclk_clk5;

    if (chip->reg_test1 & 1)
        chip->mclk_cpu_clk0 = chip->i_clk1; // ext
    else
        chip->mclk_cpu_clk0 = chip->mclk_clk5;

    chip->mclk_cpu_clk1 = !chip->mclk_clk3;

    if (chip->reg_rs0 || (chip->reg_test1 & 1) != 0)
        chip->mclk_dclk = chip->i_edclk; // ext
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
    DFF_Update(&chip->dclk_prescaler_dff1, !clk1, 1, chip->dclk_prescaler_l2 && clk2);
    DFF_Update(&chip->dclk_prescaler_dff2, !clk1, 1, chip->dclk_prescaler_l3 && clk2);

    chip->hclk1 = !chip->dclk_prescaler_dff1.l2;
    chip->hclk2 = !chip->dclk_prescaler_dff2.l2;
}

static void VDP_ResetLogic(vdp_t *chip, int clk1, int clk2)
{
    chip->reset_comb = !(chip->i_reset && chip->w100);
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

    chip->reset_ext = !chip->i_reset;
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

    chip->io_oe0 = chip->io_m1_s5 || chip->w25 || chip->w27 || chip->w118 || chip->l8;

    chip->w1153 = chip->w1 && !chip->w2;

    if (chip->reg_8b_b6)
    {
        chip->io_cas0 = chip->io_m1_dff2.l2 || chip->w15 || chip->w28 || chip->w30 || chip->w102;
        chip->io_ras0 = chip->io_m1_s4 || chip->w21 || chip->w14 || chip->w27;
    }
    else
    {
        chip->io_cas0 = chip->l8 || chip->w25 || chip->w1153;
        chip->io_ras0 = chip->io_m1_s2 || chip->w22 || chip->w16;
    }

    chip->io_wr = chip->cpu_rw && chip->dff1.l2;
    chip->io_lwr = chip->cpu_wr || (chip->cpu_lds && chip->io_wr);
    chip->io_uwr = chip->cpu_uds && chip->io_wr;

    chip->w1 = !chip->cpu_rw && (chip->cpu_uds || chip->cpu_lds);
    DFF_Update(&chip->dff1, !chip->i_cpu_clk1, chip->w23, 0);


    DFF_Update(&chip->dff2, chip->i_cpu_clk1, chip->cpu_bg, 0);

    if (chip->cpu_bg || chip->reset_comb)
        chip->t1 = 1;
    else if ((chip->reg_data.l2 & 128) == 0 && chip->w227 && chip->reg_m5)
        chip->t1 = 0;

    chip->w2 = chip->w35 && (chip->io_address & 0x700000) == 0x700000;

    chip->io_address_22o = !(chip->l4[1] && chip->w247 && (chip->l6 || !chip->l7));
    DFF_Update(&chip->dff4, chip->hclk2, chip->w3, chip->w4);
    DFF_Update(&chip->dff3, chip->hclk2, chip->dff4.l2, chip->w4);

    chip->w3 = chip->t2 || chip->t3;

    chip->w4 = chip->reset_comb || chip->l48[1];

    if (chip->w63)
        chip->t2 = 1;
    else if (chip->w4)
        chip->t2 = 0;

    if (chip->w5)
        chip->t3 = 1;
    else if (chip->w4)
        chip->t3 = 0;

    if (chip->w62)
        chip->t4 = 1;
    else if (chip->w4 || chip->w5)
        chip->t4 = 0;

    chip->w5 = chip->dff22.l2 && chip->cpu_bgack && chip->i_dtack && chip->dff2.l2 && chip->cpu_sel && chip->w37;

    chip->io_ipl1 = !(chip->w11 && chip->cpu_sel);
    chip->io_ipl2 = !(chip->w12 && chip->cpu_sel);

    if (chip->hclk1)
    {
        chip->l1[0] = chip->l108[1];
        chip->l2[0] = chip->l1[1];
        chip->l3[0] = chip->l2[1];
        chip->l4[0] = !(chip->l108[1] || chip->l1[1] || chip->l2[1] || chip->l3[1]);
        chip->l5[0] = chip->w267;

        chip->l6 = chip->w7 && chip->w8 && chip->l116[1];
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
    chip->w7 = !(chip->w6 && chip->w252);

    chip->w8 = chip->l5[1] && chip->w267;

    chip->w9 = chip->w58 || chip->w57 || chip->w60;
    chip->w10 = !chip->dff13.l2;

    chip->w11 = chip->w58 || chip->w60;
    chip->w12 = chip->w57 || chip->w60;

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

    chip->w25 = chip->cpu_rd && chip->l17;

    DFF_Update(&chip->dff5, !chip->i_cpu_clk1, chip->dff6.l2, chip->w10);

    DFF_Update(&chip->dff6, chip->i_cpu_clk1, chip->dff7.l2, chip->w10);

    chip->w26 = !(!chip->dff6.l2 && chip->dff8.l2);

    DFF_Update(&chip->dff7, !chip->i_cpu_clk1, chip->dff8.l2, chip->w10);

    chip->w27 = chip->dff17.l2 && !chip->dff19.l2;

    chip->w28 = chip->dff16.l2 && !chip->dff19.l2;

    DFF_Update(&chip->dff8, !chip->i_cpu_clk1, chip->dff9.l2, chip->w10);

    DFF_Update(&chip->dff9, chip->i_cpu_clk1, chip->w30, chip->w10);

    chip->w29 = !(chip->w10 || chip->dff9.l2);

    chip->w30 = chip->w34 && chip->dff10.l2;

    chip->w31 = chip->reset_comb || chip->dff21.l2 || chip->dff13.l2;

    DFF_Update(&chip->dff10, !chip->i_cpu_clk1, chip->dff11.l2, chip->w33);

    DFF_Update(&chip->dff11, chip->i_cpu_clk1, chip->w36, chip->w33);

    chip->w32 = chip->dff11.l2 && chip->w1;

    chip->w33 = !chip->w36;

    chip->w34 = chip->w2 && chip->w36;

    chip->w35 = !chip->cpu_intak;

    chip->w36 = chip->cpu_as && chip->w40;

    chip->w37 = !chip->cpu_as;

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

    chip->w50 = chip->reset_comb || chip->w114;

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

    chip->w57 = chip->t7 && !chip->w60 && chip->reg_ie1;
    chip->w58 = !chip->w57 && !chip->w60 && chip->t8 && chip->reg_ie2;

    if (chip->l15[1])
        chip->t7 = 1;
    else if (chip->w55)
        chip->t7 = 0;

    if (chip->w59)
        chip->t8 = 1;
    else if (chip->w54)
        chip->t8 = 0;

    chip->w59 = chip->reg_m5 && chip->l81[1];

    chip->w60 = chip->t9 && chip->reg_ie0;

    chip->w61 = chip->reg_m1 && chip->reg_m5;

    chip->w62 = chip->w61 && (chip->reg_dmd & 2) == 0 && chip->w182;

    chip->w63 = chip->w61 && chip->w182 && (chip->reg_dmd & 2) != 0;

    chip->w64 = !chip->t3;

    chip->w65 = !(!chip->reg_m5 || (chip->io_address & 2) != 0 || chip->cpu_sel);

    chip->w66 = !chip->t9 && chip->w1154;

    if (chip->w120)
        chip->t9 = 1;
    else if (chip->w56)
        chip->t9 = 0;

    if (chip->w66)
        chip->t10 = 1;
    else if (chip->l14)
        chip->t10 = 0;

    if (chip->l600[1])
        chip->t11 = 1;
    else if (chip->l14)
        chip->t11 = 0;

    chip->w67 = chip->l115[1] || (chip->reg_test0 & 8) != 0;

    chip->w68 = !(chip->t38 || chip->l162[1] || (chip->reg_test0 & 8) != 0);

    if (chip->hclk1)
    {
        i = chip->w69 ? chip->reg_hit : chip->cnt1[1];
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
        chip->io_data |= (!(chip->l106[1] & 1)) << 8;
        chip->io_data |= (!(chip->w355 & 256)) << 9;
        chip->io_data |= (!(chip->w355 & 512)) << 10;
    }
    
    if (chip->w128)
        chip->reg_test_18 = chip->io_data & 0xfff;
    if (chip->reset_ext)
        chip->reg_test_18 = 0;

    chip->w71 = !chip->cpu_sel && (chip->reg_test0 & 4) != 0 && chip->w142;

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

    chip->w72 = chip->w65 ? chip->w252 : chip->cpu_pal;
    chip->w73 = chip->w65 ? chip->l46[1] : chip->dff3.l2;

    if (chip->w229)
        chip->reg_hit = (chip->reg_data.l2 & 255) ^ 255;
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

    if (chip->w216)
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

    if (chip->w215)
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

    if (chip->w217)
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

    if (chip->w213)
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
    chip->w87 = chip->w81 && chip->w135;
    chip->w88 = chip->w80 && chip->w129;
    chip->w89 = chip->w80 && chip->w135;
    chip->w90 = chip->w79 && chip->w129;
    chip->w91 = chip->w79 && chip->w135;
    chip->w92 = chip->w78 && chip->w129;
    chip->w93 = chip->w78 && chip->w135;
    chip->w94 = chip->w77 && chip->w129;
    chip->w95 = chip->w77 && chip->w135;
    chip->w96 = chip->w76 && chip->w129;
    chip->w97 = chip->w76 && chip->w135;
    chip->w98 = chip->w75 && chip->w129;
    chip->w99 = chip->w75 && chip->w135;
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

    chip->w105 = (chip->reg_test0 & 1) != 0 ? chip->color_priority : chip->w1069;

    if (chip->hclk1)
    {
        chip->l16 = 0;
        chip->l16 |= (chip->color_index & 15) << 0;
        chip->l16 |= (chip->color_pal & 3) << 4;
        chip->l16 |= chip->w105 << 6;
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

    chip->w110 = (chip->io_address & 0xc0) == 0x40 && chip->cpu_iorq && chip->cpu_wr; // z80 psg
    chip->w111 = chip->w110 || (chip->w133 && chip->cpu_lds);

    chip->w112 = (chip->io_address & 0xc0) == 0x80 && chip->cpu_iorq && chip->cpu_rd;
    chip->w113 = chip->w112 || chip->w132;
    chip->w114 = chip->w112 && chip->w130;

    chip->w115 = chip->reg_8b_b6 && chip->w30;
    chip->w116 = chip->w115 || chip->w24;

    chip->w117 = !(chip->w30 || chip->w125 || chip->w128 || chip->w129 || chip->w133); // dtack

    chip->w118 = (chip->w1 && 0) || (chip->w32 && chip->w116) || chip->w19;

    if (chip->mclk_cpu_clk0)
        chip->l17 = chip->cpu_rd;

    chip->w119 = chip->cpu_sel ? chip->l110[1] : chip->l115[1];
    chip->w120 = chip->w119 && chip->w457;
    chip->w121 = chip->reset_comb || chip->w360;
    if (chip->w120)
        chip->t12 = 1;
    else if (chip->w121)
        chip->t12 = 0;

    chip->w122 = !(chip->cpu_sel ? chip->t12 : chip->w9); // z80 int

    chip->w123 = chip->reg_lsm0_latch ? (chip->w355 & 256) != 0 : (chip->w355 & 1) != 0;

    chip->w124 = chip->w70 && chip->cpu_as && chip->w158;

    chip->w125 = chip->cpu_sel && chip->w146;

    chip->w126 = chip->w152 && chip->w162;

    chip->w127 = chip->w148 && chip->w169;

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

    chip->w136 = chip->l48[1] || chip->reset_comb;

    chip->w137 = chip->t1 && chip->t14 && chip->w168;

    if (chip->w138)
        chip->t14 = 1;
    else if (chip->w143)
        chip->t14 = 0;

    chip->w138 = chip->reset_comb || chip->l82[1];

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
    chip->w145 = chip->w154 && chip->t25 && chip->w192 && chip->reg_m5;

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

    chip->w146 = chip->w126 || chip->w127 || chip->w137 || chip->w164 || chip->w165;

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

    chip->w158 = chip->t13 || chip->l23;

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
        chip->reg_code |= (chip->w350 >> 6) & 3;
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

    chip->w183 = (chip->l21 && !chip->l22) || chip->reset_comb;

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

    chip->w186 = chip->t26 && chip->l46[1] && chip->l109[1];

    chip->w187 = chip->l27[1] && chip->w245;

    chip->w188 = !chip->w245 && chip->l27[1];

    chip->w189 = chip->l28[1] || chip->w188;

    chip->w190 = chip->l28[1] && !chip->w245;

    chip->w191 = chip->w190 || chip->w187 || chip->l50[1];

    chip->w192 = (chip->reg_code & 3) != 2;

    chip->w193 = !(!chip->w192 && chip->w184 && chip->t25);

    chip->w194 = !(chip->t24 || chip->t23 || (chip->t25 && !chip->reg_m5));

    chip->w195 = chip->l28[1] && chip->w245;

    chip->w196 = chip->t26_n && chip->t27 && chip->l46[1] && chip->l109[1];

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
        chip->reg_addr |= (chip->w350 & 63) << 8;
    }

    if (chip->w165)
    {
        chip->reg_addr &= ~0xff;
        chip->reg_addr |= chip->io_data & 0xff;
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
    chip->w225 = (chip->w206 && (chip->reg_data.l2 & 0x700) == 0x600) || chip->reset_comb; // 86
    chip->w226 = (chip->w206 && (chip->reg_data.l2 & 0x700) == 0x500) || chip->reset_comb; // 85
    chip->w227 = (chip->w208 && (chip->reg_data.l2 & 0x700) == 0x700) || chip->reset_comb; // 97
    chip->w228 = (chip->w208 && (chip->reg_data.l2 & 0x700) == 0x500) || chip->reset_comb; // 95
    chip->w229 = chip->w207 && (chip->reg_data.l2 & 0x700) == 0x400; // 8a
    chip->w230 = (chip->w207 && (chip->reg_data.l2 & 0x700) == 0x100) || chip->reset_comb; // 89
    chip->w231 = (chip->w207 && (chip->reg_data.l2 & 0x700) == 0x000) || chip->reset_comb; // 88
    chip->w232 = (chip->w209 && (chip->reg_data.l2 & 0x700) == 0x600) || chip->reset_comb; // 8e
    chip->w233 = (chip->w209 && (chip->reg_data.l2 & 0x700) == 0x500) || chip->reset_comb; // 8d

    chip->w234 = chip->w250 && (chip->reg_test0 & 2) != 0;

    chip->w235 = chip->w250 && (chip->reg_test0 & 2) == 0;

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
    chip->w244 = chip->reg_lg[1] == 0xfffe && chip->w250;

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

    chip->w266 = chip->hclk1 && chip->l116[1];

    chip->w267 = chip->w247 || chip->w246;

    chip->w268 = !chip->w265 && chip->l116[1];

    chip->w269 = chip->l109[1] && !chip->l46[1];

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

    chip->w272 = chip->t28 && chip->w263 && chip->l109[1];

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
        chip->l79[0] = chip->cpu_pen;
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
        chip->l82[0] = chip->l88[1];
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
        chip->l90 = chip->w355 & 255; // v counter
    if (chip->w134)
    {
        chip->io_data &= ~0xff00;
        chip->io_data |= (chip->l90 & 255) << 8;
    }

    if (chip->w337)
        chip->l91 = (chip->l106[1] >> 1) & 255; // h counter
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
        chip->vram_data = (chip->w351 & 255) | ((chip->l96 & 255) << 8);
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
        chip->vram_data = (chip->w352 & 255) | ((chip->l98 & 255) << 8);
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
        chip->vram_data = (chip->w353 & 255) | ((chip->l100 & 255) << 8);
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
        chip->vram_data = (chip->w354 & 255) | ((chip->l102 & 255) << 8);
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

        chip->l107[0] = (chip->l107[1] << 1) | chip->l663[1];
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
        chip->l120[0] = !chip->i_csync;
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
        chip->l149[0] = chip->i_hsync;
        chip->l150[0] = chip->w412;
        chip->l151[0] = chip->w413;
        chip->l152[0] = chip->w496;
        chip->l153[0] = chip->w497;
        chip->l154[0] = chip->w511;
        chip->l155[0] = chip->w485;
        chip->l156[0] = chip->w484;
        chip->l157[0] = chip->l150[1];
        chip->l159[0] = chip->w512;

        i = chip->l160[1] ^ chip->w426;
        if (chip->reset_comb)
            i = 0;
        chip->l160[0] = i;

        chip->l161[0] = chip->w420;
        chip->l162[0] = !chip->w475;
        chip->l163[0] = chip->w474;
        chip->l164[0] = chip->w473;
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

    chip->w373 = !(chip->reg_m5 ? (chip->l107[1] & 128) != 0 : chip->l663[1]);

    chip->w374 = chip->reg_8c_b6 ? chip->hclk2 : chip->w373;

    chip->w375 = chip->l120[1] || chip->w411;

    chip->w377 = !(chip->l114[1] || chip->reset_comb);

    chip->w376 = chip->w377 && (chip->l121[1] || chip->w375);

    chip->w378 = chip->reg_vscr ? chip->l124[1] : !chip->l117[1];

    chip->w379 = chip->w378 && chip->w380;

    chip->w384 = !(chip->w483 && !chip->l132[1]);

    chip->w385 = chip->w382 || (chip->w380 && chip->l125[1]);

    chip->w386 = !(chip->w480 || chip->w483 || chip->w481);

    chip->w387 = chip->reg_m5 ? (chip->l127[1] & 128) != 0 : chip->w420;

    chip->w388 = chip->t29 && !chip->w439;

    chip->w389 = chip->reg_disp && chip->t29 && chip->t38;

    chip->w390 = chip->w441 || chip->w450;

    chip->w391 = chip->t31 && chip->w443;

    chip->w392 = chip->reset_comb || chip->l137[1];

    if (chip->l130[1])
        chip->t29 = 1;
    else if (chip->w392)
        chip->t29 = 0;

    chip->w393 = chip->l133[1] && chip->w380;

    chip->w394 = chip->w384 || (chip->w380 && chip->l126[1]);

    chip->w395 = !(chip->w486 || chip->w489 || chip->w482 || chip->w488);

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

    chip->w404 = !(chip->w396 && !chip->reg_8c_b5);

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

    chip->w420 = chip->l151[1] ^ chip->l663[1];

    chip->w421 = chip->w427 ? chip->l160[1] : chip->l157[1];

    chip->w422 = chip->reg_m5 ? (chip->l158[1] & 128) != 0 : chip->l129[1];

    if (chip->w423)
        chip->t33 = 1;
    else if (chip->l123[1])
        chip->t33 = 0;
    
    chip->w423 = chip->reset_comb || chip->l131[1];

    chip->w424 = chip->l159[1] && chip->w380;

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

    chip->w436 = ((chip->reg_test1 & 4) == 0 && chip->l115[1] && !chip->w437) || ((chip->reg_test1 & 4) != 0 && !chip->cpu_bg);

    chip->w439 = !(chip->reg_disp && (chip->l162[1] || chip->t38));

    chip->w440 = chip->reset_comb || chip->w442;

    if (chip->w444)
        chip->t34 = 1;
    else if (chip->w440)
        chip->t34 = 0;

    chip->w441 = chip->t34 && chip->reg_m5;

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

    chip->w460 = chip->reg_80_b0 && !chip->l176[1] && chip->l175[1];

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
    chip->pla_hcnt2[5] = !chip->reg_m5 && chip->l106[1] == 471;
    chip->pla_hcnt2[6] = !chip->reg_m5 && chip->l106[1] == 279;
    chip->pla_hcnt2[7] = !chip->reg_m5 && chip->l106[1] == 267;
    chip->pla_hcnt2[8] = (chip->l106[1] & 15) == 15;
    chip->pla_hcnt2[9] = !chip->reg_m5 && (chip->l106[1] & 15) == 15;
    chip->pla_hcnt2[10] = (chip->l106[1] & 15) == 7;
    chip->pla_hcnt2[11] = (chip->l106[1] & 7) == 0;
    chip->pla_hcnt2[12] = chip->reg_rs1 && chip->l106[1] == 322;
    chip->pla_hcnt2[13] = !chip->reg_rs1 && chip->l106[1] == 258;
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

    chip->o_vsync = chip->w374;
    chip->o_csync = chip->l128[1] ? state_z : 0;
    chip->o_hsync = chip->l136[1] ? state_z : 0;
    if (chip->i_clk1)
        chip->o_clk1 = state_z;
    else
        chip->o_clk1 = chip->mclk_cpu_clk1;

    chip->o_sbcr = chip->mclk_sbcr;
    chip->o_clk0 = chip->mclk_cpu_clk0;
    if (chip->reg_test1 & 2)
        chip->o_edclk = chip->i_edclk;
    else
        chip->o_edclk = state_z;

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
    chip->o_zint = chip->w122 ? state_z : 0;
    chip->o_br = chip->w42 ? state_z : 0;
    chip->o_bgack = chip->w64 ? state_z : 0;
    chip->o_ipl1 = chip->io_ipl1 ? state_z : 0;
    chip->o_ipl2 = chip->io_ipl2 ? state_z : 0;
    chip->o_dtack = chip->w117 ? state_z : 0;
    chip->o_uwr = !chip->io_uwr;
    chip->o_lwr = !chip->io_lwr;
    chip->o_oe0 = !chip->io_oe0;
    chip->o_cas0 = !chip->io_cas0;
    chip->o_ras0 = !chip->io_ras0;
    chip->o_ram_addr = chip->w103 & 255;
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
        chip->l217[0] = chip->w541;
        chip->l218[0] = chip->w582;
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
        chip->l314[0] = chip->w642;
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
        chip->w527 |= (chip->w555 >> 5) & 1;
    }
    if (chip->w525)
    {
        chip->w527 |= (chip->w528 << 2) & 124;
        chip->w527 |= (chip->w555 >> 5) & 3;
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

    chip->w532 = chip->l200[1] ? chip->reg_sb : chip->reg_sa;
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

    chip->w560 = chip->w356 || chip->w549;

    if (chip->w558)
    {
        chip->vram_address &= ~0x7f;
        chip->vram_address |= (chip->w527 & 1) << 6;
        chip->vram_address |= (chip->w555 & 31) << 1;
    }

    chip->w561 = chip->reg_rs1 ? chip->w568 : (chip->l106[1] & 256) != 0;

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
        chip->vram_address |= (chip->w577 & 7) << 2;
        chip->vram_address |= (!chip->l198[1]) << 1;
    }

    chip->w578 = chip->w106 ? ((chip->w577 >> 3) & 1) | (chip->l219 << 1) : chip->l219 | ((chip->l220 & 1) << 8);

    if (chip->l199[1])
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

    chip->w598 = chip->reg_m5 ? chip->l302[1] : chip->l231[1];

    chip->w599 = chip->reg_m5 && (chip->l241[1] & 8) != 0;

    chip->w600 = !(chip->hclk1 && chip->w612);

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

    if (chip->l604[1])
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

    if (chip->w645)
    {
        chip->l287 = chip->l279;
    }
    if (chip->w645)
    {
        chip->l288 = chip->l280;
    }
    if (chip->w645)
    {
        chip->l289 = chip->l281;
    }
    if (chip->w645)
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

    if (chip->l605[1])
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
    int i, j;
    chip->w650 = chip->l325[1] ? (chip->sat_size << 7) | chip->sat_link : chip->sat_ypos;

    if (chip->w651)
        chip->l324 = chip->w650;

    if (chip->l330[1])
    {
        chip->vram_data &= 0x7ff;
        chip->vram_data |= chip->l324;
    }

    if (chip->hclk1)
    {
        chip->l325[0] = (chip->vram_address & 2) != 0;
        chip->l326[0] = chip->w179;
        chip->l327[0] = (chip->sat_size << 7) | chip->sat_link; // 7 link, 2 vsize, 2 hsize
        chip->l328 = chip->l327[1] ^ 0x7ff;
        chip->l329[0] = chip->l326[1];
        chip->l330[0] = chip->l329[1];
        chip->l331[0] = chip->l134[1];
        chip->l333 = !chip->w679;
        chip->l336[0] = (chip->l332 & 1024) == 0;
        chip->l337[0] = (chip->l332 & 512) == 0;
        chip->l338[0] = chip->w656;
        chip->l339[0] = chip->w657;
        chip->l340 = chip->w666 ^ 1023;
        chip->l345[0] = chip->sat_ypos;
        chip->l346 = chip->l345[1] ^ 1023;
        chip->l347[0] = chip->l357[1];
        chip->l348[0] = chip->l347[1];
        chip->l349[0] = chip->l348[1];
        chip->l350[0] = chip->l349[1];
        chip->l352[0] = chip->l353[1];
        chip->l353[0] = chip->l147[1];
        chip->l354[0] = chip->w685;
        chip->l355[0] = chip->l356[1];
        chip->l356[0] = chip->l162[1];
        chip->l357[0] = chip->w686;
        chip->l358[0] = chip->l331[1];
        chip->l359[0] = chip->l358[1];
        chip->l360[0] = chip->vram_address & 0x1fa;
        chip->l361[0] = chip->w179;
        chip->l362[0] = chip->w691;
        chip->l363[0] = chip->w693;
        chip->l364[0] = chip->w694;
        chip->l365[0] = chip->l351[1] & 31;
        chip->l365[2] = chip->l365[1];
        chip->l366[0] = (chip->vram_data >> 8) & 15;
        chip->l367[0] = chip->w784;
        chip->l368[0] = chip->w698;
        chip->l369[0] = chip->w699;
        chip->l370[0] = chip->w700;
        chip->l372[0] = chip->w360;
        chip->l373[0] = chip->w701;
        chip->l374[0] = chip->l377[1];
        chip->l375[0] = chip->l374[1];
        chip->l376[0] = (chip->l376[1] << 1) | chip->w743;
        chip->l377[0] = chip->w716;
        chip->l378[0] = chip->l382[1];
        chip->l381[0] = chip->l115[1];
        chip->l382[0] = chip->w418;
        chip->l383[0] = chip->w727;
        chip->l384[0] = chip->w658;
        chip->l385[0] = chip->w720;
        chip->l396[0] = chip->w750;
        chip->l397[0] = chip->w417;
        chip->l398[0] = chip->w696;
        chip->l399[0] = chip->l398[1];
        chip->l400[0] = chip->l399[1];
        chip->l401[0] = chip->l141[1];
        chip->l402[0] = chip->l142[1];
        chip->l411[0] = chip->l147[1];
        chip->l412[0] = chip->l134[1];
        chip->l419[0] = chip->l511[1];
        chip->l422[0] = chip->l421[1];
        chip->l423[0] = chip->t42;
        chip->l426[0] = chip->w776;
        chip->l427[0] = chip->w777;
        chip->l428[0] = chip->w781;
        chip->l430[0] = chip->l431[1];
        chip->l431[0] = chip->l141[1];
        chip->l438[0] = chip->w773;
        chip->l455[0] = chip->l438[1];
        chip->l456[0] = chip->l455[1];
        chip->l464[0] = !chip->w820;
        chip->l467[0] = (chip->w809 & 4) != 0;
        chip->l468[0] = (chip->w809 & 2) != 0;
        chip->l469[0] = (chip->w809 & 1) != 0;
        chip->l470[0] = chip->l471[1];
        chip->l471[0] = chip->w388;
        chip->l475[0] = (chip->w809 >> 3) & 63;
        chip->l507[0] = chip->w848;
        chip->l508[0] = chip->l507[1];
        chip->l509[0] = chip->l508[1];
        chip->l510[0] = chip->l509[1];
        chip->l511[0] = chip->w849;
        chip->l512 = !chip->w388;
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
    }

    chip->w651 = chip->hclk1 && chip->l326[1];

    if (chip->w652)
        chip->l332 = chip->l328;

    chip->w652 = chip->hclk2 && clk2 && chip->l333;

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
        && !chip->w675 && chip->l383[1];

    chip->w666 = chip->w677 ? (chip->l342 & 255) : chip->l344;


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

    chip->w678 = chip->l347[1] || chip->l348[1] || chip->l359[1];

    chip->w679 = !(chip->reg_m5 ? chip->w678 : chip->l348[1]);

    chip->w680 = chip->reg_m5 ? chip->l346 : (chip->vram_serial ^ 1023);

    chip->w681 = chip->l348[1] || chip->l349[1];
    chip->w682 = chip->l349[1] || chip->l350[1];

    if (chip->hclk1)
    {
        i = chip->w683 ? chip->sat_link : chip->l351[1];
        if (chip->w684)
            i++;
        if (chip->l354[1])
            i = 0;
        i &= 127;
        chip->l351[0] = i;
    }
    if (chip->hclk2)
    {
        chip->l351[1] = chip->l351[0];
    }

    chip->w683 = chip->reg_m5 && (chip->l352[1] || chip->l353[1]);
    chip->w684 = !chip->reg_m5 && chip->l353[1];

    chip->w685 = chip->reset_comb || chip->l115[1] || (!chip->l355[1] && chip->l356[1]);

    chip->w686 = chip->l147[1] && (chip->t38 || chip->l162[1]);

    chip->w687 = chip->l364[1] && (chip->l360[1] & 2) != 0;
    chip->w688 = chip->l363[1] && (chip->l360[1] & 2) != 0;
    chip->w689 = chip->l363[1] && (chip->l360[1] & 2) == 0;
    chip->w690 = chip->l364[1] && (chip->l360[1] & 2) == 0;

    chip->w691 = chip->reg_rs1 && (chip->vram_address & 512) != 0;

    chip->w692 = chip->l358[1] || chip->l363[1] || chip->l364[1] || chip->l361[1];

    chip->w693 = chip->w741 && chip->w283;
    chip->w694 = chip->w741 && chip->w284;

    if (chip->w692)
    {
        chip->w695 = (chip->l360[1] >> 3) & 63;
        if (chip->l362[1])
            chip->w695 |= 64;
    }
    else
    {
        chip->w695 = chip->l351[1];
    }

    if (chip->reg_m5)
    {
        chip->w696 = chip->l351[1];
    }
    else
    {
        chip->w696 = 64 | (chip->l365[3] << 1);
        if (chip->l116[1])
            chip->w696 |= 1;
    }

    if (chip->w684)
    {
        chip->vram_address &= ~255;
        chip->vram_address |= (chip->l351[1] & 31) << 1;
    }

    // sat cache
    {
        int index = chip->w695;
        if (chip->hclk1 && chip->w687) // link
        {
            if (index < 80)
            {
                chip->sat_cache_link[index] = chip->l104[1] & 127;
            }
        }
        if (chip->hclk1 && chip->w688) // size
        {
            if (index < 80)
            {
                chip->sat_cache_size[index] = chip->l366[1];
            }
        }
        if (chip->hclk1 && chip->w689) // ypos
        {
            if (index < 80)
            {
                chip->sat_cache_ypos[index] &= ~0x300;
                chip->sat_cache_ypos[index] |= (chip->l366[1] & 3) << 8;
            }
        }
        if (chip->hclk1 && chip->w690) // ypos
        {
            if (index < 80)
            {
                chip->sat_cache_ypos[index] &= ~255;
                chip->sat_cache_ypos[index] |= chip->l104[1] & 255;
            }
        }
        if (index < 80)
        {
            chip->sat_link = chip->sat_cache_link[index];
            chip->sat_size = chip->sat_cache_size[index];
            chip->sat_ypos = chip->sat_cache_ypos[index];
        }
        else
        {
            // FIXME: undefined behaviour
            chip->sat_link = 0;
            chip->sat_size = 0;
            chip->sat_ypos = 0;
        }
    }

    chip->w697 = (chip->reg_test0 & 4096) != 0 ? (chip->reg_test_18 & 31) : chip->l371[1];
    chip->w698 = chip->l367[1] && (chip->l371[1] & 16) != 0 && (chip->l371[1] & 4) != 0;
    chip->w699 = chip->reg_m5 && chip->l370[1] && !chip->w700;

    chip->w700 = !(chip->l368[1] || chip->l429);

    if (chip->hclk1)
    {
        i = chip->l371[1];
        if (chip->w703)
            i++;
        if (chip->w704)
            i += 31;
        if (chip->l373[1])
            i = 0;
        chip->l371[0] = i & 31;
    }
    if (chip->hclk2)
    {
        chip->l371[1] = chip->l371[0];
    }

    chip->w701 = chip->w360 || chip->l110[1];

    chip->w702 = !chip->reg_m5 || chip->l374[1] || chip->w784;

    chip->w703 = chip->w702 && !0;
    chip->w704 = chip->w702 && 0;

    chip->w705 = (chip->reg_test_18 & 96) != 64;
    chip->w706 = (chip->reg_test_18 & 96) != 32;
    chip->w707 = (chip->reg_test_18 & 96) != 0;

    chip->w708 = chip->w96 && (chip->reg_test_18 & 64) != 0 && (chip->reg_test_18 & 32) == 0;
    chip->w709 = chip->w708 || chip->w713;

    chip->w710 = chip->w96 && (chip->reg_test_18 & 64) == 0 && (chip->reg_test_18 & 32) != 0;

    chip->w711 = chip->w96 && (chip->reg_test_18 & 64) == 0 && (chip->reg_test_18 & 32) == 0;
    chip->w712 = chip->w711 || chip->w713;

    chip->w713 = chip->l374[1] && (chip->reg_test0 & 4096) == 0;

    chip->w714 = !((chip->l376[1] & 512) != 0 && !chip->reg_m5);

    chip->w715 = chip->w710 || chip->w713 || !chip->l426[1];

    chip->w716 = !chip->w743 && chip->l396[1];

    chip->w717 = chip->w719 || chip->l382[1];

    chip->w718 = chip->hclk1 && chip->l378[1] && clk1;

    if (chip->w718)
    {
        chip->l379 = chip->l339[1] + chip->l338[1] * 2
            + chip->l337[1] * 4 + chip->l336[1] * 8;
        chip->l380 = chip->l341 & 63;
    }

    chip->w719 = chip->w665 && chip->w743;
    chip->w720 = chip->w665 && !chip->w743;

    chip->w721 = chip->l384[1] || chip->l385[1];

    if (chip->w721)
        chip->t40 = 1;
    else if (chip->l381[1])
        chip->t40 = 0;

    if (chip->l385[1])
        chip->t41 = 1;
    else if (chip->l381[1])
        chip->t41 = 0;

    chip->w1154 = chip->t41 && chip->l115[1];

    chip->w722 = (chip->l387 & 16) != 0 && (chip->l379 & 3) != 0;

    chip->w723 = (chip->l387 & 16) != 0 && (chip->l379 & 3) == 2;

    chip->w724 = (chip->l387 & 16) != 0 && (chip->l379 & 2) != 0;

    chip->w725 = chip->reg_m5 ? ((chip->l380 >> 4) & 3) : ((chip->l380 >> 3) & 3);
    chip->w726 = (chip->w725 + chip->w723) & 3;

    chip->w727 = !(chip->t40 || !chip->w676);

    chip->w728 = chip->l380 & 15;
    if (chip->l387 & 16)
        chip->w728 ^= 15;

    chip->w730 = chip->w726;
    if (chip->w722)
        chip->w730 ^= 1;
    if (chip->w724)
        chip->w730 ^= 2;

    if (chip->reg_m5)
    {
        chip->w729 = 0;
        chip->w729 |= (chip->w728 >> 3) & 1;
        chip->w729 |= chip->w730 << 1;
    }
    else
    {
        chip->w729 = chip->w730;
        chip->w729 |= (chip->l380 >> 3) & 4;
    }

    chip->yoff = (chip->w728 & 7) | (chip->w729 << 3);

    if (chip->w745)
    {
        chip->l386 = chip->vram_serial;
    }

    if (chip->w746)
    {
        chip->l387 = chip->vram_serial;
    }

    chip->w731 = chip->l401[1] ? chip->l387 : chip->l386;

    if (chip->w742)
    {
        chip->vram_address &= ~0x3fff;

        if ((chip->l106[1] & 2) == 0)
            chip->vram_address |= 2;

        chip->vram_address |= (chip->w731 & 254) << 5;

        chip->vram_address |= chip->w733 << 2;
        chip->vram_address |= chip->w734 << 3;
        chip->vram_address |= chip->w735 << 4;
        chip->vram_address |= chip->w737 << 5;

        chip->vram_address |= chip->reg_86_b2 << 13;
    }

    chip->w732 = chip->w738 || chip->w94 || chip->w95;

    if (chip->hclk1)
    {
        if (chip->w732)
        {
            chip->l388[0] = chip->l388[1] << 1;
            if (chip->w739 & 1)
                chip->l388[0] |= 1;
            chip->l389[0] = chip->l389[1] << 1;
            if (chip->w739 & 2)
                chip->l389[0] |= 1;
            chip->l390[0] = chip->l390[1] << 1;
            if (chip->w739 & 4)
                chip->l390[0] |= 1;
            chip->l391[0] = chip->l391[1] << 1;
            if (chip->w739 & 8)
                chip->l391[0] |= 1;
        }
        else
        {
            chip->l388[0] = chip->l388[1];
            chip->l389[0] = chip->l389[1];
            chip->l390[0] = chip->l390[1];
            chip->l391[0] = chip->l391[1];
        }
    }
    if (chip->hclk2)
    {
        chip->l388[1] = chip->l388[0];
        chip->l389[1] = chip->l389[0];
        chip->l390[1] = chip->l390[0];
        chip->l391[1] = chip->l391[0];
    }

    chip->w733 = chip->l401[1] ? (chip->l388[1] & 512) != 0 : (chip->l388[1] & 256) != 0;
    chip->w734 = chip->l401[1] ? (chip->l389[1] & 512) != 0 : (chip->l389[1] & 256) != 0;
    chip->w735 = chip->l401[1] ? (chip->l390[1] & 512) != 0 : (chip->l390[1] & 256) != 0;
    chip->w736 = chip->l401[1] ? (chip->l391[1] & 512) != 0 : (chip->l391[1] & 256) != 0;

    chip->w737 = chip->reg_81_b1 ? chip->w736 : (chip->w731 & 1) != 0;

    chip->w738 = (chip->reg_test0 & 0x4000) == 0 && chip->w717;

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

    chip->w739 = chip->w94 ? (chip->io_data & 15) : (chip->l341 & 15);

    if (chip->w225)
    {
        chip->reg_86_b2 = (chip->reg_data.l2 >> 2) & 1;
        chip->reg_86_b5 = (chip->reg_data.l2 >> 5) & 1;
    }

    if (chip->w226)
    {
        chip->reg_at = chip->reg_data.l2 & 255;
    }

    i = chip->reg_at;
    j = (chip->vram_address >> 9) & 255;
    if (chip->reg_rs1)
    {
        i |= 1;
        j |= 1;
    }
    chip->w740 = i == j;

    if (chip->w756)
    {
        chip->vram_address &= ~0x1fc00;
        chip->vram_address |= (chip->reg_at & 254) << 9;
    }

    if (chip->w754)
    {
        chip->vram_address &= ~0x3f00;
        chip->vram_address |= (chip->reg_at & 126) << 7;
    }

    if (clk1)
        chip->vram_serial = chip->i_vram_sd;

    chip->w741 = chip->w740 && (chip->vram_address & 4) == 0 && chip->reg_m5;

    chip->w742 = !chip->reg_m5 && chip->w751;

    chip->w743 = (chip->reg_m5 && chip->reg_rs1 && (chip->l410[1] & 0x80000) != 0)
        || (chip->reg_m5 && !chip->reg_rs1 && (chip->l410[1] & 0x8000) != 0)
        || (!chip->reg_m5 && (chip->l410[1] & 0x80) != 0);

    if (clk1)
    {
        chip->l392[1] = chip->l392[0];
        chip->l393[1] = chip->l393[0];
        chip->l394 = !chip->w747;
        chip->l395 = !chip->w748;
    }
    if (clk2)
    {
        chip->l392[0] = chip->l394;
        chip->l393[0] = chip->l395;
    }

    chip->w744 = chip->l394 && clk2;
    chip->w745 = chip->l392[1] && clk2;
    chip->w746 = chip->l393[1] && clk2;

    chip->w747 = !(chip->l396[1] && chip->hclk1);
    chip->w748 = !(chip->w417 && chip->hclk1);

    chip->w749 = chip->l395 && clk2;

    chip->w750 = chip->reg_m5 ? chip->w417 : chip->l397[1];

    chip->w751 = chip->l402[1] || chip->l401[1];

    chip->w752 = chip->w94 ? (chip->io_data >> 4) & 127 : chip->l400[1];

    chip->w753 = chip->w94 ? (chip->io_data & 2048) != 0 : chip->l382[1];

    if (chip->hclk1)
    {
        if (chip->w732)
        {
            chip->l403[0] = chip->l403[1] << 1;
            if (chip->w752 & 1)
                chip->l403[0] |= 1;
            chip->l404[0] = chip->l404[1] << 1;
            if (chip->w752 & 2)
                chip->l404[0] |= 1;
            chip->l405[0] = chip->l405[1] << 1;
            if (chip->w752 & 4)
                chip->l405[0] |= 1;
            chip->l406[0] = chip->l406[1] << 1;
            if (chip->w752 & 8)
                chip->l406[0] |= 1;
            chip->l407[0] = chip->l407[1] << 1;
            if (chip->w752 & 16)
                chip->l407[0] |= 1;
            chip->l408[0] = chip->l408[1] << 1;
            if (chip->w752 & 32)
                chip->l408[0] |= 1;
            chip->l409[0] = chip->l409[1] << 1;
            if (chip->w752 & 64)
                chip->l409[0] |= 1;
            chip->l410[0] = chip->l410[1] << 1;
            if (chip->w753)
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
        chip->l403[1] = chip->l403[0];
        chip->l404[1] = chip->l404[0];
        chip->l405[1] = chip->l405[0];
        chip->l406[1] = chip->l406[0];
        chip->l407[1] = chip->l407[0];
        chip->l408[1] = chip->l408[0];
        chip->l409[1] = chip->l409[0];
        chip->l410[1] = chip->l410[0];
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

    chip->w754 = !chip->reg_m5 && (chip->l411[1] || chip->l412[1]);
    chip->w755 = !chip->reg_m5 && chip->l412[1];
    chip->w756 = chip->reg_m5 && chip->l412[1];

    if (chip->w756)
    {
        chip->vram_address &= ~0x3ff;
        
        chip->vram_address |= 4;
        chip->vram_address |= chip->w757 & 0x3f8;
    }

    chip->w757 = 0;
    if (chip->reg_rs1)
    {
        if (chip->l409[1] & 0x80000)
            chip->w757 |= 0x200;
        if (chip->l408[1] & 0x80000)
            chip->w757 |= 0x100;
        if (chip->l407[1] & 0x80000)
            chip->w757 |= 0x80;
        if (chip->l406[1] & 0x80000)
            chip->w757 |= 0x40;
        if (chip->l405[1] & 0x80000)
            chip->w757 |= 0x20;
        if (chip->l404[1] & 0x80000)
            chip->w757 |= 0x10;
        if (chip->l403[1] & 0x80000)
            chip->w757 |= 0x8;
    }
    else
    {
        if (chip->reg_at & 0x01)
            chip->w757 |= 0x200;
        if (chip->l408[1] & 0x8000)
            chip->w757 |= 0x100;
        if (chip->l407[1] & 0x8000)
            chip->w757 |= 0x80;
        if (chip->l406[1] & 0x8000)
            chip->w757 |= 0x40;
        if (chip->l405[1] & 0x8000)
            chip->w757 |= 0x20;
        if (chip->l404[1] & 0x8000)
            chip->w757 |= 0x10;
        if (chip->l403[1] & 0x8000)
            chip->w757 |= 0x8;
    }

    if (chip->w755)
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

    chip->w759 = chip->l426[1] && (chip->reg_test0 & 4096) != 0;
    chip->w760 = chip->l426[1] && (chip->reg_test0 & 4096) == 0;

    chip->w758 = 0; // h flip
    if (chip->w759)
        chip->w758 |= (chip->io_data >> 0) & 1;
    if (chip->w760)
        chip->w758 |= (chip->l387 >> 3) & 1;

    chip->w761 = 0; // pal 0
    if (chip->w759)
        chip->w761 |= (chip->io_data >> 1) & 3;
    if (chip->w760)
        chip->w761 |= (chip->l387 >> 5) & 3;

    chip->w763 = 0; // priority
    if (chip->w759)
        chip->w763 |= (chip->io_data >> 3) & 1;
    if (chip->w760)
        chip->w763 |= (chip->l387 >> 7) & 1;

    chip->w764 = 0; // xsize 0
    if (chip->w759)
        chip->w764 |= (chip->io_data >> 4) & 3;
    if (chip->w760)
        chip->w764 |= (chip->l379 >> 2) & 3;

    chip->w766 = 0; // ysize 0
    if (chip->w759)
        chip->w766 |= (chip->io_data >> 6) & 3;
    if (chip->w760)
        chip->w766 |= (chip->l379 >> 0) & 3;

    chip->w768 = 0; // yoff
    if (chip->w759)
        chip->w768 |= (chip->io_data >> 8) & 63;
    if (chip->w760)
        chip->w768 |= chip->yoff;

    chip->w769 = chip->hclk1 && (chip->w97 || chip->w772);

    if (chip->w769)
    {
        chip->l413 = chip->sprdata_hflip_o;
        chip->l414 = chip->sprdata_pal_o;
        chip->l415 = chip->sprdata_priority_o;
        chip->l416 = chip->sprdata_xs_o;
        chip->l417 = chip->sprdata_ys_o;
        chip->l418 = chip->sprdata_yoffset_o;
    }

    chip->w770 = 0;
    if (!chip->w705)
    {
        chip->w770 |= chip->l413 << 0;
        chip->w770 |= chip->l414 << 1;
        chip->w770 |= chip->l415 << 3;
        chip->w770 |= chip->l416 << 4;
        chip->w770 |= chip->l417 << 6;
        chip->w770 |= (chip->l418 & 7) << 8;
    }
    if (!chip->w706)
    {
        chip->w770 |= chip->l425;
    }
    if (!chip->w707)
    {
        chip->w770 |= chip->l424;
    }

    if (chip->w97)
    {
        chip->io_data &= ~0x3fff;
        chip->io_data |= chip->w770 & 0x7ff;
        chip->io_data |= (chip->l418 & 0x38) << 8;
    }

    // sprite data ram
    {
        int index = chip->w697;
        if (chip->hclk1 && chip->w712)
        {
            if (index < 20)
            {
                chip->sprdata_pattern[index] = chip->w774;
            }
        }
        if (chip->hclk1 && chip->w715)
        {
            if (index < 20)
            {
                chip->sprdata_hpos[index] = chip->w775;
            }
        }
        if (chip->hclk1 && chip->w709)
        {
            if (index < 20)
            {
                chip->sprdata_hflip[index] = chip->w758;
                chip->sprdata_pal[index] = chip->w761;
                chip->sprdata_priority[index] = chip->w763;
                chip->sprdata_xs[index] = chip->w764;
                chip->sprdata_ys[index] = chip->w766;
                chip->sprdata_yoffset[index] = chip->w768;
            }
        }
        if (index < 20)
        {
            chip->sprdata_pattern_o = chip->sprdata_pattern[index];
            chip->sprdata_hpos_o = chip->sprdata_hpos[index];
            chip->sprdata_hflip_o = chip->sprdata_hflip[index];
            chip->sprdata_pal_o = chip->sprdata_pal[index];
            chip->sprdata_priority_o = chip->sprdata_priority[index];
            chip->sprdata_xs_o = chip->sprdata_xs[index];
            chip->sprdata_ys_o = chip->sprdata_ys[index];
            chip->sprdata_yoffset_o = chip->sprdata_yoffset[index];
        }
        else
        {
            // FIXME: undefined behaviour
            chip->sprdata_pattern_o = 0;
            chip->sprdata_hpos_o = 0;
            chip->sprdata_hflip_o = 0;
            chip->sprdata_pal_o = 0;
            chip->sprdata_priority_o = 0;
            chip->sprdata_xs_o = 0;
            chip->sprdata_ys_o = 0;
            chip->sprdata_yoffset_o = 0;
        }
    }

    if (chip->hclk1)
    {
        i = chip->w772 ? (chip->sprdata_xs_o ^ 3) : chip->l420[1];
        i += chip->l141[1];
        if (chip->l372[1])
            i = 0;
        chip->l420[0] = i & 3;
    }
    if (chip->hclk2)
    {
        chip->l420[1] = chip->l420[0];
    }

    chip->w771 = chip->l420[1] == 0;

    chip->w772 = chip->w771 && chip->l141[1];

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

    if (chip->l372[1])
        chip->t42 = 1;
    else if (chip->l369[1])
        chip->t42 = 0;

    chip->w773 = chip->l423[1] && chip->l511[1] && chip->w714;

    chip->w774 = 0;
    if (chip->w759)
        chip->w774 |= chip->io_data & 0x7ff;
    if (chip->w760)
        chip->w774 |= (chip->l435 & 255) | ((chip->l387 & 7) << 8);

    if (chip->w769)
        chip->l424 = chip->sprdata_pattern_o;

    chip->w775 = 0;
    if (chip->w759)
        chip->w775 |= chip->io_data & 0x1ff;
    if (chip->w760)
        chip->w775 |= (chip->l436 & 255) | ((chip->l386 & 1) << 8);

    if (chip->w769)
        chip->l425 = chip->sprdata_hpos_o;

    chip->w776 = !(!chip->reg_m5 || chip->w772);

    chip->w777 = chip->l372[1] || chip->w784;

    chip->w778 = chip->w106 ? (chip->l418 >> 4) & 3 : (chip->l418 >> 3) & 3;

    chip->w779 = chip->w778 + chip->w786;

    if (chip->l428[1])
    {
        chip->vram_address = 0;
        chip->vram_address |= (chip->l418 & 7) << 2;
        if (chip->w106)
        {
            chip->vram_address |= (chip->l418 & 8) << 2;
            chip->vram_address |= chip->w780 << 6;
        }
        else
        {
            chip->vram_address |= chip->w780 << 5;
            chip->vram_address |= chip->reg_86_b5;
        }
    }

    chip->w780 = (chip->l424 + chip->w779) & 0x7ff;

    chip->w781 = chip->l141[1] && chip->l147[1];

    chip->w782 = (chip->l425 & 0x1ff) != 0;

    if (chip->hclk2)
        chip->l429 = !chip->w782;

    chip->w783 = chip->l372[1] || chip->w772;

    chip->w784 = chip->l431[1] && chip->w771;

    if (chip->hclk1)
    {
        chip->l432 = !chip->w783;
        chip->l433 = chip->l430[1];
    }

    chip->w785 = chip->l433 ? chip->l417 : 0;

    chip->w787 = (chip->l433 + chip->l434[1] + chip->w785) & 15;

    chip->w786 = chip->l432 ? chip->w787 : 0;

    if (chip->hclk1)
    {
        chip->l434[1] = chip->l434[0];
    }
    if (chip->hclk2)
    {
        chip->l434[0] = chip->w786;
    }

    chip->w788 = chip->l422[1] ? chip->l436 : chip->l435;

    if (chip->w749)
        chip->l435 = chip->vram_serial;

    if (chip->w744)
        chip->l436 = chip->vram_serial;

    if (chip->l438[1])
        chip->l437 = chip->w788;

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

        chip->l443[0] = chip->l416;
        chip->l443[2] = chip->l443[1];
        chip->l443[4] = chip->l443[3];
        chip->l443[6] = chip->l443[5];
        chip->l443[8] = chip->l443[7];
        chip->l443[10] = chip->l443[9];
    }

    if (clk1)
    {
        chip->l444[0] = chip->w805;
        chip->l445[0] = chip->l454;
        chip->l446[0] = chip->w800;
        chip->l447[0] = chip->w802;
        chip->l449[0] = chip->l448;
        chip->l458[0] = chip->w810;
        chip->l459[0] = !chip->l454;
        chip->l460[0] = chip->l459[1];
        chip->l461 = chip->w813;
        chip->l462 = !chip->w814;
        chip->l463[0] = chip->w814;
        chip->l465 = !chip->w819;
        chip->l472[0] = chip->l473;
        chip->l474[0] = chip->w802;
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

    chip->w789 = !(chip->l444[1] || chip->l445[1]);

    chip->w790 = chip->w789 && chip->l449[1];

    chip->w791 = chip->w792 || chip->w796;

    chip->w792 = (chip->l442[10] & 1) != 0 && chip->w795;
    chip->w793 = (chip->l442[10] & 2) != 0 && chip->w795;

    chip->w794 = chip->w793 || chip->w796;

    chip->w795 = chip->l439[10] && chip->reg_m5;

    chip->w796 = !chip->reg_m5 && chip->reg_80_b3;

    chip->w797 = chip->reg_m5 || chip->w796;

    chip->w798 = chip->w789 && !chip->l449[1];

    chip->w799 = chip->reg_m5 ? chip->l443[10] : chip->l437;

    chip->w800 = (chip->w799 >> 3) + chip->w795 + (chip->w791 + chip->w794 * 2 + chip->w796 * (4 + 8) + chip->w797 * (16 + 32));
    chip->w800 &= 63;

    chip->w801 = chip->l444[1] ? chip->l447[1] : chip->l446[1];

    chip->w802 = chip->w801 + chip->w798 + (chip->w790 * (1+2+4+8+16+32));
    chip->w802 &= 63;

    chip->w803 = clk2 && chip->l499;

    if (chip->w805)
    {
        chip->l448 = chip->w795;
        chip->l450 = chip->l441[10];
        chip->l452 = chip->l440[10];
    }

    if (chip->w803)
    {
        chip->l451 = chip->l450;
        chip->l453 = chip->l452;
    }

    if (clk2)
    {
        chip->l454 = !chip->l499;
    }

    chip->w804 = chip->l456[1] && chip->w808;

    chip->w805 = chip->l456[1] && chip->w808 && chip->hclk1;

    chip->w806 = !(chip->reg_m5 && (chip->l442[10] & 1) != 0);
    chip->w807 = !(chip->reg_m5 && (chip->l442[10] & 2) != 0);

    if (chip->hclk1)
    {
        i = chip->w804 ? (chip->w806 + chip->w807 * 2) : chip->l457[1];
        i += chip->l456[1];
        if (chip->w360)
            i = 0;
        chip->l457[0] = i & 3;
    }
    if (chip->hclk2)
    {
        chip->l457[1] = chip->l457[0];
    }

    chip->w808 = chip->l457[1] == 0;

    chip->w809 = chip->l106[1] + 1 + (chip->reg_m5 * (1 + 8) + !chip->reg_m5 * 16 + 4 + 32 + 64 + 128 + 256);
    chip->w809 &= 511;

    chip->w810 = !(((chip->w802 & 32) != 0 && chip->reg_rs1 && (chip->w802 & 24) != 0)
        || ((chip->w802 & 32) != 0 && !chip->reg_rs1));

    chip->w811 = chip->l451 && chip->w821;
    chip->w812 = chip->w821 ? chip->l453 : 0;

    chip->w813 = chip->l460[1] ^ chip->l449[1];

    chip->w814 = chip->l458[1] && (!chip->l454 || chip->l460[1]);

    chip->w815 = !(chip->l462 || (chip->reg_test0 & 8192) != 0);

    chip->w816 = chip->w814 || chip->l463[1];

    chip->w817 = chip->l464[1] || chip->w816 || chip->w951 || (chip->reg_test0 & 8192) != 0;

    chip->w818 = !(chip->l465 && (chip->reg_test0 & 8192) == 0);

    chip->w819 = !(chip->hclk2 && chip->l466);
    if (chip->hclk1)
        chip->l466 = !chip->w820;

    chip->w820 = chip->w821 || chip->l467[1] || chip->l468[1] || chip->l469[1];

    chip->w821 = !(chip->reg_m5 ? chip->l470[1] : chip->w388);

    if (chip->w805)
    {
        chip->l473 = chip->w799 & 7;
    }

    chip->w822 = chip->w821 && (chip->reg_test0 & 8192) == 0;
    chip->w823 = !chip->w821 && (chip->reg_test0 & 8192) == 0;
    chip->w824 = (chip->reg_test0 & 8192) != 0;

    chip->w825 = 0;
    if (chip->w822)
        chip->w825 |= chip->l474[1];
    if (chip->w823)
        chip->w825 |= chip->l475[1];
    if (chip->w824)
        chip->w825 |= chip->reg_test_18 & 63;

    if (chip->w834)
    {
        chip->l478 = chip->vram_serial;
    }
    if (chip->w833)
    {
        chip->l479 = chip->vram_serial;
    }
    if (chip->w829)
    {
        chip->l480 = chip->vram_serial;
    }
    if (chip->w830)
    {
        chip->l481 = chip->vram_serial;
    }

    if (clk1)
    {
        chip->l483 = !chip->w831;
        chip->l484 = !chip->w832;
        chip->l482[1] = chip->l482[0];
        chip->l485[1] = chip->l485[0];
        chip->l489[1] = chip->l489[0];
        chip->l490[1] = chip->l490[0];
        chip->l495[0] = chip->w836;
        chip->l496[0] = chip->l495[1];
        chip->l497[0] = chip->l496[1];
        chip->l498[0] = chip->l497[1];
        chip->l499 = !chip->l498[1];
        chip->l501[0] = chip->w795;
        chip->l504 = (chip->l503[1] << 1) | chip->l506[1];
        chip->l506[0] = chip->l505;
        chip->l513[0] = chip->l512;
        chip->l514[0] = chip->w850;
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

    chip->w829 = chip->l482[1] && clk2;
    chip->w830 = chip->l483 && clk2;

    chip->w831 = !(chip->l509[1] && chip->hclk1);
    chip->w832 = !(chip->l511[1] && chip->hclk1);
    chip->w833 = chip->l484 && clk2;
    chip->w834 = chip->l485[1] && clk2;

    if (chip->w834)
    {
        chip->l486 = chip->l479;
        chip->l487 = chip->l480;
        chip->l488 = chip->l481;
    }

    chip->w835 = chip->l490[1] && clk2;

    if (chip->w835)
    {
        chip->l491 = chip->l478;
        chip->l492 = chip->l486;
        chip->l493 = chip->l487;
        chip->l494 = chip->l488;
    }

    if (chip->hclk1)
        chip->l500 = chip->l438[1];

    chip->w836 = !(chip->l500 && chip->hclk2);

    chip->w837 = chip->l501[1] ? chip->l495[1] : chip->l498[1];
    chip->w838 = chip->l501[1] ? chip->l496[1] : chip->l497[1];
    chip->w839 = chip->l501[1] ? chip->l497[1] : chip->l496[1];
    chip->w840 = chip->l501[1] ? chip->l498[1] : chip->l495[1];

    chip->w841 = !(!chip->reg_m5 || chip->l514[1]);
    chip->w842 = !(chip->reg_m5 || chip->l514[1]);

    chip->w843 = 0;
    if (chip->w841)
    {
        if (!chip->w837)
        {
            chip->w843 |= chip->l492;
        }
        if (!chip->w838)
        {
            chip->w843 |= chip->l491;
        }
        if (!chip->w839)
        {
            chip->w843 |= chip->l494;
        }
        if (!chip->w840)
        {
            chip->w843 |= chip->l493;
        }
    }
    if (chip->w842)
    {
        if (!chip->l495[1])
        {
            if (chip->l491 & 128)
                chip->w843 |= 128;
            if (chip->l492 & 128)
                chip->w843 |= 32;
            if (chip->l493 & 128)
                chip->w843 |= 8;
            if (chip->l494 & 128)
                chip->w843 |= 2;
            if (chip->l491 & 64)
                chip->w843 |= 64;
            if (chip->l492 & 64)
                chip->w843 |= 16;
            if (chip->l493 & 64)
                chip->w843 |= 4;
            if (chip->l494 & 64)
                chip->w843 |= 1;
        }
        if (!chip->l496[1])
        {
            if (chip->l491 & 32)
                chip->w843 |= 128;
            if (chip->l492 & 32)
                chip->w843 |= 32;
            if (chip->l493 & 32)
                chip->w843 |= 8;
            if (chip->l494 & 32)
                chip->w843 |= 2;
            if (chip->l491 & 16)
                chip->w843 |= 64;
            if (chip->l492 & 16)
                chip->w843 |= 16;
            if (chip->l493 & 16)
                chip->w843 |= 4;
            if (chip->l494 & 16)
                chip->w843 |= 1;
        }
        if (!chip->l497[1])
        {
            if (chip->l491 & 8)
                chip->w843 |= 128;
            if (chip->l492 & 8)
                chip->w843 |= 32;
            if (chip->l493 & 8)
                chip->w843 |= 8;
            if (chip->l494 & 8)
                chip->w843 |= 2;
            if (chip->l491 & 4)
                chip->w843 |= 64;
            if (chip->l492 & 4)
                chip->w843 |= 16;
            if (chip->l493 & 4)
                chip->w843 |= 4;
            if (chip->l494 & 4)
                chip->w843 |= 1;
        }
        if (!chip->l498[1])
        {
            if (chip->l491 & 2)
                chip->w843 |= 128;
            if (chip->l492 & 2)
                chip->w843 |= 32;
            if (chip->l493 & 2)
                chip->w843 |= 8;
            if (chip->l494 & 2)
                chip->w843 |= 2;
            if (chip->l491 & 1)
                chip->w843 |= 64;
            if (chip->l492 & 1)
                chip->w843 |= 16;
            if (chip->l493 & 1)
                chip->w843 |= 4;
            if (chip->l494 & 1)
                chip->w843 |= 1;
        }
    }


    chip->w844 = 0;
    if (chip->w847)
    {
        if (chip->w843 & 64)
            chip->w844 |= 8;
        if (chip->w843 & 16)
            chip->w844 |= 4;
        if (chip->w843 & 4)
            chip->w844 |= 2;
        if (chip->w843 & 1)
            chip->w844 |= 1;
        if (chip->w843 & 128)
            chip->w844 |= 128;
        if (chip->w843 & 32)
            chip->w844 |= 64;
        if (chip->w843 & 8)
            chip->w844 |= 32;
        if (chip->w843 & 2)
            chip->w844 |= 16;
    }
    else
    {
        if (chip->w843 & 64)
            chip->w844 |= 128;
        if (chip->w843 & 16)
            chip->w844 |= 64;
        if (chip->w843 & 4)
            chip->w844 |= 32;
        if (chip->w843 & 1)
            chip->w844 |= 16;
        if (chip->w843 & 128)
            chip->w844 |= 8;
        if (chip->w843 & 32)
            chip->w844 |= 4;
        if (chip->w843 & 8)
            chip->w844 |= 2;
        if (chip->w843 & 2)
            chip->w844 |= 1;
    }

    if (clk1)
        chip->l502 = chip->w844;

    if (chip->reg_test0 & 8192)
    {
        chip->w845 = 0;
        if (chip->io_data & 64)
            chip->w845 |= 8;
        if (chip->io_data & 32)
            chip->w845 |= 4;
        if (chip->io_data & 16)
            chip->w845 |= 2;
        if (chip->io_data & 8)
            chip->w845 |= 1;
        if (chip->io_data & 16384)
            chip->w845 |= 128;
        if (chip->io_data & 8192)
            chip->w845 |= 64;
        if (chip->io_data & 4096)
            chip->w845 |= 32;
        if (chip->io_data & 2048)
            chip->w845 |= 16;
    }
    else
        chip->w845 = chip->l502;

    chip->w846 = !chip->w836;
    
    if (clk1)
    {
        i = chip->w846 ? (chip->w799>>1)&3 : chip->l503[1];
        i += !chip->w846;
        chip->l503[0] = i & 3;
    }
    else
    {
        chip->l503[1] = chip->l503[0];
    }

    if (chip->w846)
        chip->l505 = chip->w799 & 1;

    chip->w847 = chip->l506[1] ^ chip->l501[1];

    chip->w848 = chip->l156[1] || (chip->reg_m5 && chip->l141[1]);

    chip->w849 = chip->reg_m5 ? chip->l509[1] : chip->l510[1];

    chip->w850 = chip->l513[1] && !chip->l512;

    chip->w852 = !((chip->reg_test_18 & 128) == 0 && (chip->reg_test_18 & 64) == 0 && chip->w98);
    chip->w853 = !((chip->reg_test_18 & 128) == 0 && (chip->reg_test_18 & 64) != 0 && chip->w98);
    chip->w854 = !((chip->reg_test_18 & 128) != 0 && (chip->reg_test_18 & 64) == 0 && chip->w98);
    chip->w855 = !((chip->reg_test_18 & 128) != 0 && (chip->reg_test_18 & 64) != 0 && chip->w98);

    chip->w856 = !(chip->w852 && chip->w818);
    chip->w857 = !(chip->w853 && chip->w818);
    chip->w858 = !(chip->w854 && chip->w818);
    chip->w859 = !(chip->w855 && chip->w818);

    chip->w860 = (chip->l504 & 4) == 0 && (chip->l504 & 2) == 0 && (chip->l504 & 1) == 0;
    chip->w861 = (chip->l504 & 4) == 0 && (chip->l504 & 2) == 0 && (chip->l504 & 1) != 0;
    chip->w862 = (chip->l504 & 4) == 0 && (chip->l504 & 2) != 0 && (chip->l504 & 1) == 0;
    chip->w863 = (chip->l504 & 4) == 0 && (chip->l504 & 2) != 0 && (chip->l504 & 1) != 0;
    chip->w828 = (chip->l504 & 4) != 0 && (chip->l504 & 2) == 0 && (chip->l504 & 1) == 0;
    chip->w864 = (chip->l504 & 4) != 0 && (chip->l504 & 2) == 0 && (chip->l504 & 1) != 0;
    chip->w865 = (chip->l504 & 4) != 0 && (chip->l504 & 2) != 0 && (chip->l504 & 1) == 0;
    chip->w866 = (chip->l504 & 4) != 0 && (chip->l504 & 2) != 0 && (chip->l504 & 1) != 0;

    chip->w851 = !((chip->l472[1] & 1) == 0 && (chip->l472[1] & 4) == 0 && (chip->l472[1] & 2) == 0); // 1, 2, 3, 4, 5, 6, 7
    chip->w867 = !((chip->l472[1] & 2) == 0 && (chip->l472[1] & 4) == 0); // 2, 3, 4, 5, 6, 7
    chip->w868 = !((chip->l472[1] & 4) == 0 && !((chip->l472[1] & 1) != 0 && (chip->l472[1] & 4) != 0)); // 3, 4, 5, 6, 7
    chip->w869 = (chip->l472[1] & 4) != 0; // 4, 5, 6, 7
    chip->w827 = !((chip->l472[1] & 4) == 0 || ((chip->l472[1] & 1) == 0 && (chip->l472[1] & 2) == 0)); // 5, 6, 7
    chip->w870 = (chip->l472[1] & 4) != 0 && (chip->l472[1] & 2) != 0; // 6, 7
    chip->w871 = (chip->l472[1] & 4) != 0 && (chip->l472[1] & 2) != 0 && (chip->l472[1] & 1) != 0; // 7


    chip->w877 = !((chip->reg_test0 & 8192) == 0 && chip->l563);

    chip->w873 = chip->w861 || chip->w877;
    chip->w876 = chip->w863 || chip->w877;
    chip->w880 = chip->w864 || chip->w877;
    chip->w883 = chip->w866 || chip->w877;

    chip->w872 = clk2 && (chip->w860 || chip->w883);
    chip->w874 = clk2 && (chip->w873 || chip->w860);
    chip->w875 = clk2 && (chip->w862 || chip->w873);
    chip->w878 = clk2 && (chip->w876 || chip->w862);
    chip->w879 = clk2 && (chip->w828 || chip->w876);
    chip->w881 = clk2 && (chip->w880 || chip->w828);
    chip->w882 = clk2 && (chip->w865 || chip->w880);
    chip->w884 = clk2 && (chip->w883 || chip->w865);

    if (chip->w872)
    {
        chip->l515 = chip->w845 & 15;
    }

    if (chip->w874)
    {
        chip->l516 = (chip->w845 >> 4) & 15;
    }

    if (chip->w875)
    {
        chip->l517 = chip->w845 & 15;
    }

    if (chip->w878)
    {
        chip->l518 = (chip->w845 >> 4) & 15;
    }

    if (chip->w879)
    {
        chip->l519 = chip->w845 & 15;
    }

    if (chip->w881)
    {
        chip->l520 = (chip->w845 >> 4) & 15;
    }

    if (chip->w882)
    {
        chip->l521 = chip->w845 & 15;
    }

    if (chip->w884)
    {
        chip->l522 = (chip->w845 >> 4) & 15;
    }

    chip->w885 = clk2 && (chip->l562[1] || chip->l499);

    if (chip->w885)
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

    if (clk1)
    {
        chip->l531 = !chip->w851;
        chip->l532 = !chip->w867;
        chip->l533 = !chip->w868;
        chip->l534 = !chip->w869;
        chip->l535 = !chip->w827;
        chip->l536 = !chip->w870;
        chip->l537 = !chip->w871;
    }

    chip->w886 = chip->l531 ^ chip->l461;
    chip->w887 = chip->l532 ^ chip->l461;
    chip->w888 = chip->l533 ^ chip->l461;
    chip->w889 = chip->l534 ^ chip->l461;
    chip->w890 = chip->l535 ^ chip->l461;
    chip->w891 = chip->l536 ^ chip->l461;
    chip->w892 = chip->l537 ^ chip->l461;
    chip->w893 = !chip->l461;

    chip->w894 = chip->w886 && chip->w815;
    chip->w895 = chip->w887 && chip->w815;
    chip->w896 = chip->w888 && chip->w815;
    chip->w897 = chip->w889 && chip->w815;
    chip->w898 = chip->w890 && chip->w815;
    chip->w899 = chip->w891 && chip->w815;
    chip->w900 = chip->w892 && chip->w815;
    chip->w901 = chip->w893 && chip->w815;

    chip->w902 = !(chip->w856 || (chip->w894 && chip->w942));
    chip->w903 = !(chip->w856 || (chip->w895 && chip->w943));
    chip->w904 = !(chip->w857 || (chip->w896 && chip->w944));
    chip->w905 = !(chip->w857 || (chip->w897 && chip->w945));
    chip->w906 = !(chip->w858 || (chip->w898 && chip->w946));
    chip->w907 = !(chip->w858 || (chip->w899 && chip->w947));
    chip->w908 = !(chip->w859 || (chip->w900 && chip->w948));
    chip->w909 = !(chip->w859 || (chip->w901 && chip->w949));

    if (clk2)
    {
        chip->l538 = !chip->w902;
        chip->l539 = !chip->w903;
        chip->l540 = !chip->w904;
        chip->l541 = !chip->w905;
        chip->l542 = !chip->w906;
        chip->l543 = !chip->w907;
        chip->l544 = !chip->w908;
        chip->l545 = !chip->w909;
    }

    chip->w910 = chip->l538 && clk1;
    chip->w911 = chip->l539 && clk1;
    chip->w912 = chip->l540 && clk1;
    chip->w913 = chip->l541 && clk1;
    chip->w914 = chip->l542 && clk1;
    chip->w915 = chip->l543 && clk1;
    chip->w916 = chip->l544 && clk1;
    chip->w917 = chip->l545 && clk1;

    {
        int index = chip->w825;
        int clk = chip->w817;

        if (clk && chip->w910)
        {
            if (index < 40)
            {
                chip->linebuffer[index][0].priority = chip->w982;
                chip->linebuffer[index][0].pal = chip->w983;
                chip->linebuffer[index][0].index = chip->l523;
            }
        }
        if (clk && chip->w911)
        {
            if (index < 40)
            {
                chip->linebuffer[index][1].priority = chip->w979;
                chip->linebuffer[index][1].pal = chip->w980;
                chip->linebuffer[index][1].index = chip->l524;
            }
        }
        if (clk && chip->w912)
        {
            if (index < 40)
            {
                chip->linebuffer[index][2].priority = chip->w982;
                chip->linebuffer[index][2].pal = chip->w983;
                chip->linebuffer[index][2].index = chip->l525;
            }
        }
        if (clk && chip->w913)
        {
            if (index < 40)
            {
                chip->linebuffer[index][3].priority = chip->w979;
                chip->linebuffer[index][3].pal = chip->w980;
                chip->linebuffer[index][3].index = chip->l526;
            }
        }
        if (clk && chip->w914)
        {
            if (index < 40)
            {
                chip->linebuffer[index][4].priority = chip->w982;
                chip->linebuffer[index][4].pal = chip->w983;
                chip->linebuffer[index][4].index = chip->l527;
            }
        }
        if (clk && chip->w915)
        {
            if (index < 40)
            {
                chip->linebuffer[index][5].priority = chip->w979;
                chip->linebuffer[index][5].pal = chip->w980;
                chip->linebuffer[index][5].index = chip->l528;
            }
        }
        if (clk && chip->w916)
        {
            if (index < 40)
            {
                chip->linebuffer[index][6].priority = chip->w982;
                chip->linebuffer[index][6].pal = chip->w983;
                chip->linebuffer[index][6].index = chip->l529;
            }
        }
        if (clk && chip->w917)
        {
            if (index < 40)
            {
                chip->linebuffer[index][7].priority = chip->w979;
                chip->linebuffer[index][7].pal = chip->w980;
                chip->linebuffer[index][7].index = chip->l530;
            }
        }
        if (!clk)
        {
            for (i = 0; i < 8; i++)
            {
                chip->linebuffer_out[i].priority = 1;
                chip->linebuffer_out[i].pal = 3;
                chip->linebuffer_out[i].index = 15;
            }
        }
        else
        {
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
        }
    }

    chip->w918 = chip->linebuffer_out[0].index != 0;
    chip->w919 = chip->linebuffer_out[1].index != 0;
    chip->w920 = chip->linebuffer_out[2].index != 0;
    chip->w921 = chip->linebuffer_out[3].index != 0;
    chip->w922 = chip->linebuffer_out[4].index != 0;
    chip->w923 = chip->linebuffer_out[5].index != 0;
    chip->w924 = chip->linebuffer_out[6].index != 0;
    chip->w925 = chip->linebuffer_out[7].index != 0;

    chip->w934 = chip->l523 != 0;
    chip->w935 = chip->l524 != 0;
    chip->w936 = chip->l525 != 0;
    chip->w937 = chip->l526 != 0;
    chip->w938 = chip->l527 != 0;
    chip->w939 = chip->l528 != 0;
    chip->w940 = chip->l529 != 0;
    chip->w941 = chip->l530 != 0;

    chip->w926 = chip->w918 && chip->w894 && chip->w934;
    chip->w927 = chip->w919 && chip->w895 && chip->w935;
    chip->w928 = chip->w920 && chip->w896 && chip->w936;
    chip->w929 = chip->w921 && chip->w897 && chip->w937;
    chip->w930 = chip->w922 && chip->w898 && chip->w938;
    chip->w931 = chip->w923 && chip->w899 && chip->w939;
    chip->w932 = chip->w924 && chip->w900 && chip->w940;
    chip->w933 = chip->w925 && chip->w901 && chip->w941;

    chip->w950 = 0;
    chip->w942 = chip->w950 ? chip->w934 : !chip->w918;
    chip->w943 = chip->w950 ? chip->w935 : !chip->w919;
    chip->w944 = chip->w950 ? chip->w936 : !chip->w920;
    chip->w945 = chip->w950 ? chip->w937 : !chip->w921;
    chip->w946 = chip->w950 ? chip->w938 : !chip->w922;
    chip->w947 = chip->w950 ? chip->w939 : !chip->w923;
    chip->w948 = chip->w950 ? chip->w940 : !chip->w924;
    chip->w949 = chip->w950 ? chip->w941 : !chip->w925;

    chip->w951 = !chip->w820;

    if (chip->hclk1)
    {
        chip->l546[0] = chip->l546[1] >> 1;
        chip->l547[0] = chip->l547[1] >> 1;
        chip->l548[0] = chip->l548[1] >> 1;
        chip->l549[0] = chip->l549[1] >> 1;
        chip->l550[0] = chip->l550[1] >> 1;
        chip->l551[0] = chip->l551[1] >> 1;
        chip->l552[0] = chip->l552[1] >> 1;
        if (chip->w951)
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

    chip->w952 = (chip->reg_test_18 & 192) == 0;
    chip->w953 = (chip->reg_test_18 & 192) == 64;
    chip->w954 = (chip->reg_test_18 & 192) == 128;
    chip->w955 = (chip->reg_test_18 & 192) == 192;

    chip->w956 = 0;
    chip->w957 = 0;
    chip->w958 = 0;
    chip->w959 = 0;
    chip->w960 = 0;
    chip->w961 = 0;
    chip->w962 = 0;
    chip->w963 = 0;
    chip->w964 = 0;
    chip->w965 = 0;
    chip->w966 = 0;
    chip->w967 = 0;
    chip->w968 = 0;
    chip->w969 = 0;
    if (chip->w952)
    {
        if (chip->linebuffer_out[0].pal & 1)
            chip->w956 = 1;
        if (chip->linebuffer_out[1].pal & 1)
            chip->w963 = 1;
        if (chip->linebuffer_out[0].pal & 2)
            chip->w957 = 1;
        if (chip->linebuffer_out[1].pal & 2)
            chip->w964 = 1;
        if (chip->linebuffer_out[0].priority)
            chip->w958 = 1;
        if (chip->linebuffer_out[1].priority)
            chip->w965 = 1;
        if (chip->linebuffer_out[0].index & 1)
            chip->w959 = 1;
        if (chip->linebuffer_out[1].index & 1)
            chip->w966 = 1;
        if (chip->linebuffer_out[0].index & 2)
            chip->w960 = 1;
        if (chip->linebuffer_out[1].index & 2)
            chip->w967 = 1;
        if (chip->linebuffer_out[0].index & 4)
            chip->w961 = 1;
        if (chip->linebuffer_out[1].index & 4)
            chip->w968 = 1;
        if (chip->linebuffer_out[0].index & 8)
            chip->w962 = 1;
        if (chip->linebuffer_out[1].index & 8)
            chip->w969 = 1;
    }
    if (chip->w953)
    {
        if (chip->linebuffer_out[2].pal & 1)
            chip->w956 = 1;
        if (chip->linebuffer_out[3].pal & 1)
            chip->w963 = 1;
        if (chip->linebuffer_out[2].pal & 2)
            chip->w957 = 1;
        if (chip->linebuffer_out[3].pal & 2)
            chip->w964 = 1;
        if (chip->linebuffer_out[2].priority)
            chip->w958 = 1;
        if (chip->linebuffer_out[3].priority)
            chip->w965 = 1;
        if (chip->linebuffer_out[2].index & 1)
            chip->w959 = 1;
        if (chip->linebuffer_out[3].index & 1)
            chip->w966 = 1;
        if (chip->linebuffer_out[2].index & 2)
            chip->w960 = 1;
        if (chip->linebuffer_out[3].index & 2)
            chip->w967 = 1;
        if (chip->linebuffer_out[2].index & 4)
            chip->w961 = 1;
        if (chip->linebuffer_out[3].index & 4)
            chip->w968 = 1;
        if (chip->linebuffer_out[2].index & 8)
            chip->w962 = 1;
        if (chip->linebuffer_out[3].index & 8)
            chip->w969 = 1;
    }
    if (chip->w954)
    {
        if (chip->linebuffer_out[4].pal & 1)
            chip->w956 = 1;
        if (chip->linebuffer_out[5].pal & 1)
            chip->w963 = 1;
        if (chip->linebuffer_out[4].pal & 2)
            chip->w957 = 1;
        if (chip->linebuffer_out[5].pal & 2)
            chip->w964 = 1;
        if (chip->linebuffer_out[4].priority)
            chip->w958 = 1;
        if (chip->linebuffer_out[5].priority)
            chip->w965 = 1;
        if (chip->linebuffer_out[4].index & 1)
            chip->w959 = 1;
        if (chip->linebuffer_out[5].index & 1)
            chip->w966 = 1;
        if (chip->linebuffer_out[4].index & 2)
            chip->w960 = 1;
        if (chip->linebuffer_out[5].index & 2)
            chip->w967 = 1;
        if (chip->linebuffer_out[4].index & 4)
            chip->w961 = 1;
        if (chip->linebuffer_out[5].index & 4)
            chip->w968 = 1;
        if (chip->linebuffer_out[4].index & 8)
            chip->w962 = 1;
        if (chip->linebuffer_out[5].index & 8)
            chip->w969 = 1;
    }
    if (chip->w955)
    {
        if (chip->linebuffer_out[6].pal & 1)
            chip->w956 = 1;
        if (chip->linebuffer_out[7].pal & 1)
            chip->w963 = 1;
        if (chip->linebuffer_out[6].pal & 2)
            chip->w957 = 1;
        if (chip->linebuffer_out[7].pal & 2)
            chip->w964 = 1;
        if (chip->linebuffer_out[6].priority)
            chip->w958 = 1;
        if (chip->linebuffer_out[7].priority)
            chip->w965 = 1;
        if (chip->linebuffer_out[6].index & 1)
            chip->w959 = 1;
        if (chip->linebuffer_out[7].index & 1)
            chip->w966 = 1;
        if (chip->linebuffer_out[6].index & 2)
            chip->w960 = 1;
        if (chip->linebuffer_out[7].index & 2)
            chip->w967 = 1;
        if (chip->linebuffer_out[6].index & 4)
            chip->w961 = 1;
        if (chip->linebuffer_out[7].index & 4)
            chip->w968 = 1;
        if (chip->linebuffer_out[6].index & 8)
            chip->w962 = 1;
        if (chip->linebuffer_out[7].index & 8)
            chip->w969 = 1;
    }
    if (chip->w99)
    {
        chip->io_data &= ~0x7f7f;
        chip->io_data |= (!chip->w956) << 0;
        chip->io_data |= (!chip->w957) << 1;
        chip->io_data |= (!chip->w958) << 2;
        chip->io_data |= (!chip->w959) << 3;
        chip->io_data |= (!chip->w960) << 4;
        chip->io_data |= (!chip->w961) << 5;
        chip->io_data |= (!chip->w962) << 6;
        chip->io_data |= (!chip->w963) << 8;
        chip->io_data |= (!chip->w964) << 9;
        chip->io_data |= (!chip->w965) << 10;
        chip->io_data |= (!chip->w966) << 11;
        chip->io_data |= (!chip->w967) << 12;
        chip->io_data |= (!chip->w968) << 13;
        chip->io_data |= (!chip->w969) << 14;
    }

    chip->spr_pal = 0;
    if (chip->l546[1] & 1)
        chip->spr_pal |= 1;
    if (chip->l547[1] & 1)
        chip->spr_pal |= 2;
    chip->spr_priority = chip->l548[1] & 1;
    chip->spr_index = 0;
    if (chip->l549[1] & 1)
        chip->spr_index |= 1;
    if (chip->l550[1] & 1)
        chip->spr_index |= 2;
    if (chip->l551[1] & 1)
        chip->spr_index |= 4;
    if (chip->l552[1] & 1)
        chip->spr_index |= 8;

    if (chip->hclk1)
    {
        chip->l553[0] = chip->spr_pal;
        chip->l554[0] = chip->spr_priority;
        chip->l555[0] = chip->spr_index;
        chip->l556[0] = chip->w970;
        chip->l557[0] = chip->w971;
        chip->l558[0] = chip->w972;

        chip->l559[0] = chip->w974;
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

    chip->w974 = chip->reg_m5 ? chip->l556[1] : 1;
    chip->w973 = chip->l557[1] && chip->reg_m5;

    chip->w970 = chip->reg_m5 ? chip->l553[1] : chip->spr_pal;
    chip->w971 = chip->reg_m5 ? chip->l554[1] : chip->spr_priority;
    chip->w972 = chip->reg_m5 ? chip->l555[1] : chip->spr_index;

    if (chip->l603[1])
    {
        chip->color_pal = chip->l559[1];
        chip->color_priority = chip->l560[1];
        chip->color_index = chip->l561[1];
    }

    chip->w975 = chip->l556[1] == 3;
    chip->w976 = chip->l558[1] != 0;
    chip->w977 = chip->l558[1] == 14;
    chip->w978 = chip->l558[1] == 5;

    if (clk1)
    {
        chip->l562[1] = chip->l562[0];
        chip->l563 = !chip->l514[1];
    }
    if (clk2)
    {
        chip->l562[0] = chip->w877;
    }

    if (chip->reg_test0 & 8192)
    {
        chip->w979 = (chip->io_data & 1024) != 0;
        chip->w980 = (chip->io_data>> 8) & 3;
        chip->w982 = (chip->io_data & 4) != 0;
        chip->w983 = chip->io_data & 3;
    }
    else
    {
        chip->w983 = chip->w812;
        chip->w980 = chip->w812;
        chip->w982 = chip->w811;
        chip->w979 = chip->w811;
    }

    chip->w1020 = chip->w926 || chip->w927 || chip->w928 || chip->w929
        || chip->w930 || chip->w931 || chip->w932 || chip->w933;

    if (clk1)
    {
        chip->l600[1] = chip->l600[0];
    }
    if (clk2)
    {
        chip->l600[0] = chip->w1020;
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
        chip->l598 = chip->i_vram_rd;
    }

    if (chip->w998)
    {
        chip->l599 = chip->i_vram_ad;
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
        chip->l605[0] = chip->w1057;
        chip->l606[0] = chip->w1061;
        chip->l607[0] = chip->w1066;
        chip->l608[0] = chip->w1068;
        chip->l609[0] = chip->w1069;
        chip->l610[0] = chip->l609[1];
        chip->l611[0] = chip->w1070;
        chip->l612[0] = chip->l611[1];
        chip->l613[0] = chip->w1071;
        chip->l614[0] = chip->w1074;
        chip->l615[0] = !chip->i_spa;
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

    chip->w1022 = chip->l273[1] ? chip->w973 : !chip->l320[1];
    chip->w1023 = !chip->l273[1] && chip->w973 && chip->l320[1];
    chip->w1024 = chip->l273[1] && !chip->w973 && !chip->l320[1];
    chip->w1025 = !chip->l273[1] && !chip->w973 && chip->l320[1];
    chip->w1026 = chip->l273[1] && !chip->w973 && chip->l320[1];
    chip->w1027 = chip->w1029 && !chip->l273[1] && !chip->w973 && !chip->l320[1];
    chip->w1028 = chip->w1029 && !chip->l273[1] && chip->w973 && !chip->l320[1];
    chip->w1029 = chip->reg_ste && chip->reg_m5;
    chip->w1030 = chip->w1029 && chip->w975 && chip->w1065;
    chip->w1031 = chip->w1030 || !chip->w976;

    chip->w1032 = !chip->w646 && (chip->reg_m5 || chip->w976);
    chip->w1033 = !chip->reg_m5 || !chip->w648;

    chip->w1034 = (chip->reg_test0 & 384) == 128;
    chip->w1035 = (chip->reg_test0 & 384) == 256;
    chip->w1036 = (chip->reg_test0 & 384) == 384;
    chip->w1037 = (chip->reg_test0 & 384) == 0;

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

    chip->w1062 = (chip->reg_test0 & 64) == 0 && (chip->l618[1] & 4) != 0;

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

    if (chip->l606[1])
    {
        chip->color_index = chip->reg_col_index;
        chip->color_pal = chip->reg_m5 ? chip->reg_col_pal : 1;
        chip->color_priority = 0;
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

void VDP_ClockPSG(vdp_t *chip)
{
    int i;
    chip->psg_clk1 = chip->mclk_cpu_clk0;
    chip->psg_clk2 = !chip->mclk_cpu_clk0;

    if (chip->psg_clk1)
    {
        chip->l631[0] = chip->reset_comb;
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
    else if (chip->w111)
        chip->t43 = 0;

    chip->w1106 = !chip->t43 && !chip->w111;

    if (chip->psg_hclk1)
    {
        chip->l637[0] = chip->reset_comb;
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

    chip->w1112 = (chip->reg_test0 & 512) != 0 && (chip->reg_test0 & 0xc00) != 0x000;
    chip->w1113 = (chip->reg_test0 & 512) != 0 && (chip->reg_test0 & 0xc00) != 0x400;
    chip->w1114 = (chip->reg_test0 & 512) != 0 && (chip->reg_test0 & 0xc00) != 0x800;
    chip->w1115 = (chip->reg_test0 & 512) != 0 && (chip->reg_test0 & 0xc00) != 0xc00;

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

    if (chip->w111)
    {
        chip->l653 = chip->io_data & 255;
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
        chip->l659 |= chip->w1134 & 7;
    }

    chip->w1145 = (chip->reg_test0 & 512) == 0 && !chip->l645[1];
    chip->w1146 = (chip->reg_test0 & 512) == 0 && !chip->l646[1];
    chip->w1147 = (chip->reg_test0 & 512) == 0 && !chip->l647[1];
    chip->w1148 = (chip->reg_test0 & 512) == 0 && (chip->l640[1] & 0x4000) == 0;

    chip->w1149 = chip->w1145 ? 15 : chip->l655;
    chip->w1150 = chip->w1146 ? 15 : chip->l656;
    chip->w1151 = chip->w1147 ? 15 : chip->l657;
    chip->w1152 = chip->w1148 ? 15 : chip->l658;

    if (chip->w93)
    {
        chip->io_data = 0;
        chip->io_data |= (chip->w1149 ^ 15) << 12;
        chip->io_data |= (chip->w1150 ^ 15) << 8;
        chip->io_data |= (chip->w1151 ^ 15) << 4;
        chip->io_data |= (chip->w1152 ^ 15) << 0;
    }

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

