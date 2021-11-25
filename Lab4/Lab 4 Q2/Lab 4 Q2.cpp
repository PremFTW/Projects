#include <iostream>
#include <math.h>

int main()
{
    float weight, cost = 15;

    printf("Enter the weight of the object: ");
    scanf_s("%f", &weight);

    weight = ceil(weight);

    if (weight <= 2)
    {
        printf("The cost for %f = %f.", weight, cost);
    }
    else if ((weight > 2) && (weight < 70))
    {
        cost = 15 + 5 * (weight - 2);
        printf("The cost for %f = %f.", weight, cost);
    }
    else if ((weight >= 70) && (weight <= 100))
    {
        cost = (15 * 2) + 5 * (weight - 2);
        printf("The cost for %f = %f.", weight, cost);
    }
    else if (weight > 100)
    {
        printf("The object is too heavy for this service.");
    }

    return 0;
}