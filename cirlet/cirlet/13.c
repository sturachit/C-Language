#include <stdio.h>

void main()
{
    int i, j, r;
    for (i = 1; i <= 5; i++)
    {
        r = 1;
        for (j = 1; j <= 5; j++)
        {
            if (j >= i)
            {
                printf("%d", j);
                r++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}