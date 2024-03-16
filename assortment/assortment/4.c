
#include<stdio.h>

void main(){
        //4)C program to Insert, Delete & Update operations the element into array.
    int a[100],n,i,j,e,p,temp=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position: ");
    scanf("%d",&p);
    printf("Enter the element: ");
    scanf("%d",&e);
    for(i=n;i>p;i--)
    {
        a[i] = a[i-1];
    }

    a[p] = e;
    n++;
    printf("\n After insert the element: ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}