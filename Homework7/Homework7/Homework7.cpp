#include <iostream>
// Declared this to use the random function
#include<stdlib.h>
// Declared this to use C++ stuff
using namespace std;

int main()
{
    // Declaring the variables I need
    // Count stores the final answer, r stores the random number
    int count = 0, r;

    // Making sure for loop runs a 1000 times
    for (int i = 0; i < 1000; i++)
    {
        // Generating a random numbers for both between 1 and 10
        r = rand() % (10 - 1 + 1) + 1;

        // Checking if they are divisible by 3
        if (r % 3 == 0)
        {
            // Increasing the count if they are divisible by 3
            count ++;
        }
    }

    // Printing the final results
    cout << "Generating a 1000 random numbers between 1 and 10, " << count << " numbers are divisble by three.";
    
    return 0;
}