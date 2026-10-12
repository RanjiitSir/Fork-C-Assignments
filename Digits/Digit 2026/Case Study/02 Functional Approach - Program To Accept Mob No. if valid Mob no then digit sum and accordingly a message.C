#include<stdio.h>
#include<conio.h>

short int Digit_Count(long long int);
short int Digit_Sum(long long int);

int main()
{
    short int Cnt = 0, Sum = 0;
    long long int No = 0;

    printf("\n Enter a Valid Mobile Number : ");
    scanf("%lld",&No);

    Cnt = Digit_Count(No);

    if(Cnt == 10)
    {
        Sum = Digit_Sum(No);

        if(Sum % 2 == 0)
        {
            printf("\n You will Get Opportunities");
        }
        else
        {
            printf("\n Upcoming year is Best");
        }
    }
    else
    {
        printf("\n Invalid Mobile No.");
    }

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

short int Digit_Sum(long long int Num)
{
    short int Dig = 0, Sum = 0;

    while(Num != 0)
    {
        Dig = Num % 10;
        Sum = Sum + Dig;
        Num = Num / 10;
    }

    return Sum;
}
