#include<stdio.h>
#include<conio.h>

short int Digit_Sum(long long int);

int main()
{
    short int dSum = 0;
    long long int No = 0;

    printf("\n Enter Number To Calculate its Digits Sum : ");
    scanf("%lld",&No);

    dSum = Digit_Sum(No);

    printf("\n\n Sum of Digits in Given Number %lld is = %i.", No, dSum);

    getch();
    return 0;
}

short int Digit_Sum(long long int Num)
{
    short int Sum = 0;

    while(Num != 0)
    {
        Sum += (Num % 10);
        Num /= 10;
    }

    return Sum;
}
