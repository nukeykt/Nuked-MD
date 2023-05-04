// Z80(NMOS)
#include <stdint.h>
#include <string.h>
#include "z80.h"


void Z80_SetData(z80_t *chip, int data)
{
    chip->input.ext_data_i = data & 255;
}

int Z80_GetData(z80_t *chip)
{
    return chip->ext_data_o;
}

void Z80_ClkLatches(z80_t *chip, int clk)
{
    chip->w304 = !clk && chip->w303 && chip->pla[95];
    chip->w328 = !clk && !chip->w302;
    chip->w440 = !clk && !chip->w392;
    chip->w329 = !clk && !chip->w326 && !chip->w327;
    chip->w331 = !clk && !chip->w326 && chip->w327;
}

void Z80_ResetLogic(z80_t *chip, int clk)
{
    chip->w52 = !clk && chip->l19;
    if (!clk)
        chip->w50 = chip->input.i_reset;
    else
        chip->w51 = chip->w50;
    if (chip->w52)
        chip->w54 = !chip->w51;
    chip->w55 = !chip->w54;
    chip->w53 = !clk && !chip->l20 && !chip->w55;
    if (chip->w53 && chip->w104 && !chip->w51)
        chip->w56 = 1;
    if (chip->w53 && chip->w51)
        chip->w56 = 0;
    if (chip->w55)
        chip->w56 = 1;
}

void Z80_StateLogic(z80_t* chip, int clk)
{
    chip->w132 = !clk && chip->l36;
    if (clk)
        chip->w59 = chip->w58;
    if (clk)
        chip->w63 = chip->l23;
    chip->w65 = !(!chip->l24 || clk || !chip->w59);
    chip->w67 = !clk && !chip->w59;
    if (chip->w63 || chip->w67)
        chip->w66 = 0;
    if (chip->w65)
        chip->w66 = 1;
    if (clk)
        chip->l12 = !chip->w41 && !(!chip->w114 && chip->w34);
    else
        chip->w34 = !(chip->l12 && chip->w112);
    if (clk)
        chip->l30 = chip->w41;
    chip->w530 = !(chip->l30 && chip->w112);
    if (!clk)
        chip->w109 = !chip->w530;
    chip->w113 = chip->w66 || chip->w63 || chip->w65;
    if (!clk)
        chip->w111 = chip->w112;
    chip->w110 = !(chip->w113 || chip->w111);
    if (clk)
        chip->l31 = chip->w110;
    if (!clk)
        chip->w114 = chip->w112 && chip->l31;
    if (!clk)
        chip->w40 = !chip->w39;
    if (chip->w202)
        chip->w40 = 0;
    chip->w41 = !chip->w40 && !chip->w34;
    if (clk)
        chip->l25 = chip->w109;
    else
        chip->w68 = chip->l25 && chip->w112;
    if (clk)
        chip->l21 = chip->w68;
    chip->w60 = chip->l21 && chip->w112;
    if (!clk)
        chip->w61 = chip->w60;
    if (chip->w132)
        chip->w131 = chip->w130;
    if (clk)
        chip->l32 = chip->w131;
    if (chip->w132)
        chip->w120 = chip->l32 && !chip->w134 && !chip->w130;
    if (clk)
        chip->l35 = chip->w120;
    chip->w128 = !(chip->w134 || chip->w130 || !chip->l35);
    if (chip->w132)
        chip->w127 = chip->w128;
    if (clk)
        chip->l34 = chip->w127;
    if (chip->w132)
        chip->w123 = !chip->w130 && (chip->l34 || chip->w134);
    if (clk)
        chip->l33 = chip->w123;
    chip->w122 = chip->l33 && !chip->w130;
    if (chip->w132)
        chip->w121 = chip->w122;
    chip->w116 = chip->w114 && chip->w120 && chip->w126;
    if (clk)
    {
        if (chip->w116)
            chip->w115 = 1;
        if (chip->w131 || chip->w123)
            chip->w115 = 0;
    }
    // reset
    if (clk)
        chip->l19 = !(chip->w131 && chip->w114);
    if (clk)
        chip->l20 = !(chip->w131 && chip->w114);
}

void Z80_InterruptLogic(z80_t *chip, int clk)
{
    chip->w16 = chip->l4 && !clk;

    // nmi pin
    if (clk)
        chip->l2 = !(chip->w55 || chip->w19);
    if (!chip->input.i_nmi)
        chip->w7 = 1;
    if (!chip->l2)
        chip->w7 = 0;

    if (chip->input.i_nmi)
        chip->w6 = chip->w7;
    if (!chip->l2)
        chip->w6 = 0;

    if (!clk)
        chip->w8 = chip->w6;
    else
        chip->w9 = chip->w8;

    if (chip->w16)
        chip->w19 = chip->w9;
    if (chip->w55)
        chip->w19 = 0;

    // int pin
    if (!clk)
        chip->w4 = !chip->input.i_int;
    else
        chip->w5 = chip->w4;
    chip->w12 = !(chip->w5 || chip->w9 || chip->l3);
    if (chip->w16)
        chip->w18 = chip->w12;
    if (chip->w55)
        chip->w18 = 0;
    if (clk)
        chip->l82 = chip->w114;
    chip->w531 = !(chip->w131 && chip->w18 && chip->l82);
    if (!clk)
        chip->w37 = chip->w531;
    chip->w35 = !(!chip->w37 && chip->w131 && chip->w18);
}

void Z80_IOLogic(z80_t *chip, int clk)
{
    if (!clk)
        chip->w58 = chip->input.i_busrq;

    if (clk)
        chip->l23 = chip->w55;

    chip->o_busak = !chip->w65 && chip->w66 && !chip->w67;

    if (clk)
        chip->l22 = chip->o_busak;
    chip->w62 = chip->l22 || chip->o_busak;

    chip->w94 = (chip->w41 && !chip->w131) || chip->w55 || chip->w109;
    if (clk)
        chip->l9 = chip->w94;
    chip->w32 = !clk && chip->l9;
    chip->w26 = chip->w131 && chip->w41 && clk;

    if (chip->w32 || chip->w26)
        chip->w21 = 0;
    if (chip->w24)
        chip->w21 = 1;
    chip->o_mreq = state_z;
    if (!chip->w62 && !chip->w21)
        chip->o_mreq = state_0;
    if (chip->w21)
        chip->o_mreq = state_1;
    chip->w36 = chip->w114 && chip->w106;
    if (clk)
        chip->l5 = chip->w35;
    chip->w23 = !clk && !chip->l5;
    if (chip->w23 || (chip->w36 && clk))
        chip->w22 = 1;
    if (chip->w26 || chip->w32)
        chip->w22 = 0;
    chip->o_iorq = state_z;
    if (!chip->w62 && !chip->w22)
        chip->o_iorq = state_0;
    if (chip->w22)
        chip->o_iorq = state_1;
    chip->w24 = !clk && !chip->w202 && !chip->l6;
    chip->w25 = !(chip->w24 || chip->w23 || (chip->w36 && clk));
    if (!chip->w25 && chip->l8)
        chip->w31 = 1;
    if (chip->w26 || chip->w32)
        chip->w31 = 0;
    chip->o_rd = state_z;
    if (!chip->w62 && !chip->w31)
        chip->o_rd = state_0;
    if (chip->w31)
        chip->o_rd = state_1;

    if (clk)
        chip->l10 = !chip->w41 && !chip->w55;
    if (!clk && !chip->l10)
        chip->w33 = 0;
    if (clk)
        chip->l11 = !(chip->w114 && chip->w201);
    if (!chip->l11)
        chip->w33 = 1;
    if (clk && chip->w106 && chip->w114 && chip->w201)
        chip->w33 = 1;

    chip->o_wr = state_z;
    if (!chip->w33 && !chip->w62)
        chip->o_wr = state_0;
    if (chip->w33)
        chip->o_wr = state_1;

    if (clk)
    {
        if (chip->w41 || chip->w113)
            chip->o_m1 = 0;
        if (chip->w131 && chip->w110)
            chip->o_m1 = 1;
    }
    chip->w129 = !(chip->w131 && (chip->w109 || chip->w41));
    if (clk)
        chip->o_rfsh = !chip->w129;

}

void Z80_BusLogic(z80_t *chip, int clk)
{
    chip->w15 = !(!chip->w114 || chip->w202 || chip->w201);
    if (clk && chip->w131 && chip->w41)
        chip->w2 = 0;
    chip->w69 = !(chip->w55 || (chip->w41 && !chip->w131));
    if (clk)
        chip->l1 = chip->w69;
    if (!clk && !chip->l1)
        chip->w2 = 0;
    if (clk && chip->w15)
        chip->w2 = 1;
    if (clk && chip->w3 && chip->w41)
        chip->w1 = 1;
    if (chip->w55 || (clk && (chip->w114 || chip->w201)))
        chip->w1 = 0;
    if (clk)
        chip->l13 = chip->w110 && chip->w201;
    chip->w43 = !(!chip->pla[35] && chip->l13);
    chip->w42 = !clk && !chip->w43;
    chip->w45 = !clk && !chip->l15;
    if (chip->w45)
        chip->w44 = 0;
    if (clk)
        chip->l14 = chip->w113;
    if (chip->l14 || (clk && chip->w110))
        chip->w44 = 1;
    if (chip->w1)
    {
        chip->bu1 = 255;
        chip->w146 = chip->w145;
    }

    chip->w483 = !chip->w1 && chip->w2;

    if (chip->w483)
    {
        chip->bu1 = 255;
        chip->w146 = 255;
    }
}

void Z80_OpcodeFetch(z80_t *chip, int clk)
{
    // opcode fetch
    if (clk)
    {
        chip->l17 = !(chip->w114 && chip->w131);
        chip->l18 = !(chip->w41 || chip->w55);
    }
    else
    {
        if (!chip->l17)
            chip->w48 = 1;
        if (!chip->l18)
            chip->w48 = 0;
    }
    chip->w47 = !clk && !chip->l16;
    chip->w49 = !(chip->w48 || chip->w47);
    if (!chip->w49)
        chip->w147 = chip->w146 ^ 255;
}

void Z80_HaltLogic(z80_t *chip, int clk)
{
    chip->pla[3] = chip->w147 == 0x76 && chip->w90; // halt
    chip->w11 = !(chip->w12 || chip->w9 || !chip->pla[3]);
    chip->w10 = !(chip->w12 || chip->w9 || chip->w11);
    if (chip->w11 && chip->w16)
        chip->halt = 1;
    if (chip->w19 || chip->w18 || chip->w55 || !chip->w57)
        chip->halt = 0;
    chip->o_halt = chip->halt;
}

