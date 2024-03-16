#include <stdio.h>

void main()
{
    // 5)wap to perform below operation and store in total variable.
    int a, total;
    a = 8;
    total = 25;
    printf("\n total of +=a is %d", total += a);
    printf("\n total of -=a is %d", total -= a);
    printf("\n total of *=a is %d", total *= a);
    printf("\n total of %=a is %d", total %= a);
}