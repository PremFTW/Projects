#include <iostream>
#include<stdio.h>
#include<math.h>

int main()
{
	int t = 2;
	float a, v;

	v = 0.00001 * t * t * t - 0.00488 * t * t + 0.75795 * t + 181.3566;

	a = 3 - 0.000062 * v * v;

	printf("The velocity at t = 2 is %f \n", v);
	printf("The acceleration at t = 2 is %f \n", a);

	return 0;
}