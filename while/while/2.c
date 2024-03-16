#include <stdio.h>

int main() {
    //2)Wap to display multiplication table of any number.
    int num, i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Multiplication table of %d:\n", num);
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num*i);
        i++;
    }
    return 0;
}
