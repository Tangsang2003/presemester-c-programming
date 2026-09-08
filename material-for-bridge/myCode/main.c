#include <stdio.h>

void get_values(float*, float*, float*, int*);

float calculate_p1(float width, float height);
float calculate_p2(float width, float height);
void calculate_and_print_main(float, float, float, float, float, float);


int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Calculation of bridge material\n\n");
	float height, width, distance_above_bow= 0.0;
	int number = 0;
	float p1, p2 = 0.0;
	get_values(&height, &width, &distance_above_bow, &number);

	float distance_in_between = width / (number - 1);

	p1 = calculate_p1(width, height);
	p2 = calculate_p2(width, height);

	calculate_and_print_main(distance_in_between, distance_above_bow, height, p1, p2, number);

	return 0;
}

void get_values(float *height, float *width, float *distance_above_bow, int *number) {
	do {
		printf("Enter width of the bow: ");
		scanf("%f", width);
		if (*width < 0) {
			printf("Invalid value! Enter again!\n");
		}
	} while (*width < 0);

	do {
		printf("Enter height of the bow: ");
		scanf("%f", height);
		if (*height < 0) {
			printf("Invalid value! Enter again!\n");
		}
	} while (*height < 0);


	do {
		printf("Enter distance above the bow: ");
		scanf("%f", distance_above_bow);
		if (*distance_above_bow < 0) {
			printf("Invalid value! Enter again!\n");
		}
	} while (*distance_above_bow < 0);

	do {
		printf("Enter the number of vertical elements: ");
		scanf("%d", number);
		if (*number < 0) {
			printf("Invalid value! Enter again!\n");
		}
	} while (*number < 0);
}

float calculate_p1(float width, float height) {
	float p1 = 0.0;
	p1 = - ((4 * height) / (width * width));

	return p1;
}

float calculate_p2(float width, float height) {
	float p2 = 0.0;
	p2 = (4 * height) / (width);

	return p2;
}

void calculate_and_print_main(float distance_in_between, float distance_above_bow, float height, float p1, float p2, float number) {
	printf("\nCalculation:\n");
	float distance = 0.0;
	float result_y = 0.0;
	float length = 0.0;
	float total_length = 0.0;
	for (int i = 0; i < number; i++) {
		result_y = p1 * (distance * distance) + p2 * distance;
		length = distance_above_bow + height - result_y;
		printf("\t Element No. %d at x-position %.3f has a length of %.3f\n", i, distance, length);
		distance += distance_in_between;
		total_length += length;
	}

	printf("\nTotal length of material: %.3f\n", total_length);
}
