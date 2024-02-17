#ifndef _PLATFORM_TYPES_H
#define _PLATFORM_TYPES_H

// the platform types for Freescale S12X mapping to the ANSI C types.

/* Symbols */

#define CPU_TYPE        CPU_TYPE_16
#define CPU_BIT_ORDER   LSB_FIRST
#define CPU_BYTE_ORDER  HIGH_BYTE_FIRST

/* Types */

typedef unsigned char       boolean;

typedef signed char         sint8;
typedef unsigned char       uint8;
typedef signed short        sint16;
typedef unsigned short      uint16;
typedef signed long         sint32;
typedef unsigned long       uint32;


typedef signed char         sint8_least;
typedef unsigned char       uint8_least;
typedef signed short        sint16_least;
typedef unsigned short      uint16_least;
typedef signed long         sint32_least;
typedef unsigned long       uint32_least;

typedef float               float32;
typedef double              float64;


#endif /* _PLATFORM_TYPES_H */