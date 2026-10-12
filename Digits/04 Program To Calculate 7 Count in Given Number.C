/// Program To Calculate ZERO Count in Given Number
#include<stdio.h>
#include<conio.h>

int main()
{
    int  No = 0, Seven_Cnt = 0, Dig = 0, Temp = 0;

    Up:
        printf("\n Enter Positive Integer Number = ");
        scanf("%d",&No);        /// 805072

        Temp = No;

        if(No < 0)
        {
            printf("\n Invalid Input...");
            goto Up;
        }

        while(Temp > 0)
        {
            Dig = Temp % 10;

            if( Dig  == 7 )
            {
                Seven_Cnt++;
            }

            Temp = Temp / 10;
        }

        printf("\n\n No Of Seven's in Given Number %d is = %d.", No, Seven_Cnt);

        getch();
        return 0;
}
