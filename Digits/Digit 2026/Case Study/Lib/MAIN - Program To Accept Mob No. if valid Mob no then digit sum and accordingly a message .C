#include<stdio.h>
#include<conio.h>
#include"Fork_Digits.h"

int main()
{
    long long int No = 0;

    printf("\n Enter a Valid Mobile Number : ");
    scanf("%lld",&No);

    if(Digit_Count(No) == 10)
    {
        if(Digit_Sum(No) % 2 == 0)
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
