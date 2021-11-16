#include <iostream>
// Declared this to use the power function
#include<math.h>

int main()
{
    // Declaring the function and variables
    double series_sum(double n);

    double answer = 0, angle, og;

    // Getting the angle in radians from the user
    std::cout << "Enter angle in radians: ";
    std::cin >> angle;

    // Computing cosine of the angle from my own functions and the built in function
    answer = series_sum(angle);
    og = cos(angle);

    // Printing my results
    std::cout << "The result from my program: \n";
    std::cout << "The cosine of " << angle << " rad is = " << answer << ".\n";

    // Printing the built in function results
    std::cout << "The result from the built-in cos function: \n";
    std::cout << "The cosine of " << angle << " rad is = " << og << ".";

    return 0;
}

// Function to find the sum of the series
double series_sum(double n)
{
    // Declaring function and variables
    int nfact(int n);
    double sum = 1, fact;
    int k = 0;

    // For loop that increments by two
    for (int i = 2; i <= 10; i += 2)
    {
        // Getting the factoral
        fact = nfact(i);

        // Summing
        sum += (pow(-1, k + 1)) * ((pow(n, i)) / fact);

        // Used to alternate signs
        k++;
    }

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