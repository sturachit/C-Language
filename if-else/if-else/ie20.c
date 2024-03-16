#include <stdio.h>

void main()
{
    //20) Write C program to input basic salary of an employee and calculate its gross salary .
    float BasicSalary;
    float HRA, DA;

    printf("Enter salary: ");
    scanf("%f", &BasicSalary);

    if (BasicSalary <= 10000)
    {

        HRA = 0.2 * BasicSalary;
        DA = 0.8 * BasicSalary;
        printf("HRA = %.2f\n", HRA);
        printf("DA = %.2f", DA);
    }
    else if (BasicSalary <= 20000)
    {

        HRA = 0.25 * BasicSalary;
        DA = 0.9 * BasicSalary;
        printf("HRA = %.2f\n", HRA);
        printf("DA = %.2f ", DA);
    }
    else if (BasicSalary > 20000)
    {

        HRA = 0.3 * BasicSalary;
        DA = 0.95 * BasicSalary;
        printf("HRA = %.2f\n", HRA);
        printf("DA = %.2f", DA);
    }
}
