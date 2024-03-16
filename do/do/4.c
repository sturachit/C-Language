#include <stdio.h>
void main()
{
    //4)Wap to perform following operation.[switch case with do while loop – use exit(0)]
    int a, b, ch;
    do
    {
        printf("\n1.Add\n2.Sub\n3.Division\n4.Multiplication\n5.Exit ");
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
        case 3:
            printf("Division is %d\n", a / b);
            break;
        case 4:
            printf("Multiplication is %d\n", a * b);
            break;
        default: break;
        }
    } while (ch != 5);
    printf("\n -----Thank you-----");
}