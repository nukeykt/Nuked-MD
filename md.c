#include <stdio.h>
#include <string.h>
#include "common.h"
#include "68k.h"
#include "z80.h"
#include "fc1004.h"


#define ROM_SIZE (2 * 1024 * 1024)

m68k_t m68k;
z80_t z80;
fc1004_t ym;

unsigned char ram[32768][2];
unsigned short rom[ROM_SIZE];
unsigned char zram[8192];

inline unsigned short short_swap(unsigned short v)
{
    unsigned short b1 = v & 255;
    unsigned short b2 = (v >> 8) & 255;
    return (b1 << 8) | b2;
}

int load_tmss_rom(void)
{
    int i;
    FILE* tmss;

    tmss = fopen("tmss.bin", "rb");
    if (!tmss)
        return 1;

    fseek(tmss, 0, SEEK_END);
    size_t siz = ftell(tmss);
    rewind(tmss);
    if (siz < TMSS_SIZE * 2)
    {
        fclose(tmss);
        return 1;
    }

    fread(tmss_rom, 1, TMSS_SIZE * 2, tmss);
    for (i = 0; i < TMSS_SIZE; i++)
        tmss_rom[i] = short_swap(tmss_rom[i]);
    fclose(tmss);
    return 0;
}

int load_game_rom(void)
{
    int i;
    FILE* romfile;

    romfile = fopen("rom.bin", "rb");
    if (!romfile)
        return 1;

    fseek(romfile, 0, SEEK_END);
    size_t siz = ftell(romfile);
    rewind(romfile);

    if (siz > ROM_SIZE * 2)
        siz = ROM_SIZE * 2;

    memset(rom, 0, sizeof(rom));
    fread(rom, 1, siz, romfile);
    for (i = 0; i < ROM_SIZE; i++)
        rom[i] = short_swap(rom[i]);
    fclose(romfile);
    return 0;
}

void init_chips(void)
{
    memset(&m68k, 0, sizeof(m68k));
    memset(&z80, 0, sizeof(z80));
    memset(&ym, 0, sizeof(ym));
}

uint64_t mcycles;

static int vram[64 * 1024];
static int vram_flat[64 * 1024];
static int vram_addr;
static int vram_dt;
static int vram_addr_ser;
static int vram_ser;

typedef struct {
    int ras;
    int cas;
    int we0;
    int oe1;
    int sc;
    int se0;
    int ad;
} vram_input_t;


vram_input_t vram_input, vram_input_o;

void update_vram(void)
{
    int cas, wr, rd, owr, ord;
    int odata;
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
            unscramble |= vram_addr & 1;
            unscramble |= (vram_addr >> 7) & 0x1fe;
            unscramble |= (vram_addr & 0xfe) << 8;
            vram_ser = vram[vram_addr_ser & 0xffff];
        }
    }

    if (vram_input_o.ras && !vram_input.ras)
    {
        vram_dt = !vram_input.oe1;
        vram_addr &= ~0xff00;
        vram_addr |= (odata & 255) << 8;
    }
    if (!vram_input_o.cas && cas)
    {
        vram_addr &= ~0xff;
        vram_addr |= odata & 255;
    }
    owr = !vram_input_o.ras && !vram_input_o.cas && !vram_input_o.we0;
    if (!owr && wr)
    {
        vram[vram_addr] = odata;
        int unscramble = 0;
        unscramble |= vram_addr & 1;
        unscramble |= (vram_addr >> 7) & 0x1fe;
        unscramble |= (vram_addr & 0xfe) << 8;
        vram_flat[unscramble] = odata;
    }
    ord = !vram_input_o.ras && !vram_input_o.cas && !vram_input_o.oe1 && !vram_dt;
    if (!ord && rd)
    {
        ym.vdp.input.i_vram_ad = vram[vram_addr & 0xffff];
    }
    if (vram_input_o.sc && !vram_input.sc && vram_dt)
    {
        int low, high;
        int unscramble = 0;
        unscramble |= vram_addr_ser & 1;
        unscramble |= (vram_addr_ser >> 7) & 0x1fe;
        unscramble |= (vram_addr_ser & 0xfe) << 8;
        vram_ser = vram[vram_addr_ser & 0xffff];
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
}

