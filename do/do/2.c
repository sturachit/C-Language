#include <stdio.h>

void main(){
    //17)Wap to display multiplication table of any number.
    int num, i = 1;
    printf("\n Enter any Number:");
    scanf("%d", &num);
    printf("Multiplication table of %d: \n", num);
    do
    {
        printf("\n %d * %d = %d", num, i, num * i);
        i++;
    } while (i <= 10);
}