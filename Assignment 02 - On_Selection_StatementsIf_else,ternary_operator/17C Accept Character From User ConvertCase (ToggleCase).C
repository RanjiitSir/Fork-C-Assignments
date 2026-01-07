/// Accept Character From User ConvertCase (ToggleCase)
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character : ");
    ch = getche();

    printf("\n\n Entered Letter is : %c.\n",ch);

    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;

        printf("\n\n Given Letter after converting to UpperCase : %c.",ch);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;

        printf("\n\n Given Letter after converting to LowerCase : %c.",ch);
    }
    else
    {
        printf("\n Given Letter %c is not Alphabet", ch);
    }

    getch();
    return 0;
}
