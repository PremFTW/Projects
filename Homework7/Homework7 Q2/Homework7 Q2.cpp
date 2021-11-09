#include <iostream>
// Declared this to use the random function
#include<stdlib.h>
// Declared this to use C++ stuff
using namespace std;

int main()
{
    // Declaring the function
    double random_float(double a, double b);

    // Declaring all the variables I need
    double com1 = 0.8, com2 = 0.85, com3 = 0.95, num1, num2, num3;
    int count = 0;

    // Making sure the for loop runs a 1000 times
    for (int i = 0; i < 1000; i++)
    {
        // Generating three random numbers
        num1 = random_float(0, 1);
        num2 = random_float(0, 1);
        num3 = random_float(0, 1);

        // Checking with the if statement
        if ((num1 <= com1) && (num2 <= com2) && (num3 <= com3))
        {
            count++;
        }
    }

    // Printing the results
    cout << "After running the simulation a 1000 times, " << count << " number of times it was successful";

    return 0;
}

// Funtion to generate random numbers between 0 and 1
double random_float(double a, double b)
{
    return ((double)rand() / RAND_MAX) * (b - a) + a;
}
