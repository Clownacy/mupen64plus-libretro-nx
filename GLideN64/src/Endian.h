#ifndef ENDIAN_H
#define ENDIAN_H

#include "libretro_endianness.h"

#if RETRO_IS_BIG_ENDIAN
	#define ENDIAN_XOR_1 0
	#define ENDIAN_XOR_2 0
	#define ENDIAN_XOR_3 0
#elif RETRO_IS_LITTLE_ENDIAN
	#define ENDIAN_XOR_1 1
	#define ENDIAN_XOR_2 2
	#define ENDIAN_XOR_3 3
#else
	#error
#endif

#endif
