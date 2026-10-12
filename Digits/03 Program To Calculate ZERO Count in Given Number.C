/// Program To Calculate ZERO Count in Given Number
#include<stdio.h>
#include<conio.h>

int main()
{
    int  No = 0, zCnt = 0, Dig = 0, Temp = 0;

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

            if( Dig  == 0)
            {
                zCnt++;
            }

            Temp = Temp / 10;
        }

        printf("\n\n No Of ZEROS in Given Number %d is = %d.", No, zCnt);

        getch();
        return 0;
}
