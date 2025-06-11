
#define PC2 2 
#include <stdlib.h>
#include <stdio.h>
#define BAUD_PRESCALE (((F_CPU / (USART_BAUDRATE * 16UL))) - 1)

/*
	ATmega 16 UART echo program
	http://www.electronicwings.com
*/ 

//#define F_CPU 8000000UL			/* Define frequency here its 8MHz */
//#include <avr/io.h>
//#include <util/delay.h>


//#define USART_BAUDRATE 9600



#define RXEN 4
#define TXEN 3
#define URSEL 7
#define USBS 3
#define UCSZ0 1
#define UDRE 5




int main(void)
{
       // PC2를 출력으로 설정
    
    USART_Init(103);
    while (1)
    {
      
        printf("ASSSSSSSS\r\n");
        for (volatile long i = 0; i < 30000; i++);
    }
}
