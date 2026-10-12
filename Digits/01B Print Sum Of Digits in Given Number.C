#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0, Sum = 0;

        printf("\n Enter a +ve Integer Number To Find Digit Sum = ");
        scanf("%d",&No);

        Temp = No;

        while(Temp > 0)
        {
            Sum += (Temp % 10);       /// Sum = Sum + (Temp % 10)
            Temp /= 10;               /// Temp = Temp / 10
        }

        printf("\n Sum Of Digits in %d is = %d.", No, Sum);

        _getch();
        return 0;
}
