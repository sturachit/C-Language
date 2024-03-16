#include <stdio.h>
void main()
{
    // 1) Write a C program to find the maximum between two numbers.
    int x, y;
    printf("Enter Number x & y: ");
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        printf("x is maximum");
    }
    else
    {
        printf("y is maximum");
    }
}