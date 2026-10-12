/// Program To Calculate No of Digits in Given Number
#include<stdio.h>
#include<conio.h>

int main()
{
    int  No = 0, dCnt = 0, Temp = 0;

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
            dCnt++;
            Temp = Temp / 10;
        }

        printf("\n\n No Of Digits in Given Number %d is = %d.", No, dCnt);

        getch();
        return 0;
}
