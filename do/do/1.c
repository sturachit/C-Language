#include <stdio.h>

int main() {
    //1)Wap to display 1 to 10 numbers.
    int i = 1;

    printf("Numbers from 1 to 10:\n");

    do {
        printf("%d ", i);
        i++;
    } while (i <= 10);

    return 0;
}
