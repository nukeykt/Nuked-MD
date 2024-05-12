# Notes

## Disabling TMSS
Make the macro TMSS_ENABLE=0 in tmss.h; This macro can be defined externally (in the build script or environment variables)

## Audio, Video dump format:
Audio and video are dumped in raw format.
Audio:
```
16-bit stereo, Little endian, 223722 hz NTSC / 221681 hz PAL
```
Video:
```
400x300 RGB (8 bits per channel)
```
  
## SMS Mode

Run the emulator with the `-m3` flag

## Savestates

To implement save states, the usual approach is applied, where internal contexts are serialized sequentially to a file. This is a simple and time-tested method of saves in emulators.
Of course, over time, the format of save states becomes incompatible, but for this you just need to maintain the codebase, it is a natural and inevitable process.

Save state controls:
- F5: Quick Save (nukedmd.sav)
- F7: Quick Load (nukedmd.sav)
