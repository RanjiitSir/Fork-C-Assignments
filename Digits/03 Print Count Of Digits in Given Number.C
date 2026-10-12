#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0, Cnt = 0;

        printf("\n Enter Number To Find No of Digits = ");
        scanf("%d",&No);

        Temp = No;

        while(Temp > 0)
        {
            Temp = Temp /10;
            Cnt++;
        }

        printf("\n Count Of Digits in %d is = %d.", No, Cnt);

        _getch();
        return 0;
}
