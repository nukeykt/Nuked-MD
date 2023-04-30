#include "tmss.h"

unsigned short tmss_rom[1024];

void TMSS_Clock(tmss_t *chip)
{
    SDFFR_Update(&chip->dff1, chip->w40, chip->w3, chip->ext_sres);
    SDFFS_Update(&chip->dff2, chip->w10, chip->dff1.q, chip->ext_sres);

    chip->w3 = chip->l1 == 'SE' && chip->l2 == 'GA';

    chip->ext_cpu_reset = !(chip->ext_jap && chip->dff2.nq) || chip->ext_test_4;

    chip->w10 = !(!chip->ext_as_in && (chip->ext_address_in & 0x700000) == 0x600000); // VDP range

    chip->w15 = !chip->ext_as_in && !chip->ext_lds_in && (chip->ext_address_in & 0x7ffffe) == 0x50a000 && !chip->ext_uds_in;
    chip->w23 = !chip->ext_as_in && !chip->ext_lds_in && (chip->ext_address_in & 0x7fffff) == 0x50a080;

    chip->ext_dtack_out = !((chip->w15 || chip->w23) && chip->ext_intak_vdp) || chip->ext_test_4;

    chip->w40 = !(!chip->ext_rw_in && chip->w15);
    chip->w41 = !(chip->ext_rw_in && chip->w15);

    if (!chip->ext_data_out_en)
    {
        chip->w20 = (chip->ext_address_in & 1) != 0 ? chip->l2 : chip->l1;
        chip->ext_data_out = chip->w28 ? chip->w20 : tmss_rom[chip->ext_address_in & 1023];
    }


    SDFFR_Update(&chip->dff3, !chip->w23 || chip->ext_rw_in, (chip->ext_data_in & 1) != 0, chip->ext_sres);

    chip->w31 = chip->ext_cart || !chip->ext_m3;
    chip->w28 = chip->dff3.l2 || chip->w31 || chip->ext_ce0_arb;
    chip->ext_ce0_tmss = !(chip->dff3.l2 || chip->w31) || chip->ext_ce0_arb;

    chip->w38 = (chip->ext_address_in & 1) == 0 && !chip->ext_rw_in && chip->w15;
    if (chip->w38)
        chip->l1 = chip->ext_data_in;
    chip->w39 = (chip->ext_address_in & 1) != 0 && !chip->ext_rw_in && chip->w15;
    if (chip->w39)
        chip->l2 = chip->ext_data_in;


    chip->ext_data_out_en = (chip->w41 && chip->w28) || chip->ext_test_4;

    chip->w50 = (chip->ext_test & 7) != 0;
    chip->w51 = (chip->ext_test & 7) != 1;
    chip->w53 = (chip->ext_test & 7) != 2;
    chip->w54 = (chip->ext_test & 7) != 3;
    chip->w55 = (chip->ext_test & 7) != 4;
    chip->w56 = (chip->ext_test & 7) != 7;

    chip->w52 = chip->w50 ^ chip->w56;
    chip->w57 = chip->w51 ^ chip->w56;
    chip->w58 = chip->w53 ^ chip->w56;
    chip->w59 = chip->w54 ^ chip->w56;
    chip->w62 = chip->w56 ^ chip->w55;

    chip->ext_test_0 = !chip->w52;
    chip->ext_test_1 = !chip->w57;
    chip->ext_test_2 = !chip->w58;
    chip->ext_test_3 = !chip->w59;
    chip->ext_test_4 = !chip->w62;
}
