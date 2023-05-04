// FC1004 IO chip
#include <string.h>
#include "iochip.h"

void IOC_Clock_Port(iochip_t *chip, controller_port_t *port, int port_id)
{
    int i1, i2, i3, i4, i5;
    int j;

    SDFFR_UpdateWide(&port->p_control, port->write_p_control, chip->data_bus, chip->reset && chip->input.ext_m3, 255);

    port->port_d = (port->p_control.q & 127) ^ 127;
    if (port->s_control.q & 2)
        port->port_d &= ~16;
    if (port->s_control.q & 4)
        port->port_d |= 32;

    SDFFR_UpdateWide(&port->p_data, port->write_p_data, chip->data_bus, 1, 255);

    port->port_o = port->p_data.q & 0x6f;
    if ((port->s_control.q & 2) == 0)
        port->port_o |= port->p_data.q & 16;
    else
        port->port_o |= port->tx_bit.l2 << 4;

    SDFFR_UpdateWide(&port->s_control, port->write_s_control, chip->data_bus >> 3, chip->reset && chip->input.ext_m3, 31);

    if (!port->write_tx_data)
        port->tx_data = chip->data_bus;

    switch ((port->s_control.q >> 3) & 3)
    {
        case 0:
            port->uart_clk1 = chip->uart_clk2;
            port->uart_clk2 = chip->uart_clk_div[3].q;
            break;
        case 1:
            port->uart_clk1 = chip->uart_clk_div[0].q;
            port->uart_clk2 = chip->uart_clk_div[4].q;
            break;
        case 2:
            port->uart_clk1 = chip->uart_clk_div[1].q;
            port->uart_clk2 = chip->uart_clk_div[5].q;
            break;
        case 3:
            port->uart_clk1 = chip->uart_clk_div[3].q;
            port->uart_clk2 = chip->uart_clk_div[7].q;
            break;
    }

    SDFFR_UpdateWide(&port->tx_shifter, port->uart_clk2,
        port->tx_step ? (port->tx_shifter.q >> 1) & 63 : (port->tx_data ^ 255),
        (port->s_control.q & 2) != 0, 255);

    SDFFS_Update(&port->tx_bit, port->uart_clk2, !(port->tx_shifter.q & 1) && port->tx_step,
        (port->s_control.q & 2) != 0);

    i1 = (port->tx_fsm4.q && port->tx_fsm1.nq)
        || (port->tx_fsm1.nq && port->tx_fsm4.nq && port->tx_state2_l.l2)
        || (port->tx_fsm4.q && port->tx_fsm1.q && port->tx_fsm2.q);
    i2 = (port->tx_fsm1.nq && port->tx_fsm4.nq && port->tx_state2_l.l2) || (port->tx_fsm1.q && port->tx_fsm2.q)
        || (port->tx_fsm2.nq && port->tx_fsm1.nq && port->tx_fsm3.q && port->tx_fsm4.nq);
    i3 = (port->tx_fsm1.nq && port->tx_fsm4.nq && port->tx_state2_l.l2)
        || (port->tx_fsm4.q && port->tx_fsm1.q && port->tx_fsm2.q)
        || (port->tx_fsm2.q && port->tx_fsm4.q && port->tx_fsm3.q)
        || (port->tx_fsm4.q && port->tx_fsm3.q && port->tx_fsm1.q);
    i4 = (port->tx_fsm1.q && port->tx_fsm2.q)
        || (port->tx_fsm2.nq && port->tx_fsm1.nq && port->tx_fsm3.q && port->tx_fsm4.nq)
        || (port->tx_fsm4.q && port->tx_fsm1.q)
        || (port->tx_fsm4.q && port->tx_fsm2.q);
    i5 = !(port->tx_fsm1.nq && port->tx_fsm2.nq && port->tx_fsm3.nq && port->tx_fsm3.q);

    SDFFR_Update(&port->tx_fsm1, port->uart_clk2, i1, chip->reset);
    SDFFR_Update(&port->tx_fsm2, port->uart_clk2, i2, chip->reset);
    SDFFR_Update(&port->tx_fsm3, port->uart_clk2, i3, chip->reset);
    SDFFR_Update(&port->tx_fsm4, port->uart_clk2, i4, chip->reset);
    SDFFS_Update(&port->tx_fsm5, port->uart_clk2, i5, chip->reset);

    port->tx_step = !(port->tx_state2_l.l2 && port->tx_fsm1.nq && port->tx_fsm2.nq && port->tx_fsm3.nq && port->tx_fsm4.nq);

    SDFFSR_Update(&port->tx_state1, port->uart_clk2, !port->tx_step && port->tx_state1.q, port->write_tx_data, chip->reset);
    SDFFSR_Update(&port->tx_state2, port->tx_fsm5.q, 0, port->tx_state1.nq, chip->reset);

    SDFF_Update(&port->tx_state2_l, port->uart_clk1, port->tx_state2.q);


    SDFFS_Update(&port->rx_input_bit, port->uart_clk1, (port->port_i & 32) != 0, (port->s_control.q & 4) != 0);

    j = !(port->rx_fsm1_1.nq || !(port->rx_fsm2_1.nq && port->rx_fsm2_4.nq) || port->rx_input_bit.q);
    i1 = !((port->rx_fsm1_2.q || j) && (port->rx_fsm1_1.nq || j));
    i2 = (port->rx_fsm1_4.nq && port->rx_fsm1_5.q && port->rx_fsm1_3.nq && !port->rx_fsm1_2.q)
        || (port->rx_fsm1_2.q && port->rx_fsm1_3.q)
        || (port->rx_fsm1_2.q && port->rx_fsm1_5.nq)
        || (port->rx_fsm1_2.q && port->rx_fsm1_4.q)
        || j;
    i3 = j
        || (port->rx_fsm1_3.q && port->rx_fsm1_4.q)
        || (port->rx_fsm1_4.nq && port->rx_fsm1_5.q && port->rx_fsm1_3.nq)
        || (port->rx_fsm1_3.q && port->rx_fsm1_5.nq);
    i4 = j
        || (port->rx_fsm1_5.nq && port->rx_fsm1_4.q)
        || (port->rx_fsm1_5.q && port->rx_fsm1_4.nq);
    i5 = !(j || port->rx_fsm1_5.q);
    SDFFR_Update(&port->rx_fsm1_1, port->uart_clk1, i1, chip->reset);
    SDFFS_Update(&port->rx_fsm1_2, port->uart_clk1, i2, chip->reset);
    SDFFS_Update(&port->rx_fsm1_3, port->uart_clk1, i3, chip->reset);
    SDFFS_Update(&port->rx_fsm1_4, port->uart_clk1, i4, chip->reset);
    SDFFR_Update(&port->rx_fsm1_5, port->uart_clk1, i5, chip->reset);
    port->rx_clk = port->rx_fsm1_2.nq;

    j = (port->rx_fsm2_1.nq && port->rx_fsm2_4.nq && !port->rx_input_bit.q && port->rx_fsm1_1.nq);
    i1 = j
        || (port->rx_fsm2_1.q && port->rx_fsm2_2.q && port->rx_fsm2_3.nq && port->rx_fsm2_4.nq)
        || (port->rx_fsm2_1.q && port->rx_fsm2_3.q && port->rx_fsm2_4.nq)
        || (port->rx_fsm2_1.q && port->rx_fsm2_4.q);
    i2 = j
        || (port->rx_fsm2_1.q && port->rx_fsm2_2.nq && port->rx_fsm2_3.nq && port->rx_fsm2_4.nq)
        || (port->rx_fsm2_1.q && port->rx_fsm2_3.q && port->rx_fsm2_4.q)
        || (port->rx_fsm2_1.q && port->rx_fsm2_2.q && port->rx_fsm2_4.q);
    i3 = j
        || (port->rx_fsm2_1.q && port->rx_fsm2_2.nq && port->rx_fsm2_3.nq && port->rx_fsm2_4.nq)
        || (port->rx_fsm2_1.q && port->rx_fsm2_2.q && port->rx_fsm2_3.nq && port->rx_fsm2_4.nq)
        || (port->rx_fsm2_1.q && port->rx_fsm2_2.q && port->rx_fsm2_3.q);
    i4 = j
        || (port->rx_fsm2_1.q && port->rx_fsm2_2.nq && port->rx_fsm2_3.nq && port->rx_fsm2_4.nq)
        || (port->rx_fsm2_1.q && port->rx_fsm2_2.q && port->rx_fsm2_3.nq && port->rx_fsm2_4.nq)
        || (port->rx_fsm2_1.q && port->rx_fsm2_3.q && port->rx_fsm2_4.nq);
    i5 = !(port->rx_fsm2_1.q && port->rx_fsm2_2.nq && port->rx_fsm2_3.nq && port->rx_fsm2_4.nq);
    SDFFR_Update(&port->rx_fsm2_1, port->uart_clk1, i1, chip->reset);
    SDFFR_Update(&port->rx_fsm2_2, port->uart_clk1, i2, chip->reset);
    SDFFR_Update(&port->rx_fsm2_3, port->uart_clk1, i3, chip->reset);
    SDFFR_Update(&port->rx_fsm2_4, port->uart_clk1, i4, chip->reset);
    SDFFS_Update(&port->rx_fsm2_5, port->uart_clk1, i5, chip->reset);
    port->rx_clk2 = port->rx_clk || port->rx_fsm2_5.q;

    SDFFR_UpdateWide(&port->rx_shifter, port->rx_clk, ((port->rx_shifter.q << 1) | port->rx_input_bit.q) & 255,
        (port->s_control.q & 4) != 0, 255);

    SDFFR_Update(&port->rx_ready, port->rx_clk2, 1, chip->reset && port->read_rx_data);
    SDFFR_Update(&port->rx_error, port->rx_clk2, port->rx_input_bit.nq, chip->reset && port->read_rx_data);
    SDFFR_UpdateWide(&port->rx_data, port->rx_clk2, port->rx_shifter.q, 1, 255); // FIXME: delay chain?

    port->irq_b6 = (port->port_i & 64) == 0 && (port->p_control.q & 128) != 0;
    port->irq_uart = port->rx_ready.q && (port->s_control.q & 1) != 0;
}

