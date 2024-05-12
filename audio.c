#include <stdio.h>
#include <string.h>
#define SDL_MAIN_HANDLED
#include "SDL.h"
#include "audio.h"
#include "fc1004.h"

// Since the simulation is now very slow, the following strategy is used to reproduce the sound:
// Collect one second of sound. As it is recorded, play it back via sound driver and clear the receive buffer.

extern fc1004_t ym;
extern uint64_t mcycles;

// FM/PSG Mixer internals
float psg_sum;
int fm_sum[2];
int fm_sample[2];
int psg_sample;

FILE* audio_out;

int DecimateEach;
int DecimateCounter;
int OutputSampleRate;		// Frequency for playback on a real device (sound card)

int16_t* SampleBuf;         // Buffer for audio playback at the OutputSampleRate frequency
int SampleBuf_Ptr;          // in stereo-samples
int SampleBuf_Size;         // in stereo-samples

int16_t DumpBuf[16 * 1024];         // Buffer for dump to file on FM/PSG mixer frequency
int DumpBufCnt = 0;             // in shorts
int DumpBufSize = sizeof(DumpBuf) / sizeof(int16_t);	// in shorts

int Dma = 0;

SDL_AudioSpec spec;
SDL_AudioSpec spec_obtainted;

SDL_AudioDeviceID dev_id;

/// <summary>
/// If you change the sampling frequency of the sound source or output frequency, you must recalculate the decimation factor.
/// </summary>
static void Redecimate(int ntsc)
{
	int SampleRate = ntsc ? 223722 : 221681;
	DecimateEach = 4;
	OutputSampleRate = SampleRate / 4;
	printf("Audio sample rate: %d, SoundCard sample rate: %d, decimate factor: %d\n", SampleRate, OutputSampleRate, DecimateEach);
	DecimateCounter = 0;
}

static void SoundOutput_Mixer(void* thisptr, Uint8* stream, int len)
{
	if (Dma) {
		SDL_MixAudioFormat(stream, (const Uint8*)SampleBuf, AUDIO_S16SYS, len, SDL_MIX_MAXVOLUME);
		Dma = 0;
	}
	else {
		memset(SampleBuf, 0, SampleBuf_Size * sizeof(int16_t) * 2);
		SDL_PauseAudioDevice(dev_id, 1);
	}
}

void Audio_Init(char* audioout_filename, int ntsc)
{
	audio_out = fopen(audioout_filename, "wb");

	Redecimate(ntsc);

	SampleBuf_Size = OutputSampleRate;
	SampleBuf = malloc (SampleBuf_Size * sizeof(int16_t) * 2);
	memset(SampleBuf, 0, SampleBuf_Size * sizeof(int16_t) * 2);
	SampleBuf_Ptr = 0;

	if (SDL_InitSubSystem(SDL_INIT_AUDIO) < 0) {
		printf("SDL audio could not initialize! SDL_Error: %s\n", SDL_GetError());
		return;
	}

	spec.freq = OutputSampleRate;
	spec.format = AUDIO_S16;
	spec.channels = 2;
	spec.samples = SampleBuf_Size;
	spec.callback = SoundOutput_Mixer;
	spec.userdata = 0;

	dev_id = SDL_OpenAudioDevice(NULL, 0, &spec, &spec_obtainted, 0);
	SDL_PauseAudioDevice(dev_id, 1);
}

void Audio_Shutdown(void)
{
	fclose(audio_out);

	SDL_CloseAudioDevice(dev_id);
	SDL_QuitSubSystem(SDL_INIT_AUDIO);
	free (SampleBuf);
}

static void Playback()
{
	printf("Play 1 second\n");
	Dma = 1;
	SDL_PauseAudioDevice(dev_id, 0);
	SampleBuf_Ptr = 0;
}

static void FeedSampleForPlayback(int l, int r)
{
	if (DecimateCounter >= DecimateEach)
	{
		SampleBuf[2 * SampleBuf_Ptr] = l;
		SampleBuf[2 * SampleBuf_Ptr + 1] = r;
		SampleBuf_Ptr++;
		DecimateCounter = 0;

		if (SampleBuf_Ptr >= SampleBuf_Size)
		{
			Playback();
		}
	}
	else
	{
		DecimateCounter++;
	}
}

static void FeedSampleForDump(int suml, int sumr)
{
	DumpBuf[DumpBufCnt] = suml;
	DumpBufCnt++;
	DumpBuf[DumpBufCnt] = sumr;
	DumpBufCnt++;
	if (DumpBufCnt >= DumpBufSize)
	{
		DumpBufCnt = 0;
		if (audio_out)
		{
			fwrite(DumpBuf, 1, sizeof(DumpBuf), audio_out);
			fflush(audio_out);
		}
	}
}

void Audio_Update(void)
{
	// Divisors are multiples of each other and multiples regardless of NTSC/PAL
	const int psg_div = 30 * 16;
	const int fm_div = 14 * 144;

	// FM/PSG Mixer

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
		FeedSampleForPlayback(suml, sumr);
		FeedSampleForDump(suml, sumr);
		psg_sum = 0;
	}
}
