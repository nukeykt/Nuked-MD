// YM7101 core
#include <stdio.h>
#include "vdp.h"

void VDP_ClockMCLK(vdp_t *chip, int mclk)
{
}

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

    chip->clk1 = !chip->dclk_prescaler_dff1.l2;
    chip->clk2 = !chip->dclk_prescaler_dff2.l2;
}

void VDP_ClockDCLK(vdp_t *chip, int clk1, int clk2)
{
    VDP_DCLKPrescale(chip, clk1, clk2);
}


vdp_t vdp;

int main()
{
    for (int i = 0; i < 100; i++)
    {
        VDP_ClockDCLK(&vdp, i & 1, !(i & 1));
        VDP_ClockDCLK(&vdp, 0, 0);
        printf("clk1 %i clk2 %i\n", vdp.clk1, vdp.clk2);
    }
}
