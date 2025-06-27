/// Accept Array Elements from User & Then Display Zero, +ve, -ve Bills Count in an Array - With Macro
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 7

int main()
{
    int i = 0, ZCnt = 0, pCnt = 0, nCnt = 0, Bill[Size] = {0};

    for(i = 0 ; i < Size ;  i++ )
    {
        printf("\n Enter Bill No %d = ", (i+1) );
        scanf("%d",&Bill[i]);

        if(Bill[i] == 0)
        {
            ZCnt++;
        }
        else if(Bill[i] > 0)
        {
            pCnt++;
        }
        else
        {
            nCnt++;
        }
    }

    getch();
    system("cls");

    printf("\n Bills Generated Today => \n");

    for(i = 0 ; i < Size ; i++)
    {
        printf("\n Amount in Bill No %d = %d", (i+1001),Bill[i]);
    }

    printf("\n\n Zero Bills Count in Array = %d .",ZCnt );
    printf("\n\n +ve Bills Count in Array = %d .",pCnt );
    printf("\n\n -ve Bills Count in Array = %d .",nCnt );

    getch();
    return 0;
}
