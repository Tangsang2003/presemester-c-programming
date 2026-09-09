/*
 * encoder.h
 *
 *  Created on: Sep 9, 2026
 *      Author: Tangsang Chongbang
 */

#ifndef ENCODER_H_
#define ENCODER_H_

#include "global.h"

/**
 * Will encode the given string by moving every character by the key
 *
 * \param char *const s				:[IN/OUT] the string which will be encrypted
 * \param sint16_t key				:[IN] the number by which the characters will be shifted
 * \return RC_OK
 */
RC_t ENCODER_encode(char *const s, sint16_t key);

/**
 * Will decode the given string by moving every character by the key
 *
 * \param char *const s				:[IN/OUT] the string which will be decrypted
 * \param sint16_t key				:[IN] the number by which the characters will be shifted
 * \return RC_OK
 */
RC_t ENCODER_decode(char *const s, sint16_t key);

#endif /* ENCODER_H_ */
