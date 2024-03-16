#include<stdio.h>

int main (){
    //3) C program to find out max from 4 numbers using nested if.

     int p,q,r,s;
    printf("Enter any 4 value: \n");
    scanf("%d %d %d %d", &p,&q, &r, &s);

    if(p>q && p>q && p>q)
    {
        printf("\n P = %d is maximum",p);
    }
    else
    {
        if(q>r && q>s)
        {
            printf("\n Q = %d is maximum",q);
        }
        else{
            if(r>s)
            {
                printf("\n R = %d is maximum",r);
            }
            else
            {
                printf("\n S = %d is maximum",s);
            }
        }
    }
    return 0;
}
