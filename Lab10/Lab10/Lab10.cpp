#include <iostream>
// Declared this to use random numbers
#include<stdlib.h>

int main()
{
    // Declaring the function
    double random_float(double a, double b);

    // Declaring all the variables I need
    unsigned int seed;
    double com1 = 0.8, com2 = 0.85, com3 = 0.95, com4 = 0.9, num1, num2, num3, num4;
    int count = 0;

    // Getting the seed from user and applying it
    printf("Enter a positive integer for a seed value: ");
    scanf_s("%d", &seed);
    srand(seed);

    // Making sure the for loop runs a 1000 times
    for (int i = 0; i < 1000; i++)
    {
        // Generating four random numbers
        num1 = random_float(0, 1);
        num2 = random_float(0, 1);
        num3 = random_float(0, 1);
        num4 = random_float(0, 1);

        // Checking with the if statement
        if ((num1 <= com1) && ((num2 <= com2) || (num3 <= com3)) && (num4 <= com4))
        {
            count++;
        }
    }

    printf("Out of the 1000 times, %lf number of times it was successful.", &count);

    return 0;
}

// Funtion to generate random numbers between 0 and 1
double random_float(double a, double b)
{
    return ((double)rand() / RAND_MAX) * (b - a) + a;
}