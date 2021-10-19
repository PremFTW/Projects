#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	double n = 0.0, speed, avg, height, maxHeight, sum = 0.0;

	FILE* input;
	
	input = fopen("input.txt", "r");
	fscanf(input, "%lf", &n);

	for (int i = 0; i < n; i++)
	{
		fscanf(input, "%lf	%lf", &speed, &height);
		sum += speed;

		if (i == 0)
		{
			maxHeight = height;
		}
		else if (maxHeight < height)
		{
			maxHeight = height;
		}
	}

	avg = sum / n;

	printf("The average speed = %lf and The max height = %lf", avg, maxHeight);

	return 0;
}