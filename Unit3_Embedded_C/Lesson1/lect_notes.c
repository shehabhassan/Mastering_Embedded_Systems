#include <stdint.h>
#include "Plaform_Types.h"

typedef union
{
  vint32_t ALL_PORTS;
  struct{
    vint32_t PORTA:8;
    vint32_t PORTB:8;
    vint32_t PORTC:8;
    vint32_t PORTD:8;
  }SIU_fields;
}SIU_R;

volatile SIU_R *PORTS = (volatile SIU_R*)0x40031000; /* address*/

// PORTS->SIU_fields.PORTA = 0xFF;
// PORTS->SIU_fields.PORTB = 0xFF;
// PORTS->SIU_fields.PORTC = 0xFF;
// PORTS->SIU_fields.PORTD = 0xFF;

int main()
{
PORTS->ALL_PORTS = 0x00000000;
PORTS->SIU_fields.PORTA = 0xFF; 
    return 0;
}
/*
 // Wrong way to access the memory location
  uint8 *PRG = (uint8 *)0x1234;
  if((*PRG)==0){};
  // Right way to access the memory location
  uint8 volatile *PRG = (uint8 volatile*)0x1234;
  if((*PRG)==0){}; 

    //  volatile int *ptr;  
    //  ptr = (volatile int *)0x30303566;
    //  *ptr = 0xFFFFFFFF;
    //  *((volatile int *)(0x30303566)) = 0xFFFFFFFF; 
    //  #define REG32_DIO *((volatile int *)(0x30303566))

*/

