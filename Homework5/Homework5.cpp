#define _CRT_SECURE_NO_WARNINGS
// Defined that to avoid errors while writing to files
#include <iostream>

int main()
{
    // Declaring all the variables I need
    int x = 2, square;

    // Declaring and setting up a file for writing data
    FILE* output;
    output = fopen("output.txt", "w");

    // Creating the table columns
    fprintf(output, "Integer\t Square\n");

    // Making sure the while loop only runs for 5 times and Getting the radius and linear velocity
    while (x <= 25)
    {
        // Calculating the square
        square = x * x;
        // Writing the radius and angular velocity
        fprintf(output, "%d\t %d \n", x, square);
        x += 2;
    }

    return 0;
}