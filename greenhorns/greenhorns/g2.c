
#include <stdio.h>

void main()
{
    // 2. Write C Program to perform a swapping of two variables

    int a, b;

    printf("enter the value");
    scanf("%d %d", &a, &b);

    a = a - b;
    b = a + b;
    a = b - a;
    printf("swapping value of a %d\n", a);
    printf("swapping value of b %d\n", b);
}