#include <iostream>
#include <math.h>

int main()
{
    int direction = 0;
    printf("Choose one of the following degrees and type which one you want: 45, 135, 225, and 315: ");
    scanf_s("%d", &direction);

    switch (direction)
    {
    case 45:
        printf("Northeast!");
        break;
    case 135:
        printf("Northwest!");
        break;
    case 255:
        printf("Southwest!");
        break;
    case 315:
        printf("Southeast!");
        break;
    default:
        printf("You must choosing only from the following values: 45, 135, 225, and 315.");
        break;
    }

    return 0;
}