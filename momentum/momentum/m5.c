#include <stdio.h>

void main()
{
    //5. Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition
    float unit, bill, surcharge, totalamount;
    printf("enter use unit :\n");
    scanf("%f", &unit);

    if (unit <= 50)
    {
        bill = unit * 0.50;
    }
    else if (unit >= 51 && unit <= 150)
    {
        bill = 25 + ((unit - 25) * 0.75);
    }
    else if (unit >= 151 && unit <= 250)
    {
        bill = 100 + ((unit - 150) * 1.20);
    }
    else
    {
        bill = 220 + ((unit - 250) * 1.50);
    }

    surcharge = bill * 0.20;
    totalamount = bill + surcharge;
    printf("Total bill amount is %.2f", totalamount);
}
