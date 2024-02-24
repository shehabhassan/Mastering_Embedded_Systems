#include "UART.h"

// UART Registers
#define UART0DR *((volatile unsigned int *const)((unsigned int *)0x101f1000))

void UART_SendString(unsigned char *str)
{
    while (*str != '\0')
    {
    UART0DR = (unsigned int)(*str);
    str++;
    }
}
 