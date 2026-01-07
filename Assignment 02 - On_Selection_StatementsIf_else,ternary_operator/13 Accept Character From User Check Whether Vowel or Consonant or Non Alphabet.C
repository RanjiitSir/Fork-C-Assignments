/// Accept Character From User Check Whether Vowel or Consonant or Non Alphabet
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character : ");
    ch = getche();

    /// A, E, I, O, U, a, e, i, o, u

    if( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
    {
        printf("\n\n Entered Letter %c is Vowel.",ch);
    }
    else if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') )
    {
        printf("\n\n Entered Letter %c is Consonant.",ch);
    }
    else
    {
        printf("\n Given Letter %c is not Alphabet", ch);
    }

    getch();
    return 0;
}
