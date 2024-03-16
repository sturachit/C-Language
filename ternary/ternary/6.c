#include <stdio.h>

int main()
{

    //6) Wap to find out maximum from 4 values.
    int a, b, c, d, max;
    printf("Enter four values: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    (a > b && a > c) ? printf("a is maximum %d", a) : (b > c) && (b > d) ? printf("b is maximum %d", b) : (c > d)? printf("c is maximum %d", c): printf("d is maximum", d);

    return 0;
}
