#include<stdio.h>
#include<conio.h>

int main()
{
    int  No = 0, Search_Dig = 0, D_Cnt = 0, Dig = 0, Temp = 0;

    Up:
        printf("\n\n Enter Positive Integer Number = ");
        scanf("%d",&No);        /// 805072

        if(No < 0)
        {
            printf("\n Invalid Input...");
            goto Up;
        }

        printf("\n Enter a Digit To Be Searched in Given Number = ");
        scanf("%d",&Search_Dig);

        if(Search_Dig > 9 || Search_Dig < 0)
        {
            printf("\n Enter Valid Digit...");
            goto Up;
        }

        Temp = No;

        while(Temp > 0)
        {
            Dig = Temp % 10;

            if( Dig  == Search_Dig )
            {
                D_Cnt++;
            }

            Temp = Temp / 10;
        }

        printf("\n\n Count Of %d in Given Number %d is = %d.",Search_Dig, No, D_Cnt);

        getch();
        return 0;
}
