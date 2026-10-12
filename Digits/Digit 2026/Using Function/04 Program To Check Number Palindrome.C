#include<stdio.h>
#include<conio.h>

long long int Reverse_Number(long long int);

int main()
{
    long long int No = 0, Rev = 0;

    printf("\n Enter a Number : ");
    scanf("%lld",&No);

    Rev = Reverse_Number(No);

    if(No == Rev)
    {
        printf("\n\n Given Number %lld is Palindrome.", No);
    }
    else
    {
        printf("\n\n Given Number %lld is Palindrome.", No);
    }

    getch();
    return 0;
}

long long int Reverse_Number(long long int Num)
{
    long long int Res = 0;

    while(Num != 0)
    {
        Res = (Res * 10) + (Num % 10);
        Num = Num / 10;
    }

    return Res;
}
