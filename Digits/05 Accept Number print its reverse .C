#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0, Rev = 0;

        printf("\n Enter a Number = ");
        scanf("%d",&No);

        for(Temp = No; Temp != 0; Temp = Temp/10 )
        {
            Rev = (Rev * 10) + (Temp % 10);
        }

        printf("\n Reverse of %d is = %d.", No, Rev);

        getch();
        return 0;
}
