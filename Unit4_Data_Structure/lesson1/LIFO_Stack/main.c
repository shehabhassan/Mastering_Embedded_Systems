/*
 *  main.c
 *  Created on: Mar 24, 2024
 *  Author: shehab
 */
#include "LIFO_FILE/LIFO.h"


int main()
{
	printf("hello \n");
	unsigned int Static_buffer[LIFO_MAX_SIZE];
	uint8_t i,temp;
	LIFO_BUFFER_t  First_buffer , Second_buffer;
    // base pointer  in dynamic
    First_buffer.Base = (uint8_t *)malloc(LIFO_MAX_SIZE);
	if(!First_buffer.Base);

	First_buffer.size = 5;

	First_buffer.Head = First_buffer.Base;

    First_buffer.count = 0;

    printf("First buffer push items = \n");
   for(i=0;i<5;i++)
   {
	   printf(" %d,",i);
	   LIFO_ADD_ITEM(&First_buffer,i);
   }
		#if DEBUG == RUN
	     printf("top of stack item: %d address : %d\n ",*(First_buffer.Head),First_buffer.Head);
		#endif
   printf("\n===========================\n");
   printf("First buffer pop items = \n");
   for(i=0;i<5;i++)
      {
   	   LIFO_POP_ITEM(&First_buffer,&temp);
   	   printf(" %d,",temp);
      }
   printf("\n===========================\n");
   printf("  Static array :  \n");
   /* Static array to test */
   // base pointer  in dynamic
    Second_buffer.Base = &Static_buffer[0];
	if(!First_buffer.Base);

	Second_buffer.size = 5;

	Second_buffer.Head = Second_buffer.Base;

    Second_buffer.count = 0;

   printf("First buffer push items = \n");
  for(i=0;i<5;i++)
  {
	   printf(" %d,",i);
	   LIFO_ADD_ITEM(&Second_buffer,i);
  }
		#if DEBUG == RUN
	     printf("top of stack item: %d address : %d\n ",*(First_buffer.Head),First_buffer.Head);
		#endif
  printf("\n===========================\n");
  printf("First buffer pop items = \n");
  for(i=0;i<5;i++)
     {
  	   LIFO_POP_ITEM(&Second_buffer,&temp);
  	   printf(" %d,",temp);
     }
   return 0;
}
