#include<stdio.h>

void main(){
    int i,j,r=2;
    for(i=2;i<=5;i++){
        for(j=2;j<=5;j++){
            if(j<=i){
                printf("%d",r);
                r+=2;
            }
        }
        printf("\n");
    }
}