void Z80_InterruptFlipFlops(z80_t *chip, int clk)
{
    chip->w71 = !clk && !chip->l26;
    chip->w75 = !clk && !chip->l27 && !chip->w19;
    if (chip->w18 || chip->w55)
        chip->w74 = 0;
    else if (!clk)
    {
        if (chip->w71)
            chip->w74 = (chip->w147 & 8) != 0;
    }
    if (chip->w19 || chip->w18 || chip->w55)
        chip->w73 = 0;
    else if (!clk)
    {
        if (chip->w71)
            chip->w73 = (chip->w147 & 8) != 0;
        if (chip->w75)
            chip->w73 = chip->w74;
    }
    // interrupt mode
    chip->w79 = !clk && !chip->l28;
    if (chip->w55)
        chip->w78 = 1;
    else if (!clk)
    {
        if (chip->w79)
            chip->w78 = (chip->w147 & 8) == 0;
    }
    if (chip->w55)
        chip->w80 = 0;
    else if (!clk)
    {
        if (chip->w79)
            chip->w80 = (chip->w147 & 16) != 0;
    }
}

void Z80_OpcodeDecode(z80_t *chip, int clk)
{
    // prefix logic
    chip->w103 = !chip->l29 && !clk;

    chip->w28 = !(chip->halt || (chip->w18 && chip->w80) || chip->w55 || chip->w19 || !(chip->w18 || chip->l7));

    if (chip->w55)
        chip->w30 = 1;
    else if (!clk)
    {
        if (chip->w103)
            chip->w30 = !chip->w28;
    }
    if (chip->w55)
        chip->w95 = 1;
    else if (!clk)
    {
        if (chip->w103)
            chip->w95 = !chip->w98;
    }
    if (chip->w55)
        chip->w92 = 0;
    else if (!clk)
    {
        if (chip->w103)
            chip->w92 = !chip->l43;
    }
    if (chip->w55)
        chip->w100 = 1;
    else if (!clk)
    {
        if (!chip->w98 && chip->w103)
            chip->w100 = chip->w99;
    }
    chip->w89 = !(chip->w103 || !chip->w30);
    chip->w77 = chip->w89 && chip->w19;
    chip->w91 = !(chip->w92 || !chip->w95);
    chip->w90 = !(!chip->w91 || chip->w30);
    chip->w96 = chip->w95 || chip->w103;
    chip->w287 = !chip->w95 || (chip->w103 && chip->w98);
    
    // pla
    chip->pla[34] = (chip->w147 & 0xc7) == 0xc6 && chip->w90; // n alu opcodes
    chip->pla[35] = (chip->w147 & 0xc7) == 0x06 && chip->w90; // ld n opcodes
    chip->w82 = !(chip->pla[33] || chip->pla[34]);
    chip->pla[0] = (chip->w147 & 0xf7) == 0xd3 && chip->w90; // out(n), a; in(n), a
    chip->pla[1] = (chip->w147 & 0xf7) == 0xf3 && chip->w90; // di; ei
    chip->pla[2] = (chip->w147 & 0xc7) == 0x46 && chip->w92; // im 0; im 1; im 2
    chip->pla[4] = (chip->w147 & 0xe7) == 0xa0 && chip->w92; // ldi; ldd; ldir; lddr
    chip->pla[5] = (chip->w147 & 0xe7) == 0xa1 && chip->w92; // cpi; cpd; cpir; cpdr
    chip->pla[6] = chip->w147 == 0x37 && chip->w90; // scf
    chip->pla[7] = (chip->w147 & 0xe6) == 0xa2 && chip->w92; // ini; outi; ind; outd; inir; otir; indr; otdr
    chip->pla[8] = chip->w147 == 0x10 && chip->w90; // djnz d
    chip->pla[9] = chip->w147 == 0x3f && chip->w90; // ccf
    chip->pla[10] = (chip->w147 & 0x38) == 0x28 && !chip->w82; // xor
    chip->pla[11] = (chip->w147 & 0xf7) == 0x57 && chip->w92; // ld a,i; ld a,r
    chip->pla[12] = (chip->w147 & 0x38) == 0x30 && !chip->w82; // or
    chip->pla[13] = (chip->w147 & 0x38) == 0x20 && !chip->w82; // and
    chip->pla[14] = (chip->w147 & 0x38) == 0x00 && !chip->w82; // add
    chip->pla[15] = (chip->w147 & 0xf7) == 0x57 && chip->w92 && !chip->w74; // ???
    chip->pla[16] = (chip->w147 & 0xc7) == 0x44 && chip->w92; // neg
    chip->pla[17] = chip->w147 == 0x2f && chip->w90; // cpl
    chip->pla[18] = (chip->w147 & 0x38) == 0x08 && !chip->w82; // adc
    chip->pla[19] = (chip->w147 & 0x38) == 0x18 && !chip->w82; // sbc
    chip->pla[20] = (chip->w147 & 0x38) == 0x10 && !chip->w82; // sub
    chip->pla[21] = chip->w147 == 0x27 && chip->w90; // daa
    chip->pla[22] = (chip->w147 & 0x38) == 0x38 && !chip->w82; // cp
    chip->pla[23] = (chip->w147 & 0xc7) == 0x05 && chip->w90; // dec byte
    chip->pla[24] = (chip->w147 & 0xc0) == 0xc0 && !chip->w96; // set
    chip->pla[25] = (chip->w147 & 0xc0) == 0x80 && !chip->w96; // res
    chip->pla[26] = (chip->w147 & 0xc0) == 0x40 && !chip->w96; // bit
    chip->pla[27] = (chip->w147 & 0xe7) == 0x07 && chip->w90; // rlca; rrca; rla; rra
    chip->pla[28] = (chip->w147 & 0xc0) == 0x00 && !chip->w96; // rlc; rrc; rl; rr; sla; sra; sll; srl
    chip->pla[29] = (chip->w147 & 0xcf) == 0x09 && chip->w90; // add hl, bc; de ; hl ;sp
    chip->pla[30] = (chip->w147 & 0xc7) == 0x42 && chip->w92; // sbc hl, adc hl
    chip->pla[31] = (chip->w147 & 0xc7) == 0x40 && chip->w92; // in (c)
    chip->pla[32] = (chip->w147 & 0xc6) == 0x04 && chip->w90; // inc dec byte
    chip->pla[33] = (chip->w147 & 0xc0) == 0x80 && chip->w90; // 0x80-0xbf alu opcodes?
    chip->pla[36] = !chip->w96;
    chip->pla[37] = (chip->w147 & 0xc0) == 0x40 && chip->w90; // ld reg opcodes
    chip->pla[38] = (chip->w147 & 0xf7) == 0x67 && chip->w92; // rrd, rld
    chip->pla[39] = (chip->w147 & 0xf8) == 0x70 && chip->w90 && !chip->pla[3]; // ld to (hl) opcodes
    chip->pla[40] = (chip->w147 & 0xc7) == 0x46 && chip->w90 && !chip->pla[3]; // ld from (hl) opcodes
    chip->pla[41] = (chip->w147 & 0xf7) == 0x47 && chip->w92; // ld i,a ; ld r,a
    chip->pla[42] = (chip->w147 & 0xc7) == 0xc7 && chip->w90; // rst n
    chip->pla[43] = (chip->w147 & 0x07) == 0x06 && !chip->w96; // bit opcode (hl)
    chip->pla[44] = !chip->w96 && !chip->w100; // 
    chip->pla[45] = (chip->w147 & 0xfe) == 0x34 && chip->w90; // inc dec (hl)
    chip->pla[46] = (chip->w147 & 0xc7) == 0x86 && chip->w90; // alu (hl)
    chip->pla[47] = chip->w147 == 0xed && chip->w90; // misc opcode prefix
    chip->pla[48] = chip->w147 == 0x36 && chip->w90; // ld (hl), n
    chip->pla[49] = chip->w147 == 0xcb && !chip->w100; // ix, iy bit instutruction ?
    chip->pla[50] = (chip->w147 & 0xe7) == 0x20 && chip->w90; // jr nz, z, nc, c
    chip->pla[51] = chip->w147 == 0x18 && chip->w90; // jr d
    chip->pla[52] = (chip->w147 & 0xc7) == 0x45 && chip->w92; // retn, reti
    chip->pla[53] = (chip->w147 & 0xc7) == 0xc0 && chip->w90; // ret condition
    chip->pla[54] = chip->w147 == 0xcb && chip->w90; // bit opcode prefix
    chip->pla[55] = (chip->w147 & 0xc7) == 0xc2 && chip->w90; // jp n condition
    chip->pla[56] = (chip->w147 & 0xc7) == 0xc4 && chip->w90; // call n condition
    chip->pla[57] = (chip->w147 & 0xdf) == 0xdd && chip->w90; // ix, iy
    chip->pla[58] = chip->w147 == 0x36 && chip->w90 && !chip->w100; // ld (ix/y), n
    chip->pla[59] = chip->w147 == 0x08 && chip->w90; // ex af, af'
    chip->pla[60] = (chip->w147 & 0xf7) == 0x32 && chip->w90; // ld (nn), a; ld a, (nn)
    chip->pla[61] = (chip->w147 & 0xf7) == 0xd3 && chip->w90; // out (n), a; in a, (n)
    chip->pla[62] = (chip->w147 & 0xe7) == 0x02 && chip->w90; // ld (bc), a; ld (de), a; ld a, (bc); ld a(de)
    chip->pla[63] = chip->w147 == 0xc9 && chip->w90; // ret
    chip->pla[64] = (chip->w147 & 0xc7) == 0x41 && chip->w92; // out (c), reg
    chip->pla[65] = (chip->w147 & 0xcf) == 0x43 && chip->w92; // ld (nn), word reg
    chip->pla[66] = (chip->w147 & 0xe7) == 0x47 && chip->w92; // ld i, a; ld r, a; ld a, i; ld a, r
    chip->pla[67] = (chip->w147 & 0xc7) == 0x43 && chip->w92; // ld (nn), word reg, ld word reg, (nn)
    chip->pla[68] = (chip->w147 & 0xf7) == 0x22 && chip->w90; // ld (nn), hl; ld hl, (nn)
    chip->pla[69] = chip->w147 == 0xc3 && chip->w90; // jp nn
    chip->pla[70] = chip->w147 == 0xd3 && chip->w90; // out (n), a
    chip->pla[71] = (chip->w147 & 0xc6) == 0x40 && chip->w92; // in/ out (c), byte
    chip->pla[72] = chip->w147 == 0x10 && chip->w90; // djnz d
    chip->pla[73] = (chip->w147 & 0xe7) == 0x07 && chip->w90; // rlca; rrca; rla; rra
    chip->pla[74] = chip->w147 == 0xcd && chip->w90; // call nn
    chip->pla[75] = (chip->w147 & 0xcb) == 0xc1 && chip->w90; // pop, push
    chip->pla[76] = chip->w147 == 0xcb && !chip->w100; // ix, iy bit instutruction ?
    chip->pla[77] = (chip->w147 & 0xe7) == 0xa2 && chip->w92; // ini; ind; inir; indr
    chip->pla[78] = (chip->w147 & 0xe7) == 0xa3 && chip->w92; // outi; outd; otir; otdr
    chip->pla[79] = (chip->w147 & 0xe7) == 0xa1 && chip->w92; // cpi; cpd; cpir; cpdr
    chip->pla[80] = (chip->w147 & 0xe7) == 0xa0 && chip->w92; // ldi; ldd; ldir; lddr
    chip->pla[81] = (chip->w147 & 0xc7) == 0x06 && chip->w90; // ld byte n
    chip->pla[82] = (chip->w147 & 0xcf) == 0xc5 && chip->w90; // push
    chip->pla[83] = (chip->w147 & 0xf7) == 0x67 && chip->w92; // rrd, rld
    chip->pla[84] = (chip->w147 & 0xcf) == 0x0b && chip->w90; // dec word
    chip->pla[85] = (chip->w147 & 0xcf) == 0x02 && chip->w90; // load from address
    chip->pla[86] = (chip->w147 & 0xe7) == 0xa0 && chip->w92; // ldi; ldd; ldir; lddr
    chip->pla[87] = (chip->w147 & 0xe7) == 0xa1 && chip->w92; // cpi; cpd; cpir; cpdr
    chip->pla[88] = chip->w147 == 0xe3 && chip->w90; // ex (sp), hl
    chip->pla[89] = (chip->w147 & 0xc7) == 0x03 && chip->w90; // inc, dec word
    chip->pla[90] = (chip->w147 & 0xe7) == 0x02 && chip->w90; // ld address from register
    chip->pla[91] = (chip->w147 & 0xcf) == 0x01 && chip->w90; // ld nn word
    chip->pla[92] = chip->w147 == 0xe9 && chip->w90; // jp (hl)
    chip->pla[93] = chip->w147 == 0xf9 && chip->w90; // ld sp, hl
    chip->pla[94] = (chip->w147 & 0xe7) == 0x47 && chip->w92; // ld i,a; ld r,a; ld a,i; ld a,r
    chip->pla[95] = (chip->w147 & 0xdf) == 0xdd && chip->w90; // ix, iy
    chip->pla[96] = chip->w147 == 0xeb && chip->w90; // ex de, hl
    chip->pla[97] = chip->w147 == 0xd9 && chip->w90; // exx
    chip->pla[98] = (chip->w147 & 0xf4) == 0xa0 && chip->w92; // 

    chip->w97 = !(chip->pla[47] || chip->pla[54] || chip->pla[57]);
    if (clk)
        chip->w104 = chip->w97;
    chip->w57 = chip->w56 || !chip->w104;
    if (clk)
        chip->l7 = chip->w57;
    if (clk)
        chip->w107 = chip->pla[76];
    if (clk)
        chip->l16 = !(chip->w107 && chip->w127 && chip->w41);
    chip->w102 = !((chip->w131 && chip->w114) || (chip->w110 && chip->w127 && chip->w107));
    if (clk)
        chip->l29 = chip->w102;
    if (clk)
        chip->w98 = chip->pla[54];
    if (clk)
        chip->l43 = !chip->pla[47];
    if (clk)
        chip->w99 = !chip->pla[57];

    chip->w87 = !(chip->w78 || !chip->w80);
    chip->w85 = !(chip->w78 && chip->w18);
    chip->w84 = !(!chip->w80 || chip->w85);
    chip->w86 = (chip->w89 && (chip->w84 || chip->w19)) || (!chip->w89 && chip->pla[42]);
    chip->w88 = !(chip->w87 && chip->w89 && chip->w18);

    chip->w148 = !(chip->pla[11] || chip->pla[16] || chip->pla[17] ||
        chip->pla[21] || chip->pla[27] || chip->pla[33] || chip->pla[34]
        || chip->pla[38]);
    chip->w149 = !(chip->w86 || !chip->w88 || chip->pla[53] || chip->pla[72]
        || chip->pla[77] || chip->pla[78] || chip->pla[82] || chip->pla[89]
        || chip->pla[93] || chip->pla[94]);
    chip->w150 = !(chip->pla[11] || chip->pla[21] || chip->pla[27]
        || chip->pla[28] || chip->pla[31] || chip->pla[33] || chip->pla[34]
        || chip->pla[35] || chip->pla[37]);
    chip->w151 = !(!chip->w88 || chip->pla[55] || chip->pla[60]
        || chip->pla[67] || chip->pla[68] || chip->pla[69] || chip->pla[77]
        || chip->pla[78] || chip->pla[91]);
    chip->w152 = !(chip->pla[4] || chip->pla[5] || chip->pla[6] || chip->pla[7]
        || chip->pla[9] || chip->pla[26] || chip->pla[28] || chip->pla[29]
        || chip->pla[30] || chip->pla[31] || chip->pla[32] || chip->pla[33]
        || chip->pla[34]);
    chip->w153 = !(chip->w86 || !chip->w88 || chip->pla[50] || chip->pla[51]
        || chip->pla[52] || chip->pla[53] || chip->pla[55] || chip->pla[56]
        || chip->pla[63] || chip->pla[69] || chip->pla[72] || chip->pla[74]
        || chip->pla[92]);
    chip->w154 = !(chip->pla[11] || chip->pla[16] || chip->pla[17]
        || chip->pla[27] || chip->pla[28] || chip->pla[31] || chip->pla[35]
        || chip->pla[37] || chip->w86);
    chip->w155 = !(!chip->w88 || chip->pla[44] || chip->pla[45]
        || chip->pla[49] || chip->pla[56] || chip->pla[60] || chip->pla[67]
        || chip->pla[68] || chip->pla[74] || chip->pla[77] || chip->pla[78]
        || chip->pla[83] || chip->pla[88]);
    chip->w156 = !(chip->pla[10] || chip->pla[12] || chip->pla[14]
        || chip->pla[16] || chip->pla[18] || chip->pla[19] || chip->pla[20]
        || chip->pla[22] || chip->pla[29] || chip->pla[30]);
    chip->w157 = !(!chip->w88 || chip->pla[50] || chip->pla[51]
        || chip->pla[55] || chip->pla[56] || chip->pla[60] || chip->pla[67]
        || chip->pla[68] || chip->pla[69] || chip->pla[72] || chip->pla[74]
        || chip->pla[77] || chip->pla[78] || chip->pla[79] || chip->pla[80]
        || chip->pla[83] || chip->pla[88] || chip->pla[91]);
    chip->w158 = !(chip->pla[11] || chip->pla[14] || chip->pla[16]
        || chip->pla[18] || chip->pla[19] || chip->pla[20] || chip->pla[22]
        || chip->pla[30] || chip->pla[32]);
    chip->w159 = !(chip->pla[34] || chip->pla[35] || chip->pla[50]
        || chip->pla[51] || chip->pla[61] || chip->pla[72]);
    chip->w160 = !(chip->pla[5] || chip->pla[7] || chip->pla[8]
        || chip->pla[16] || chip->pla[17] || chip->pla[19] || chip->pla[20]
        || chip->pla[22] || chip->pla[23] || chip->pla[25]);
    chip->w161 = !(chip->pla[29] || chip->pla[30] || chip->w86
        || chip->pla[48] || chip->pla[52] || chip->pla[53] || chip->pla[61]
        || chip->pla[62] || chip->pla[63] || chip->pla[71] || chip->pla[75]);
    chip->w162 = !(chip->pla[5] || chip->pla[7] || chip->pla[8]
        || chip->pla[11] || chip->pla[16] || chip->pla[21] || chip->pla[26]
        || chip->pla[28] || chip->pla[30] || chip->pla[31] || chip->pla[32]
        || chip->pla[33] || chip->pla[34] || chip->pla[38]);
    chip->w163 = !(chip->pla[32] || chip->pla[33] || chip->pla[34]
        || chip->pla[36] || chip->pla[37]);
    chip->w164 = !(chip->pla[26] || chip->pla[39] || chip->pla[40]
        || chip->pla[46] || chip->pla[48] || chip->pla[60] || chip->pla[61]
        || chip->pla[62] || chip->pla[71] || chip->pla[77] || chip->pla[78]
        || chip->pla[79] || chip->pla[80] || chip->pla[83]);
    chip->w165 = !(chip->pla[7] || chip->pla[8] || chip->pla[13]
        || chip->pla[17] || chip->pla[26] || chip->pla[32]);
    chip->w166 = !(chip->pla[9] || chip->pla[18] || chip->pla[19]
        || chip->pla[30]);
    chip->w167 = !(chip->w86 || chip->pla[39] || chip->pla[48]
        || chip->pla[56] || chip->pla[64] || chip->pla[65] || chip->pla[70]
        || chip->pla[74] || chip->pla[82] || chip->pla[83] || chip->pla[85]
        || chip->pla[88] || chip->pla[89] || chip->pla[93]);
    chip->w168 = !(chip->pla[10] || chip->pla[12] || chip->pla[24]);
    chip->w169 = !(chip->pla[39] || chip->pla[40] || chip->pla[43]
        || chip->pla[44] || chip->pla[45] || chip->pla[46] || chip->pla[48]
        || chip->pla[49]);
    chip->w170 = !(chip->pla[49] || chip->pla[55] || chip->pla[56] || chip->pla[44]
        || chip->pla[58] || chip->pla[60] || chip->pla[67] || chip->pla[68]
        || chip->pla[69] || chip->pla[74] || chip->pla[91]);
    chip->w171 = !(chip->pla[6] || chip->pla[9] || chip->pla[13]);
    chip->w172 = !(chip->pla[24] || chip->pla[25] || chip->pla[28]
        || chip->pla[31] || chip->pla[32] || chip->pla[35] || chip->pla[37]);
    chip->w173 = !(chip->w86 || chip->pla[52] ||  chip->pla[53] || chip->pla[56]
        || chip->pla[63] || chip->pla[74] || chip->pla[75] || chip->pla[88]);
    chip->w174 = !(chip->pla[7] || chip->pla[8] || chip->pla[32]
        || chip->pla[36] || chip->pla[50] || chip->pla[51]);
    chip->w175 = !(chip->pla[50] || chip->pla[51] || chip->pla[72]);
    chip->w176 = !(chip->pla[82] || chip->pla[84]);
    chip->w177 = !(chip->pla[4] || chip->pla[5] || chip->pla[6]
        || chip->pla[7] || chip->pla[9]);
    chip->w178 = !(chip->pla[7] || chip->pla[8]);
    chip->w179 = !(chip->pla[5] || chip->pla[7] || chip->pla[8]);
    chip->w180 = !(chip->pla[12] || chip->pla[24]);
    chip->w181 = !(chip->pla[13] || chip->pla[25] || chip->pla[26]);
    chip->w182 = !(chip->pla[33] || chip->pla[36]);
    chip->w183 = !(chip->w182 && (chip->w114 || !chip->pla[37]));
    chip->w184 = !(chip->pla[55] || chip->pla[56]);
    chip->w185 = !(chip->pla[56] || chip->pla[74]);
    chip->w186 = !(chip->pla[77] || chip->pla[78] || chip->pla[79]
        || chip->pla[80]);
    chip->w187 = !(chip->pla[60] || chip->pla[61] || chip->pla[62]);
    chip->w188 = !(chip->pla[71] || chip->pla[72] || chip->pla[77]
        || chip->pla[78]);
    chip->w189 = !(chip->pla[72] || chip->pla[73] || chip->pla[77]
        || chip->pla[78]);
    chip->w190 = !(chip->pla[89] || chip->pla[93]);
    chip->w191 = !(chip->pla[79] || chip->pla[80] || chip->pla[81]
        || !chip->w169 || chip->pla[83] || chip->pla[92] || chip->pla[93]);

    chip->w256 = !chip->w169 && !chip->w100;

    chip->w255 = !chip->w174 || (chip->w115 && chip->w256);

    chip->w254 = !(!chip->w255 || !chip->w186);

    chip->w196 = chip->pla[86] || chip->pla[87];
    chip->w195 = !(chip->pla[88] || !(chip->w196 || (!chip->w299 && !chip->w173)));

    chip->w197 = !chip->w234 && chip->w186;
    chip->w199 = !(chip->pla[83] || chip->pla[87] || chip->w254);
    chip->w198 = !chip->w199 && chip->w170;

    chip->w203 = !(chip->w110 || (chip->w41 && chip->w131));

    chip->w204 = !((chip->w109 && chip->pla[93])
        || (chip->pla[88] && chip->w121 && chip->w41));

    if (clk)
        chip->l39 = chip->w204;
    else
        chip->w205 = !chip->l39;

    chip->w200 = !((chip->w127 && (!chip->w186 || !chip->w88))
        || (chip->w120 && !chip->w88)
        || (chip->w123 && !chip->w167)
        || (chip->w121 && (!chip->w167 || chip->w255)));

    chip->w202 = ((chip->w121 || chip->w123) && !chip->w197)
        || (chip->w127 && chip->w198);
    chip->w201 = !chip->w200 && !chip->w202;
    chip->w3 = !(chip->w201 || chip->w202);

    chip->w207 = !(chip->w176 && !(chip->w86 || !chip->w88));
    chip->w206 = !((chip->w131 && chip->w109 && chip->w207)
        || (!chip->w186 && chip->w123 && (chip->w41 || chip->w110))
        || (chip->w195 && chip->w127 && chip->w41));

    chip->w209 = !chip->w186 && (chip->w147 & 8) != 0;
    chip->w208 = !(chip->w110 &&
        ((chip->w120 && (chip->w209 || !chip->w88))
            || (chip->w123 && !chip->w173 && !chip->w167)
            || (chip->w127 && chip->w209)));
    if (clk)
        chip->l40 = !chip->w206 || !chip->w208;
    else
        chip->w210 = chip->l40;

    chip->w135 = !((chip->w190 && chip->w68) || (chip->w131 && chip->w109 && chip->w149));
    chip->w136 = !(chip->w61 || (chip->w41 && chip->w143) || (chip->w109 && chip->w141));
    chip->w137 = !chip->w135 || !chip->w136;
    chip->w133 = !chip->w137 && !chip->w55;
    if (clk)
        chip->l36 = !chip->w133;
    if (clk)
        chip->l24 = !chip->w63 && !chip->w133;
    if (clk)
        chip->w112 = !chip->w113 && chip->w133;
    chip->w105 = chip->pla[61] || chip->pla[71];
    chip->w106 = (chip->pla[77] && chip->w120) || (chip->w127 && chip->pla[78]) || (chip->w105 && chip->w123);

    chip->w93 = !(chip->w131 || chip->w106);
    chip->w27 = !((chip->w110 && chip->w93) || (chip->w131 && (chip->w41 || (chip->w110 && !chip->w18))));
    if (clk)
        chip->l6 = chip->w27;
    chip->w101 = !(chip->w202 || chip->w201 || (chip->w131 && (chip->w41 || chip->w18)));
    if (clk)
        chip->l8 = chip->w101;
    if (clk)
        chip->w38 = !(((chip->w18 && chip->w131) || chip->w106) && (!chip->w37 || chip->w114));
    if (clk)
        chip->w39 = chip->w38 && !chip->input.i_wait;
    if (clk)
        chip->l15 = !(chip->w201 && chip->w110);
    chip->w46 = !(chip->w131 || (chip->w127 && chip->pla[35]) || (chip->w127 && chip->w107));
    chip->w192 = (chip->w201 && chip->w110) || (chip->w41 && chip->w3 && chip->w46);

    chip->w138 = chip->w161 && !chip->w126;
    chip->w139 = chip->w159 && chip->w161 && chip->w169 && chip->w157;
    chip->w117 = chip->w55 || chip->w121 || (chip->w123 && !chip->w164) || (chip->w120 && chip->w138 && !chip->w159)
        || (chip->w127 && (chip->pla[98] || (chip->w155 && (!(!chip->w164 || !chip->w151) || !chip->w151))));
    chip->w118 = chip->w117 || chip->w299 || (chip->w131 && chip->w139);
    if (clk)
        chip->w130 = chip->w118;
    if (clk)
        chip->w134 = chip->w125 && ((chip->w159 && chip->w131) || chip->w120);
    chip->w125 = !((!chip->w169 && !chip->w100) || (chip->w169 && chip->w161));
    chip->w126 = (!chip->w169 && !chip->w100) || chip->w255;

    chip->w140 = !chip->w155 && chip->w151 && !chip->w255;
    chip->w141 = chip->w186 && ((chip->w140 && chip->w127) || chip->w123);
    chip->w142 = chip->w186 && !chip->w255 && !chip->w234;

    chip->w143 = chip->w120 || (chip->w142 && chip->w123) || (chip->w121 && !chip->pla[88])
        || (chip->w127 && (!chip->w151 || (chip->w140 && chip->w299)));
    chip->w212 = !(chip->w186 && (!chip->w169 || chip->w255));
    chip->w213 = !(chip->w186 && chip->w218);

    chip->w211 = !((chip->w114 && ((chip->w123 && chip->w212)
        || (chip->w120 && chip->w213)))
        || (chip->w109 && (chip->w121 || ((chip->w123 || chip->w127)
            && (!chip->w186 || !chip->w173)))));

    chip->w214 = !((chip->w41 && chip->w131)
        || (chip->w68 && chip->w131 && (!chip->w88 || !chip->w167))
        || (chip->w114 && ((chip->w127 && !chip->w186)
            || (chip->w121 && chip->w167 && !chip->w173))));

    if (clk)
        chip->l41 = chip->w55 || (!chip->w57 && chip->w110 && chip->w131);
    chip->w215 = chip->l41;

    chip->w216 = !chip->w214 || !chip->w211;

    chip->w218 = !chip->pla[88] && chip->w88;
    chip->w217 = !((chip->w120 && chip->w218) || chip->w131 || chip->w127);

    chip->w219 = !((chip->w41 && (chip->w121 || (chip->w127 && !chip->w186)))
        || (chip->w109 && chip->w131)
        || (chip->w114 && (chip->w131 || (chip->w127 && !chip->w173))));

    chip->w220 = !(chip->w127 && chip->w196);
    chip->w221 = !((chip->w110 && (chip->w123 || chip->w121)
        && (!chip->w185 || chip->w86))
        || (chip->w109 && chip->w123 && !chip->w186));

    chip->w222 = !((!chip->w175 && ((chip->w114 && chip->w120)
        || (chip->w41 && chip->w127)))
        || (chip->w110 && (chip->w127 || chip->w120) && !chip->w88));

    chip->w294 = !(chip->w221 && chip->w222);

    chip->w225 = !chip->w100 && !chip->w169;

    chip->w224 = !chip->w170 || chip->w225 || !chip->w159;

    chip->w223 = !((chip->w127 && !chip->w186)
        || (chip->w120 && !chip->w170)
        || (chip->w131 && chip->w224));

    chip->w226 = !((chip->w110 && (
        chip->w131
        || (chip->w120 && chip->w224)
        || (chip->w127 && !chip->w170)))
        || chip->w55);


    chip->w228 = !(chip->w131 && chip->w41);
    chip->w229 = !((chip->w41 && chip->w120 && !chip->w88)
        || (chip->w109 && chip->w131 && chip->pla[94]));
    chip->w230 = !( (chip->w68 && chip->w131 && (chip->pla[93] || !chip->w173))
        || (chip->w114 && (((chip->w127 || chip->w123) && !chip->w173)
            || (chip->w121 && !chip->w173 && chip->w167))));
    chip->w231 = !(((chip->w68 || chip->w109) && (chip->w131 || chip->w127)
        && (!chip->w173 || !chip->w88))
        || (chip->w114 && chip->w120 && !chip->w88));
    chip->w232 = !((chip->w41 && (chip->w120 || chip->w127) && chip->pla[91])
        || ((chip->w109 || chip->w68)
            && (chip->w121 || (chip->w131
                && (chip->pla[89] || chip->pla[90]))))
        );

    chip->w234 = chip->pla[29] || chip->pla[30];

    chip->w236 = !(chip->pla[67] || chip->pla[68]);
    chip->w235 = !(chip->w236 || (chip->w147 & 8) != 0);
    chip->w237 = !(chip->w236 || !chip->w167);

    chip->w233 = !(
        (chip->w110 && (chip->w123 || chip->w121)
            && (chip->pla[88] || chip->w234 || chip->w235))
        || (chip->w41 && (chip->w123 || chip->w121)
            && chip->w237)
        );

    chip->w238 = !(
        ((chip->w41 && chip->w127) || (chip->w114 && chip->w120))
        && chip->w225);

    chip->w240 = !(chip->pla[77] || chip->w186);

    chip->w239 = !((chip->w114 && chip->w120 && chip->w240)
        || (chip->w109 && ((chip->w127 && chip->pla[83]) || (chip->w123 && chip->w234)))
        || (chip->w41 && (chip->w123 || chip->w121) && chip->w234)
        );

    chip->w241 = !(
        (chip->w131 && chip->w68 && chip->pla[78])
        || (chip->w131 && chip->w109 && (chip->w234 || !chip->w191))
        || (chip->w114 && chip->w127 && chip->pla[77])
        || (chip->w41 && chip->w120 && (chip->pla[77] || chip->pla[81]))
        );

    chip->w242 = !(
        ((chip->w41 && chip->w120)
        || (chip->w114 && chip->w127)) && chip->pla[80]
        );

    chip->w243 = !(
        (chip->w109 && ((chip->w127 && !chip->w186) || (chip->w131 && !chip->w188)))
        || (chip->w68 && chip->w131 && chip->pla[77])
        || (chip->w110 && chip->w120 && !chip->w188)
        || (chip->w41 && ((chip->w127 && !chip->w186) || (chip->w120 && chip->pla[78])))
        );

    chip->w244 = !(
        (chip->w110 || chip->w41) && (chip->w123 || chip->w121) && chip->pla[75]
        );

    chip->w245 = !(!chip->w187 || (!chip->w236 && (chip->w147 & 8) != 0)
        || (!chip->w153 && chip->w175) || chip->pla[75] || !chip->w173
        || chip->pla[91]);

    chip->w247 = !(chip->pla[22] || chip->w148);

    chip->w246 = !((chip->w110 && chip->w123 && !chip->w187)
        || (chip->w41 && chip->w123 && chip->w167 && !chip->w187)
        || (chip->w109 && chip->w131 && chip->pla[73])
        || (chip->w114 && chip->w131 && chip->w247)
        );

    chip->w248 = !(
        (chip->w110 && chip->w123 && (chip->pla[71] || !chip->w163))
        || (chip->w109 && chip->w131 && (!chip->w163 && chip->w169))
        );

    chip->w249 = !(chip->w109 && chip->w131 && chip->pla[66]);

    chip->w250 = !(chip->w114 && chip->w131 && !chip->w172);

    chip->w252 = chip->w187 && (chip->w86 || chip->w234 || (chip->w167 && !chip->w245));

    chip->w253 = !chip->w245 || chip->w235;

    chip->w251 = !(
        (chip->w41 && ((chip->w123 && chip->w252)
            || (chip->w120 && chip->w88 && chip->w253)))
        || (chip->w114 && chip->w127 && (!chip->w88 || chip->w254))
        );

    chip->w257 = !(
        (chip->w110 && chip->w120 && (!chip->w189 || !chip->w187))
        || (chip->w41 && ((chip->w127 && chip->w253) || (chip->w121 && chip->w252)))
        );

    chip->w258 = !(
        (chip->w41 && chip->w123 && !chip->w187)
        || (chip->w68 && chip->w127 && chip->w255)
        || (chip->w114 && chip->w131 && chip->w247)
        );

    chip->w259 = !(chip->w110 && chip->w131 && chip->pla[59]);

    chip->w261 = chip->w235 || chip->w234;

    chip->w260 = !(
        (chip->w110 && chip->w121 && !chip->w245)
        || (chip->w109 && chip->w131 && chip->w261)
        );

    chip->w262 = !(
        (chip->w110 && ((chip->w120 && !chip->w88) || (chip->w123 && chip->w261)))
        || (chip->w114 && chip->w120)
        );

    chip->w263 = !(
        (chip->w109 && ((chip->w131 && !chip->w189) || chip->w123))
        || ((chip->w110 || chip->w41) && chip->w120 && !chip->w88)
        );

    chip->w264 = !(
        (chip->w110 && ((chip->w123 && (!chip->w245 || !chip->w187))
            || (chip->w121 && chip->w261)))
        || (chip->w41 && chip->w127 && chip->w255)
        );

    chip->w265 = (
        (chip->w127 && !chip->w184)
        || (chip->w131 && chip->pla[53])
        || (chip->w120 && chip->pla[50])
        );

    chip->w266 = !(
        (chip->w109 && chip->w131 && chip->pla[41])
        || (chip->w110 && chip->w127 && chip->w88)
        );

    chip->w267 = !(
        (chip->w110 && chip->w123 && chip->pla[38])
        || (chip->w41 && ((chip->w123 && chip->w86) 
            || (chip->w127 && chip->pla[38])))
        );
    if (clk)
        chip->w378 = !chip->w267 || !chip->w266;

    chip->w268 = !(!chip->w150 &&
        ((chip->w41 && chip->w123)
            || (chip->w109 && chip->w131))
        );

    chip->w269 = !(
        (chip->w110 && ((chip->w123 && (chip->w256 || chip->w234)) || (chip->w121 && chip->w234)))
        || (chip->w68 && chip->w131 && chip->w86)
        || (chip->w41 && (chip->w131 || chip->w120))
        );
    if (clk)
        chip->w379 = !(!chip->w268 || !chip->w269);
    chip->w492 = !clk && !chip->w379;

    chip->w271 = chip->pla[27] || chip->pla[28];

    chip->w270 = !(
        (chip->w41 && chip->w123 && (chip->w256 || chip->w271))
        || (chip->w109 && chip->w131)
        );
    if (clk)
        chip->w390 = !chip->w270;

    chip->w389 = !(chip->w390 && !chip->w162);
    chip->w436 = !clk && !chip->w389;

    chip->w272 = !((chip->w41 && chip->w120 && chip->w255));
    if (clk)
        chip->l71 = chip->w272;
    chip->w465 = !clk && !chip->l71;

    chip->w273 = !(chip->w110 && chip->w131 && (chip->w247 || !chip->w152));

    chip->w274 = !(
        (chip->w114 && chip->w123 && (chip->w256 || chip->w271))
        || (chip->w41 && chip->w131)
        );
    if (clk)
        chip->l52 = !chip->w274;
    if (clk)
    {
        chip->l50 = chip->w273;
        chip->l51 = chip->w274;
    }
    else
    {
        if (!chip->l50)
            chip->w380 = 0;
        if (!chip->l51)
            chip->w380 = 1;
    }
    if (clk)
        chip->w381 = !chip->w380 && !chip->w274;
    chip->w382 = !clk && chip->l52 && !chip->w381;

    if (clk)
        chip->w419 = chip->w274;

    chip->w275 = !(
        (chip->w114 && chip->w131 && (!chip->w172 || chip->w247))
        || (chip->w110 && (chip->w120 || chip->w121) && chip->w255)
        || (chip->w41 && chip->w121 && chip->w234)
        || (chip->w68 && chip->w127)
        );

    chip->w276 = !(chip->w41 && chip->w120 && chip->w255);
    if (clk)
        chip->l53 = !chip->w276;
    chip->w277 = !(chip->w114 && chip->w131 && !chip->w156);
    chip->w278 = !(chip->w114 && chip->w131 && !chip->w171);
    if (clk)
        chip->l70 = chip->w278;
    chip->w463 = !clk && !chip->l70;

    chip->w279 = !(
        (chip->w120 && chip->pla[8])
        || (chip->w127 && (chip->pla[7] || chip->pla[5]))
        );
    chip->w280 = !(
        (chip->w114 && ((chip->w127 && chip->pla[5]) || (chip->w131 && chip->w179)))
        || (chip->w110 && chip->w120 && !chip->w178)
        || (chip->w41 && chip->w123 && chip->w234)
        );
    if (clk)
        chip->w391 = !chip->w280;

    chip->w392 = !(chip->w391 && !chip->w162);

    chip->w281 = !(
        (chip->w110 && chip->w123) || (chip->w114 && chip->w120)
        || (chip->w109 && chip->w131)
        );
    if (clk)
        chip->l59 = chip->w281;

    chip->w386 = !((chip->w109 && chip->w123 && chip->w234)
        || (chip->w41 && chip->w127));
    if (clk)
        chip->l58 = chip->w386;

    chip->w435 = chip->l58 && chip->l59;
    chip->w434 = !clk && !chip->w435;

    chip->w282 = !(
        (chip->w110 && ((chip->w127 && (chip->pla[5] || chip->w255)) || (chip->w131 && chip->w177)))
        || (chip->w68 && chip->w131)
        || (chip->w114 && chip->w121 && chip->w234)
        );
    if (clk)
        chip->w431 = !chip->w282;

    chip->w384 = !((chip->w114 && chip->w123 && chip->w234)
        || (chip->w109 && (chip->w123 || chip->w127) && chip->w255));
    if (clk)
        chip->w430 = !chip->w384;

    chip->w429 = !(!chip->l61 && (chip->w430 || chip->w431));
    chip->w433 = !chip->w429 && !clk;
    chip->w462 = !clk && !chip->w429;

    if (chip->w434)
        chip->w442 = 0;
    if (chip->w433)
        chip->w442 = 1;

    if (clk)
        chip->l61 = chip->w442;

    chip->w283 = !(
        !chip->w274 ||
        (chip->w68 && chip->w131 && !chip->w88)
        || (chip->w41 && (chip->w127 || chip->w123) && chip->w255)
        || (chip->w109 && ((chip->w131 && (chip->w255 || chip->w234))
            || (chip->w123 && chip->w234)))
        || (chip->w114 && chip->w120 && (chip->w255 || chip->w256))
        );
    if (clk)
        chip->l56 = !chip->w283;

    chip->w284 = !(chip->w68 && chip->w131 && chip->w81);
    chip->w285 = !(
        (chip->w110 && chip->w120 && chip->pla[0])
        || (chip->w114 && chip->w127 && !chip->w88)
        || (chip->w41 && chip->w121 && chip->w86)
        );

    chip->w286 = !(
        (chip->w41 && chip->w131 && chip->w287)
        || (chip->w110 && chip->w123 && (chip->w287 && chip->w256))
        );

    chip->w288 = !((chip->w109 || chip->w68) && (chip->pla[21] || chip->w77));
    if (clk)
        chip->w370 = !chip->w288;
    chip->w289 = !((chip->w288 && chip->w68 && chip->w131) || chip->w192);
    if (clk)
        chip->w369 = !chip->w289;

    chip->w290 = !(chip->w216 || !chip->w219 || !chip->w226
        || (!chip->w133 && (!chip->w217 || chip->w118)));

    chip->w291 = !(!chip->w226 || chip->w216);

    if (clk)
        chip->w292 = chip->w291;

    if (clk)
        chip->w293 = chip->w290;

    chip->w388 = !(chip->pla[7] || chip->w177);

    chip->w387 = !(chip->w109 && chip->w127 && chip->w388);
    if (clk)
        chip->l60 = chip->w387;
    chip->w437 = !clk && !chip->l60;

    chip->w393 = !(!chip->w277
        || (chip->w114 && chip->w127 && chip->w255)
        || (chip->w41 && chip->w123 && chip->w234)
        );
    if (clk)
        chip->l66 = chip->w393;
    chip->w458 = !clk && !chip->l66;

    chip->w394 = !((chip->w390 && !chip->w166)
        || (chip->w109 && chip->w123 && chip->w234)
        || (chip->w41 && chip->w127 && chip->w255)
        );
    if (clk)
        chip->l68 = chip->w394;
    chip->w461 = !clk && !chip->l68;

    chip->w395 = !(!chip->w165 && chip->w390);
    chip->w459 = !clk && !chip->w395;

    chip->w396 = !(chip->w395 && chip->w394 && (chip->w390 || chip->l53));
    if (clk)
        chip->l67 = chip->w396;
    chip->w460 = !clk && !chip->l67;

    chip->w83 = !(chip->w77 || !chip->w86);
    chip->w398 = !(chip->w114 && chip->w123 && chip->w83);
    if (clk)
        chip->l76 = chip->w398;
    if (clk)
        chip->w400 = (
            (chip->w41 && chip->w127 && chip->w255)
            || (chip->w114 && chip->w123 && chip->pla[38])
            );
    chip->w399 = !((chip->w390 && !chip->pla[36] && chip->w255) || chip->w400);
    chip->w490 = !clk && !chip->w399;
    chip->w479 = chip->l76 && chip->w399;
    chip->w491 = !clk && !chip->w479;

    chip->w401 = !(
        (((chip->w147 & 8) == 0 && chip->w109) || chip->w114) &&
        chip->w127 && chip->pla[38]
        );
    if (clk)
        chip->l77 = chip->w401;
    chip->w480 = !clk && !chip->l77;
}

