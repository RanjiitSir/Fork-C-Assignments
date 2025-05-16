/// Accept Array Elements from User & Then Display Maximum All Elements - Using Loop - With Macro

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 7

int main()
{
    int i = 0, Max = 0, S_Max = 0, Bill[Size] = {0};

    for(i = 0 ; i < Size ;  i++ )           /// Accepting Array Elements
    {
        printf("\n Enter Bill No %d = ", (i+1) );
        scanf("%d",&Bill[i]);
    }

    for(i = 0 ; i < Size ;  i++ )           /// Finding 1St Max
    {
        if( (i == 0) || ( Bill[i] > Max ) )
        {
            Max = Bill[i];
        }
    }

    for(i = 0 ; i < Size ;  i++ )           /// Finding 2nd Max
    {
        if( (Bill[i] != Max ) && ( Bill[i] > S_Max) )
        {
            S_Max = Bill[i];
        }
    }

    _getch();
    system("cls");

    printf("\n Bills Generated Today => \n");

    for(i = 0 ; i < Size ; i++)
    {
        printf("\n Amount in Bill No %d = %d", (i+1001),Bill[i]);
    }

    printf("\n\n =============================================================== \n");

    printf("\n Maximum Amount Received Today = %d.", Max);
    printf("\n Second Maximum Amount Received Today = %d.", S_Max);

    printf("\n\n =============================================================== \n");

    _getch();
    return 0;
}
