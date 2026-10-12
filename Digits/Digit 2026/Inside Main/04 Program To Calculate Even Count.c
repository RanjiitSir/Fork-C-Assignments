#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Dig = 0, Cnt = 0, Temp = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    Temp = No;

    while(Temp != 0)
    {
        Dig = Temp % 10;

        if((Dig != 0) && (Dig % 2 == 0))
        {
            Cnt++;
        }

        Temp /= 10;
    }

    printf("\n\n Count of EVEN Digits in Given Number %d is = %d.",No, Cnt);

    getch();
    return 0;
}
