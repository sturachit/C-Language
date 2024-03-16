#include<stdio.h>

void main()
{
//2)wap to check maximum of 3 variables p,q,r and output will
//be store in "result" variable.
int p,q,r;
printf("Enter the value of p:\n");
scanf("%d",&p);
printf("Enter the value of q:\n");
scanf("%d",&q);
printf("Enter the value of r:\n");
scanf("%d",&r);

(p>q)?(p>r)?printf("p is maximum"):printf("q is maximum"):(q>r)?printf("b is maximum"):printf("r is maximum");
}