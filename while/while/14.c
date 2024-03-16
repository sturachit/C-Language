#include <stdio.h>

int main() {
    int n = 7, f = 0, s = 1, t, i = 0;

    printf("Fibonacci series up to %d terms:\n", n);

    while (i < n) {
        if (i <= 1) {
            t = i;
        } else {
            t = f + s;
            f = s;
            s = t;
        }
        printf("%d ", t);
        i++;
    }

    return 0;
}
