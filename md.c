#include <stdio.h>
#include <string.h>
#include <string.h>
#define SDL_MAIN_HANDLED
#include "SDL.h"
#include "common.h"
#include "68k.h"
#include "z80.h"
#include "fc1004.h"


#define ROM_SIZE (2 * 1024 * 1024)

m68k_t m68k;
z80_t z80;
fc1004_t ym;

unsigned char ram[0x10000];
unsigned short rom[ROM_SIZE];
unsigned char zram[8192];

static inline unsigned short short_swap(unsigned short v)
{
    unsigned short b1 = v & 255;
    unsigned short b2 = (v >> 8) & 255;
    return (b1 << 8) | b2;
}

int load_dummy_tmss()
{
    static const short data[] = {
        0x00ff,0x000c,
        0x0000,0x0008,
        0x41f9,0x00a1,0x4101,
        0x2f3c,0x2058,0x4ed0,
        0x2f3c,0x91c8,0x2e58,
        0x2f3c,0x08d0,0x0000,
        0x4ed7
    };
    printf("loading dummy TMSS ROM\n");
    memcpy(tmss_rom, data, sizeof(data));
}

int load_tmss_rom(char *filename)
{
    int i;
    FILE* tmss;

    tmss = fopen(filename, "rb");
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

int load_game_rom(char *filename)
{
    int i;
    FILE* romfile;

    romfile = fopen(filename, "rb");
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
static int vram_page[256];
static int vram_addr;
static int vram_dt;
static int vram_addr_ser;
static int vram_ser;
static int vram_addr_o;

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

SDL_Window* vid_window;
SDL_Renderer *vid_renderer;
SDL_Texture *vid_texture;

#define VID_WIDTH 400
#define VID_HEIGHT 300

void Video_Init(void)
{
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) < 0)
        return;

    vid_window = SDL_CreateWindow("Nuked MD", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
        VID_WIDTH * 2, VID_HEIGHT * 2, SDL_WINDOW_SHOWN);
    if (!vid_window)
        return;

    vid_renderer = SDL_CreateRenderer(vid_window, -1, 0);
    if (!vid_renderer)
        return;

    vid_texture = SDL_CreateTexture(vid_renderer, SDL_PIXELFORMAT_BGR888, SDL_TEXTUREACCESS_STREAMING,
        VID_WIDTH, VID_HEIGHT);

    if (!vid_texture)
        return;
}

uint32_t vid_workbuffer[VID_HEIGHT][VID_WIDTH];
uint32_t vid_currentbuffer[VID_HEIGHT][VID_WIDTH];
SDL_mutex *vid_mutex;

int Video_Blit(void)
{
    SDL_LockMutex(vid_mutex);
    SDL_UpdateTexture(vid_texture, NULL, vid_currentbuffer, VID_WIDTH * 4);
    SDL_UnlockMutex(vid_mutex);
    SDL_RenderCopy(vid_renderer, vid_texture, NULL, NULL);
    SDL_RenderPresent(vid_renderer);

    SDL_Event sdl_event;
    while (SDL_PollEvent(&sdl_event))
    {
        switch (sdl_event.type)
        {
        case SDL_QUIT:
            return 0;
        default:
            break;
        }
    }
    return 1;
}

