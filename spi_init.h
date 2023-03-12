/*
 * spi_init.h
 *
 * Created: 04/03/2023 01:14:48 م
 *  Author: NTI
 */ 


#ifndef SPI_INIT_H_
#define SPI_INIT_H_

#include "std_types.h"
#include "bit_math.h"
#include "spi_private_reg.h"

#define Foscprescaler4     0
#define Foscprescaler16    1
#define Foscprescaler64    2
#define Foscprescaler128   3
#define Foscprescaler2     4
#define Foscprescaler8     5
#define Foscprescaler32    6


void SPI_mstr_init(void);

void SPI_slave_init(void);

void SPI_send_string(char *str);

void SPI_mstr_send_byte(u8 byte);

u8 SPI_master_recieve_byte(void);

u8 SPI_mstr_transev_byte(u8 byte);

void SPI_slave_transmit_byte(u8 byte);

u8 SPI_slave_recieve_byte(void);



#endif /* SPI_INIT_H_ */