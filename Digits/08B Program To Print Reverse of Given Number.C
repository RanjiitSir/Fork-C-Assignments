/// Program To Print Reverse of Given Number
#include<stdio.h>
#include<conio.h>

int main()
{
        int  No = 0, Dig = 0, Rev = 0, Temp = 0;

        printf("\n Enter Integer Number = ");
        scanf("%d",&No);

        Temp = No;

        if(No > 0)
        {
            while(Temp > 0)
            {
                    Dig = Temp % 10;
                    Rev = (Rev * 10) + Dig;
                    Temp = Temp / 10;
            }
        }
        else
        {
            while(Temp < 0)
            {
                    Dig = Temp % 10;
                    Rev = (Rev * 10) + Dig;
                    Temp = Temp / 10;
            }
        }

        printf("\n\n Reverse Of Given Number %d is = %d.", No, Rev);

        getch();
        return 0;
}
