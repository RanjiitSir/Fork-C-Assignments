/// Accept Number From User print Hello if Num is Greater than 10 else print World
#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&Num);

    if( Num < 10 )
    {
        printf("\n\n Hello");
    }
    else
    {
        printf("\n\n World ");
    }

    getch();
    return 0;
}
