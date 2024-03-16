#include <stdio.h>

void main() {
    //18) Write C program to calculate profit or loss.
   int buy,sell,profit,loss;
   printf("Enter buy value: ");
   scanf("%d",&buy);
   printf("Enter sell value: ");
   scanf("%d",&sell);
   
   if(buy<sell ){
       int profit = sell - buy;
       printf("You have %d Rs profit",profit);
   }
   else if(buy>sell ){
       loss = buy - sell;
       printf("You have %d Rs loss",loss);
   }
   else{
       printf("Equel");
   }

}
