#include <iostream>

// Declaring the function
void search_value(int x[], int arrSize, int key);

int main()
{
    // Declaring the array
    int x[] = { 4, 6, 3, 2, 1, -1, 0, 9 }, key;
    int length = sizeof(x) / sizeof(int);
    
    // Getting the key from the user
    printf("Enter an integer for the 'key' value to search the array: ");
    scanf_s("%d", &key);

    // Calling the function
    search_value(x, length, key);

    return 0;
}

// The function that searches the array for the key
void search_value(int x[], int arrSize, int key)
{
    // Declaring this to check if the key number has been found
    bool found = false;

    // Checking if there is key value in the array
    for (int i = 0; i < arrSize; i++)
    {
        if (x[i] == key)
        {
            // Letting the user know that the key is in the array
            printf("Value found. \n");
            // This will prevent the last if statement from running
            found = true;
            // Since there is a match, its no use to run the rest of the array
            break;
        }
    }

    // Letting the user know that the key is not in the array
    if (found == false)
    {
        printf("Not found. \n");
    }
}