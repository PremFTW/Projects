#include <iostream>

// Declaring this to store min and max values of the array
double min, max;
// I declared these as global variables because I need to get those values from another function

int main()
{
    // Declaring the function
    double average(double n[], int size);

    // Declaring the array and average variable
    double x[] = { 2.5, 3.9, 6.3, 2.6, 1.9, 4.4, 5.8, 3.3 };
    double avg;

    // Finding the size of the array.
    int arrSize = sizeof(x) / sizeof(double);

    // Calling the function to get the average, min, and max values
    avg = average(x, arrSize);

    // Printing the results
    printf("The average of the array = %lf \n", avg);
    printf("The smallest value of the array = %lf \n", min);
    printf("The largest value of the array = %lf \n", max);

    return 0;
}

double average(double n[], int size)
{
    // Delcaring all the variables I need
    double sum = 0, average;
    
    // Initializing min and max
    min = n[0];
    max = n[0];

    // Using a for loop that ends when it reaches the end of the array
    for (int i = 0; i < size; i++)
    {
        // Summing all the elements
        sum += n[i];

        // Finding the largest number
        if (n[i] > max)
        {
            max = n[i];
        }
        // Find the smallest number
        else if (n[i] < min)
        {
            min = n[i];
        }
    }

    // Calculating the average
    average = (double) sum / size;

    // Returning the results
    return average;
}