void Z80_InterruptLogic2(z80_t *chip, int clk)
{
    if (clk)
        chip->l26 = !(chip->w131 && chip->pla[1] && chip->w110);

    chip->w76 = !(chip->pla[52] && chip->w131 && chip->w114);
    if (clk)
        chip->l27 = chip->w76;
    if (clk)
        chip->l3 = !chip->w73 || chip->pla[1];

    chip->w13 = !((chip->w16 && !chip->w10) || chip->w18 || chip->w19 || chip->halt);
    chip->w14 = !(chip->w13 || (chip->w16 && chip->w10));
    if (clk)
        chip->l28 = !(chip->pla[2] && chip->w131 && chip->w110);

    chip->w81 = chip->w80 && (chip->w89 && chip->w78 && chip->w18);
    if (clk)
    {
        chip->l37 = chip->w133;
        chip->l38 = !chip->w110 && !chip->w55;
    }
    else
    {
        if (!chip->l37)
            chip->w144 = 1;
        if (!chip->l38)
            chip->w144 = 0;
    }
    chip->w193 = (chip->w144 && chip->w14) || chip->w205;
}

void Z80_RegistersLogic(z80_t* chip, int clk)
{
    chip->w315 = ((chip->w147 & 4) == 0 && chip->w183) || (!chip->w183 && (chip->w147 & 32) == 0);
    chip->w317 = ((chip->w147 & 2) == 0 && chip->w183) || (!chip->w183 && (chip->w147 & 16) == 0);
    chip->w318 = ((chip->w147 & 1) == 0 && chip->w183) || (!chip->w183 && (chip->w147 & 8) == 0);

    chip->w406 = chip->pla[50] || (chip->w147 & 32) == 0;

    chip->w405 = !((chip->w147 & 16) == 0 || !chip->w406);
    chip->w407 = !((chip->w147 & 16) == 0 || chip->w406);
    chip->w408 = !((chip->w147 & 16) != 0 || chip->w406);
    chip->w409 = !((chip->w147 & 16) != 0 || !chip->w406);

    chip->w296 = !(chip->w299 || chip->w153);
    chip->w295 = !(chip->w133 ||
        (chip->w223 && (!chip->w118 || chip->w296)));

    chip->w297 = !(!chip->w226 || chip->w295 || chip->w294);
    if (clk)
        chip->w298 = chip->w297;

    chip->w300 = !(!chip->w226 || chip->w295);
    if (clk)
        chip->w301 = !chip->w300;

    if (clk)
        chip->w305 = chip->w228 && chip->w227;
    else
    {
        if (!chip->w293 && chip->w305)
            chip->w321 = 0;
        else if (!chip->w305)
            chip->w321 = 1;
    }
    chip->w306 = !(chip->w228 && chip->w227 && chip->w229);

    if (clk)
        chip->w307 = chip->w306 || chip->w55;

    chip->w309 = !(chip->w231 && chip->w230);

    chip->w313 = !(!chip->w246 || !chip->w243 || !chip->w242 || !chip->w274 || !chip->w241 || !chip->w239 || !chip->w238 || chip->w309);

    chip->w308 = !(!chip->w294 && chip->w313 && chip->w344);

    chip->w310 = !(chip->w233 && chip->w232);

    chip->w312 = !(chip->w100 || !chip->w169);

    chip->w311 = !(chip->w238 && (chip->w343 || !chip->w312));

    if (clk)
        chip->l44 = chip->w308;

    chip->w314 = chip->w307 || chip->l44;

    chip->w316 = !(chip->w315 || chip->w317);

    if (clk)
        chip->w319 = !((chip->w316 && chip->w310) || chip->w309);

    chip->w227 = !(chip->w131 && chip->w114);
    if (clk)
        chip->l42 = chip->w227;
    chip->w303 = !chip->l42;
    if (clk)
        chip->l45 = chip->w315;
    else if (chip->w304)
        chip->w320 = chip->l45;

    if (clk)
        chip->w322 = !chip->w113;


    chip->w326 = !(chip->w303 && chip->pla[96]);

    chip->w302 = !(chip->w303 && chip->pla[97]);

    chip->w325 = !(chip->w302 && chip->w326);

    chip->w324 = !clk && !chip->w325;

    if (chip->w324)
        chip->l46 = chip->w327;

    if (chip->w328)
        chip->w327 = !chip->l46;

    chip->w323 = !((clk && !chip->w113) || chip->w322);

    if (chip->w324)
        chip->l47 = chip->w330;

    if (chip->w329)
        chip->w330 = !chip->l47;

    if (chip->w324)
        chip->l48 = chip->w332;

    if (chip->w331)
        chip->w332 = !chip->l48;

    chip->w333 = !((chip->w327 && chip->w332) || (!chip->w327 && chip->w330));
    chip->w334 = !clk && !chip->w293;
    chip->w335 = !clk && !chip->w292;
    chip->w336 = !clk && !chip->w298;
    chip->w337 = !clk && chip->w307;
    chip->w338 = chip->w305 && !chip->w301;
    chip->w339 = clk;

    if (clk)
        chip->w341 = !chip->w311;

    chip->w340 = !(!chip->w341 && !chip->w320);
    chip->w342 = !(!chip->w341 && chip->w320);

    chip->w344 = !(chip->w310 || !chip->w244 || !chip->w250 || !chip->w248);

    chip->w343 = !(!chip->w241 || !chip->w239 || (!chip->w315 && chip->w317 && (chip->w310 || !chip->w344)));

    if (clk)
        chip->w345 = chip->w343 || chip->w312;

    if (clk)
        chip->w346 = chip->w242 && (!chip->w315 || chip->w317 || chip->w344);

    if (clk)
        chip->w347 = (chip->w344 || !chip->w315 || !chip->w317) && chip->w243;

    chip->w349 = !(chip->w333 ? chip->w346 : chip->w345);

    chip->w348 = !(!chip->w327 && chip->w349);
    chip->w350 = !(chip->w327 && chip->w349);

    chip->w351 = !(chip->w333 ? chip->w345 : chip->w346);

    chip->w352 = !(!chip->w327 && chip->w351);
    chip->w353 = !(chip->w327 && chip->w351);

    chip->w354 = !(!chip->w327 && !chip->w347);
    chip->w355 = !(chip->w327 && !chip->w347);

    chip->w356 = !(chip->w315 || chip->w317);
    chip->w357 = !((chip->w248 && chip->w250) || chip->w318);

    if (clk)
        chip->l81 = !(!chip->w274 || !chip->w246 || (chip->w356 && (chip->w357 || !chip->w244)));
    chip->w358 = !chip->l81;
    if (clk)
        chip->w359 = !chip->w259;

    chip->w360 = !clk && !chip->w359;
    chip->w362 = !clk && chip->w359;

    if (chip->w360)
        chip->l49 = chip->w361;

    if (chip->w362)
        chip->w361 = !chip->l49;

    chip->w363 = !(chip->w361 && chip->w358);
    chip->w364 = !(!chip->w361 && chip->w358);

    chip->w365 = !(chip->w248 && (chip->w249 || chip->w317));
    chip->w366 = !(chip->w250 && (chip->w249 || !chip->w317));

    chip->w368 = !(chip->w315 || chip->w317);
    chip->w367 = !(chip->w318 || chip->w368);

    chip->w410 = !(!chip->w257 || !chip->w258 || (chip->w366 && (chip->w318 || chip->w368)));

    chip->w411 = !(!chip->w251 || (chip->w366 && chip->w367) || (!chip->w274 && !chip->w380));

    chip->w412 = !(chip->w260 && chip->w262);

    chip->w413 = !(chip->w318 || chip->w368);

    chip->w414 = !(!chip->w264 || !chip->w263 || !chip->w274
        || (chip->w365 && (chip->w318 || chip->w368)));

    chip->w415 = !(chip->w412 || (chip->w413 && chip->w365) || (!chip->w274 && chip->w380));

    if (clk)
        chip->w417 = !chip->w415;

    if (clk)
        chip->w418 = !chip->w414;

    if (clk)
        chip->w416 = chip->w410;
    chip->w517 = !clk && !chip->w416;

    if (clk)
        chip->l79 = chip->w411;
    chip->w516 = !clk && !chip->l79;

    chip->w518 = !chip->w417;
    chip->w519 = !chip->w418;
}

