#include<stdio.h>
#include<conio.h>

long long int Reverse_Number(long long int);

int main()
{
    long long int No = 0, Rev = 0;

    printf("\n Enter Number To Reverse it : ");
    scanf("%lld",&No);

    Rev = Reverse_Number(No);

    printf("\n\n Reverse of Given Number %lld is = %lld.", No, Rev);

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
