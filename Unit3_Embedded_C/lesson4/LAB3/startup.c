/*
@Authors:  Eng Shehab Hassan
@Date:     3/10/2024
@Description: Startup code in C  
*/
#include <stdint.h>
/* RAM :0x20000000 */ 

typedef volatile unsigned int vint32_t;

void Reset_Hundler();
void Default_Hundler(void);
extern int main(void);

void Default_Hundler(void)
{
    Reset_Hundler();
}

void NMI_Hundler(void)__attribute__((weak,alias ("Default_Hundler")));
void H_fault_Hundler(void) __attribute__((weak,alias ("Default_Hundler")));

static unsigned long _stack_top[256];

void (* const g_p_fun_vectors[])() __attribute__((section(".vectors"))) =
{
    (void (*)())(unsigned long)_stack_top+sizeof(_stack_top),//stack pointer
    Reset_Hundler,    // code entry point
    NMI_Hundler,      // NMI handler (not really)
    H_fault_Hundler,
};

extern uint32_t _E_text;
extern uint32_t _S_data;
extern uint32_t _E_data;
extern uint32_t _S_bss;
extern uint32_t _E_bss;

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
unsigned int BSS_Size = (unsigned char*)&_E_bss - (unsigned char *)&_S_bss;
    P_dst = (unsigned char *)&_S_bss; 
for (int  j = 0; j < BSS_Size; j++)
{
    *((unsigned char*)P_dst++) = (unsigned char)0;
}
   main();
}


