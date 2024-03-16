#include <stdio.h>

int main() {
    //5)Wap to sum of first &  last digits of number.
    int num, fd, ld;
    printf("Enter a number: ");
    scanf("%d", &num);
    ld = num % 10; 
    while (num >= 10) { 
        num /= 10;
    }
    fd = num; 
    printf("Sum of first and last digits: %d\n",fd + ld);
    return 0;
}
