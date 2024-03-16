#include <stdio.h>

void main()
{
    //2) Wap to add two values if operator is ‘+’ otherwise minus will be performed.

    int p, q, result;
    char ch;
    printf("Enter p & q :");
    scanf("%d %d", &p, &q);
    printf("Enter + or - :");
    scanf("%c ", &ch);
    result = (ch == '+') ? p + q : p - q;
    printf("answer is %d", result);
}