#include<stdio.h>
#include<conio.h>

short int Digit_Count(long long int);

int main()
{
    short int dCount = 0;
    long long int No = 0;

    printf("\n Enter Number To Calculate No of Digits in it : ");
    scanf("%lld",&No);

    dCount = Digit_Count(No);

    printf("\n\n Count of Digits in Given Number %lld is = %i.", No, dCount);

    getch();
    return 0;
}

short int Digit_Count(long long int Num)
{
    short int Cnt = 0;

    while(Num != 0)
    {
        Cnt++;
        Num = Num / 10;
    }

    return Cnt;
}
