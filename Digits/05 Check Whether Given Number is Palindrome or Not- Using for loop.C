#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0, Rev = 0;

        printf("\n Enter +ve Integer Number To Reverse It = ");
        scanf("%d",&No);        /// 2662

        for(Temp = No; Temp > 0; Temp /= 10)
        {
            Rev = (Rev * 10) + (Temp % 10);
        }

        if(No == Rev)
        {
            printf("\n As, Given Number %d & its Reverse %d are Equal.", No, Rev);
            printf("\n So Given Number is Palindrome");
        }
        else
        {
            printf("\n As, Given Number %d & its Reverse %d are not Equal.", No, Rev);
            printf("\n So Given Number is Not Palindrome");
        }

        _getch();
        return 0;
}
