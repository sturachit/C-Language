
#include <stdio.h>
void main() {
   char a;
   printf("Enter an any key: ");
   scanf("%c", &a);
   
   if(a>'0' && a<'9'){
       printf("%c is digit",a);
   }
   else if((a>'a' && a<'z') || (a>'A' && a<'Z') ){
       printf("%c is alphabet",a);
   }
   
   else{
       printf("%c is Special character",a);
   }
}
