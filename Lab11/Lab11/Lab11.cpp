#define _CRT_SECURE_NO_WARNINGS
// Declared the above open and read files
#include <iostream>
// Declared this to use the power function
#include<math.h>

int main()
{
    // Declaring the function
    double rms(double n[], int arrSize);
    // Defining the file
    FILE* Xi;
    // Opening and setting up the file to read
    Xi = fopen("data.txt", "r");

    // Declaring the array and variable to store rms
    double x[7];
    double result;

    // Storing the data in the array
    for (int i = 0; i < 7; i++)
    {
        fscanf(Xi, "%lf", &x[i]);
    }

    // Getting the rms
    result = rms(x, 7);

    // Printing the result
    printf("The value of rms for the data given = %lf", result);

    return 0;
}

double rms(double n[], int arrSize)
{
    // Declaring all the variables I need
    double sum = 0, rms;

    // Adding all of the elements
    for (int i = 0; i < arrSize; i++)
    {
        sum += pow(n[i], 2.0);
    }

    // Calculating the final answer
    rms = sqrt((1.0 / arrSize) * sum);

    // Returning the result
    return rms;
}