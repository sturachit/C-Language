#include<stdio.h>
void main(){

    //8) Wap to check a=1 then check b=2 then answer will be 3 otherwise answer will be 5 & a!=1 then answer will be zero.
    int a, b;
    printf("Enter a & b");
    scanf("%d %d",&a,&b);

    (a==1)?(b==2)?printf("ans=3",3):printf("ans=5",5):printf("ans=0",0);

}