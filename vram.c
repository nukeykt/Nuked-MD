#include <string.h>

#include "fc1004.h"
#include "vram.h"

extern fc1004_t ym;

vram_input_t vram_input, vram_input_o;

static int vram[64 * 1024];
static int vram_flat[64 * 1024];
static int vram_page[256];
static int vram_addr;
static int vram_dt;
static int vram_addr_ser;
static int vram_ser;
static int vram_addr_o;

void update_vram()
{
    int cas, wr, rd, owr, ord;
    int odata;
    int ocas;
    // o_vram_ras
    // o_vram_cas
    // o_vram_we0
    // o_vram_oe1
    // o_vram_sc
    // o_vram_se0
    vram_input.ras = ym.vdp.o_vram_ras;
    vram_input.cas = ym.vdp.o_vram_cas;
    vram_input.we0 = ym.vdp.o_vram_we0;
    vram_input.oe1 = ym.vdp.o_vram_oe1;
    vram_input.sc = ym.vdp.o_vram_sc;
    vram_input.se0 = ym.vdp.o_vram_se0;
    vram_input.ad = ym.vdp.o_vram_ad;
    if (!memcmp(&vram_input, &vram_input_o, sizeof(vram_input)))
        return;
    cas = !vram_input.ras && !vram_input.cas;
    wr = !vram_input.ras && !vram_input.cas && !vram_input.we0;
    rd = !vram_input.ras && !vram_input.cas && !vram_input.oe1 && !vram_dt;

    odata = vram_input.ad;
    if (vram_dt)
    {
        if (!vram_input_o.oe1 && vram_input.oe1)
        {
            int unscramble = 0;
            vram_addr_ser = vram_addr;
            unscramble |= vram_addr & 3;
            unscramble |= (vram_addr >> 6) & 0x3fc;
            unscramble |= (vram_addr & 0xfc) << 8;
            memcpy(vram_page, &vram[vram_addr & 0xff00], sizeof(vram_page));
            //vram_ser = vram_page[vram_addr_ser & 0xff];
            //if (ym.vdp.l106[1] > 320)
            //    printf("dt %x\n", unscramble);
        }
    }

    if (vram_input_o.ras && !vram_input.ras)
    {
        vram_dt = !vram_input.oe1;
        vram_addr &= ~0xff00;
        vram_addr |= (odata & 255) << 8;
    }
    ocas = !vram_input_o.ras && !vram_input_o.cas;
    if (!ocas && cas)
    {
        vram_addr &= ~0xff;
        vram_addr |= odata & 255;
    }
    owr = !vram_input_o.ras && !vram_input_o.cas && !vram_input_o.we0;
    if (!owr && wr)
    {
        int unscramble = 0;
        vram[vram_addr] = odata;
        unscramble |= vram_addr & 3;
        unscramble |= (vram_addr >> 6) & 0x3fc;
        unscramble |= (vram_addr & 0xfc) << 8;
        vram_flat[unscramble] = odata;
        if (unscramble == 0xc20 && odata != 0)
            unscramble += 0;
    }
    ord = !vram_input_o.ras && !vram_input_o.cas && !vram_input_o.oe1 && !vram_dt;
    if (!ord && rd)
    {
        ym.vdp.input.i_vram_ad = vram[vram_addr & 0xffff];
    }
    if (!vram_input_o.sc && vram_input.sc && !vram_input.se0)
    {
        int low, high;
        int unscramble = 0;
        unscramble |= vram_addr_ser & 3;
        unscramble |= (vram_addr_ser >> 6) & 0x3fc;
        unscramble |= (vram_addr_ser & 0xfc) << 8;
        vram_ser = vram_page[vram_addr_ser & 0xff];
        if (unscramble >= 0x3800 && (unscramble & 3) == 1)
        {
            vram_ser ^= 0;
        }
        low = vram_addr_ser & 255;
        high = vram_addr_ser & 0xff00;
        low++;
        low &= 255;
        vram_addr_ser = high | low;
    }
    if (!vram_input.se0)
    {
        ym.vdp.input.i_vram_sd = vram_ser;
    }

    vram_input_o = vram_input;
}
