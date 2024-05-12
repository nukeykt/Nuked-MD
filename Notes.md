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
