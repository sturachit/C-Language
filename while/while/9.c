#include <stdio.h>
int main()
{
    // 9)Wap to display number is palindrome or not.
    int no, rev = 0, r,n;
    printf("Enter no :\n ");
    scanf("%d", &no);
    n =no;
    while (no != 0)
    {
        r = no % 10;
        rev = (rev * 10) + r;
        no = no / 10;
    }
    printf("\n Reverse no is %d", rev);
    if(n ==rev){
        printf("\n Palindrom no");
    }else{
        printf("\n not Palindrom no");

    }
    return 0;
}

