#include <stdio.h>

int main()
{

    //5) Wap to find out maximum from 3 values.
    int a, b, c, max;
    printf("Enter three values:\n ");
    scanf("%d %d %d", &a, &b, &c);
    (a > b && a > c) ? printf("a is maximum %d", a) : (b > c) ? printf("b is maximum %d", b) :  printf("c is maximum %d", c);

    return 0;
}
