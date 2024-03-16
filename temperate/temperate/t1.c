
#include <stdio.h>
#include <conio.h>

void main()
{
    // 1. Write C program to print all alphabets from a to z. using do while loop

    char i = 'a';
    do
    {
        printf("%c ", i);
        i++;
    } while (i <= 'z');
}