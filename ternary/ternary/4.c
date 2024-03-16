#include <stdio.h>

void main()
{   
    //4)Wap to check leap year or not.
    int year;
    printf("Enter year :\n");
    scanf("%d", &year);
    (year % 4 == 0) ? printf("leap year") : printf("not leap year");
}