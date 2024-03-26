/*
 ============================================================================
 Name        : FIFO_Queue.c
 Author      : Shehab Hassan 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include "FIFO/FIFO.h"

#define Buffer_length 5

element_type BUFFER[Buffer_length];

int main(void) {
	FIFO_STRUCT_t FIFO_buffer;
	element_type i ,temp;
   // init the fifo
	if(FIFO_INIT(&FIFO_buffer,BUFFER,Buffer_length) == FIFO_NO_ERROR)
		printf("FIFO INIT IS DONE \n");
	else
		printf("FIFO INIT IS Faild \n");
	 printf("================================\n");
    // Enqueue in Buffer
    for(i=5;i<11;i++)
    {
        if(FIFO_Enqueue(&FIFO_buffer,&i) == FIFO_NO_ERROR)
        	printf("%x is inserted DONE \n",i);
        else
        	printf("%x is inserted faild \n",i);
    }
//    printf("================================\n");
    /* print The element inside the buffer */
     FIFO_PRINT(&FIFO_buffer);
     printf("================================\n");
//         FIFO_First_Elm(&FIFO_buffer,&temp);
//	     printf("%d \n",temp);
     	 FIFO_Dequeue(&FIFO_buffer,&temp);
     	 printf("%X is dequeue DONE \n",temp);
     	 FIFO_Dequeue(&FIFO_buffer,&temp);
     	 printf("%X is dequeue DONE \n",temp);
     	printf("================================\n");
		for(i=0;i<2;i++)
		{
		if(FIFO_Enqueue(&FIFO_buffer,&i) == FIFO_NO_ERROR)
			printf("%x is inserted DONE \n",i);
		else
			printf("%x is inserted faild \n",i);
		}
		printf("================================\n");
		FIFO_PRINT(&FIFO_buffer);
     return 0;
}
