#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Dig = 0, dSum = 0, Temp = 0;

    printf("\n Enter Number To Calculate its Digits Sum : ");
    scanf("%d",&No);

    for(Temp = No; Temp != 0; dSum += Dig, Temp /= 10)
    {
        Dig = Temp % 10;
    }

    printf("\n\n Sum of Digits in Given Number %d is = %d.", No, dSum);

    getch();
    return 0;
}
