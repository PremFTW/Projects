#include <iostream>
#include <math.h>

int main()
{
	double x, sum = 0, hm;
	int count = 0;

	while (count <= 10)
	{
		printf("Enter the value of x: ");
		scanf_s("%lf", &x);
		sum += (1 / x);
		printf("Sum = %f . \n", sum);
		count++;
	}

	hm = 10.0 / sum;
	printf("The harmonic mean = %f", hm);

	return 0;
}