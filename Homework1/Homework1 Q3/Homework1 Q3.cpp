#include <iostream>
#include<math.h>

int main()
{
    double wavelenght, c = pow(10.0, 10.0);
    int f = 1000;
    wavelenght = (double) c / f;

    printf("The wavelength = %f", wavelenght);
    return 0;
}
