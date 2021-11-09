#include <iostream>

int main()
{
    // Declaring the function
    double integrate(double a, double b, int n);

    // Declaring the variables I need
    int num_trapezoid = 0;
    double a, b, area;

    // Title
    printf("Integrating 1/x. \n");

    // Asking the user for a
    printf("Enter the value of 'a': ");
    scanf_s("%lf", &a);

    // Used a while loop to make sure the user enters something other than 0
    while (a == 0)
    {
        // Making sure a is not zero because 1/x is undefinited at 0
        printf("The function is undefined at 0, please enter another point for a: ");
        scanf_s("%lf", &a);
    }

    // Asking the user for b
    printf("Enter the value of 'b': ");
    scanf_s("%lf", &b);

    // Used a while loop to make sure the user enters something other than 0
    while (b == 0)
    {
        // Making sure b is not zero because 1/x is undefinited at 0
        printf("The function is undefined at 0, please enter another point for b: ");
        scanf_s("%lf", &b);
    }

    // Asking the user for the number of trapzoids
    printf("Enter the number of trapezoid: ");
    scanf_s("%d", &num_trapezoid);

    // Getting the area:
    area = integrate(a, b, num_trapezoid);

    // Printing the final answer
    printf("The area of 1/x over points ( %lf, %lf ) = %lf", a, b, area);

    return 0;
}

// function to integrate
double integrate(double a, double b, int n)
{
    // Declaring all the variables I need
    double area = 0, left, right, y1, y2, base;

    // The base of each trapezoid
    base = (b - a) / n;

    // Running the for based on the number of trapezoids
    for (int i = 0; i <= n; i++)
    {
        // Formula for trapezoid rule:
        left = a + base * i;
        right = left + base;
        y1 = 4 * exp(-left);
        y2 = 4 * exp(-right);
        area += 0.5 * base * (y1 + y2);
    }

    // Returns the area
    return area;
}