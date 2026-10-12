#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Dig = 0, Cnt = 0, Temp = 0, DC = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);
    printf("\n Enter a Digit to be Counted : ");
    scanf("%d",&DC);

    Temp = No;

    while(Temp != 0)
    {
        Dig = Temp % 10;

        if(Dig == DC)
        {
            Cnt++;
        }

        Temp /= 10;
    }

    printf("\n\n Count of %d in Given Number %d is = %d.",DC, No, Cnt);

    getch();
    return 0;
}
