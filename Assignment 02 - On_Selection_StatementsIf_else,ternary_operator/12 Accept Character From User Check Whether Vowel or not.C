/// Accept Character From User Check Whether Vowel or not
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character : ");
    ch = getche();

    /// A, E, I, O, U, a, e, i, o, u

    if( ch == 'A' || ch == 'E' ||ch == 'I' || ch == 'O' ||ch == 'U' || ch == 'a' ||ch == 'e' || ch == 'i' ||ch == 'o' || ch == 'u' )
    {
        printf("\n\n Entered Letter %c is Vowel.",ch);
    }
    else
    {
        printf("\n Given Letter %c is not Vowel", ch);
    }

    getch();
    return 0;
}
