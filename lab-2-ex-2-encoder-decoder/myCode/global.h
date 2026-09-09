/*
 * global.h
 *
 *  Created on: 09.09.2026
 *      Author: Fromm
 */

#ifndef GLOBAL_H_
#define GLOBAL_H_

#include<stdint.h>


typedef unsigned char uint8_t;
typedef signed char sint8_t;
typedef unsigned short uint16_t;
typedef signed short sint16_t;
typedef unsigned int uint32_t;
typedef signed int sint32_t;

typedef float float32_t;
typedef double float64_t;

typedef unsigned char boolean_t;

#define TRUE (1==1)
#define FALSE (1==0)

typedef enum {
	RC_OK,
	RC_ERROR_BADPARAM,
	RC_ERROR_USERINPUT,
	RC_ERROR_BUFFERFULL,
	RC_ERROR_BUFFEREMPTY,
	RC_ERROR_BADSTATE,
	RC_ERROR_RANGE

} RC_t;




#endif /* GLOBAL_H_ */
