#include<stdio.h>
#include<conio.h>

int main()
{
    short int Cnt = 0;
    long long int No = 0, Temp = 0;

    printf("\n Enter a Number : ");
    scanf("%lld",&No);

    Temp = No;

    while(Temp != 0)
    {
        Cnt++;
        Temp /= 10;
    }

    printf("\n\n Count of Digits in Given Number %lld is = %d.", No, Cnt);

    getch();
    return 0;
}
