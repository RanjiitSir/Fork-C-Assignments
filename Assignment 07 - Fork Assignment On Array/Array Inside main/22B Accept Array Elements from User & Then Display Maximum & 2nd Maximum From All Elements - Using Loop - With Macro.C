/// Accept Array Elements from User & Then Display Maximum & 2nd Max All Elements - Using Loop - With Macro

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 7

int main()
{
    int i = 0, Max = 0, Max2 = 0, Bill[Size] = {0};
    bool flag = 0;

    for(i = 0 ; i < Size ;  i++ )
    {
        printf("\n Enter Bill No %d = ", (i+1) );
        scanf("%d",&Bill[i]);

        if( i == 0 )
        {
            Max = Bill[i];
            Max2 = Bill[i];
            flag = 1;
            continue;
        }

        if(  Bill[i] >= Max )
        {
            if( flag == 1 )
            {
                Max2 = Max;
                flag = 0;
            }
            Max = Bill[i];
        }
        else if( Bill[i] >= Max2 || flag == 1 )
        {
            Max2 = Bill[i];
            flag = 0;
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
