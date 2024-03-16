#include <stdio.h>

void main()
    {
    // 4. Write C program to find sum of first and last digit of a number

    int num, sum = 0, first, last;
    printf("\n Enter the number: ");
    scanf("%d", &num);
    last = num % 10;
    while (num >= 10)
    {
        num = num / 10;
    }
    first = num;
    sum = first + last;
    printf("\n Sum of first and last digit is %d", sum);
}