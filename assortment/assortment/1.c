#include <stdio.h>
#define SIZE 10
int main()
{
    // 1. Write C program to print all negative elements in an array.

    int arr[SIZE] = {1, -2, 3, -4, 5, -6, 7, -8, 9, -10};

    printf("Negative elements in the array are: \n");

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
