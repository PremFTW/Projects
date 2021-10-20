#include <iostream>
#include<math.h>

int main()
{
	double x, sum = 0, rms;
	int N = 10, count = 10;

	while (count > 0)
	{
		printf("Enter the value of x: ");
		scanf_s("%lf", &x);
		sum += pow(x, 2);
		printf("Sum = %f . \n", sum);
		count--;
	}
	
	rms = pow(((1.0 / N) + sum),1.0/2.0);

	printf("The rms value when x is %f = ", x, rms);
}
