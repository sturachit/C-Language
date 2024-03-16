#include <stdio.h>
void main()
{

    //5) Write  C program to check whether a number is Even or Odd.
    int a;
    printf("Enter Number a : ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is Even number", a);
    }
    else
    {
        printf("%d is Odd number", a);
    }
}
