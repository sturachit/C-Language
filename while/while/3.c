#include <stdio.h>

int main() {
    //3)Wap to Count total digits of number.
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        count++;
        num /= 10;
    }
    printf("Total digits: %d\n", count);
    return 0;
}
