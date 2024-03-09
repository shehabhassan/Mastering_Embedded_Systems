/*
 ******************************************************************************
 * @file           : main.c
 * @author         : Eng. Shahab Hassan
 * @brief          : Main program body
 ******************************************************************************
 */

#include <stdint.h>

typedef volatile unsigned int vunit_32_t;

#define RCC_Base        0x40021000
#define GPIOA_Base      0x40010800

#define Offset_APB2     0x18
#define Offset_CRH      0x04
#define Offset_ODR      0x0C

#define RCC_APB2ENR      *((volatile uint32_t *)(RCC_Base   + Offset_APB2))
#define GPIOA_CRH        *((volatile uint32_t *)(GPIOA_Base + Offset_CRH))
#define GPIOA_ODR        *((volatile uint32_t *)(GPIOA_Base + Offset_ODR))


#define RCC_PORTA (1<<2) // bit number 2
#define GPIOA_13  (1UL<<13)

typedef  union{
	 vunit_32_t ALL_BITS;
	 struct{
		 vunit_32_t reserved:13;
		 vunit_32_t PIN13:1;
	 }PINS;
}ODR_t;

volatile ODR_t *GPIOA_OUT = (volatile ODR_t *)(GPIOA_Base + Offset_ODR);

unsigned char arr[] = {1,2,3,4,5};
unsigned char const arr2[10]={1,2,3,4,5};

void NMI_Hundler() 
{
	
}

int main(void)
{
	RCC_APB2ENR |= (1<<2); // SET CLOCK for PORTA
	GPIOA_CRH   &= 0xff0fffff;// 20 to 23 is zero
	GPIOA_CRH   |= 0x00200000;// to make GPIOA Is OUTPUT
 while(1)
	 {
	 GPIOA_OUT->PINS.PIN13 = 0U;//GPIOA_ODR &=~ GPIOA_10;
	for(int j=0;j<50000;j++);
	 GPIOA_OUT->PINS.PIN13 = 1U; // GPIOA_ODR |= GPIOA_10;
	for(int i=0;i<50000;i++);
	 }
}
