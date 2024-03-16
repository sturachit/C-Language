
#include <stdio.h>

void main()
{
    // 3. Write C program to convert temperature from degree Celsius to Fahrenheit

    float celsius, fahrenheit;
    printf("Enter the celsius");
    scanf("%f", &celsius);

    // printf("Enter the fahrenheit");
    // scanf("%f",&fahrenheit);

    fahrenheit = (celsius * 9 / 5) + 32;
    //  celsius=(fahrenheit-32)*5/9;

    //  printf("converted in c:%f\n",celsius);
    printf("converted in f:%f\n", fahrenheit);
}