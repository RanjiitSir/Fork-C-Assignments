#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0, Dig = 0, Sum = 0;

        printf("\n Enter a +ve Integer Number To Find Digit Sum = ");
        scanf("%d",&No);

        Temp = No;

        while(Temp > 0)
        {
            Dig = Temp % 10;
            Sum = Sum + Dig;

            //printf("\n Number is => %5d, Digit = %d, Sum = %3d.", Temp, Dig, Sum);
            //getch();
            Temp = Temp / 10;
        }

        printf("\n\n Sum Of Digits in %d is = %d.", No, Sum);

        getch();
        return 0;
}
