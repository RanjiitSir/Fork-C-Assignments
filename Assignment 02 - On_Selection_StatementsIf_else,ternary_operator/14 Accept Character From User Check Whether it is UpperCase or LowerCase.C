/// Accept Character From User Check Whether it is UpperCase(A-Z) or LowerCase(a-z)
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
    else
    {
        printf("\n Given Letter %c is Not Alphabet", ch);
    }

    getch();
    return 0;
}
