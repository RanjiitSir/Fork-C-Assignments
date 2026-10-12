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

        if(Dig == 7)
        {
            Cnt++;
        }

        Temp /= 10;
    }

    printf("\n\n Count of 7 in Given Number %d is = %d.", No, Cnt);

    getch();
    return 0;
}
