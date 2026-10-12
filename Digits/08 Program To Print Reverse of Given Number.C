/// Program To Print Reverse of Given Number
#include<stdio.h>
#include<conio.h>

int main()
{
    int  No = 0, Dig = 0, Rev = 0, Temp = 0;

    Up:
        printf("\n Enter Positive Integer Number = ");
        scanf("%d",&No);        /// 578451

        Temp = No;

        if(No < 0)
        {
            printf("\n Invalid Input...");
            goto Up;
        }

        while(Temp > 0)
        {
                /// Number Reverse Logic
                Dig = Temp % 10;
                Rev = (Rev * 10) + Dig;
                Temp = Temp / 10;
        }

        printf("\n\n Reverse Of Given Number %d is = %d.", No, Rev);

        getch();
        return 0;
}
