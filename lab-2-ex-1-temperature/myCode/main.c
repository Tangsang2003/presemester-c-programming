#include <stdio.h>
#include "converter.h"

int main()
{
	printf("Temperature Converter\n");
	printf("========================\n");

	printf("0C = %gF", convert_celsius_to_fahrenheit(0));
	printf("\n100C = %gF", convert_celsius_to_fahrenheit(100));
	printf("\n0F = %gC", convert_fahrenheit_to_celsius(0));
	printf("\n1000F = %gC\n\n", convert_fahrenheit_to_celsius(1000));

	int kelvin = 0;
	float cel = 0.0;
	float fah = 0.0;
	int count = 0;

	for(int i = 0; i <= 1000; i += 100)
	{
		convert_kelvin_to_cel_and_fah(kelvin, &cel, &fah);
		printf("%dK = %gC = %gF\n", count, cel, fah);
		kelvin += 100;
		count += 100;
	}
	return 0;
}
