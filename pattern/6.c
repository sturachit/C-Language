#include<stdio.h>

void main(){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=5;j>=1;j--){
            if(j>=i){
                printf("%d",j);
            
            }
        }
        printf("\n");
    }
}