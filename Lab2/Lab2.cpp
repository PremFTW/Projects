#include <iostream>
#include<math.h>

int main()
{
	int w = 3, y = 4, z = 7, b;
	double x = -1.3, angle = 60, pi = 3.14, radAngle, a, c, d, e;

	// Problem 1 Number 1
	a = fabs(x);

	// Problem 1 Number 2
	b = pow(w, y);

	// Problem 1 Number 3
	radAngle = (angle * pi) / 180.0;
	c = pow(pow(cos(radAngle), 2.0), 1.0 / 3.0);

	// Problem 1 Number 4
	d = fabs(exp(-z));

	//// Problem 1 Number 5
	e = log10(z);

	printf("Number 1 = %f \n Number 2 = %d \n Number 3 = %f \n Number 4 = %f \n Number 5 = %f", a, b, c, d, e);

	return 0;
}