void Z80_AluControlLogic(z80_t *chip, int clk)
{
    if (clk)
        chip->w372 = !chip->w286;

    if (clk)
        chip->w373 = !chip->w285 || !chip->w284;
    if (chip->w370)
    {
        chip->bu2 = 255;
        chip->w484 = 0x99;
        if (!chip->w444)
            chip->w484 |= 6;
        if (!chip->w443)
            chip->w484 |= 0x60;
    }

    chip->w371 = !(!chip->w286 || !chip->w284 || (chip->w271 && !chip->w268));
    if (clk)
        chip->l54 = chip->w371;

    chip->w403 = !(!chip->w283 || !chip->w269 || !chip->w268);

    if (clk)
        chip->w404 = chip->w403 || !chip->w371;
    chip->w493 = !chip->w404;

    if (clk)
        chip->l73 = !chip->w473;
    chip->w423 = chip->l73;

    chip->w422 = !(chip->w408 || (chip->w405 && chip->w423));

    chip->w376 = !(
        (chip->w41 && chip->w123 && chip->w234)
        || (chip->w114 && chip->w127 && chip->w255)
        );

    chip->w375 = !(chip->w376 && chip->w275);
    if (clk)
        chip->w377 = chip->w375;

    chip->w374 = !(!chip->w285 || !chip->w284 || !chip->w266 || !chip->w267 || chip->w375);
    if (clk)
        chip->l55 = chip->w374;

    chip->w402 = !chip->l54 || chip->l55;

    if (!clk)
    {
        if (chip->w461)
            chip->w476 = !chip->w423;
        if (chip->w460)
            chip->w476 = !1;
        if (chip->w459)
            chip->w476 = !0;
        if (chip->w462)
            chip->w476 = chip->l75;
    }

    if (chip->w381)
    {
        chip->bu2 |= 0xd7;
        chip->w484 &= ~0xd7;

        if (!chip->w481)
            chip->w484 |= 2; // N
        if (!chip->w473)
            chip->w484 |= 1; // C
        if (!chip->w476)
            chip->w484 |= 16; // H
        if (!chip->w450)
            chip->w484 |= 128; // S
        if (!chip->w441)
            chip->w484 |= 4; // P/V
        if (!chip->w486)
            chip->w484 |= 64; // Z
    }

    chip->w385 = !(chip->w114 || chip->w109);
    if (clk)
        chip->l57 = chip->w385;
    chip->w432 = !clk && chip->l57;

    chip->w426 = !(chip->w390 && !chip->w154);
    chip->w427 = !clk && !chip->w426;
    chip->w428 = chip->l56 && chip->w426 && !clk;

    chip->w446 = !chip->w442 && !chip->w433;
}

