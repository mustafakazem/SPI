/*
 * SPI_driver_slave.c
 *
 * Created: 3/8/2023 11:43:37 AM
 * Author : sata
 */ 

#include "spi_init.h"
#include "bit_math.h"
#include <util\delay.h>
#include "dio_reg.h"

#define F_CPU 1000000UL

int main(void)
{
    /* Replace with your application code */
	SPI_slave_init();
	DIO_DDRC_REG|=(1<<7)|(1<<6);
    while (1) 
    {		
		u8 len=SPI_slave_recieve_byte();
	    u8 str[len];
	    for(int i=0;i<len;i++){
		    str[i]=SPI_slave_recieve_byte();
	    }
	    
	    if(str[6]=='a'){
		    SET_BIT(DIO_PORTC_REG,7);
	    }
	}
}