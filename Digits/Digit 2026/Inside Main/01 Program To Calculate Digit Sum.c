#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, Dig = 0, dSum = 0;

    printf("\n Enter Number To Calculate its Digits Sum : ");
    scanf("%d",&No);

    Temp = No;

    while(Temp != 0)
    {
        Dig = Temp % 10;
        dSum = dSum + Dig;
        Temp = Temp/10;
    }

    printf("\n\n Sum of Digits in Given Number %d is = %d.", No, dSum);

    getch();
    return 0;
}
