
#include <stdio.h>

void main()
    {
    // 8. Program Check weather num is prime or not

    int no, i = 1, count = 0;
    printf("Enter no:");
    scanf("%d", &no);
    while (i <= no)
    {
        if (no % i == 0)
        {
            count++;
        }
        i++;
    }
    if (count == 2)
    {
        printf("Prime no");
    }
    else
    {
        printf("not primr no");
    }
}