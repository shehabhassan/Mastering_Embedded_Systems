#include "UART.h"

unsigned char string_name[100] = "hello everyone";

void main(void)
{
    UART_SendString(string_name);
}