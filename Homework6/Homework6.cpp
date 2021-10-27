#include <iostream>
// Declared this to use the power and sin function
#include<math.h>

// Declared this to use C++ stuff
using namespace std;

int main()
{
    // Declaring the function and variables
    double series_sum(double n);

    double answer = 0, angle, og;

    // Getting the angle in radians from the user
    cout << "Enter angle in radians: ";
    cin >> angle;

    // Computing sine of the angle from my own functions and the built in function
    answer = series_sum(angle);
    og = sin(angle);

    // Printing my results
    cout << "The result from my program: \n";
    cout << "The sine of " << angle << " rad is = " << answer << ".\n";

    // Printing the built in function results
    cout << "The result from the built-in sin function: \n";
    cout << "The sine of " << angle << " rad is = " << og << ".";

    return 0;
}

// Function to find the sum of the series
double series_sum(double n)
{
    // Declaring function and variables
    int nfact(int n);
    double sum = 0, fact;
    int k = 1;

    // For loop that increments by two
    for (int i = 1; i <=9; i += 2)
    {
        // Getting the factoral
        fact = nfact(i);

        // Summing
        sum += (pow(-1, k + 1)) * ((pow(n, i)) / fact);

        // Used to alternate signs
        k++;
    }

    cout << k;
    // Returning the result
    return sum;
}

// Function to find the factorial of n number
int nfact(int n)
{
    // Declaring variables
    int fact = 1;

    while (n > 0)
    {
        // The math
        fact *= n;
        n--;
    }

    // returning factorial of the n number
    return fact;
}