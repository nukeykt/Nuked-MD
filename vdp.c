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
        chip->dclk_prescaler_l1[0] = !(chip->dclk_prescaler_l1[1] || chip->tm_w1);
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