void IOC_Clock(iochip_t *chip)
{
    int load;
    SDFF_Update(&chip->res_dff, chip->input.ext_vclk, chip->input.ext_sres);

    chip->ext_fres = !chip->res_dff.l2;
    chip->reset = chip->res_dff.l2;

    chip->pal = !chip->input.ext_ntsc;

    load = !(!chip->reset || (chip->cnt1.l2 == 15 && chip->cnt2.l2 == 15));
    SCNT_UpdateWide(&chip->cnt1, chip->input.ext_vclk, load, chip->pal ? 13 : 12, load, 1, 15, 4);
    SCNT_UpdateWide(&chip->cnt2, chip->input.ext_vclk, load, 9, load && chip->cnt1.l2 == 15, 1, 15, 4);
    chip->uart_clk = (chip->cnt2.l2 >> 2) & 1;

    chip->uart_clk2 = chip->input.ext_test ? chip->input.ext_vclk : chip->uart_clk;

    SDFFR_Update(&chip->uart_clk_div[0], !chip->uart_clk2, chip->uart_clk_div[0].nq, chip->reset);
    SDFFR_Update(&chip->uart_clk_div[1], !chip->uart_clk_div[0].q, chip->uart_clk_div[1].nq, chip->reset);
    SDFFR_Update(&chip->uart_clk_div[2], !chip->uart_clk_div[1].q, chip->uart_clk_div[2].nq, chip->reset);
    SDFFR_Update(&chip->uart_clk_div[3], !chip->uart_clk_div[2].q, chip->uart_clk_div[3].nq, chip->reset);
    SDFFR_Update(&chip->uart_clk_div[4], !chip->uart_clk_div[3].q, chip->uart_clk_div[4].nq, chip->reset);
    SDFFR_Update(&chip->uart_clk_div[5], !chip->uart_clk_div[4].q, chip->uart_clk_div[5].nq, chip->reset);
    SDFFR_Update(&chip->uart_clk_div[6], !chip->uart_clk_div[5].q, chip->uart_clk_div[6].nq, chip->reset);
    SDFFR_Update(&chip->uart_clk_div[7], !chip->uart_clk_div[6].q, chip->uart_clk_div[7].nq, chip->reset);

    chip->address = chip->input.ext_m3 ? (chip->input.ext_vaddress_in & 127) : (chip->input.ext_zaddress_in & 255);
    chip->ztov_address = chip->input.ext_m3 ? ((chip->input.ext_zaddress_in >> 1) & 127) : (chip->input.ext_zaddress_in & 127);

    if (chip->input.ext_m3)
        chip->read_address = chip->address & 15;
    else
        chip->read_address = (chip->address & 1) ? 2 : 1;

    chip->data_bus = chip->input.ext_m3 ? (chip->input.ext_vdata_in & 255) : (chip->input.ext_zdata_in & 255);

    switch (chip->read_address)
    {
        case 0:
            if (chip->input.ext_test)
            {
                chip->read_data = 0;
                if (chip->port_a.uart_clk1)
                    chip->read_data |= 1;
                if (chip->port_a.uart_clk2)
                    chip->read_data |= 2;
                if (chip->port_b.uart_clk1)
                    chip->read_data |= 4;
                if (chip->port_b.uart_clk2)
                    chip->read_data |= 8;
                if (chip->port_c.uart_clk1)
                    chip->read_data |= 16;
                if (chip->port_c.uart_clk2)
                    chip->read_data |= 32;
                if (chip->uart_clk)
                    chip->read_data |= 64;
            }
            else
            {
                chip->read_data = 1;
                if (chip->input.ext_disk)
                    chip->read_data |= 32;
                if (chip->pal)
                    chip->read_data |= 64;
            }
            if (chip->input.ext_jap)
                chip->read_data |= 128;
            break;
        case 1:
            chip->read_data = chip->port_a.port_i & 15;
            if (chip->input.ext_m3)
            {
                chip->read_data |= chip->port_a.port_i & 112;
                if (chip->port_a.p_data.q & 128)
                    chip->read_data |= 128;
            }
            else
            {
                chip->read_data |= chip->port_a.port_i & 16;
                int dir_a = (chip->port_a_d >> 5) & 3;
                if (chip->input.ext_jap)
                    dir_a = 3;
                if ((dir_a & 1) != 0 && (chip->port_a.port_i & 32) != 0)
                    chip->read_data |= 32;
                chip->read_data |= (chip->port_b.port_i << 6) & 192;
            }
            break;
        case 2:
            if (chip->input.ext_m3)
            {
                chip->read_data = chip->port_b.port_i & 127;
                if (chip->port_b.p_data.q & 128)
                    chip->read_data |= 128;
            }
            else
            {
                chip->read_data = 16;
                chip->read_data |= (chip->port_b.port_i & 28) >> 2;
                int dir_a = (chip->port_a_d >> 5) & 3;
                int dir_b = (chip->port_b_d >> 5) & 3;
                if (chip->input.ext_jap)
                    dir_a = dir_b = 3;
                if ((dir_b & 1) != 0 && (chip->port_b.port_i & 32) != 0)
                    chip->read_data |= 8;
                if ((dir_a & 2) != 0 && (chip->port_a.port_i & 64) != 0)
                    chip->read_data |= 64;
                if ((dir_b & 2) != 0 && (chip->port_b.port_i & 64) != 0)
                    chip->read_data |= 128;
            }
            break;
        case 3:
            chip->read_data = chip->port_c.port_i & 127;
            if (chip->port_c.p_data.q & 128)
                chip->read_data |= 128;
            break;
        case 4:
            chip->read_data = chip->port_a.p_control.q & 255;
            break;
        case 5:
            chip->read_data = chip->port_b.p_control.q & 255;
            break;
        case 6:
            chip->read_data = chip->port_c.p_control.q & 255;
            break;
        case 7:
            chip->read_data = chip->port_a.tx_data;
            break;
        case 8:
            chip->read_data = chip->port_a.rx_data.q;
            break;
        case 9:
            chip->read_data = (chip->port_a.s_control.q << 3) & 248;
            if (chip->port_a.tx_state1.q)
                chip->read_data |= 1;
            if (chip->port_a.rx_ready.q)
                chip->read_data |= 2;
            if (chip->port_a.rx_error.q)
                chip->read_data |= 4;
            break;
        case 10:
            chip->read_data = chip->port_b.tx_data;
            break;
        case 11:
            chip->read_data = chip->port_b.rx_data.q;
            break;
        case 12:
            chip->read_data = (chip->port_b.s_control.q << 3) & 248;
            if (chip->port_b.tx_state1.q)
                chip->read_data |= 1;
            if (chip->port_b.rx_ready.q)
                chip->read_data |= 2;
            if (chip->port_b.rx_error.q)
                chip->read_data |= 4;
            break;
        case 13:
            chip->read_data = chip->port_c.tx_data;
            break;
        case 14:
            chip->read_data = chip->port_c.rx_data.q;
            break;
        case 15:
            chip->read_data = (chip->port_c.s_control.q << 3) & 248;
            if (chip->port_c.tx_state1.q)
                chip->read_data |= 1;
            if (chip->port_c.rx_ready.q)
                chip->read_data |= 2;
            if (chip->port_c.rx_error.q)
                chip->read_data |= 4;
            break;
    }

    chip->vread = chip->input.ext_cas0 && chip->input.ext_io;
    chip->vwrite = chip->input.ext_lwr || chip->input.ext_io;
    chip->vsel = !(chip->input.ext_m3 && (chip->address & 0xf0) == 0);
    chip->vread_high = !chip->vsel && (chip->address & 16) != 0 && !chip->vread;
    chip->vwrite_low = !chip->vsel && (chip->address & 16) == 0 && !chip->vwrite;
    chip->vwrite_high = !chip->vsel && (chip->address & 16) != 0 && !chip->vwrite;

    chip->zwrite_sel = !((chip->address & 0xfe) == 0x3e && !chip->input.ext_m3 && !chip->vwrite);
    chip->zread_sel = !((chip->address & 0xe2) == 0xc0
        && ((chip->address & 0x1c) == 0 || (chip->address & 0x1c) == 0x1c) && !chip->input.ext_m3);
    chip->zaccess = (chip->zwrite_sel && chip->zread_sel) && chip->vsel;

    chip->zwrite0 = chip->zread_sel || (chip->address & 1) != 0;
    chip->zwrite1 = chip->zread_sel || (chip->address & 1) == 0;

    chip->port_a.read_rx_data = !(chip->vread_high && (chip->address & 7) == 0);
    chip->port_b.read_rx_data = !(chip->vread_high && (chip->address & 7) == 3);
    chip->port_c.read_rx_data = !(chip->vread_high && (chip->address & 7) == 6);
    chip->port_a.write_p_data = !(chip->vwrite_low && (chip->address & 7) == 1);
    chip->port_b.write_p_data = !(chip->vwrite_low && (chip->address & 7) == 2);
    chip->port_c.write_p_data = !(chip->vwrite_low && (chip->address & 7) == 3);
    chip->port_a.write_p_control = !(chip->vwrite_low && (chip->address & 7) == 4);
    chip->port_b.write_p_control = !(chip->vwrite_low && (chip->address & 7) == 5);
    chip->port_c.write_p_control = !(chip->vwrite_low && (chip->address & 7) == 6);
    chip->port_a.write_tx_data = !(chip->vwrite_low && (chip->address & 7) == 7);
    chip->port_a.write_s_control = !(chip->vwrite_high && (chip->address & 7) == 1);
    chip->port_b.write_tx_data = !(chip->vwrite_high && (chip->address & 7) == 2);
    chip->port_b.write_s_control = !(chip->vwrite_high && (chip->address & 7) == 4);
    chip->port_c.write_tx_data = !(chip->vwrite_high && (chip->address & 7) == 5);
    chip->port_c.write_s_control = !(chip->vwrite_high && (chip->address & 7) == 7);

    SDFFR_Update(&chip->reg_3e, chip->zwrite0, (chip->data_bus & 16) != 0, chip->reset);
    SDFFS_UpdateWide(&chip->reg_3f, chip->zwrite1, chip->data_bus, chip->reset, 255);

    IOC_Clock_Port(chip, &chip->port_a, 0);
    IOC_Clock_Port(chip, &chip->port_b, 1);
    IOC_Clock_Port(chip, &chip->port_c, 2);

    if (chip->input.ext_m3)
    {
        chip->port_a_d = chip->port_a.port_d;
        chip->port_a_o = chip->port_a.port_o;
        chip->port_b_d = chip->port_b.port_d;
        chip->port_b_o = chip->port_b.port_o;
    }
    else
    {
        chip->port_a_d = chip->port_a.port_d & 31;
        chip->port_a_o = chip->port_a.port_o & 31;
        chip->port_b_d = chip->port_b.port_d & 31;
        chip->port_b_o = chip->port_b.port_o & 31;
        if (chip->reg_3f.q & 1)
            chip->port_a_d |= 32;
        if (chip->reg_3f.q & 2)
            chip->port_a_d |= 64;
        if (chip->reg_3f.q & 4)
            chip->port_b_d |= 32;
        if (chip->reg_3f.q & 8)
            chip->port_b_d |= 64;
        if (chip->reg_3f.q & 16)
            chip->port_a_o |= 32;
        if (chip->reg_3f.q & 32)
            chip->port_a_o |= 64;
        if (chip->reg_3f.q & 64)
            chip->port_b_o |= 32;
        if (chip->reg_3f.q & 128)
            chip->port_b_o |= 64;
    }


    chip->io_access = !(chip->zaccess || chip->input.ext_io || chip->input.ext_cas0);

    chip->byte_sel = chip->input.ext_m3 && (chip->input.ext_zaddress_in & 1) == 0;

    chip->arb_w1 = !(chip->io_access && chip->input.ext_m3) && (chip->input.ext_zv || !chip->input.ext_cas0) && (chip->input.ext_vz || chip->input.ext_cas0);
    chip->arb_w2 = (chip->input.ext_zv || chip->input.ext_cas0) && (chip->input.ext_vz || !chip->input.ext_cas0);

    chip->ext_bc1 = chip->input.ext_vz || chip->input.ext_t1;
    chip->ext_bc2 = chip->arb_w1 || chip->input.ext_t1;
    chip->ext_bc3 = (chip->arb_w1 && chip->input.ext_m3) || chip->input.ext_t1;
    chip->ext_bc4 = chip->arb_w2 || chip->input.ext_t1;
    chip->ext_bc5 = chip->input.ext_zv || chip->input.ext_t1;

    chip->vdata = chip->io_access ? chip->read_data : chip->input.ext_zdata_in;
    chip->zdata = chip->io_access ? chip->read_data :
        (chip->byte_sel ? ((chip->input.ext_vdata_in >> 8) & 0xff) : (chip->input.ext_vdata_in & 0xff));

    if (chip->input.ext_m3)
    {
        chip->ext_hl = !(chip->port_a.irq_b6 || chip->port_a.irq_uart || chip->port_b.irq_b6 || chip->port_b.irq_uart
            || chip->port_c.irq_b6 || chip->port_c.irq_uart);
    }
    else
    {
        chip->ext_hl = !(((chip->port_a_d & 64) != 0 && (chip->port_a.ext_port_i & 64) == 0)
            || ((chip->port_b_d & 64) != 0 && (chip->port_b.ext_port_i & 64) == 0));
    }
}