void Z80_CalcAlu(z80_t *chip)
{
    int o1, o2, t, t2, c;

    if (chip->alu_calc)
        return;
    {
        int t;
        if (chip->w481)
            t = chip->w511 ^ 255;
        else
            t = chip->w511;

        if (chip->w446)
            chip->w512 = t & 15;
        else
            chip->w512 = (t >> 4) & 15;
    }

    chip->w504 = 0;
    c = !(chip->w467 ^ chip->w476);

    o1 = (chip->w512 & 1) != 0;
    o2 = (chip->w500 & 1) != 0;
    t = !((c && (o1 || o2)) || (o1 && o2) || chip->w455);
    t2 = ((o1 || o2 || c) && (t || chip->w454)) || (o1 && o2 && c);
    c = !t && !chip->w456;
    chip->w504 |= t2 << 0;

    o1 = (chip->w512 & 2) != 0;
    o2 = (chip->w500 & 2) != 0;
    t = !((c && (o1 || o2)) || (o1 && o2) || chip->w455);
    t2 = ((o1 || o2 || c) && (t || chip->w454)) || (o1 && o2 && c);
    c = !t && !chip->w456;
    chip->w504 |= t2 << 1;

    o1 = (chip->w512 & 4) != 0;
    o2 = (chip->w500 & 4) != 0;
    t = !((c && (o1 || o2)) || (o1 && o2) || chip->w455);
    t2 = ((o1 || o2 || c) && (t || chip->w454)) || (o1 && o2 && c);
    c = !t && !chip->w456;
    chip->w504 |= t2 << 2;

    chip->w508 = c;

    o1 = (chip->w512 & 8) != 0;
    o2 = (chip->w500 & 8) != 0;
    t = !((c && (o1 || o2)) || (o1 && o2) || chip->w455);
    t2 = ((o1 || o2 || c) && (t || chip->w454)) || (o1 && o2 && c);
    c = !t && !chip->w456;
    chip->w504 |= t2 << 3;

    chip->w507 = c;

    chip->alu_calc = 1;
}

