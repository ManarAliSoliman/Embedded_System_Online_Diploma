/*
 * Exercies4.c
 *
 *  Created on: Dec 30, 2023
 *      Author: hp
 */
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	unsigned char flag = 0;
	DDRB = DDRB & (~(1<<PB0));
	PORTB |= (1<<PB0);

	DDRC = DDRC | (1<<PC0);
	PORTC = PORTC | (1<<PC0);

    while(1)
    {
		if(!(PINB & (1<<PB0)))
		{
			_delay_ms(30);
			if(!(PINB & (1<<PB0)))

			{
				if(flag == 0)
				{
					PORTC = PORTC ^ (1<<PC0);


					flag = 1;
				}
			}
		}
		else
		{
			// button is released reset the button flag to value 0 again.
			flag = 0;
		}
    }
}


