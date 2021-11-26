#include <iostream>
#include <math.h>

int main()
{
	double x, sum = 1.0, total = 0.0;

	int count = 0;

	while (count < 10)
	{
		printf("Enter the value of x: ");
		scanf_s("%lf", &x);
		if (x <= 0)
		{
			printf("You must enter a number greater than zero. \n");
			continue;
		}
		else
		{
			sum *= x;
			printf("Sum = %f . \n", sum);
			count++;
		}
	}

	total = pow(sum, 1.0 / 10.0);

	printf("The Geometric mean = %f.", total);
	return 0;
}
