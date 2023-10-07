
#ifndef STD_TYPES_H
#define STD_TYPES_H


#include <stdint.h>


/*------------------------------------------------------------------------------
 * Types
 *----------------------------------------------------------------------------*/

typedef int8_t         sint8;
typedef uint8_t        uint8;

typedef int16_t        sint16;
typedef uint16_t       uint16;

typedef int32_t        sint32;
typedef uint32_t       uint32;

typedef int64_t        sint64;
typedef uint64_t       uint64;

typedef uint_least8_t  uint8_least;
typedef uint_least16_t uint16_least;
typedef uint_least32_t uint32_least;
typedef uint_least64_t uint64_least;

typedef int_least8_t   sint8_least;
typedef int_least16_t  sint16_least;
typedef int_least32_t  sint32_least;
typedef int_least64_t  sint64_least;

typedef float         float32;
typedef long double  float64;



/*------------------------------------------------------------------------------
 * Defines
 *----------------------------------------------------------------------------*/

#ifndef 	NULL
#define	NULL	0
#endif


#define STD_HIGH		0x01
#define STD_LOW			0x00

#define STD_ACTIVE		0x01
#define STD_IDLE		0x00

#define STD_ON			0x01
#define STD_OFF			0x00


#endif
/** @} */
