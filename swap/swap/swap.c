    //1) WAP to Swap two variables (with sing third variable).

#include <stdio.h>

int main() {
       int a = 20, b = 40, temp;
    
    printf("Before swap: a = %d, b = %d\n", a, b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("After swap: a = %d, b = %d\n", a, b);
    
    return 0;
}