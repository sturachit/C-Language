
#include <stdio.h>
void main()
{

    // 7) Write  C program to check whether a character is alphabet or not.
    char a;
    printf("Enter Number a : ");
    scanf("%c", &a);
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        printf("%c is alphabet", a);
    }
    else
    {
        printf("%c is not alphabet", a);
    }
}
