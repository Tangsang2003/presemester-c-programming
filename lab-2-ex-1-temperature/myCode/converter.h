/*
 * converter.h
 *
 *  Created on: Sep 8, 2026
 *      Author: Tangsang
 */

#ifndef CONVERTER_H_
#define CONVERTER_H_

/**
 * This function converts Celsius to Fahrenheit
 * \param float celsius				:[IN] temperature in celsius
 * \return float fahrenheit			:[OUT] temperature in fahrenheit
 */
float convert_celsius_to_fahrenheit(float celsius);


/**
 * This function converts Fahrenheit to Celsius
 * \param float fahrenheit				:[IN] temperature in fahrenheit
 * \return float celsius				:[OUT] temperature in celsius
 */
float convert_fahrenheit_to_celsius(float fahrenheit);

/**
 * This function takes a temperature in Kelvin and returns corresponding values in Celsius and Fahrenheit
 * \param float kelvin				:[IN] temperature in kelvin
 * \param float *fah				:[IN] pointer to variable that stores the converted fahrenheit value
 * \param float *cel				:[IN] pointer to variable that stores the converted celsius value
 */
void convert_kelvin_to_cel_and_fah(float kelvin, float *cel, float *fah);



#endif /* CONVERTER_H_ */
