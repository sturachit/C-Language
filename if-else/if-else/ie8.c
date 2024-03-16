#include <stdio.h>
void main()
    {
        char a;

        printf("Enter an Alphabet a : ");
        scanf("%c", &a);

        int lowerCase = (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u');
        int upperCase = (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U');

        if (lowerCase || upperCase)
        {
            printf("%c is Vowel",a);
        }

        else
        {
            printf("%c is Consonant", a);
        }
}
