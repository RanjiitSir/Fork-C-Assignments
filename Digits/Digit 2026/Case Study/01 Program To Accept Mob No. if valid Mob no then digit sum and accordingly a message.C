#include<stdio.h>
#include<conio.h>

int main()
{
    short int Cnt = 0, Dig = 0, Sum = 0;
    long long int No = 0, Temp = 0;

    printf("\n Enter a Number : ");
    scanf("%lld",&No);

    Temp = No;

    while(Temp != 0)
    {
        Cnt++;
        Temp /= 10;
    }

    if(Cnt == 10)
    {
        Temp = No;

        while(Temp != 0)
        {
            Dig = Temp % 10;
            Sum = Sum + Dig;
            Temp = Temp / 10;
        }

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
