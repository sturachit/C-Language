#include <stdio.h>
int main()
{
    //8)Wap to print reverse number of user input.
    int n, rev = 0, r;
    printf("Enter no :\n ");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        rev = (rev * 10) + r;
        n = n/10;
    }
    printf("\n Reverse no is %d",rev);
    return 0;

}