#include<stdio.h>

void main(){
    int i,j,r=1;
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            if(j<=i){
                printf("%d",r);
                r++;
            }
        }
        printf("\n");
    }
}