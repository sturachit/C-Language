
#include <stdio.h>
void main() {
   char a;
   printf("Enter an alphabet: ");
   scanf("%c", &a);
   
   if(a>='A' && a<='Z'){
       printf("%c is in Uppercase alphabet",a);
   }
  
   else{
       printf("%c is in lowercase alphabet",a);
   }
}
