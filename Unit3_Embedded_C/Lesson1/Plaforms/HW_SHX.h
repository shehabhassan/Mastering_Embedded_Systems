#ifndef _HW_SHX_H
#define _HW_SHX_H

// the platform types for Freescale S12X mapping to the ANSI C types.

/* Symbols */

#define CPU_TYPE        CPU_TYPE_32
#define CPU_BIT_ORDER   LSB_FIRST
#define CPU_BYTE_ORDER  HIGH_BYTE_FIRST

/* Types */

typedef unsigned int        boolean;

typedef signed char         sint8;
typedef unsigned char       uint8;
typedef signed short        sint16;
typedef unsigned short      uint16;
typedef signed int          sint32;
typedef unsigned int        uint32;


#endif /* _HW_SHX_H */