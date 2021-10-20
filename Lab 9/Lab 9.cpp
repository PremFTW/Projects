#include <iostream>
// Declared this to use power function
#include<math.h>

int main()
{
    // Declaring function and variables
    float series_sum(int n);

    int n;
    float sum = 0;

    // Get an odd number from the user
    std::cout << "Please enter an odd number: ";
    std::cin >> n;

    // Check if it is an odd number
    if (n % 2 == 0)
    {
        std::cout << "You can only enter odd numbers";
    }
    else
    {
        sum = series_sum(n);
    }

    // Printing the result
    std::cout << "The sum of the series when N = " << n << " is = " << sum;
}

// Function to find the sum of the series
float series_sum(int n)
{
    // Declaring variable
    float sum = 0;
    for (int i = 1; i <= n; i += 2)
    {
        sum += i / pow(i + 1.0, 2.0);
    }

    // returning sum
    return sum;
}