#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	
	DDRE = 0xff;
	PORTE = 0xff;
	
	while (1)
	{
		PORTE = 0x00;
		_delay_ms(1000);
		PORTE = 0xff;
		_delay_ms(1000);
	
	}
	return 0;
}

