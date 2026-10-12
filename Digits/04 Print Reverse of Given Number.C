#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0, Dig = 0, Rev = 0;

        printf("\n Enter +ve Integer Number To Reverse It = ");
        scanf("%d",&No);        /// 86423

        Temp = No;

        while(Temp > 0)
        {
            Dig = Temp % 10;
            Rev = (Rev * 10) + Dig;

            Temp = Temp /10;
        }

        printf("\n Reverse Of Given Number %d is = %d.", No, Rev);

        _getch();
        return 0;
}
