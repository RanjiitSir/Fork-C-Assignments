#include<stdio.h>
#include<conio.h>

long long int Reverse_Number(long long int);
void Check_Palindrome(long long int);

int main()
{
    long long int No = 0;

    printf("\n Enter a Number : ");
    scanf("%lld",&No);

    Check_Palindrome(No);

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

void Check_Palindrome(long long int Num)
{
    int Res = Reverse_Number(Num);

    if(Num == Res)
    {
        printf("\n\n Given Number %lld is Palindrome.", Num);
    }
    else
    {
        printf("\n\n Given Number %lld is Not Palindrome.", Num);
    }

    return;
}
