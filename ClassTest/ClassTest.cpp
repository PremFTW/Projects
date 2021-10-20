#include <iostream>
#include <math.h>

int main()
{
	float torus_volume(int irad, int orad);
	
	int irad, orad;
	float volume = 0.0;

	printf("Enter the inner radius: ");

	scanf_s("%d", &irad);

	orad = irad * 2;

	volume = torus_volume(irad, orad);

	printf("The volume = %f", volume);

	return 0;
}

float torus_volume(int irad, int orad)
{
	float a, b, pi = 3.14, volume;

	a = irad + orad;
	b = pow(irad - orad, 2.0);
	volume = pow(pi, 2.0) * a * b;

	return volume;
}
