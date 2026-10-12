#include<stdio.h>

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

short int Digit_Sum(long long int Num)
{
    short int Sum = 0;

    while(Num != 0)
    {
        Sum = Sum + (Num % 10);
        Num = Num / 10;
    }

    return Sum;
}
