
#include <stdio.h>

void main()
{
    // 2. C program to print multiplication table of any number.

    int i, num;
    printf("Enter num to print table: ");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, (num * i));
    }
}