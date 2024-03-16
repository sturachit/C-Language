#include <stdio.h>

void main()
    {
    //  C program print out Fibonacci series. (0,1,1,2,3,5,8)

    int no, i = 1, f = 0, s = 1, t;
    printf("Enter no: ");
    scanf("%d", &no);
    while (i <= no)
    {
        printf("%d\n", f);
        t = f + s;
        f = s;
        s = t;
        i++;
    }
}