/// Accept Year from User Check Whether it is Leap Year or Not
#include<stdio.h>
#include<conio.h>

int main()
{
    int Year = 0;

    printf("\n Enter a Year : ");
    scanf("%d",&Year);

    if(Year < 1000 || Year > 9999 )
    {
        printf("\n\n Given Year %d is Invalid Year.", Year);
    }
    else if( (Year % 4) == 0 )
    {
        printf("\n\n Given Year %d is Leap Year.", Year);
    }
    else
    {
        printf("\n\n Given Year %d is Not Leap Year.", Year);
    }

    getch();
    return 0;
}
