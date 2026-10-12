#include<stdio.h>
#include<conio.h>

int main()
{
            int No = 0, Dig = 0, dSum = 0, Temp = 0;

            printf(" Enter +ve Integer Number  To Calculate its Digits Sum : ");
            scanf("%d",&No);

            if(No < 0)
            {
                    printf("Invalid Number"); return -1;
            }

            Temp = No;  // Initialization

            while( Temp > 0 )
            {
                        Dig = Temp % 10;
                        dSum = dSum + Dig;
                        Temp = Temp / 10;   // Decrement
            }

            printf("\n Sum of Digits in Given Number %d is = %d.", No, dSum);

            getch();
            return 0;
}
