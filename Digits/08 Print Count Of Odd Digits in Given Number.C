#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0, OCnt = 0;

        printf("\n Enter Number To Find No of Odd Digits = ");
        scanf("%d",&No);

        Temp = No;

        while(Temp > 0)
        {
            if((Temp % 10) % 2 == 1)
            {
                OCnt++;
            }

            Temp = Temp /10;
        }

        printf("\n Count Of Odd Digits in %d is = %d.", No, OCnt);

        _getch();
        return 0;
}
