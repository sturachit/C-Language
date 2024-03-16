#include <stdio.h>

void main() {

    //19) Write C program to input marks of five subject physics, chemistry, biology, math and computer. calculate percentage and grade.

   int Maths,Physics,Chemistry,Biology,Computer;
   printf("Enter Maths marks: ");
   scanf("%d",&Maths);
    printf("Enter Physics marks: ");
   scanf("%d",&Physics);
    printf("Enter Chemistry marks: ");
   scanf("%d",&Chemistry);
    printf("Enter Physics marks: ");
   scanf("%d",&Physics);
    printf("Enter Computer marks: ");
   scanf("%d",&Computer);
   
   int TotalMarks = Maths + Physics + Chemistry + Physics + Computer;
   
   int percentage = TotalMarks*100/500;
   printf("Total Marks: %d\n",TotalMarks);
   printf("percentage: %d\n",percentage);
   
   if(percentage>=90){
       printf("Grade A");
   }
   else if(percentage>=80){
       printf("Grade B");
   }
   else if(percentage>=70){
       printf("Grade c");
   }
   else if(percentage>=60){
       printf("Grade D");
   }
   else if(percentage>=40){
       printf("Grade E");
   }
   else {
       printf("Fail");
   }

}
