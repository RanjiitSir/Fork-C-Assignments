/// Program To Check Whether Given Number is Palindrome or Not
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

        if( No == Rev )
        {
            printf("\n\n %d is Palindrome.", No);
        }
        else
        {
            printf("\n\n %d is not Palindrome.", No);
        }

        getch();
        return 0;
}
