#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0, ECnt = 0;

        printf("\n Enter Number To Find No of Even Digits = ");
        scanf("%d",&No);

        Temp = No;

        while(Temp > 0)
        {
            if(((Temp % 10) != 0) && ((Temp % 10) % 2 == 0))
            {
                ECnt++;
            }

            Temp = Temp /10;
        }

        printf("\n Count Of Even Digits in %d is = %d.", No, ECnt);

        _getch();
        return 0;
}
