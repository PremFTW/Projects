#include <iostream>

int main()
{
    char course;

    printf("Enter the first character of the course you want to take:");
    scanf_s("%c", &course);

    switch (course)
    {
    case 'e': case 'E':
        printf("You have selected English. \n");
        break;
    case 'h': case 'H':
        printf("You have selected History. \n");
        break;
    case 'l': case'L':
        printf("You have selected Literature. \n");
        break;
    default:
        printf("Please enter either E, H, or L.");
        break;
    }

    return 0;
}