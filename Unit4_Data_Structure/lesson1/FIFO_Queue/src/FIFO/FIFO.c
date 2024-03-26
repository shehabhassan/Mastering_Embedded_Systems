/*
 *     FIFO.c
 *     Created on: Mar 25, 2024
 *     Author: shehab Hassan
 */

#include "FIFO.h"

BUFFER_ST FIFO_INIT(FIFO_STRUCT_t *FIFOBUF,element_type buffer,uint32_t length)
{
   FIFOBUF->Base = buffer;
   FIFOBUF->Head = FIFOBUF->Base;
   FIFOBUF->Tail = FIFOBUF->Base;
   FIFOBUF->size = length;
   FIFOBUF->count = 0;
   if(FIFOBUF->size && FIFOBUF->Base)
	   return FIFO_NO_ERROR;
   else
	   return FIFO_FULL;
}


BUFFER_ST FIFO_Enqueue(FIFO_STRUCT_t *FIFOBUF,uint32_t *item)
{
	 if(!FIFOBUF->Base || !FIFOBUF->Head || !FIFOBUF->Tail)
		 return FIFO_NULL;
    // check the queue is not full .'
	if(FIFO_is_full(FIFOBUF) == FIFO_NO_ERROR){
		  *(FIFOBUF->Head) = *item;
			FIFOBUF->count++;
			// check is Circular FIFO
			if(FIFOBUF->Head == (FIFOBUF->Base + (FIFOBUF->size + sizeof(element_type)))){
			FIFOBUF->Head = FIFOBUF->Base;
			}else{
			#if DEBUG == TRUE
					 printf("inside enqueue debug counter: %d ,element : %d\n",FIFOBUF->count, *(FIFOBUF->Head));
					#endif
			FIFOBUF->Head++;
			return FIFO_NO_ERROR;
			}
	}else
	{
		#if DEBUG == TRUE
		 printf("inside enqueue debug counter: %d ,element : %d\n",FIFOBUF->count, *(FIFOBUF->Head));
		#endif
	   return FIFO_NULL;
	}
}

BUFFER_ST FIFO_Dequeue(FIFO_STRUCT_t *FIFOBUF,uint32_t *item)
{
	 if(!FIFOBUF->Base || !FIFOBUF->Head || !FIFOBUF->Tail)
		 return FIFO_NULL;
	//check if the queue if empty
		 if(FIFOBUF->count == 0)
		 {
			 return FIFO_Empty;
		 }else
		 {
//			    item = FIFOBUF->Tail;
				*item = *(FIFOBUF->Tail);
				FIFOBUF->count--;
			#if DEBUG == FALSE
			printf("inside dequeue debug counter: %d ,element : %d\n",FIFOBUF->count,*(FIFOBUF->Tail));
			#endif
				// check the circ
				if(FIFOBUF->Tail == (FIFOBUF->Tail + (FIFOBUF->size + sizeof(element_type))))
				  FIFOBUF->Tail = FIFOBUF->Base;
				else
				FIFOBUF->Tail++;
			#if DEBUG == FALSE
			printf("inside dequeue debug counter: %d ,element : %d\n",FIFOBUF->count,*(FIFOBUF->Tail));
			#endif
			return FIFO_NO_ERROR;
		 }
}
BUFFER_ST FIFO_First_Elm(FIFO_STRUCT_t *FIFOBUF,uint32_t *ls_item)
{
	// check the pointer is exist .
		if(!FIFOBUF->Base || !FIFOBUF->Head || !FIFOBUF->Tail){
			return FIFO_NULL;
		}else{
			*ls_item = *(FIFOBUF->Tail);
		}

}
BUFFER_ST FIFO_is_full(FIFO_STRUCT_t *FIFOBUF)
{
    // check the pointer is exist .
	if(!FIFOBUF->Base || !FIFOBUF->Head || !FIFOBUF->Tail)
		return FIFO_NULL;
     //check if the queue if empty
	 if(FIFOBUF->count >= FIFOBUF->size)
		 return FIFO_FULL;
	 else
		 return FIFO_NO_ERROR;
}

void FIFO_PRINT(FIFO_STRUCT_t *FIFOBUF)
{
	element_type *temp_valu;
	// check is Empty .
	if(FIFOBUF->count == 0){
		printf("The FIFO Queue is Empty \n");
    }else{
    	temp_valu = FIFOBUF->Tail;
    for(int i=0;i<FIFOBUF->count;i++)
	{
	 printf("index %d value : %d\n",i,*temp_valu);
	 temp_valu++;
	 }
    }
}



