#define _CRT_SECURE_NO_WARNINGS
// Declared above to read files
#include <iostream>

int main()
{
	// Declaring the function for harmonic mean
	double harmonicMean(double x[], int n);

	// Declaring the variables I need
	double Xi[7], hM;
	
	// Declaring the file
	FILE* x;
	x = fopen("data.txt", "r");

	// Reading the data from the file and storing them in the array
	for (int i = 0; i < 7; i++)
	{
		fscanf(x, "%lf", &Xi[i]);
	}

	// Calling the function
	hM = harmonicMean(Xi, 7);

	printf("The harmonic mean = %lf", hM);
}

double harmonicMean(double x[], int n)
{
	// Declaring the variable
	double sum = 0;

	// Using the for loop to calculate the sum
	for (int i = 0; i < n; i++)
	{
		sum += 1.0 / x[i];
	}

	//returning the harmonic mean
	return n / sum;
}