void Z80_AluLogic(z80_t *chip, int clk)
{
    if (clk)
        chip->l63 = chip->w180;
    chip->w454 = !chip->l63 && !chip->w115;

    if (clk)
        chip->l64 = chip->w181;
    chip->w455 = !chip->l64 && !chip->w115;

    if (clk)
        chip->l65 = chip->w168;
    chip->w456 = !chip->l65 && !chip->w115;
    if (clk)
        chip->w453 = chip->pla[15];
    if (chip->w378)
        chip->w496 = chip->w511;
    if (!chip->w402)
    {
        chip->bu3 = 255;
        chip->w513 = chip->w496 ^ 255;
    }
}

void Z80_RegistersLogic2(z80_t* chip, int clk)
{
    chip->pull1[0] = 0;
    chip->pull1[1] = 0;
    chip->pull2[0] = 0;
    chip->pull2[1] = 0;
    chip->ix = -1;
    if (!clk)
    {
        if (!chip->w364)
            chip->ix = 0;
        else if (!chip->w363)
            chip->ix = 1;
        else if (!chip->w355)
            chip->ix = 2;
        else if (!chip->w354)
            chip->ix = 3;
        else if (!chip->w353)
            chip->ix = 4;
        else if (!chip->w352)
            chip->ix = 5;
        else if (!chip->w350)
            chip->ix = 6;
        else if (!chip->w348)
            chip->ix = 7;
        else if (!chip->w342)
            chip->ix = 8;
        else if (!chip->w340)
            chip->ix = 9;
        else if (!chip->w319)
            chip->ix = 10;
        else if (!chip->w314)
            chip->ix = 11;
        if (chip->ix >= 0)
        {
            chip->pull1[0] |= chip->regs_[chip->ix][1];
            chip->pull1[1] |= chip->regs_[chip->ix][0];
        }
#if 0
        if (!clk && chip->ix >= 0)
        {
            chip->w514 = chip->regs_[chip->ix][0];
            chip->w515 = chip->regs_[chip->ix][1];
            if (chip->w338)
            {
                chip->w520 = chip->w514;
                chip->w521 = chip->w515;
            }
        }
#endif

    }
    if (!chip->w215)
        chip->w528 = chip->w527 ^ 0xffff;
    else
        chip->w528 = 0;
    chip->w529 = chip->w528 ^ 0xffff;



    if (chip->w335)
    {
        chip->pull2[0] |= chip->w529;
        chip->pull2[1] |= chip->w528;
    }

    if (chip->w336)
    {
        chip->pull2[0] |= chip->regs2_[0][1];
        chip->pull2[1] |= chip->regs2_[0][0];
    }
    if (chip->w337)
    {
        chip->pull2[0] |= chip->regs2_[1][1];
        chip->pull2[1] |= chip->regs2_[1][0];
    }

    if (chip->w338)
    {
        int pull = chip->pull1[0] | chip->pull2[0];
        chip->pull1[0] = pull;
        chip->pull2[0] = pull;
        pull = chip->pull1[1] | chip->pull2[1];
        chip->pull1[1] = pull;
        chip->pull2[1] = pull;
    }

    //chip->w514 &= ~pull1[0];
    //chip->w515 &= ~pull1[1];
    //
    //chip->w520 &= ~pull2[0];
    //chip->w521 &= ~pull2[1];


    if (clk && chip->w210)
        chip->w524 = (chip->w522 & 0xffff) != 1;
    chip->w438 = !chip->w524;
    if (clk)
    {
        if (chip->w339)
        {
            chip->w514 = 0xffff;
            chip->w515 = 0xffff;
            if (chip->w338)
            {
                chip->w520 = 0xffff;
                chip->w521 = 0xffff;
            }
            {
                int i;
                int c[16], o[16], o2[15];
                chip->w523 = 0;
                chip->w525 = chip->w522 & 0x7fff;
                if (!chip->w210)
                    chip->w525 ^= 0x7fff;
                for (i = 0; i < 16; i++)
                    o[i] = (chip->w522 >> i) & 1;
                for (i = 0; i < 15; i++)
                    o2[i] = (chip->w525 >> i) & 1;
                c[0] = !chip->w193;
                c[1] = !chip->w193 && !o2[0];
                c[2] = !chip->w193 && !o2[0] && !o2[1];
                c[3] = !o2[2] && c[2];
                c[4] = !o2[3] && !o2[2] && c[2];
                c[5] = !o2[4] && c[4];
                c[6] = !o2[5] && !o2[4] && c[4];
                c[7] = !o2[6] && !o2[5] && !o2[4] && !o2[3] && !o2[2] && !o2[1] && !o2[0] && !chip->w193 && !chip->w321;
                c[8] = !o2[7] && c[7];
                c[9] = !o2[8] && !o2[7] && c[7];
                c[10] = !o2[9] && c[9];
                c[11] = !o2[10] && !o2[9] && c[9];
                c[12] = !o2[11] && !o2[10] && !o2[9] && !o2[8] && !o2[7] && c[7];
                c[13] = !o2[12] && c[12];
                c[14] = !o2[13] && !o2[12] && c[12];
                c[15] = !o2[14] && !o2[13] && !o2[12] && c[12];

                for (i = 0; i < 16; i++)
                    chip->w523 |= (c[i] ^ o[i] ^ 1) << i;
            }
            chip->w527 = chip->w523;
        }
    }

    chip->w194 = !chip->w202 && !chip->w203;
    if (clk && chip->w194)
        chip->w526 = chip->w522 ^ 0xffff;

    chip->o_addr_high = 1;
    if (!chip->w323)
    {
        chip->o_addr = chip->w526 ^ 0xffff;
        chip->o_addr_high = 0;
    }

    chip->w514 = chip->pull1[0] ^ 0xffff;
    chip->w515 = chip->pull1[1] ^ 0xffff;
    chip->w520 = chip->pull2[0] ^ 0xffff;
    chip->w521 = chip->pull2[1] ^ 0xffff;
    if (!clk)
    {
        if (chip->w334)
            chip->w522 = chip->w520;
    }
    if (!clk)
    {
        if (!chip->w518)
        {
            chip->bu2 = 255;
            chip->w484 = chip->w515;
        }
        if (!chip->w519)
        {
            chip->bu3 = 255;
            chip->w513 = (chip->w515 >> 8) & 255;
        }
    }
}

