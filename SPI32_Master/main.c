#include "spi.h"
#include "dio.h"


int main(void)
{
	ST_SPI_config_t config = {F_CPU_16};
	SPI_initMaster(&config);
	while(1)
	{
		SPI_sendByte('a');
		_delay_ms(1000);
		SPI_sendByte('b');
		_delay_ms(1000);
		SPI_sendByte('c');
		_delay_ms(1000);
	}
}


