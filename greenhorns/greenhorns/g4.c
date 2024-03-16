
#include <stdio.h>

// 4. Write C Program to find gross salary.
// Ex. Base Salary: 100 RS, HRA=10%, DA=5%, TA=8%.

void main()
{
    float salary, HRA, DA, TA, Totalsalary;
    printf("Enter the salary");
    scanf("%f", &salary);
    HRA = salary * 10 / 100;
    printf("then HAR is:%f\n", HRA);
    DA = salary * 5 / 100;
    printf("then DA is:%f\n", DA);
    TA = salary * 8 / 100;
    printf("then TA is:%f\n", TA);

    Totalsalary = salary + HRA + DA + TA;
    printf("\n Total salary %f", Totalsalary);
}