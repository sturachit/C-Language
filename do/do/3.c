#include <stdio.h>
void main()
{
    //3)Wap to add 2 values until user don’t want to exit.
    int a, b, ch;
    do
    {
        printf("\n1.Add\n2.Sub\n3.Exit ");
        printf("\n Enter Your choice :");
        scanf("%d", &ch);
        printf("\nEnter a & b :");
        scanf("%d %d", &a, &b);
        switch (ch)
        {
        case 1:
            printf("Addition is %d\n", a + b);
            break;
        case 2:
            printf("Substraction is %d\n", a - b);
            break;
        default: break;
        }
    } while (ch != 5);
    printf("\n -----Thank you-----");
}