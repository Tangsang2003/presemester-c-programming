#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void get_values(int[], int[]);
float calculate_area(int*, int*);

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Calculation of a polygon area using Gauss\n\n");

	int corners_x[10] = {0};
	int corners_y[10] = {0};
	float area = 0.0;

	get_values(corners_x, corners_y);

	area = calculate_area(corners_x, corners_y);

	printf("\n\nCalculated area: %.2f", area);

	return 0;
}

void get_values(int *x, int *y) {
	int temp_x, temp_y;
	int all_ok = 0;
	int count = 0;
	while (all_ok != 1) {
		all_ok = 0;
		count = 0;
		temp_x = -1;
		for (int i = 0; i < 10; i++) {
			printf("Enter the coordinates for corner %d : ", i);
			scanf("%d %d", &x[i], &y[i]);
			count += 1;
			if (count >= 2) {
				temp_x = x[i];
				temp_y = y[i];
			}

			if (temp_x == x[0] && temp_y == y[0]) {
				if (count > 3) {
					all_ok = 1;
					break;
				}

				else {
					printf("Invalid input! Less than 3 sides entered!\nPLEASE START AGAIN\n");
					all_ok = -1;
					break;
				}
			}




			if (i == 9 && (temp_x != x[0] || temp_y != y[0])) {
				x[9] = x[0];
				y[9] = y[0];
				all_ok = 1;
			}
		}
	}
}

float calculate_area(int *x, int *y) {
	float area = 0;
	for (int i = 0; i < 9; i++) {
		area += x[i] * y[i + 1] - x[i + 1] * y[i];
	}
	area *= 0.5;
	area = fabs(area);

	return area;
}
