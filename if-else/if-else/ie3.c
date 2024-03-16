#include <stdio.h>
void main()
{

    //3) Write  C program to check whether a number is negative, positive or zero.
    int a;

    printf("Enter Number a : ");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("%d is Positive number", a);
    }
    else if (a < 0)
    {
        printf("%d is Negative number", a);
    }
    else
    {
        printf("%d is Zero ", a);
    }
}
