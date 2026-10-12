#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Dig = 0, dSum = 0, Temp = 0;

    printf(" Enter +ve Integer Number  To Calculate its Digits Sum : ");
    scanf("%d",&No);

    if(No < 0)
    {
            Temp = -No;
    }
    else
    {
            Temp = No;
    }

    for(  ; Temp > 0 ;  Temp /= 10)
    {
                Dig = Temp % 10;

                printf("\n %d + %d = %d", dSum, Dig, (dSum + Dig));

                dSum += Dig;
    }

    printf("\n\n Sum of Digits in Given Number %d is = %d.", No, dSum);

    _getch();
    return 0;
}
