/// Accept Character From User Convert From UpperCase To LowerCase
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character : ");
    scanf("%c",&ch);

    printf("\n\n Entered Letter is : %c.\n",ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;

        printf("\n\n Given Letter after converting to LowerCase : %c.",ch);
    }
    else
    {
        printf("\n Given Letter %c is not UpperCase Letter", ch);
    }

    getch();
    return 0;
}
