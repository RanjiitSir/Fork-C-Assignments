#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character : ");
    ch = getche();

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("\n\n Entered Letter %c is Alphabet.",ch);
    }
    else
    {
        printf("\n Given Letter %c is not Alphabet", ch);
    }

    getch();
    return 0;
}