void Z80_BusLogic2(z80_t *chip, int clk)
{
    {
        int val = 0;
        int val2 = 0;
        int umask = 0;
        if (chip->w369 && chip->w419)
        {
            umask |= chip->bu1 | chip->bu2 | chip->bu3;
            val |= (chip->w146 & chip->bu1);
            val |= (chip->w484 & chip->bu2);
            val |= (chip->w513 & chip->bu3);
            val2 = 255;
            val2 &= chip->w146;
            val2 &= chip->w484;
            val2 &= chip->w513;
            val2 &= ~umask;
            chip->w146 = val | val2;
            chip->w484 = val | val2;
            chip->w513 = val | val2;
        }
        else if (chip->w369) // bus1, bus2
        {
            umask |= chip->bu1 | chip->bu2;
            val |= (chip->w146 & chip->bu1);
            val |= (chip->w484 & chip->bu2);
            val2 = 255;
            val2 &= chip->w146;
            val2 &= chip->w484;
            val2 &= ~umask;
            chip->w146 = val | val2;
            chip->w484 = val | val2;
        }
        else if (chip->w419) // bus2, bus3
        {
            umask |= chip->bu2 | chip->bu3;
            val |= (chip->w484 & chip->bu2);
            val |= (chip->w513 & chip->bu3);
            val2 = 255;
            val2 &= chip->w484;
            val2 &= chip->w513;
            val2 &= ~umask;
            chip->w484 = val | val2;
            chip->w513 = val | val2;
        }
    }
    if (chip->w2)
        chip->w145 = chip->input.ext_data_i ^ 255;
    else if (chip->w42)
        chip->w145 = chip->w146;
    chip->ext_data_o_high = 1;
    if (!chip->w44)
    {
        chip->ext_data_o = chip->w145 ^ 255;
        chip->ext_data_o_high = 0;
    }
}

