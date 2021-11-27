#include <iostream>
#include <math.h>

int main()
{
    float x, y, answer;

    printf("Enter a value for x:");
    scanf_s("%f", &x);
    printf("Enter a value for y:");
    scanf_s("%f", &y);

    if ((x >= 0) && (y >= 0))
    {
        answer = x + y;
    }
    else if ((x >= 0) && (y < 0))
    {
        answer = x + pow(y, 2);
    }
    else if ((x < 0) && (y >= 0))
    {
        answer = pow(x, 2) + y;
    }
    else if ((x < 0) && (y < 0))
    {
        answer = pow(x, 2) + pow(y, 2);
    }

    printf("Answer = %f", answer);

    return 0;
}