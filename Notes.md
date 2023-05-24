# Notes

## Disabling TMSS
Change `SDFFR_Update(&chip->dff3, ...` to `SDFFS_Update` in tmss.c:
```
//SDFFR_Update(&chip->dff3, !chip->w23 || chip->input.ext_rw_in, (chip->input.ext_data_in & 1) != 0, chip->input.ext_sres);
SDFFS_Update(&chip->dff3, !chip->w23 || chip->input.ext_rw_in, (chip->input.ext_data_in & 1) != 0, chip->input.ext_sres);
```

## Audio, Video dump format:
Audio and video are dumped in raw format.
Audio:
```
16-bit stereo, Little endian, 223721 hz
```
Video:
```
400x300 RGB (8 bits per channel)
```
  
## SMS Mode

Run the emulator with the `-m3` flag
