/// Accept Array Elements from User & Then Display User Specified Elements Count - Using Loop - With Macro

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 7

int main()
{
    int i = 0, E_Cnt = 0, Bill[Size] = {0}, Num = 0;

    for(i = 0 ; i < Size ;  i++ )
    {
        printf("\n Enter Bill No %d = ", (i+1) );
        scanf("%d",&Bill[i]);
    }

    _getch();
    system("cls");

    printf("\n Enter Number Whose Count You Want in Array = ");
    scanf("%d",&Num);

    for(i = 0 ; i < Size ;  i++ )
    {
        if( Num == Bill[i] )
        {
            E_Cnt++;
        }
    }

    printf("\n\n =============================================================== \n");

    printf("\n Count of Amount %d in Array is = %d.", Num, E_Cnt);

    printf("\n\n =============================================================== \n");

    _getch();
    return 0;
}
