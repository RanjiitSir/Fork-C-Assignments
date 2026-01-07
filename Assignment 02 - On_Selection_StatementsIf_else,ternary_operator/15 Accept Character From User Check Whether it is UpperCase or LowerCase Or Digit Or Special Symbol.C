/// Accept Character From User Check Whether it is UpperCase(A-Z) or LowerCase(a-z) Or Digit (0-9) Or Special Symbol
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character : ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("\n Given Letter %c is UPPERCASE", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("\n Given Letter %c is LOWERCASE", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("\n Given Letter %c is DIGIT", ch);
    }
    else
    {
        printf("\n Given Letter %c is Special Symbol", ch);
    }

    getch();
    return 0;
}
