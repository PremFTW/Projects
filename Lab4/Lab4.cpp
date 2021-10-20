#include <iostream>
#include <math.h>

int main()
{
    float temp;

    printf("Enter temperature in Fahrenheit: ");
    scanf_s("%f", &temp);

    if (temp < 97.5)
    {
        printf("Temperature is below normal.");
    }
    else if ((temp >= 97.5) && (temp < 99.5))
    {
        printf("Temperature is normal.");
    }
    else if ((temp >= 99.5) && (temp < 103.0))
    {
        printf("Temperature is slightly high.");
    }
    else if (temp >= 103)
    {
        printf("Temperature is too high.");
    }

    return 0;
}