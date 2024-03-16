#include <stdio.h>

int main() {
    //Wap to print alphabets from a to z.
    char ch = 'a';

    printf("Alphabets from a to z:\n");

    while (ch <= 'z') {
        printf("%c ", ch);
        ch++;
    }

    return 0;
}
