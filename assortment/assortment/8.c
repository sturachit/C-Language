#include <stdio.h>

void main()
{
    // 8. Write C program to find sum of diagonal elements of a matrix.
    int i, j, sum = 0;
    int a[3][3] = {2, 2, 5, 2, 5, 7, 3, 2, 1};

    // printf("\nEnter matrix");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if(i + j==2){

            sum += a[i][j];
            }
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    printf("\n sum of diagonal is %d", sum);
}
