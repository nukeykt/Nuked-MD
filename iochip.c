// FC1004 IO chip
#include <stdio.h>
#include "iochip.h"

void IOC_Clock_Port(iochip_t *chip, controller_port_t *port, int port_id)
{
    int i1, i2, i3, i4, i5;
    int j;
    if (chip->tm_w1)
        port->tx_data = chip->data_bus;

    SDFFR_UpdateWide(&port->p_control, port->write_p_control, chip->data_bus, chip->tm_w2, 255);

    port->port_d = (port->p_control.q & 127) ^ 127;
    if (!chip->tm_w1)
        port->port_d &= ~16;
    if (chip->tm_w1)
        port->port_d |= 32;

    SDFFR_UpdateWide(&port->p_data, port->write_p_data, chip->data_bus, 1, 255);

    port->port_o = port->p_data.q & 0x6f;
    if ((port->s_control.q & 2) == 0)
        port->port_o |= port->p_data.q & 16;
    else
        port->port_o |= port->tx_bit.l2 << 4;

    SDFFR_UpdateWide(&port->s_control, port->write_s_control, chip->data_bus >> 3, chip->tm_w1, 31);

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

    SDFFR_Update(&port->rx_ready, chip->tm_w1, 1, chip->reset && port->read_rx_data);
    SDFFR_Update(&port->rx_error, chip->tm_w1, port->rx_input_bit.nq, chip->reset && port->read_rx_data);

    j = !(port->rx_fsm1_1.nq || !chip->tm_w1 || port->rx_input_bit.q);
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
    SDFFR_UpdateWide(&port->rx_data, chip->tm_w1, port->rx_shifter.q, 1, 255); // FIXME: delay chain?
}

void IOC_Clock(iochip_t *chip)
{
    int load;
    SDFF_Update(&chip->res_dff, chip->ext_vclk, chip->ext_sres);

    chip->ext_fres = !chip->res_dff.l2;
    chip->reset = chip->res_dff.l2;

    chip->pal = !chip->ext_ntsc;

    load = !(!chip->reset || (chip->cnt1.l2 == 15 && chip->cnt2.l2 == 15));
    SCNT_UpdateWide(&chip->cnt1, chip->ext_vclk, load, chip->pal ? 13 : 12, load, 1, 15, 4);
    SCNT_UpdateWide(&chip->cnt2, chip->ext_vclk, load, 9, load && chip->cnt1.l2 == 15, 1, 15, 4);
    chip->uart_clk = (chip->cnt2.l2 >> 2) & 1;

    chip->uart_clk2 = chip->ext_test ? chip->ext_vclk : chip->uart_clk;

    SDFFR_Update(&chip->uart_clk_div[0], !chip->uart_clk2, chip->uart_clk_div[0].nq, chip->reset);
    SDFFR_Update(&chip->uart_clk_div[1], !chip->uart_clk_div[0].q, chip->uart_clk_div[1].nq, chip->reset);
    SDFFR_Update(&chip->uart_clk_div[2], !chip->uart_clk_div[1].q, chip->uart_clk_div[2].nq, chip->reset);
    SDFFR_Update(&chip->uart_clk_div[3], !chip->uart_clk_div[2].q, chip->uart_clk_div[3].nq, chip->reset);
    SDFFR_Update(&chip->uart_clk_div[4], !chip->uart_clk_div[3].q, chip->uart_clk_div[4].nq, chip->reset);
    SDFFR_Update(&chip->uart_clk_div[5], !chip->uart_clk_div[4].q, chip->uart_clk_div[5].nq, chip->reset);
    SDFFR_Update(&chip->uart_clk_div[6], !chip->uart_clk_div[5].q, chip->uart_clk_div[6].nq, chip->reset);
    SDFFR_Update(&chip->uart_clk_div[7], !chip->uart_clk_div[6].q, chip->uart_clk_div[7].nq, chip->reset);

    IOC_Clock_Port(chip, &chip->port_a, 0);
    IOC_Clock_Port(chip, &chip->port_b, 1);
    IOC_Clock_Port(chip, &chip->port_c, 2);
}

iochip_t io;

int main()
{
    io.ext_sres = 1;
    io.ext_ntsc = 1;
    for (int i = 0; i < 1000; i++)
    {
        io.ext_vclk = i & 1;
        IOC_Clock(&io);
        IOC_Clock(&io);
        IOC_Clock(&io);
        printf("%i %i %i\n", i, io.uart_clk, io.uart_clk_div[0].l2);
    }
}
