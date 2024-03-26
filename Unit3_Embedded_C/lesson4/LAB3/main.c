/*
 ******************************************************************************
 * @file           : main.c
 * @author         : Eng. Shahab Hassan
 * @brief          : Tiva C cortex-m4  
 ******************************************************************************
 */

#include <stdint.h>

typedef volatile unsigned int vunit_32_t;

#define SYSCTL_Base          0x400FE000
#define GPIOF_Base           0x40025000
#define SYSCTLRC_OFFSET          0x108
#define GPIOF_DIR_OFFSET         0x400
#define GPIOF_EN_OFFSET          0x51C
#define GPIOF_DATA_OFFSET        0x3FC

#define SYSCTL_RCGC2_R          (*((volatile unsigned long *)0x400FE108))
#define GPIO_PORTF_DIR_R        (*((volatile unsigned long *)0x40025400))
#define GPIO_PORTF_EN_R         (*((volatile unsigned long *)0x4002551C))
#define GPIO_PORTF_DATA_R       (*((volatile unsigned long *)0x400253FC))

#define SYSCTL_RCGC2 (1UL<<2) // bit number 2
#define PORTF_DIR_R  (1UL<<3)
#define PORTF_DEN_R  (1UL<<3)
#define PORTF_DATA_R (1UL<<3)


int main(void)
{
	SYSCTL_RCGC2_R  = 0x20; // SET CLOCK for PORTA
	volatile unsigned long delay_count;
	for (delay_count = 0; delay_count < 200; delay_count++);	
	GPIO_PORTF_DIR_R  |= (1<<3);// 20 to 23 is zero
	GPIO_PORTF_EN_R   |= (1<<3);// to make GPIOA Is OUTPUT
 while(1)
	 {
	GPIO_PORTF_DATA_R &=~(1<<3); 
	for(delay_count=0;delay_count<50000;delay_count++);
	GPIO_PORTF_DATA_R |=(1<<3); // GPIOA_ODR |= GPIOA_10;
	for(delay_count;delay_count<50000;delay_count++);
	 }
	return 0;
}
