#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int task1(float* res)
{
		float xp, yp, xc, yc, rc, distance;

		printf("Enter coordinates of the point (Xp, Yp): ");
		scanf_s("%f %f", &xp, &yp);

		printf("Enter coordinates of the center of the circle (Xc, Yc) and the radius Rc: ");
		scanf_s("%f %f %f", &xc, &yc, &rc);

		// calculate the distance between the point and the center of the circle
		distance = sqrt((xp - xc) * (xp - xc) + (yp - yc) * (yp - yc));

		// check if the point is inside or outside the circle
		if (distance <= rc) {
			printf("The point (%.2f, %.2f) is inside the circle.\n", xp, yp);
		}
		else {
			printf("The point (%.2f, %.2f) is outside the circle.\n", xp, yp);
		}

		return 0;
}
