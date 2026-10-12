/// Print Sum Of Digits in Given Number - Number Should be 3 Digit

#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0, Sum = 0, Cnt = 0;

        printf("\n Enter 3 Digit +ve Integer Number To Find Digit Sum = ");
        scanf("%d",&No);

        /// Count of Digits
        Temp = No;

        while(Temp > 0)
        {
            Cnt++;
            Temp /= 10;
        }

        if(Cnt == 3)            /// Check whether No of Digits are 3 then we will Calculate Sum
        {
            Temp = No;

            while(Temp > 0)
            {
                Sum += (Temp % 10);       /// Sum = Sum + (Temp % 10)
                Temp /= 10;               /// Temp = Temp / 10
            }

            printf("\n Sum Of Digits in Given 3 Digit No %d is = %d.", No, Sum);
        }
        else
        {
            printf("\n Invalid Input, as Number is not 3 Digit Number...");
        }

        _getch();
        return 0;
}
