#include <stdio.h>

void main()
{
    int i, j;
    for (i = 45; i<= 49; i++)
    {
        for (j = 45; j <= 49; j++){
            if (j <= i)
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }
  
}
