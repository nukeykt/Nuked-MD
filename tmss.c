#include "tmss.h"

unsigned short tmss_rom[1024];

void TMSS_Clock(tmss_t *chip)
{
    SDFFR_Update(&chip->dff1, chip->w40, chip->w3, chip->w27);
    SDFFS_Update(&chip->dff2, chip->w10, chip->dff1.l2, chip->w27);

    chip->w1 = !(chip->ext_jap && chip->dff2.nq);
    chip->w2 = !(chip->w1 || chip->w67);

    chip->w3 = chip->l1 == 'SE' && chip->l2 == 'GA';

    chip->ext_cpu_reset = !chip->w2;

    chip->w9 = !chip->ext_as_in;

    chip->w10 = !(chip->w9 && chip->w12 && (chip->ext_address_in & 0x200000) != 0 && (chip->ext_address_in & 0x400000) != 0);

    chip->w11 = (chip->ext_address_in & 0x400000) == 0;
    chip->w12 = (chip->ext_address_in & 0x100000) == 0;
    chip->w13 = (chip->ext_address_in & 0x8000) == 0;

    chip->w14 = !(chip->w11 || chip->w12 || chip->w13 || (chip->ext_address_in & 0x200000) != 0
        || (chip->ext_address_in & 0x10000) != 0 || (chip->ext_address_in & 0x80000) != 0 || (chip->ext_address_in & 0x20000) != 0
        || (chip->ext_address_in & 0x40000) != 0);

    chip->w15 = !(chip->w14 && chip->w22 && chip->w26 && chip->w35);

    chip->w16 = !chip->w15;

    chip->w17 = !(chip->w15 || chip->w23);

    chip->w18 = !(chip->w17 || chip->ext_intak_vdp);

    if (chip->w38)
        chip->l1 = chip->ext_data_in;

    if (chip->w39)
        chip->l2 = chip->ext_data_in;

    chip->w20 = (chip->ext_address_in & 1) != 0 ? chip->l2 : chip->l1;
    chip->w21 = chip->w28 ? chip->w20 : tmss_rom[chip->ext_address_in & 1023];

    if (!chip->w42)
        chip->ext_data_out = chip->w21;

    chip->w22 = !(chip->ext_as_in || chip->ext_lds_in || (chip->ext_address_in & 2) != 0 || (chip->ext_address_in & 4) != 0
        || (chip->ext_address_in & 8) != 0 || (chip->ext_address_in & 16) != 0 || (chip->ext_address_in & 32) != 0);

    chip->w23 = !(chip->w14 && chip->w22 && chip->w26 && chip->w34);

    chip->w24 = chip->w23 || chip->ext_rw_in;
    SDFFR_Update(&chip->dff3, chip->w24, (chip->ext_data_in & 1) != 0, chip->w27);

    chip->w25 = (chip->ext_address_in & 0x2000) == 0;

    chip->w26 = !(chip->w25 || (chip->ext_address_in & 0x800) != 0 || (chip->ext_address_in & 0x1000) != 0 || (chip->ext_address_in & 0x4000) != 0
        || (chip->ext_address_in & 0x400) != 0 || (chip->ext_address_in & 0x40) != 0 || (chip->ext_address_in & 0x100) != 0);

    chip->w27 = chip->ext_sres;

    chip->w28 = chip->dff3.l2 || chip->w31 || chip->ext_ce0_arb;

    chip->ext_ce0_tmss = chip->w30 || chip->ext_ce0_arb;

    chip->w30 = !(chip->dff3.l2 || chip->w31);

    chip->w31 = chip->ext_cart || chip->w32;

    chip->w32 = !chip->ext_m3;
    
    chip->w33 = (chip->ext_address_in & 0x80) == 0;

    chip->w34 = !(chip->w33 || (chip->ext_address_in & 1) != 0);

    chip->w35 = !((chip->ext_address_in & 0x80) != 0 || chip->ext_uds_in);

    chip->w36 = !(chip->ext_address_in & 1) == 0;
    chip->w37 = !chip->w36;

    chip->w38 = chip->w36 && chip->w43 && chip->w16;

    chip->w39 = chip->w37 && chip->w43 && chip->w16;

    chip->w40 = !(chip->w43 && chip->w16);
    chip->w41 = !(chip->w44 && chip->w16);

    chip->w42 = (chip->w41 && chip->w28) || chip->w67;

    chip->w43 = !chip->ext_rw_in;
    chip->w44 = !chip->w43;

    chip->ext_dtack_out = chip->w18 || chip->w67;

    chip->w46 = (chip->ext_test & 1) == 0;
    chip->w47 = !chip->w46;
    
    chip->w48 = (chip->ext_test & 2) == 0;
    chip->w49 = !chip->w48;

    chip->w50 = chip->w47 || chip->w49 || chip->w61;
    chip->w51 = chip->w46 || chip->w49 || chip->w61;

    chip->w52 = chip->w50 ^ chip->w56;

    chip->w53 = chip->w47 || chip->w48 || chip->w61;
    chip->w54 = chip->w46 || chip->w48 || chip->w61;
    chip->w55 = chip->w47 || chip->w49 || chip->w60;
    chip->w56 = chip->w46 || chip->w48 || chip->w60;

    chip->w57 = chip->w51 ^ chip->w56;
    chip->w58 = chip->w53 ^ chip->w56;
    chip->w59 = chip->w54 ^ chip->w56;

    chip->w60 = (chip->ext_test & 4) == 0;
    chip->w61 = !chip->w60;

    chip->w62 = chip->w56 ^ chip->w55;

    chip->w63 = !chip->w52;
    chip->w64 = !chip->w57;
    chip->w65 = !chip->w58;
    chip->w66 = !chip->w59;
    chip->w67 = !chip->w62;
}
