#include <stdio.h>

void main()
{
    //6) C program to addition of two matrices.
    int a, b, i, j, f[10][10], s[10][10], sum[10][10];

    printf("Enter the number of rows and columns: \n");
    scanf("%d%d", &a, &b);
    printf("Enter the elements of first matrix :\n");

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &f[i][j]);
        }
    }

    printf("Enter the elements of second matrix :\n");

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &s[i][j]);
        }
    }

    printf("Sum of entered matrices :\n");

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            sum[i][j] = f[i][j] + s[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}
