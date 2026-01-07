#include<stdio.h>
#include<conio.h>

int main()
{
    int Base = 0, Exp = 0, Res = 1, Temp = 0;

    printf("\n Enter 1st Number(Base) : ");
    scanf("%d",&Base);    /// 5
    printf("\n Enter 2nd Number(Exponent) : ");
    scanf("%d",&Exp);    /// 4

    Temp = Exp;

    while(Temp > 0)
    {
        Res = Res * Base;
        Temp--;
    }

    printf("\n Power %d Raise To %d = %d. ", Base, Exp, Res);

    getch();
    return 0;
}
