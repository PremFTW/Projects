#include <iostream>
#include <math.h>

int main()
{
    int f;
    double pi = 3.14, l = 0.1, c = 0.1 * pow(10, -6), vo = 0.01, r = 100, vr, a, b;

    printf("Enter the number for frequency: \n");
    scanf_s("%d", &f);

    double w = 2.0 * pi * f;

    a = pow(r, 2.0) + pow(((w * l) - (1.0 / (w * c))), 2.0);
    b = pow(a, 1.0 / 2.0);
    vr = (r * vo) / b;

    printf("Vr = %f", vr);

    return 0;
}
