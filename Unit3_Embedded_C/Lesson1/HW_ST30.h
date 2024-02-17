#ifndef _HW_ST30_H
#define _HW_ST30_H

// the platform types for Freescale S12X mapping to the ANSI C types.

/* Symbols */

#define CPU_TYPE        CPU_TYPE_32
#define CPU_BIT_ORDER   LSB_FIRST
#define CPU_BYTE_ORDER  LOW_BYTE_FIRST

/* Types */

typedef unsigned long       boolean;

typedef signed char         sint8;
typedef unsigned char       uint8;
typedef signed short        sint16;
typedef unsigned short      uint16;
typedef signed long         sint32;
typedef unsigned long       uint32;


#endif /* _HW_ST30_H */