/*
 * FIFO.h
 *
 *  Created on: Mar 25, 2024
 *      Author: sheha
 */

#ifndef _FIFO_H_
#define _FIFO_H_


#include <stdio.h>
#include <stdlib.h>

// struct of four element of Queue
typedef unsigned int  uint32_t;
typedef unsigned char uint8_t;

#define element_type  uint32_t
#define DEBUG TRUE
#define TRUE  1
#define FALSE 0
typedef struct {
element_type *Head;
element_type *Tail;
element_type *Base;
element_type count;
element_type size;
}FIFO_STRUCT_t;

// enum error status

typedef enum{
    FIFO_FULL,
	FIFO_Empty,
	FIFO_NOT_Empty,
	FIFO_NULL,
	FIFO_NO_ERROR
}BUFFER_ST;

BUFFER_ST FIFO_INIT(FIFO_STRUCT_t *FIFOBUF,element_type buffer,uint32_t length);
BUFFER_ST FIFO_Enqueue(FIFO_STRUCT_t *FIFOBUF,uint32_t *item);
BUFFER_ST FIFO_Dequeue(FIFO_STRUCT_t *FIFOBUF,uint32_t *item);

BUFFER_ST FIFO_is_full(FIFO_STRUCT_t *FIFOBUF);
BUFFER_ST FIFO_First_Elm(FIFO_STRUCT_t *FIFOBUF,uint32_t *ls_item);
void FIFO_PRINT(FIFO_STRUCT_t *FIFOBUF);



#endif /* FIFO_H_ */
