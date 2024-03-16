#include <stdio.h>
void main()
{
    // 6) Write  C program to check whether a year is a leap year or not.
    int a;
    printf("Enter Number a : ");
    scanf("%d", &a);
    if (a % 4 == 0)
    {
        printf("%d is leap year", a);
    }
    else
    {
        printf("%d is not leap year", a);
    }
}
