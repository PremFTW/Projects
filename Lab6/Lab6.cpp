#include <iostream>
#include <math.h>

int main()
{
    int count2 = 5;
    double sum = 0.0;

    for (int count1 = 3; count1 <= 11; count1 += 2)
    {
        sum += (count1) / pow(count2, 2.0);
        count2++;
    }

    printf("THe sum of this series = %f", sum);
    return 0;
}