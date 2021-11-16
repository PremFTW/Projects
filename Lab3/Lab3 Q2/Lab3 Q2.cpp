#include <iostream>
#include <math.h>

int main()
{
    int n, t;
    float p = 5000.0, r, a;

    printf("Enter the interest rate: \n");
    scanf_s("%f", &r);
    r = r / 100.0;
    printf("Enter the number of times the interest is applied a year: \n");
    scanf_s("%d", &n);
    printf("Enter the number of years the interest will be applied: \n");
    scanf_s("%d", &t);

    a = p * pow((1.0 + (r / n)), n * t);

    printf("A = %f", a);

    return 0;
}
