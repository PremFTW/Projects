#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	float pi = 3.14, w;
	int freq;

	FILE* input;
	FILE* output;

	input = fopen("input.txt", "r");
	output = fopen("output.txt", "w");

	fprintf(output, "Frequency\t Auglar\n");

	while ((fscanf(input, "%d", &freq)) == 1)
	{
		w = 2 * pi * freq;
		fprintf(output, "%d\t %f\n", freq, w);

		printf("The frequency = %d and The angular freqeuncy = %f\n", freq, w);
	}

	return 0;
}