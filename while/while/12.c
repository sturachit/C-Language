#include<stdio.h>
int main (){
    //12)Wap to display no is prime or not.
    int no,i=1,count =0;
    printf("Enter the no :\n");
    scanf("%d",&no);
    while(i<=no){
        if(no%i==0){
            count++;
        }
        i++;
    }
    if(count ==2){
        printf("Prime no ");
    }else{
        printf("Not Prime no ");
    }
    return 0;
}