void Video_PlotVDP(void)
{
    static int ohsync;
    static int ovsync;
    static int plot_x;
    static int plot_y;

    if (ohsync && ym.vdp.o_hsync == 0)
    {
        plot_x = -75;
        if (ym.vdp.reg_rs0 == 0)
            plot_x = -15;
        plot_y++;
    }
    if (ovsync && ym.vdp.o_vsync == 0)
    {
        plot_y = 0;
        SDL_LockMutex(vid_mutex);
        memcpy(vid_currentbuffer, vid_workbuffer, sizeof(vid_workbuffer));
        SDL_UnlockMutex(vid_mutex);
    }

    if (plot_x >= 0 && plot_x < VID_WIDTH * 2 && plot_y >= 0 && plot_y < VID_HEIGHT)
    {
        uint32_t abgr = 0;

        abgr |= ym.vdp.rgb_out[0] << 0;
        abgr |= ym.vdp.rgb_out[1] << 8;
        abgr |= ym.vdp.rgb_out[2] << 16;

        vid_workbuffer[plot_y][plot_x / 2] = abgr;
    }

    plot_x++;


    ohsync = ym.vdp.o_hsync != 0;
    ovsync = ym.vdp.o_vsync != 0;
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


int ovclk;
int odclk;

float psg_sum;
int fm_sum[2];
int fm_sample[2];
int psg_sample;
short snd_buf[16 * 1024];
int snd_buf_cnt = 0;

FILE *audio_out;

int work_thread_run;

int SDLCALL work_thread(void *data)
{
    int i;
    while (work_thread_run)
    {
        const int frame_div = 1789772;
        const int psg_div = 30 * 16;
        const int fm_div = 14 * 144;

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
            iorq = 1;
            if (z80.o_iorq != state_z)
                iorq = !z80.o_iorq;
            mreq = 1;
            if (z80.o_mreq != state_z)
                mreq = !z80.o_mreq;
            if (ym.o_mreq != state_z)
                mreq = ym.o_mreq;
            if (ym.o_zwr != state_z)
                wr = ym.o_zwr;
            if (z80.o_wr != state_z)
                wr = !z80.o_wr;
            if (ym.o_zrd != state_z)
                rd = ym.o_zrd;
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
            m68k.input.i_data = vdata & 0xffff;
            if (!vclk)
                M68K_Clock2(&m68k, 1, 0);
            else
                M68K_Clock2(&m68k, 0, 1);
#if 0
            if (ovclk != vclk && m68k.input.i_reset)
                if (!m68k.o_rw && !m68k.o_as &&
                    ((m68k.o_address * 2) & 0xfffff8) == 0xc00000
                    && (!m68k.o_uds || !m68k.o_lds))
            {
                printf("cyc %i ", mcycles);
                //printf("c1: %i c2 %i c3 %i c4 %i c5 %i w286 %i ", m68k.c1, m68k.c2, m68k.c3, m68k.c4, m68k.c5, m68k.w286);
                //printf("code %x ", (m68k.codebus2 & 0x3ff) ^ 0x3ff);
                //printf("ucd %i ", m68k.dbg_ucode_last);
                //printf("ir %x ", m68k.w530);
                printf("hr %i%i ", m68k.input.i_reset, m68k.input.i_halt);
                printf("dtack %i ", m68k.input.i_dtack);
                //printf("w147 %x ", m68k.w147);
                if (!m68k.o_address_z)
                {
                    printf("address %x ", (m68k.o_address & 0x7fffff) * 2);
                }

#if 0
                printf("w948 %x ", m68k.w948);
                printf("w880 %i ", m68k.w880);
                printf("w881 %i ", m68k.w881);
                printf("io %x ", m68k.data_io);
                printf("input %x ", m68k.input.i_data);
#endif
                printf("cdt %i ", ym.arb.w72);
                printf("dff33 %i ", ym.arb.dff33.q);
                printf("w43 %i ", ym.arb.w43);
                printf("data %x ", m68k.o_data);
                printf("\n");
                ovclk = vclk;
            }
#endif
            if (mcycles == 1430894)
                mcycles += 0;

            if (mcycles == 1422069)
                mcycles += 0;

            // z80
            z80.input.ext_data_i = zdata;
            z80.input.i_int = ym.vdp.o_zint == state_z ? 0 : 1;
            z80.input.i_nmi = !ym.arb.ext_nmi;
            z80.input.i_wait = ym.o_wait == state_z ? 0 : !ym.o_wait;
            z80.input.i_reset = ym.o_zres == state_z ? 0 : !ym.o_zres;
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
            ym.i_zres = ym.o_zres == state_z ? 1 : ym.o_zres;
            ym.i_zwr = wr;
            ym.i_zrd = rd;
            ym.i_m1 = !z80.o_m1;
            if (ym.o_cas0 != state_z)
                ym.i_cas0 = ym.o_cas0;

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
                int laddress = vaddress & 0x5fff;
                if (ym.arb.ext_ia14)
                    laddress |= 0x2000;
                laddress ^= 0x2000;
                if (!ym.arb.ext_noe)
                {
                    vdata &= ~0xff;
                    vdata |= ram[laddress*2+1];
                }
                //if (!ym.o_lwr)
                //{
                //    ram[laddress*2+1] = vdata & 0xff;
                //}
                if (!ym.arb.ext_eoe)
                {
                    vdata &= ~0xff00;
                    vdata |= ram[(vaddress & 0x7fff)*2] << 8;
                }
                //if (!ym.vdp.o_uwr)
                //{
                //    ram[(vaddress & 0x7fff)*2] = (vdata >> 8) & 0xff;
                //}
            }

            // z80 ram
            if (!ym.arb.ext_zram)
            {
                if (!rd)
                {
                    zdata = zram[zaddress & 0x1fff];
                    //if (zaddress == 0x36)
                    //    printf("read vdata %x zdata %x\n", vdata, zdata);
                }
                //if (!wr)
                //{
                //    zram[zaddress & 0x1fff] = zdata;
                //}
            }

            // cart
            if (!ym.o_ce0)
            {
                if (!ym.o_cas0)
                {
                    vdata = rom[vaddress & 0x1fffff];
                }
            }
        }

#if 0
        if (m68k.o_rw == state_z)
        {
            if ((uds == 0 || lds == 0) && as == 0)
            {
                if (mcycles == 4705622)
                    mcycles += 0;
                printf("cycles %i vdp/z80 acc ulrw %i%i%i va %x vd %x za %x zd %x zrw %i%i\n",
                    (int)mcycles, uds, lds, rw, vaddress*2, vdata, zaddress, zdata, z80.o_rd, z80.o_wr);
                printf("z80: clk %i w2 %i wait %i\n", z80.input.clk, z80.w2, z80.input.i_wait);
            }
        }

        {
            static int bit;
            static int zbank;
            static int st;
            if (!ym.arb.w150)
            {
                bit = zdata & 1;
                printf("cycles %i bank upd: %i\n", (int)mcycles, bit);
                st = 1;
            }
            else
            {
                if (st)
                {
                    zbank = zbank >> 1;
                    zbank |= bit << 23;
                    zbank &= 0xff8000;
                    printf("zbank %x\n", zbank);
                    st = 0;
                }
            }
        }
#endif

        // 68k ram
        if (!ym.vdp.o_ras0)
        {
            int laddress = vaddress & 0x5fff;
            if (ym.arb.ext_ia14)
                laddress |= 0x2000;
            laddress ^= 0x2000;
            if (laddress * 2 == 0xc008)
                laddress += 0;
            if (!ym.o_lwr)
            {
                ram[laddress * 2 + 1] = vdata & 0xff;
            }
            if (!ym.vdp.o_uwr)
            {
                ram[(vaddress & 0x7fff) * 2] = (vdata >> 8) & 0xff;
            }
        }

        // z80 ram
        if (!ym.arb.ext_zram)
        {
            if (!wr)
            {
                zram[zaddress & 0x1fff] = zdata;
            }
        }

        {
            fm_sum[0] += ym.fm.out_l;
            fm_sum[1] += ym.fm.out_r;
            if ((mcycles % fm_div) == 0)
            {
                fm_sample[0] = fm_sum[0] / 48;
                fm_sample[1] = fm_sum[1] / 48;
                fm_sum[0] = fm_sum[1] = 0;
            }

            psg_sum += ym.vdp.psg.psg_out * 4.f;
            if ((mcycles % psg_div) == 0)
            {
                psg_sample = (int)psg_sum;
                snd_buf[snd_buf_cnt] = fm_sample[0] + psg_sample;
                snd_buf_cnt++;
                snd_buf[snd_buf_cnt] = fm_sample[1] + psg_sample;
                snd_buf_cnt++;
                if (snd_buf_cnt == 16 * 1024)
                {
                    snd_buf_cnt = 0;
                    if (audio_out)
                    {
                        fwrite(snd_buf, 1, sizeof(snd_buf), audio_out);
                        fflush(audio_out);
                    }
                }
                psg_sum = 0;
            }
        }

        if (ym.vdp.input.i_clk1 && !odclk)
            Video_PlotVDP();

        odclk = ym.vdp.input.i_clk1;

        if ((mcycles % frame_div) == 0)
        {
            printf("frame %lld\n", mcycles / frame_div);
        }
        mcycles++;
    }
    return 0;
}

