#include <stdio.h>

int main() {

    //13)Wap to display factorial of number
    int num = 5, f = 1;

    while (num > 1) {
        f *= num;
        num--;
    }

    printf("Factorial of 5 is %d\n", f);

    return 0;
}
