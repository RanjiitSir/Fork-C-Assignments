#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, dSum = 0, Temp = 0;

    printf(" Enter +ve Integer Number  To Calculate its Digits Sum : ");
    scanf("%d",&No);

    if(No < 0)
    {
            printf("Invalid Number"); return -1;
    }

    for(  Temp = No ; Temp > 0 ;  dSum += (Temp % 10), Temp /= 10);

    printf("\n\n Sum of Digits in Given Number %d is = %d.", No, dSum);

    _getch();
    return 0;
}
