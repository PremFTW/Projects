#include <iostream>

int main()
{
    double num = 0.0, min = 0.0, max = 0.0;
    int count = 0;

    printf("How many number do you want to enter? ");
    scanf_s("%d", &count);

    for (int i = 0; i < count; i++)
    {
        printf("Enter a number: ");
        scanf_s("%lf", &num);

        if ((min == 0.0) && (max == 0.0))
        {
            max = num;
            min = num;
        }
        else if (num > max)
        {
            max = num;
        }
        else if (num < min)
        {
            min = num;
        }
    }

    printf("The largest number you entered = %f and the smallest number you entered = %f", max, min);

    return 0;
}