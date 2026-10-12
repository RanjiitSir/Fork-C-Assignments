#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, Dig = 0, Rev = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    Temp = No;

    while(Temp != 0)
    {
        Dig = Temp % 10;

        Rev = (Rev*10) + Dig;

        Temp /= 10;
    }

    if(No == Rev)
    {
        printf("\n\n Reverse of Given Number %d is Same as its Reverse %d, \n Hence Number is Palindrome",No, Rev);
    }
    else
    {
        printf("\n\n Reverse of Given Number %d is Different as its Reverse %d, \n Hence Number is Not Palindrome",No, Rev);
    }

    getch();
    return 0;
}
