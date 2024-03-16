#include <stdio.h>
void main()
{

    // 4) Write  C program to check whether a number is divisible by 5 and 11 or not.
    int a;
    printf("Enter Number a : ");
    scanf("%d", &a);

    if (a % 5 == 0 && a % 11 == 0)
    {
        printf("Yes, %d is Divisable by 5 and 11 ", a);
    }
    else
    {
        printf("No, %d is not Divisable by 5 and 11 ", a);
    }
}
