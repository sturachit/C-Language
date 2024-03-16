#include<stdio.h>

int main(){
    //11)Wap to display number is armstrong or not.
    int n,r,ans=0;
    printf("Enter the no :\n");
    scanf("%d",&n);
    
    while(n!=0){
        r =n%10;
        ans =ans+(r*r*r);
        n =n/10;

    }
    printf("number is %d",ans);
    return 0;
    
}