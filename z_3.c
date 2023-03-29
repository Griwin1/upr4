#include <math.h>
#include <stdio.h>

int task3(float* res)
{
	float x, y;

	printf("Enter the coordinates of the point (x, y): ");
	scanf_s("%f %f", &x, &y);

	if (x == 0 && y == 0) {
		printf("The point is at the origin.\n");
	}
	else if (x == 0 && y != 0) {
		printf("The point is on the y-axis.\n");
	}
	else if (x != 0 && y == 0) {
		printf("The point is on the x-axis.\n");
	}
	else if (x > 0 && y > 0) {
		printf("The point is in the first quadrant.\n");
	}
	else if (x < 0 && y > 0) {
		printf("The point is in the second quadrant.\n");
	}
	else if (x < 0 && y < 0) {
		printf("The point is in the third quadrant.\n");
	}
	else {
		printf("The point is in the fourth quadrant.\n");
	}

	return 0;

}
