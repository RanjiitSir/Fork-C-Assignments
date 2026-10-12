/// Program To Calculate Sum Of Digits in Given Number
#include<stdio.h>
#include<conio.h>

int main()
{
    int  No = 0, Dig = 0, dSum = 0, Temp = 0;

    Up:
        printf("\n Enter Positive Integer Number To Calculate its Digit Sum = ");
        scanf("%d",&No);        /// 85072

        Temp = No;

        if(No < 0)
        {
            printf("\n Invalid Input...");
            goto Up;
        }

        while(Temp > 0)
        {
            Dig = Temp % 10;
            dSum = dSum + Dig;
            Temp = Temp / 10;
        }

        printf("\n\n Sum Of Digits in Given Number %d is = %d.", No, dSum);

        getch();
        return 0;
}
