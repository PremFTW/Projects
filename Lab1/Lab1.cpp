#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int x1 = 5;
	int x2 = 3;
	int y1 = 6;
	int y2 = 2;

	float d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	
	printf("The distance between two points = %f \n", d);

	return 0;
}


