#include <iom32.h>
#include "uart.h"

// 매크로 직접 define (필요 시)
#define URSEL 7
#define USBS 3
#define UCSZ0 1
#define RXEN 4
#define TXEN 3
#define UDRE 5

void USART_Init(unsigned int ubrr)
{
    UBRRH = (unsigned char)(ubrr >> 8);
    UBRRL = (unsigned char)(ubrr);
    UCSRB = (1 << RXEN) | (1 << TXEN);  // 수신/송신 enable
    UCSRC = (1 << URSEL) | (0 << USBS) | (3 << UCSZ0);  // 8N1
}

//int putchar(int c)
//{
//    while (!(UCSRA & (1 << UDRE)));  // 송신 버퍼 비었는지 확인
//    UDR = c;
//    return c;
//}

int putchar( int data)
{
    while(( UCSRA & 0x20 ) == 0x00 );
    UDR = data;
    return 0;
}