int main(int argc, char *argv[])
{
    int i;
    SDL_Thread *thread;
    char *tmss_filename = "tmss.bin";
    char *rom_filename = "rom.bin";
    char *audioout_filename = "audioout.bin";
    for (i = 1; i < argc && *argv[i] == '-'; i++)
    {
        switch(argv[i][1])
        {
            case 'a':
                if (i + 1 < argc)
                {
                    audioout_filename = argv[i + 1];
                    i++;
                }
                else
                {
                    printf("missing argument for -a\n");
                    exit(EXIT_FAILURE);
                }
                break;
            case 't':
                if (i + 1 < argc)
                {
                    tmss_filename = argv[i + 1];
                    i++;
                }
                else
                {
                    printf("missing argument for -t\n");
                    exit(EXIT_FAILURE);
                }
                break;
            default:
                printf("usage: %s [-t tmss.bin] [rom.bin]\n", argv[0]);
                exit(EXIT_FAILURE);
                break;
        }
    }
    argv += i;
    if (*argv)
        rom_filename = *argv;
    if (load_tmss_rom(tmss_filename))
    {
        printf("%s not found\n", tmss_filename);
        load_dummy_tmss();
    }
    if (load_game_rom(rom_filename))
    {
        printf("%s not found\n", rom_filename);
        exit(EXIT_FAILURE);
    }

    Video_Init();

    memset(&ym, 0, sizeof(ym));
    memset(&m68k, 0, sizeof(m68k));
    memset(&z80, 0, sizeof(z80));

    FC1004_Init(&ym);

    m3 = 1;
    ntsc = 1;
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

    audio_out = fopen(audioout_filename, "wb");

    vid_mutex = SDL_CreateMutex();

    work_thread_run = 1;
    thread = SDL_CreateThread(work_thread, "work thread", 0);

    if (!thread)
    {
        fclose(audio_out);
        return EXIT_FAILURE;
    }

    do
    {
        SDL_Delay(30);
    }
    while (Video_Blit());

    work_thread_run = 0;
    SDL_WaitThread(thread, 0);

    fclose(audio_out);
    FC1004_Destroy(&ym);

    SDL_Quit();

    return 0;
}
