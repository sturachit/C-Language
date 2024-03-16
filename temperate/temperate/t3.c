
#include <stdio.h>

void main()
    {
    // 3. Write C program to count number of digits in a number.

    int num, i = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        num = num / 10;
        i++;
    }
    printf("/n Your answer is: %d", i);
}