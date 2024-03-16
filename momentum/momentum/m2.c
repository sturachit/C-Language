
#include <stdio.h>


int main()
{
    //2) C program to check a number is even or odd using ternary operator.

    int num;
    printf("Enter a num :");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("%d is even.") : printf("%d is odd.");
    return 0;
}