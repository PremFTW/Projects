#include <iostream>
#include <math.h>

int main()
{
    int   m, n, sum = 0;

    for (m = 2; m <= 6; m += 2)

    {
        for (n = 1; n <= m; n++) {
            if (n == m)
                break;
            sum += n;
        }
    }
    printf("Sum is % d\n", sum);


	return 0;
}