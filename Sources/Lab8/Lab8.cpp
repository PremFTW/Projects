#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	double speed = 0.0, avg, height = 0.0, maxHeight = 0.0, sum = 0.0, n = 0.0;

	FILE* input;

	input = fopen("input.txt", "r");


	while ((fscanf(input, "%lf	%lf", &speed, &height)) >= 0)
	{
		sum += speed;

		if (n == 0.0)
		{
			maxHeight = height;
		}
		else if (maxHeight < height)
		{
			maxHeight = height;
		}
		n++;
	}

	avg = sum / n;

	printf("The average speed = %lf and The max height = %lf", avg, maxHeight);

	return 0;
}
