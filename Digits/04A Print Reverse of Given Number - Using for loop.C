#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0, Rev = 0;

        printf("\n Enter +ve Integer Number To Reverse It = ");
        scanf("%d",&No);        /// 86423

        for(Temp = No; Temp > 0; Temp /= 10)
        {
            Rev = (Rev * 10) + (Temp % 10);
        }

        printf("\n Reverse Of Given Number %d is = %d.", No, Rev);

        _getch();
        return 0;
}
