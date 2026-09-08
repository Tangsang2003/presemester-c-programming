#include <stdio.h>

int main() {

	setvbuf(stdout, NULL, _IONBF, 0);

	float value = 0.0;
	float converted_value_miles = 0.0;
	float converted_value_feet = 0.0;

	printf("Metric to English Converter\n");

	do {
		printf("Please enter a value in meter: ");
		scanf("%f", &value);

		if (value < 0) {
			printf("Only positive values are allowed!\n");
		}
	}while (value < 0);

	converted_value_miles = value / 1609.344;
	converted_value_feet = value * 3.28084;

	printf("%.2f m = %f mile = %.2f ft", value, converted_value_miles, converted_value_feet);

	return 0;
}
