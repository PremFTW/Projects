#include<stdio.h>

int main()
{
	int a = 5, b = 6, * m = &b, *n = &a;
	*m = *n + a;

	printf("%d, %d", a, *m);
}