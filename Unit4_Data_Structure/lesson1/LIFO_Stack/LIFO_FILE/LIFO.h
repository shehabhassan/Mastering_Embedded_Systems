#ifndef _LIFO_H
#define _LIFO_H

#include <stdio.h>
#include <stdlib.h>

// Define Variable to using in LIFO
typedef unsigned int  uint_32_t;
typedef unsigned char uint8_t;
#define LIFO_MAX_SIZE 5
typedef struct {
	uint_32_t size;
	uint_32_t *Head;
	uint_32_t *Base;
	uint_32_t count;
}LIFO_BUFFER_t;

typedef enum{
	LIFO_FULL,
	LIFO_NOT_FULL,
	LIFO_EMPTY,
	LIFO_NOT_EMPTY,
	LIFO_NULL,
	LIFO_NO_ERROR
}BUFF_Status;

// Function Prototypes
BUFF_Status LIFO_ADD_ITEM(LIFO_BUFFER_t *LIFOBUFF,unsigned char item);
BUFF_Status LIFO_POP_ITEM(LIFO_BUFFER_t *LIFOBUFF,unsigned char *item);
BUFF_Status LIFO_is_full(LIFO_BUFFER_t *LIFOBUFF);

 /* Debug in inside function */
#define RUN 1
#define OFF 0
#define DEBUG 0

#endif /* _LIFO_H  */


