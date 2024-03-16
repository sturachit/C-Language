#include<stdio.h>
#include<string.h>

int main(){
    //3.Wap to replace a character in string
    int i;
    char ch,name[100],newch;
    printf("Enter the name :\n");
    gets(name);
    printf("Your name is :\n");
    puts(name);
    printf("\n Enter character to be replaced :");
    scanf("%c",&ch);

    printf("\n Enter new character to be replaced :");
    fflush(stdin);
    scanf("%c",&newch);

    for(i=0;name[i]!='\0';i++){
        if(name[i]==ch){
            name[i] = newch;
        }

    }
    printf("\n Your upadated name is :");
    puts(name);
}