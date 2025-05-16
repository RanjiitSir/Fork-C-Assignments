/// Accept Array Elements from User & Then Display Maximum & 2nd Max All Elements - Using Loop - With Macro

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 7

int main()
{
    int i = 0, Max = 0, Max2 = 0, Bill[Size] = {0};
    bool flg = 0;

    for(i = 0 ; i < Size ;  i++ )
    {
        printf("\n Enter Bill No %d = ", (i+1) );
        scanf("%d",&Bill[i]);

        if( (i == 0) || (Max < Bill[i]) )
        {
            Max = Bill[i];
        }
    }

    for( i = 0 ; i < Size ;  i++ )
    {
        if(Bill[i] == Max)
        {
            continue;
        }

        if( (flg == 0) || (Max2 < Bill[i]) )
        {
            Max2 = Bill[i];
            flg = 1;
        }
    }

    _getch();

    printf("\n\n =============================================================== \n");

    printf("\n Maximum Amount Received Today = %d.", Max);

    printf("\n 2nd Maximum Amount Received Today = %d.", Max2);

    printf("\n\n =============================================================== \n");
    _getch();
    return 0;
}