int vclk;
int vaddress;
int vdata;
int zaddress;
int zdata;
int dtack;
int hsync;
int m3;
int ntsc;
int cart;
int wres;
int disk;
int port_a;
int port_b;
int port_c;
int jap;
int as;
int lds;
int uds;
int reset;
int halt;
int rw;
int iorq;
int mreq;
int wr;
int rd;

int main(int argc, char *argv[])
{
    int i;
    if (load_tmss_rom())
        return 1;
    if (load_game_rom())
        return 1;


    memset(&ym, 0, sizeof(ym));
    memset(&m68k, 0, sizeof(m68k));
    memset(&z80, 0, sizeof(z80));

    FC1004_Init(&ym);

    m3 = 1;
    ntsc = 0;
    cart = 0;
    wres = 1;
    disk = 1;
    jap = 1;

    ym.i_m3 = m3;
    ym.i_ntsc = ntsc;
    ym.i_cart = cart;
    ym.arb.input.ext_wres = wres;
    ym.i_disk = disk;
    ym.i_test0 = 0;
    ym.tmss.input.ext_test = 7;
    ym.i_jap = jap;
    ym.i_sel1 = 0;

    port_a = 127;
    port_a = 127;
    port_a = 127;

    while (1)
    {
        for (i = 0; i < 2; i++)
        {
            if (ym.o_vclk != state_z)
                vclk = ym.o_vclk;
            dtack = 1;
            if (ym.o_dtack != state_z)
                dtack = ym.o_dtack;
            hsync = 1;
            if (ym.o_hsync != state_z)
                hsync = ym.o_hsync;
            as = 1;
            if (ym.o_as != state_z)
                as = ym.o_as;
            if (m68k.o_as != state_z)
                as = m68k.o_as;
            if (ym.o_uds != state_z)
                uds = ym.o_uds;
            if (m68k.o_uds != state_z)
                uds = m68k.o_uds;
            if (ym.o_lds != state_z)
                lds = ym.o_lds;
            if (m68k.o_lds != state_z)
                lds = m68k.o_lds;
            reset = 1;
            if (ym.o_reset != state_z)
                reset = ym.o_reset;
            if (m68k.o_reset != state_z)
                reset = m68k.o_reset;
            halt = 1;
            if (ym.o_halt != state_z)
                halt = ym.o_halt;
            if (m68k.o_halt != state_z)
                halt = m68k.o_halt;
            if (ym.o_rw != state_z)
                rw = ym.o_rw;
            if (m68k.o_rw != state_z)
                rw = m68k.o_rw;
            if (z80.o_iorq != state_z)
                iorq = !z80.o_iorq;
            if (z80.o_mreq != state_z)
                mreq = !z80.o_mreq;
            if (ym.o_mreq != state_z)
                mreq = ym.o_mreq;
            if (ym.o_zwr != state_z)
                wr = ym.o_zwr;
            if (z80.o_wr != state_z)
                wr = !z80.o_wr;
            if (z80.o_rd != state_z)
                rd = !z80.o_rd;
            
            // 68k
            m68k.input.i_vpa = ym.arb.ext_vpa;
            m68k.input.i_br = ym.o_br == state_z ? 1 : 0;
            m68k.input.i_bgack = ym.o_bgack == state_z ? 1 : 0;
            m68k.input.i_reset = reset;
            m68k.input.i_halt = halt;
            m68k.input.i_ipl0 = 1;
            m68k.input.i_ipl1 = ym.vdp.o_ipl1 == state_z ? 1 : 0;
            m68k.input.i_ipl2 = ym.vdp.o_ipl2 == state_z ? 1 : 0;
            m68k.input.i_dtack = dtack;
            m68k.input.i_berr = 1;
            m68k.input.i_data = vdata;
            if (!vclk)
                M68K_Clock2(&m68k, 1, 0);
            else
                M68K_Clock2(&m68k, 0, 1);

            // z80
            z80.input.ext_data_i = zdata;
            z80.input.i_int = ym.vdp.o_zint != state_z ? 0 : 1;
            z80.input.i_nmi = !ym.arb.ext_nmi;
            z80.input.i_wait = ym.o_wait == state_z ? 1 : !ym.o_wait;
            z80.input.i_reset = ym.o_zres == state_z ? 1 : !ym.o_zres;
            z80.input.i_busrq = ym.o_zbr == state_z ? 0 : !ym.o_zbr;
            Z80_Clock2(&z80, ym.o_zclk == state_z ? 0 : ym.o_zclk);

            // fc1004
            ym.vdp.input.i_csync = ym.vdp.o_csync == state_z ? 1 : 0;
            ym.i_hsync = hsync;
            ym.arb.input.ext_fc0 = m68k.o_fc0;
            ym.arb.input.ext_fc1 = m68k.o_fc1;
            ym.arb.input.ext_zbak = !z80.o_busak;
            ym.arb.input.ext_wait_in = ym.o_wait == state_z ? 1 : 0;
            ym.ioc.input.port_a = port_a;
            ym.ioc.input.port_b = port_b;
            ym.ioc.input.port_c = port_c;
            ym.i_zaddress = zaddress;
            ym.i_zdata = zdata;
            ym.i_sres = !(mcycles < 10000);
            ym.i_vclk = vclk;
            if (ym.o_zclk != state_z)
                ym.i_zclk = ym.o_zclk;

            if (ym.o_edclk != state_z)
                ym.i_edclk = ym.o_edclk;

            ym.i_vdata = vdata;
            ym.i_vaddress = vaddress;
            ym.i_bgack = ym.o_bgack == state_z ? 1 : 0;
            ym.i_bg = m68k.o_bg;
            ym.i_as = as;
            ym.i_uds = uds;
            ym.i_lds = lds;
            ym.i_rw = rw;
            ym.i_iorq = iorq;
            ym.arb.input.ext_mreq_in = mreq;
            ym.i_dtack = dtack;
            ym.i_zres = ym.o_zres == state_z ? 1 : 0;
            ym.i_zwr = wr;
            ym.i_zrd = rd;

            FC1004_Clock(&ym, mcycles & 1, mcycles);

            // VRAM
            update_vram();

            // busses

            zaddress |= 1;

            zaddress &= ym.o_zaddress_dir;
            zaddress |= ym.o_zaddress & (~ym.o_zaddress_dir);

            zdata &= ym.o_zdata_dir;
            zdata |= ym.o_zdata & (~ym.o_zdata_dir);

            vaddress &= ym.o_vaddress_dir;
            vaddress |= ym.o_vaddress & (~ym.o_vaddress_dir);

            vdata &= ym.o_vdata_dir;
            vdata |= ym.o_vdata & (~ym.o_vdata_dir);

            if (!z80.o_addr_high)
                zaddress = z80.o_addr;
            if (!z80.ext_data_o_high)
                zdata = z80.ext_data_o;

            if (!m68k.o_address_z)
                vaddress = m68k.o_address;
            if (!m68k.o_data_z)
                vdata = m68k.o_data;

            // 68k ram
            if (!ym.vdp.o_ras0)
            {
                if (!ym.arb.ext_noe)
                {
                    vdata &= ~0xff;
                    vdata |= ram[vaddress & 0x7fff][0];
                }
                if (!ym.o_lwr)
                {
                    ram[vaddress & 0x7fff][0] = vdata & 0xff;
                }
                if (!ym.arb.ext_eoe)
                {
                    vdata &= ~0xff00;
                    vdata |= ram[vaddress & 0x7fff][1] << 8;
                }
                if (!ym.vdp.o_uwr)
                {
                    ram[vaddress & 0x7fff][1] = (vdata >> 8) & 0xff;
                }
            }

            // z80 ram
            if (!ym.arb.ext_zram)
            {
                if (!rd)
                {
                    zdata = zram[zaddress & 0x1fff];
                }
                if (!wr)
                {
                    zram[zaddress & 0x1fff] = zdata;
                }
            }

            // cart
            if (!ym.o_ce0)
            {
                if (!ym.o_cas0)
                {
                    vdata = rom[vaddress & 0x3fffff];
                }
            }
        }
        mcycles++;
    }

    FC1004_Destroy(&ym);

    return 0;
}
