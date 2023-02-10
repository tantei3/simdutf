#define SSSE3
#include "config_defs.h"
/* Compiling for i586 with SSE */

#define U8U16_TARGET SSE_TARGET
#define BYTE_ORDER LITTLE_ENDIAN

//#define USE_LDDQU

#define S2P_ALGORITHM S2P_BYTEPACK
#define P2S_ALGORITHM P2S_BYTEMERGE

#define BIT_DELETION PERMUTE_INDEX_TO_RIGHT8
#define BYTE_DELETION BYTE_DEL_BY_PERMUTE_TO_RIGHT8
#define DOUBLEBYTE_DELETION FROM_LEFT8

#define INBUF_READ_NONALIGNED
#define OUTBUF_WRITE_NONALIGNED

