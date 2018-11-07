#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

int main(void)
{
	DDRA = 0xff;
    while (1) 
    {
		PORTA = 0xff;
		_delay_ms(100);
		PORTA = 0x00;
		_delay_ms(100);
    }
}

