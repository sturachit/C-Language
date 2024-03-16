
#include <stdio.h>

int main()
    {
    // 6. Write C program to calculate factorial of a number.
    // Ex:- 5! = 5 * 4 * 3 * 2 * 1 ;

    int i, fact = 1, number;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is: %d", number, fact);
    return 0;
}