#include <stdio.h>

void main()
{
    // 3)wap to enter one variable from user and perform below operation.

    int a, b, c;
    a = 40;
    b = 60;
    c = 50;
    c = a + b;
    printf("\n sum of a&b is %d", c);
    c = b - a;
    printf("\n minus of a&b is %d", c);
    c = a*b;
    printf("\n multiplication of a&b is %d",c);
    c =b/a;
    printf("\n divison of a&b is %d", b / a);
    c =a%b;
    printf("\n moduls of a&b is %d", a % b);
}