#ifndef __GW_TYPE_DEFS_H__
#define __GW_TYPE_DEFS_H__

typedef unsigned char byte;
typedef unsigned char un8,u8,uint8;
typedef unsigned short un16,u16,uint16;
typedef unsigned int un32,u32,uint32;
typedef signed char n8;
typedef signed short n16;
typedef signed int n32;
typedef un16 word;
typedef word addr;

#ifdef IS_BIG_ENDIAN
static inline un16 le_to_native_16(un16 value) { return __builtin_bswap16(value); };
static inline un32 le_to_native_32(un32 value) { return __builtin_bswap32(value); };
#else
static inline un16 le_to_native_16(un16 value) { return value; };
static inline un32 le_to_native_32(un32 value) { return value; };
#endif

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#endif
