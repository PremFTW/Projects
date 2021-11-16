#define _CRT_SECURE_NO_WARNINGS
// Declared the above open and read files
#include <iostream>

// Generating the input file
void generateInput();

int main()
{
    // Declaring the function for harmonic mean
    double harmonicMean(int n[]);

    // Defining a file
    FILE* Xi;
    // Opening a file to read
    Xi = fopen("input.txt", "r");

    // Declaring variables I need
    int x[100];
    double sum = 0.0, harMean;

    // Storing all of the values in the array
    for(int i = 0; i < 100; i++)
    {
        (fscanf(Xi, "%d", &x[i]));
    }

    // Finding the harmonic mean for the array
    harMean = harmonicMean(x);

    // Printing the result
    printf("The harmonic mean = %lf", harMean);

    return 0;
}

// Made a function to generate 100 numbers since it wasn't provided
void generateInput(void)
{
    // Defining a file
    FILE* inputX;
    // Opening a file for writing
    inputX = fopen("input.txt", "w");

    for (int i = 1; i <= 100; i++)
    {
        // Writing numbers 1 to 100 in the file
        fprintf(inputX, "%d \n", i);
    }

    return;
}

// Function that calculates the harmonic mean
double harmonicMean(int n[])
{
    // Find the size of the array
    int arrSize = sizeof(n) / sizeof(int);
    // Declaring the variables I need
    double sum = 0.0, harmonicMean;

    for (int i = 0; i < arrSize; i++)
    {
        // Adding all of the elements
        sum += (double) 1.0 / n[i];
    }

    // Calculating the harmonic mean
    harmonicMean = (double)arrSize / sum;

    // Returning the result
    return harmonicMean;
}