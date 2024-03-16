#include <stdio.h>
void main()
{

    //2) Write  C program to find the maximum between three numbers.
    int x, y, z;
    printf("Enter Number x, y & z : ");
    scanf("%d %d %d", &x, &y, &z);
    if (x > y)
    {
        printf("x is maximum");
    }
    if (y > z)
    {
        printf("y is maximum");
    }
    else
    {
        printf("z is maximum");
    }
}