void Z80_AluLogic2(z80_t *chip, int clk)
{
    if (clk)
        chip->w425 = 1;
    else
    {
        if (chip->w407)
            chip->w425 = 1;
        else if (chip->w424 && chip->w405)
            chip->w425 = chip->w423;
        else if (chip->w424 && chip->w408)
            chip->w425 = (chip->w484 & 128) != 0;
        else if (chip->w424 && chip->w409)
            chip->w425 = (chip->w484 & 1) != 0;
    }
    chip->w495 = chip->w409 && (chip->w147 & 8) == 0 && chip->w470;
    if (chip->w493)
        chip->w496 = chip->w513;
    if (chip->w471)
    {
        chip->w496 = (chip->w513 << 1) & 0xff;
        if (!chip->w495)
            chip->w496 |= !chip->w422;
    }
    if (chip->w472)
    {
        chip->w496 = (chip->w513 >> 1) & 0x7f;
        chip->w496 |= chip->w425 << 7;
    }
    chip->w497 = (1 << (((chip->w146 >> 3) & 7) ^ 7)) ^ 255;

    if (chip->w372)
        chip->w496 = chip->w497;

    if (chip->w373)
        chip->w496 = chip->w498;

    if (chip->w495)
    {
        chip->w496 &= 0xfe;
        chip->w496 |= (chip->w484 >> 7) & 1;
    }

    if (!clk)
    {
        if (chip->w436)
            chip->w445 = 0;
        else if (chip->w382)
            chip->w445 = (chip->w484 & 64) != 0;
        else if (chip->w440)
        {
            Z80_CalcAlu(chip);
            chip->w445 = (chip->w487 || (chip->w503 & 15) != 0 || (chip->w504 & 15) != 0);
        }
    }
    chip->w486 = !chip->w445;
    chip->w487 = !chip->w486;

    chip->w439 = !clk && !chip->w162 && !chip->w429;

    if (clk)
        chip->w452 = !chip->w158;
    if (clk)
    {
        Z80_CalcAlu(chip);
        chip->w505 = !(((chip->w485 ^ ((chip->w504 & 1) != 0)) ^ ((chip->w504 & 2) != 0)) ^ ((chip->w504 & 4) != 0));
        chip->l62 = chip->w505;
    }
    if (clk)
        chip->w449 = !chip->l78;
    if (chip->w432)
        chip->l83 = (chip->w484 & 1) != 0;
    if (chip->w432)
        chip->l84 = (chip->w484 & 16) != 0;
    chip->w466 = !clk && chip->w390 && !chip->pla[21];
    chip->w457 = (chip->pla[30] && (chip->w147 & 8) == 0) || !chip->w160;

    if (!clk)
    {
        if (chip->w382)
            chip->w464 = (chip->w484 & 2) == 0;
        if (chip->w465)
            chip->w464 = (chip->w484 & 128) == 0;
        if (chip->w466)
            chip->w464 = chip->w457;
    }
    chip->w397 = !((chip->w41 || chip->w109 || chip->w68) && chip->w127);
    if (clk)
        chip->l72 = chip->w397;
    chip->w467 = !(chip->w464 && !chip->w115);
    chip->w468 = !(chip->w464 && !(chip->w115 && chip->l72));
    chip->w481 = !chip->w468;
    if (clk)
        chip->w470 = !chip->w268 && chip->w271;

    chip->w469 = !clk && chip->w470;

    chip->w471 = chip->w470 && (chip->w147 & 8) == 0;
    chip->w472 = chip->w470 && (chip->w147 & 8) != 0;
    chip->w424 = !clk && chip->w472;

    chip->w475 = !(chip->w443 && chip->w370);
    chip->w474 = !clk && !chip->w475;

    chip->w477 = !(chip->w467 ^ chip->w507);

    if (chip->w446 && clk)
        chip->l75 = chip->w477;

    if (!clk)
    {
        if (chip->w469)
        {
            if (chip->w472)
                chip->w473 = (chip->w484 & 1) == 0;
            if (chip->w471)
                chip->w473 = (chip->w484 & 128) == 0;
        }
        if (chip->w382)
            chip->w473 = (chip->w484 & 1) == 0;
        if (chip->w474)
            chip->w473 = !0;
        if (chip->w458)
            chip->w473 = chip->w477;
        if (chip->w463)
            chip->w473 = !chip->w476;
    }
    if (chip->w432)
        chip->w499 = (chip->w496 >> 4) ^ 15;
    if (!clk)
    {
        if (chip->w428)
            chip->w498 = (chip->w496 & 255) ^ 255;
        if (chip->w427)
            chip->w498 = 0;
        if (chip->w480)
        {
            chip->w498 &= 0xf0;
            chip->w498 ^= (chip->w499 & 15) ^ 15;
        }
    }
    chip->w502 = !((chip->w498 & 8) != 0 && ((chip->w498 & 4) != 0 || (chip->w498 & 2) != 0));
    chip->w501 = !((chip->w498 & 128) != 0 && ((chip->w498 & 64) != 0 || (chip->w498 & 32) != 0
        || ((chip->w498 & 16) != 0) && !chip->w502));
    chip->w443 = !(chip->pla[21] && chip->l83 && chip->w501);
    chip->w444 = !(chip->pla[21] && chip->l84 && chip->w502);
    if (chip->w446)
        chip->w500 = chip->w498 & 15;
    else
        chip->w500 = (chip->w498 >> 4) & 15;
    if (chip->w432)
        chip->w510 = ((chip->w500 & 15) | ((chip->w496 & 15) << 4)) ^ 255;
    if (!clk)
    {
        if (chip->w480)
            chip->w511 = chip->w510 ^ 255;
        if (chip->w492)
            chip->w511 = chip->w496 ^ 255;
        if (chip->w490 && chip->w491)
            chip->w511 = 0;
        else if (chip->w491)
            chip->w511 &= 0x38;
        else if (chip->w490)
            chip->w511 &= 0x7f;
    }

    if (chip->w446)
    {
        Z80_CalcAlu(chip);
        chip->w503 = chip->w504;
    }

    if (chip->w377)
    {
        Z80_CalcAlu(chip);
        chip->w496 = chip->w503 | (chip->w504 << 4);
    }

    if (!clk)
    {
        if (chip->w382)
            chip->w441 = (chip->w484 & 4) == 0;
        else if (chip->w437)
            chip->w441 = !chip->w438;
        else if (chip->w436)
            chip->w441 = !0;
        else if (chip->w439)
            chip->w441 = !chip->w449;
        else if (chip->w440)
        {
            if (chip->w452)
                chip->w441 = (chip->w508 ^ chip->w507) && !chip->w453;
            else
            {
                Z80_CalcAlu(chip);
                chip->w506 = ((chip->w504 & 8) != 0) ^ ((chip->w503 & 8) != 0);
                chip->w441 = chip->w506 ^ chip->l62;
            }
        }
    }
    chip->w485 = !chip->w441;
    if (chip->w446)
    {
        Z80_CalcAlu(chip);
        chip->w505 = !(((chip->w485 ^ ((chip->w504 & 1) != 0)) ^ ((chip->w504 & 2) != 0)) ^ ((chip->w504 & 4) != 0));
        chip->l78 = chip->w505;
    }
    if (!clk)
    {
        if (chip->w382)
            chip->w450 = (chip->w484 & 128) == 0;
        else if (chip->w440)
        {
            Z80_CalcAlu(chip);
            chip->w450 = (chip->w504 & 8) != 0;
        }
    }
}

void Z80_RegistersLogic3(z80_t *chip, int clk)
{
    if (!clk)
    {
        if (chip->w516)
        {
            chip->pull1[0] |= chip->w484 & 255;
            chip->pull1[1] |= (chip->w484 & 255) ^ 255;
        }
        if (chip->w517)
        {
            chip->pull1[0] |= (chip->w513 & 255) << 8;
            chip->pull1[1] |= ((chip->w513 ^ 255) & 255) << 8;
        }
        if (!clk && chip->ix >= 0)
        {
            int p1 = chip->pull1[0] | chip->regs_[chip->ix][1];
            int p2;
            chip->regs_[chip->ix][0] = p1 ^ 0xffff;
            p2 = chip->pull1[1] | chip->regs_[chip->ix][0];
            chip->regs_[chip->ix][1] = p2 ^ 0xffff;
        }
    }
    if (chip->w338)
    {
        int pull = chip->pull1[0] | chip->pull2[0];
        chip->pull1[0] = pull;
        chip->pull2[0] = pull;
        pull = chip->pull1[1] | chip->pull2[1];
        chip->pull1[1] = pull;
        chip->pull2[1] = pull;
    }
    if (chip->w336)
    {
        int p1 = chip->pull2[0] | chip->regs2_[0][1];
        int p2;
        chip->regs2_[0][0] = p1 ^ 0xffff;
        p2 = chip->pull2[1] | chip->regs2_[0][0];
        chip->regs2_[0][1] = p2 ^ 0xffff;
    }
    if (chip->w337)
    {
        int p1 = chip->pull2[0] | chip->regs2_[1][1];
        int p2;
        chip->regs2_[1][0] = p1 ^ 0xffff;
        p2 = chip->pull2[1] | chip->regs2_[1][0];
        chip->regs2_[1][1] = p2 ^ 0xffff;
    }

    chip->w514 = chip->pull1[0] ^ 0xffff;
    chip->w515 = chip->pull1[1] ^ 0xffff;
    chip->w520 = chip->pull2[0] ^ 0xffff;
    chip->w521 = chip->pull2[1] ^ 0xffff;
    if (!clk)
    {
        if (chip->w334)
            chip->w522 = chip->w520;
    }
}

void Z80_ConditionLogic(z80_t *chip, int clk)
{
    chip->w494 = !(((chip->w484 & 64) != 0 && chip->w409)
        || ((chip->w484 & 4) != 0 && chip->w408)
        || ((chip->w484 & 128) != 0 && chip->w407)
        || ((chip->w484 & 1) != 0 && chip->w405));

    chip->w421 = !clk && !chip->w419;
    if (!clk && chip->w421)
        chip->w420 = chip->w494;

    chip->w448 = !(chip->w420 ^ chip->w318);

    chip->w383 = !(chip->w279 || !chip->w486);
    chip->w299 = (!chip->w220 && chip->w438) || chip->w383 || (chip->w265 && chip->w448);

    // end of instruction
    if (clk)
        chip->l4 = !(chip->w55 || !chip->w97 || !chip->w118 || chip->w133);
}

void Z80_Clock(z80_t *chip, int clk)
{
    chip->bu1 = 0;
    chip->bu2 = 0;
    chip->bu3 = 0;
    chip->alu_calc = 0;

    Z80_ClkLatches(chip, clk);
    Z80_ResetLogic(chip, clk);
    Z80_StateLogic(chip, clk);
    Z80_InterruptLogic(chip, clk);
    Z80_IOLogic(chip, clk);
    Z80_BusLogic(chip, clk);
    Z80_OpcodeFetch(chip, clk);
    Z80_HaltLogic(chip, clk);
    Z80_InterruptFlipFlops(chip, clk);
    Z80_OpcodeDecode(chip, clk);
    Z80_InterruptLogic2(chip, clk);
    Z80_RegistersLogic(chip, clk);
    Z80_AluControlLogic(chip, clk);
    Z80_AluLogic(chip, clk);
    Z80_RegistersLogic2(chip, clk);
    Z80_BusLogic2(chip, clk);
    Z80_AluLogic2(chip, clk);
    Z80_RegistersLogic3(chip, clk);
    Z80_ConditionLogic(chip, clk);
}


void Z80_Clock2(z80_t *chip, int clk)
{
    chip->input.clk = clk;
    if (!memcmp(&chip->input, &chip->input_old, sizeof(chip->input)))
        return;

    Z80_Clock(chip, clk);
    Z80_Clock(chip, clk);
    chip->input_old = chip->input;
}
