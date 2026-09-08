#include "converter.h"

float convert_celsius_to_fahrenheit(float celsius)
{
	return (celsius * (9.0/5.0)) + 32.0;

}

float convert_fahrenheit_to_celsius(float fahrenheit)
{
	return ((fahrenheit - 32.0) * (5.0/9.0));
}

void convert_kelvin_to_cel_and_fah(float kelvin, float *cel, float *fah)
{
	*cel = kelvin - 273.15;
	*fah = convert_celsius_to_fahrenheit(*cel);
}
