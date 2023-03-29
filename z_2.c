#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int task2(float* res)
{
	int number, remainder;

	printf("Enter an integer: ");
	scanf_s("%d", &number);

	remainder = number % 5;

	if (remainder == 0) {
		printf("%d is divisible by 5.\n", number);
	}
	else {
		int next_multiple = number + (5 - remainder);
		printf("%d is not divisible by 5.\n", number);
		printf("The next multiple of 5 is %d.\n", next_multiple);
	}

	return 0;
}
