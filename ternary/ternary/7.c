#include <stdio.h>

int main() {

    //7)Wap to check (a<b) then c=a otherwise c=b and print value c.
   int a, b, c;
   printf("Enter two values: ");
   scanf("%d %d", &a, &b);
   
  
   c = (a < b) ? a : b;
   
   printf("The value of c is: %d", c);
   
   return 0;
}
