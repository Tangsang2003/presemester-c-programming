#include <stdio.h>

// Main program
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	int number = 0;
	scanf("%d", &number);

	printf("Hello Embedded 2026!\n");
	printf("We have %d students in this course!\n", number);
	return 0;
}
