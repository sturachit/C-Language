#include <stdio.h>

void main()
{
    int i, j, k = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i + j >= 6)
            {
                printf("%d ", k);
                k++;
            }
        }
        printf("\n");
    }
}
    