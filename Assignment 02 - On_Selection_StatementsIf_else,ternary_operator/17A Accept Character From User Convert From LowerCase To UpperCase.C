/// Accept Character From User Convert From LowerCase To UpperCase
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character : ");
    scanf("%c",&ch);

    printf("\n\n Entered Letter is : %c.\n",ch);

    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32

        printf("\n\n Given Letter after converting to UpperCase : %c.",ch);
    }
    else
    {
        printf("\n Given Letter %c is not LowerCase Letter", ch);
    }

    getch();
    return 0;
}
