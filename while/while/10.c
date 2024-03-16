#include<stdio.h>

int main(){
    //11)Wap to calculate power.
    int n,e,ans=1,i=1;
    printf("Enter the no :\n");
    scanf("%d",&n);
    printf("Enter Exponent :\n");
    scanf("%d",&e);
    while(i<=e){
        ans *=n;
        i++;
    }
    printf("Power is %d",ans);
    return 0;
    
}