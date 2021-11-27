#include <iostream>

int main()
{
    double pi = 3.141, radius = 1.5, area, height = 8.0;

    area = (2.0 * pi * radius * height) + (2.0 * pi * pow(radius, 2));

    printf("The area of the cylinder = %f", area);

    return 0;
}
