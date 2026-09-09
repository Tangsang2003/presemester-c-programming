#include <stdio.h>
#include "global.h"
#include "encoder.h"

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	char s[] = "049agzAJZ !:";

	printf("Original: %s\n", s);

	RC_t res = RC_OK;

	res = ENCODER_encode(s, 1);
	printf("Encoded: %s\n", s);

	res = ENCODER_decode(s, 1);
	printf("Decoded: %s\n", s);

	return 0;
}
