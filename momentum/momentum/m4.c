// C program use switch statement. Display Monday to Sunday.

#include<stdio.h>


int  main(){    
    //4) Write C program use switch statement. Display Monday to Sunday.
    int p;
    printf("Enter the num of day: ");
    scanf("%d",&p);
    switch(p){
        case 1:
        printf("\n Monday");
        break;
        case 2:
        printf("\n Tuesday");
        break;
        case 3:
        printf("\n Wednesday");
        break;
        case 4:
        printf("\n Thursday");
        break;
        case 5:
        printf("\n Friday");
        break;
        case 6:
        printf("\n Saturday");
        break;
        case 7:
        printf("\n Sunday");
        break;
        default:
        printf("Invalid value");
    }
}