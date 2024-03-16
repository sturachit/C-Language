#include <stdio.h>

void main()
{   
    //3)Wap to check even/odd.
    int num;
    printf("Enter num :\n");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("even") : printf("odd");
}