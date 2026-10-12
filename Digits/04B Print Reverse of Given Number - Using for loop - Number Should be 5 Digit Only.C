/// Print Reverse of Given Number - Using for loop - Number Should be 5 Digit Only

#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0, Rev = 0, Cnt = 0;

        Up:
            printf("\n Enter 5 Digit +ve Integer Number To Get Its Reverse = ");
            scanf("%d",&No);

            for(Cnt = 0,Temp = No; Temp > 0; Cnt++, Temp /= 10);

            if(Cnt == 5)
            {
                for(Temp = No; Temp > 0; Temp /= 10)
                {
                    Rev = (Rev * 10) + (Temp % 10);
                }

                printf("\n Reverse Of Given 5 Digit No %d is = %d.", No, Rev);
            }
            else
            {
                printf("\n Invalid Input, as Number is not 5 Digit Number...\n");
                printf("\n ===================**********=====================\n\n");
                goto Up;
            }

        _getch();
        return 0;
}
