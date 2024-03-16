#include <stdio.h>
#include <string.h>
void main()
{
    // 1. Write C program to check whether a string is palindrome or not.
    char name[50], name1[50];
    printf("Enter the name :\n");
    gets(name);
    printf("Enter your name :\n");
    puts(name);
    strcpy(name1, name);
    printf("\n string is reverse %s :", name);
    if(strcmp(name1, name) == 0)
    {
        printf("the string is palindrome");
    }
    else
    {
        printf("the string is not palindrome ");
    }
}