/** @file audio.c @brief SDL audio output: FM/PSG mixing, decimation for sound-card playback and raw audio dumping. */

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
/** Accumulator for PSG output (scaled by 16) between PSG sample updates. */
float psg_sum;
/** Left/right accumulators for FM output between FM sample updates. */
int fm_sum[2];
/** Latest left/right FM samples produced by the FM divide stage. */
int fm_sample[2];
/** Latest PSG sample produced by the PSG divide stage. */
int psg_sample;

/** File handle for the raw audio dump file (16-bit stereo little-endian samples at the FM/PSG mixer frequency). */
FILE* audio_out;

/** Decimation factor: one output sample is taken every DecimateEach mixer samples. */
int DecimateEach;
/** Counts mixer samples since the last decimated output sample. */
int DecimateCounter;
/** Frequency for playback on a real device (sound card). */
int OutputSampleRate;		// Frequency for playback on a real device (sound card)

/** Buffer for audio playback at the OutputSampleRate frequency. */
int16_t* SampleBuf;         // Buffer for audio playback at the OutputSampleRate frequency
/** Write index into SampleBuf, in stereo-samples. */
int SampleBuf_Ptr;          // in stereo-samples
/** Capacity of SampleBuf, in stereo-samples. */
int SampleBuf_Size;         // in stereo-samples

/** Buffer for the raw dump at the FM/PSG mixer frequency. */
int16_t DumpBuf[16 * 1024];         // Buffer for dump to file on FM/PSG mixer frequency
/** Write index into DumpBuf, in shorts. */
int DumpBufCnt = 0;             // in shorts
/** Capacity of DumpBuf, in shorts. */
int DumpBufSize = sizeof(DumpBuf) / sizeof(int16_t);	// in shorts

/** Flag: when set, the SDL audio callback mixes SampleBuf into the output stream. */
int Dma = 0;

/** Requested SDL audio specification (see spec_obtainted for the one actually obtained). */
SDL_AudioSpec spec;
/** SDL audio specification actually obtained from the audio device. */
SDL_AudioSpec spec_obtainted;

/** SDL audio device ID used for playback. */
SDL_AudioDeviceID dev_id;

/**
 * @brief Recalculates the decimation factor and output sample rate for a video mode.
 *
 * If you change the sampling frequency of the sound source or output frequency, you must recalculate the decimation factor.
 *
 * @param ntsc Nonzero for NTSC (223722 Hz source), zero for PAL (221681 Hz source).
 */
static void Redecimate(int ntsc)
{
	int SampleRate = ntsc ? 223722 : 221681;
	DecimateEach = 4;
	OutputSampleRate = SampleRate / 4;
	printf("Audio sample rate: %d, SoundCard sample rate: %d, decimate factor: %d\n", SampleRate, OutputSampleRate, DecimateEach);
	DecimateCounter = 0;
}

/**
 * @brief SDL audio callback: fills the output stream with the recorded audio.
 *
 * When the Dma flag is set the recorded SampleBuf is mixed into @p stream at
 * maximum volume and Dma is cleared; otherwise SampleBuf is zeroed and the
 * audio device is paused.
 *
 * @param thisptr Unused userdata pointer.
 * @param stream Output buffer to fill with audio data.
 * @param len Length of the output buffer in bytes.
 */
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

/**
 * @brief Initializes SDL audio output and opens the raw audio dump file.
 *
 * Opens @p audioout_filename for the raw dump, computes the decimation
 * parameters, allocates the playback buffer, initializes the SDL audio
 * subsystem and opens the audio device with SoundOutput_Mixer as callback.
 *
 * @param audioout_filename Path of the raw audio dump file ("wb").
 * @param ntsc Nonzero for NTSC video mode, zero for PAL.
 */
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

/**
 * @brief Shuts down SDL audio output and releases all audio resources.
 *
 * Closes the dump file, closes the audio device, quits the SDL audio
 * subsystem and frees the playback buffer.
 */
void Audio_Shutdown(void)
{
	fclose(audio_out);

	SDL_CloseAudioDevice(dev_id);
	SDL_QuitSubSystem(SDL_INIT_AUDIO);
	free (SampleBuf);
}

/**
 * @brief Starts playback of one recorded second of audio.
 *
 * Sets the Dma flag so the next audio callback mixes SampleBuf into the
 * output stream, unpauses the audio device and resets the buffer write index.
 */
static void Playback()
{
	printf("Play 1 second\n");
	Dma = 1;
	SDL_PauseAudioDevice(dev_id, 0);
	SampleBuf_Ptr = 0;
}

/**
 * @brief Feeds one mixed sample into the decimated playback buffer.
 *
 * Every DecimateEach-th call stores the stereo pair into SampleBuf; once the
 * buffer is full, Playback() is invoked to replay the recorded second.
 *
 * @param l Left channel sample.
 * @param r Right channel sample.
 */
static void FeedSampleForPlayback(int l, int r)
{
	DecimateCounter++;
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
}

/**
 * @brief Appends one mixed stereo sample to the raw audio dump buffer.
 *
 * When DumpBuf is full its contents are written to the dump file and flushed.
 *
 * @param suml Left channel sample.
 * @param sumr Right channel sample.
 */
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

/**
 * @brief Mixes one emulated cycle of FM and PSG output into the audio chain.
 *
 * Accumulates the FM left/right output every cycle and produces a sample every
 * fm_div cycles; accumulates the PSG output (scaled by 16) and every psg_div
 * cycles sums the FM and PSG samples, clamps them to 16-bit range and feeds the
 * result both to the playback buffer and to the dump file.
 */
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
