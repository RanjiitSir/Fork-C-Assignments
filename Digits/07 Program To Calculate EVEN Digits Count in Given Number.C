/// Program To Calculate ZERO Count in Given Number
#include<stdio.h>
#include<conio.h>

int main()
{
    int  No = 0, Z_Cnt = 0, O_Cnt = 0, E_Cnt = 0, Dig = 0, Temp = 0;

    Up:
        printf("\n\n Enter Positive Integer Number = ");
        scanf("%d",&No);        /// 805072

        if(No < 0)
        {
            printf("\n Invalid Input...");
            goto Up;
        }

        Temp = No;

        while(Temp > 0)
        {
            Dig = Temp % 10;

            /// Counting Logic

            if(Dig == 0)
            {
                Z_Cnt++;
            }
            else if(Dig % 2 == 0)
            {
                E_Cnt++;
            }
            else
            {
                O_Cnt++;
            }

            Temp = Temp / 10;
        }

        printf("\n\n ZERO Digits Count in Given Number %d is = %d.", No, Z_Cnt);
        printf("\n\n ODD Digits Count in Given Number %d is = %d.", No, O_Cnt);
        printf("\n\n EVEN Digits Count in Given Number %d is = %d.", No, E_Cnt);

        getch();
        return 0;
}
