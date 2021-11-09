#define _CRT_SECURE_NO_WARNINGS
// Declared the above open and read files
#include <iostream>
// Declared this to use the power function
#include<math.h>

int main()
{   
    // Declaring the function for geometric mean
    double geometricMean(double array[], int n);

    // Defining the file
    FILE* Xi;
    // Opening and setting up the file to read
    Xi = fopen("data.txt", "r");

    // Declaring the array and variable to store geometric mean
    double x[7];
    double result;

    // Storing the data from the file in the array
    for (int i = 0; i < 7; i++)
    {
        fscanf(Xi, "%lf", &x[i]);
    }

    // Getting the geometric mean
    result = geometricMean(x, 7);

    // Printing the result
    printf("The geometric mean for the data given = %lf", result);

    return 0;
}

// function that finds the geometric mean. N is the size of the array
double geometricMean(double array[], int n)
{
    // Declaring the variables I need
    double product = 1.0, geometricMean;

    // Calculating the part inside the root
    for (int i = 0; i < n; i++)
    {
        product *= array[i];
    }

    // Calculating the final answer
    geometricMean = pow(product, 1.0 / n);

    // returning the result
    return geometricMean;
}