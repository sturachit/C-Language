
#include <stdio.h>

void main()
{
    //1) C program to input any character and check whether it is alphabet, digit or special character.

    char number;
    printf("Enter Number :");
    scanf("%c", &number);
    if (number >= 'a' && number <= 'z' || number >= 'A' && number <= 'Z')
    {
        printf("Number is Alphabetic");
    }
    else if (number >= '0' && number <= '9')
    {
        printf("Number is Digit");
    }
    else
    {
        printf("Number is special character");
    }
}