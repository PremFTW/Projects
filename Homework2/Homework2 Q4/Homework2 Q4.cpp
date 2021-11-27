#include <iostream>
#include <math.h>

int main()
{
    float answer = 0;
    int count1 = 1, count2 = 2;

    while (count1 <= 7)
    {
        answer += count1 / (pow(count2, 2.0));
        count1++;
        count2++;
    }

    printf("The sum of the series = %f", answer);

    return 0;
}

