/*
 * encoder.c
 *
 *  Created on: Sep 9, 2026
 *      Author: Tangsang Chongbang
 */

#include <string.h>
#include "encoder.h"

/**
 * Internal helper function to encode a single character inside the string
 * will encode if the given char is in the range, leave it as is otherwise
 *
 * \param char first				:[IN] first character of the range
 * \param char last					:[IN] last character of the range
 * \param char current				:[IN] char to be encoded
 * \param sint16_t key				:[IN] the number of shifts for the string
 *
 * return the encoded character
 */
static char ENCODER_encodeChar(char first, char last, char current, sint16_t key)
{
	// Guardian
	if ((current < first) || (current > last))
	{
		// not in range, return the character
		return current;
	}

	uint8_t range = (uint8_t)(last - first + 1);

	char result = current;
	result -= first;
	result += key;
	result %= range;

	if (result < 0)
	{
		result += range;
	}
	result += first;

	return result;
}

RC_t ENCODER_encode(char *const s, sint16_t key)
{
	uint16_t len = strlen(s);

	for (uint16_t i = 0; i < len; i++)
	{
		s[i] = ENCODER_encodeChar('a', 'z', s[i], key);
		s[i] = ENCODER_encodeChar('A', 'Z', s[i], key);
		s[i] = ENCODER_encodeChar('0', '9', s[i], key);
	}

	return RC_OK;
}

RC_t ENCODER_decode(char *const s, sint16_t key)
{
	return ENCODER_encode(s, -key);
}
