#include <stdio.h>
#include <string.h>

int main()
{
    // 2. Wap to perform string library functions.
    char name[100],name2[100];
    printf("Enter name:");
    gets(name);

    printf("\nYour name is :");
    puts(name);

    printf("Enter name2:");
    gets(name2);

    
    printf("\nYour name2 is :");
    puts(name2);

    printf("\n string length is %d", strlen(name));
    printf("\n string uppercase is %s", strupr(name));
    printf("\n string lowercase is %s", strlwr(name));
   //  printf("\n string  reverse is %s", strrev(name));
    
    strcpy(name2,name);
    printf("\n copy string  is %s", name2);

    strcat(name,name2);
    printf("\n merge string  is %s",name);
           
    strcmp(name2,name);
    printf("\n answer is %s ",name2);


    return 0;
}