void IOC_Clock2(iochip_t *chip)
{
    if (!memcmp(&chip->input, &chip->input_old, sizeof(chip->input)))
        return;

    IOC_Clock(chip);
    IOC_Clock(chip);
    IOC_Clock(chip);
    IOC_Clock(chip);
    IOC_Clock(chip);
    chip->input_old = chip->input;
}

void IOC_UpdateOutputBus(iochip_t *chip)
{
    if (!chip->ext_bc2)
    {
        *chip->ext_vdata_out &= ~0xff;
        *chip->ext_vdata_out |= chip->vdata;
    }
    if (!chip->ext_bc3)
    {
        *chip->ext_vdata_out &= ~0xff00;
        *chip->ext_vdata_out |= (chip->vdata & 0xfe) << 8;
        if (chip->input.ext_m3)
        {
            *chip->ext_vdata_out |= (chip->vdata & 1) << 8;
        }
        else
        {
            *chip->ext_vdata_out |= (chip->reg_3e.q & 1) << 8;
        }
    }
    if (!chip->ext_bc4)
    {
        *chip->ext_zdata_out = chip->zdata;
    }
    if (!chip->ext_bc5)
    {
        *chip->ext_vaddress_out &= ~0x7f;
        *chip->ext_vaddress_out |= chip->ztov_address & 0x7f;
    }
}
