/*
 *    LIFO.c
 *    Created on: Mar 24, 2024
 *    Author: shehab
 */


#include "LIFO.h"


BUFF_Status LIFO_ADD_ITEM(LIFO_BUFFER_t *LIFOBUFF,unsigned char item)
{
    // check of the pointer is valid
	if(!LIFOBUFF || !LIFOBUFF->Head || !LIFOBUFF->Base )
		{return LIFO_NULL;}
	// check the stack is empty
	if(LIFO_is_full(LIFOBUFF) == LIFO_FULL){
		return LIFO_NULL;
	}else{
		*(LIFOBUFF->Head) = item;
		#if DEBUG == RUN
	     printf("head item: %d address : %d\n ",*(LIFOBUFF->Head),LIFOBUFF->Head);
		#endif
		  LIFOBUFF->Head++;
	      LIFOBUFF->count++;
		}
	      // ADD new item to the head and increment position.
	return LIFO_NO_ERROR;
}

BUFF_Status LIFO_POP_ITEM(LIFO_BUFFER_t *LIFOBUFF,unsigned char *item)
{
    // check of the pointer is valid
	if(!LIFOBUFF || !LIFOBUFF->Head || !LIFOBUFF->Base ){
		return LIFO_NULL;}
    if(LIFOBUFF->Head == LIFOBUFF->Base){
      return LIFO_EMPTY;
    }else{
    	LIFOBUFF->Head--;
    	*item = *(LIFOBUFF->Head);
		#if DEBUG == RUN
		 printf("head head : %d\n ",*(LIFOBUFF->Head));
		#endif
    	LIFOBUFF->count--;
    	 }
	 return LIFO_NO_ERROR;
}
BUFF_Status LIFO_is_full(LIFO_BUFFER_t *LIFOBUFF)
{
   // check if the pointer is valid
	if(!LIFOBUFF || !LIFOBUFF->Head || !LIFOBUFF->Base ){
		return LIFO_NULL;}
	// check if the head is
	if(LIFOBUFF->Head >= (LIFOBUFF->size + LIFOBUFF->Base) )
		return LIFO_FULL;
	else
		return LIFO_NOT_FULL;
}
