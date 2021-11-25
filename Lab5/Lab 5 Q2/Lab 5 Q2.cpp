#include <iostream>
#include<math.h>

int main()
{
    int num = 0, square;
    printf("Number      Square \n");

    while (num <= 50)
    {
        square = pow(num, 2);
        printf("%d              %d \n", num, square);
        num += 2;
    }

    return 0;
}
