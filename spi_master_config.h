/*
 * spi_config.h
 *
 * Created: 04/03/2023 01:14:28 م
 *  Author: NTI
 */ 


#ifndef SPI_CONFIG_H_
#define SPI_CONFIG_H_

#include "std_types.h"
#include "spi_private_reg.h"
#include "dio_reg.h"

#define  mosi_port_num DIO_DDRB_REG

#define miso_port_num DIO_DDRB_REG

#define  ss_port_num DIO_DDRB_REG

#define  sck_port_num DIO_DDRB_REG

#define clock_rate Foscprescaler4

#define data_order MSB

#define sample STD_LOW

#define clk_polarity STD_LOW

#define MOSI	5

#define MISO	6

#define SCK		7

#define SS	    4

#define double_speed 0


#endif /* SPI_CONFIG_H_ */