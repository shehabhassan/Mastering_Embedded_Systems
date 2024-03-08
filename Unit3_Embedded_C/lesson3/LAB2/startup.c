/*
@Authors:  Eng Shehab Hassan
@Date:     2/29/2024
@Description: Startup code in C  
*/
#include <stdint.h>
/* RAM :0x20000000 */ 
#define STACK_Start_SP 0x20001000

typedef volatile unsigned int vint32_t;
void Reset_Hundler();
void Default_Hundler(void);
extern int main(void);

void NMI_Hundler(void)__attribute__((weak,alias ("Default_Hundler")));
void H_fault_Hundler(void) __attribute__((weak,alias ("Default_Hundler")));
void MM_fault_Hundler(void) __attribute__((weak,alias ("Default_Hundler")));
void Bus_fault(void) __attribute__((weak,alias ("Default_Hundler")));
void Usage_fault_Hundler(void) __attribute__((weak,alias ("Default_Hundler")));

extern vint32_t _stack_top;
uint32_t vectors[] __attribute__((section(".vectors"))) = {
    (uint32_t)&_stack_top,       // stack pointer
    (uint32_t)Reset_Hundler,    // code entry point
    (uint32_t)NMI_Hundler,      // NMI handler (not really)
    (uint32_t)H_fault_Hundler,
    (uint32_t)MM_fault_Hundler,
    (uint32_t)Bus_fault,
    (uint32_t)Usage_fault_Hundler
};

void Default_Hundler(void)
{
    Reset_Hundler();
}
extern uint32_t _S_data;
extern uint32_t _E_data;
extern uint32_t _S_bss;
extern uint32_t _E_bss;
extern uint32_t _E_text;
void Reset_Hundler(void)
{
 // copy data from ROM TO RAM 
 unsigned int DATA_Size = (unsigned char *)&_E_data - (unsigned char *)&_S_data;
 unsigned char *P_src   = (unsigned char *)&_E_text; 
 unsigned char *P_dst   = (unsigned char *)&_S_data;
 // copy data section from ROM to RAM
for (int  i = 0; i < DATA_Size; i++)
{
    *((unsigned char*)P_dst++) = *((unsigned char*)P_src++);
}
 // Init BSS data section RAM
unsigned int BSS_Size = (unsigned char *)&_E_bss - (unsigned char *)&_S_bss;
for (int  j = 0; j < BSS_Size; j++)
{
    *((unsigned char*)P_dst++) = 0;
}
   main();
}


