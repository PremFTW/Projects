#include <iostream>
#include <math.h>

int main()
{
	double x, sum = 1.0, total = 0.0;

	for (int i = 0; i < 10; i++)
	{
		printf("Enter the value of x: ");
		scanf_s("%lf", &x);
		sum *= x;
		printf("Sum = %f . \n", sum);
	}

	total = pow(sum, 1.0 / 10.0);

	printf("The Geometric mean = %f.", total);
	return 0;
}