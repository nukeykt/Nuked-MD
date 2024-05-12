#include <stdio.h>
#include <string.h>
#define SDL_MAIN_HANDLED
#include "SDL.h"
#include "audio.h"
#include "fc1004.h"

extern fc1004_t ym;
extern uint64_t mcycles;

float psg_sum;
int fm_sum[2];
int fm_sample[2];
int psg_sample;
short snd_buf[16 * 1024];
int snd_buf_cnt = 0;

FILE* audio_out;

void Audio_Init(char* audioout_filename)
{
	audio_out = fopen(audioout_filename, "wb");
}

void Audio_Shutdown(void)
{
	fclose(audio_out);
}

void Audio_Update(void)
{
    const int psg_div = 30 * 16;
    const int fm_div = 14 * 144;

	fm_sum[0] += ym.fm.out_l;
    fm_sum[1] += ym.fm.out_r;
    if ((mcycles % fm_div) == 0)
    {
#define FM_DIVIDE 8
        fm_sample[0] = fm_sum[0] / FM_DIVIDE;
        fm_sample[1] = fm_sum[1] / FM_DIVIDE;
        fm_sum[0] = fm_sum[1] = 0;
    }

    psg_sum += ym.vdp.psg.psg_out * 16.f;
    if ((mcycles % psg_div) == 0)
    {
        int suml = 0, sumr = 0;
        psg_sample = (int)psg_sum;
        suml = fm_sample[0] + psg_sample;
        sumr = fm_sample[1] + psg_sample;
        if (suml < -32768)
            suml = -32768;
        else if (suml > 32767)
            suml = 32767;
        if (sumr < -32768)
            sumr = -32768;
        else if (sumr > 32767)
            sumr = 32767;
        snd_buf[snd_buf_cnt] = suml;
        snd_buf_cnt++;
        snd_buf[snd_buf_cnt] = sumr;
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
