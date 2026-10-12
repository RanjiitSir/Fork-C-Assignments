#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Rev = 0, Temp = 0;

        printf("\n Enter a Number : ");
        scanf("%d",&No);   /// No = 86423

        for(Temp = No; Temp > 0; Temp = Temp / 10 )
        {
            Rev = (Rev * 10) + (Temp % 10);
        }

        printf("\n Reverse of Given Number %d = %d.", No, Rev);

        getch();
        return 0;
}
