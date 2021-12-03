#include <iostream>

int main()
{
    // Declaring and Initalizing the array and pointer. I initalized the pointer with the first element.
    int x[7] = { 5, 12, 2, 8, 21, 15, 9 }, *largest = &x[1];

    // Using a for loop to compare all the elements of the array
    for (int i = 0; i < 7; i++)
    {
        // Checking for the largest number
        if (*largest < x[i])
        {
            *largest = x[i];
        }
    }

    // Printing the largest number and its memory address
    printf("The largest value in the array = %d, its address = %d", *largest, largest);
}
