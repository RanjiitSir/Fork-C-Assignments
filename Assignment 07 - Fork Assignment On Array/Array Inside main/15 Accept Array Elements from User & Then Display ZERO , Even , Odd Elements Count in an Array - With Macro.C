/// Accept Array Elements from User & Then Display ZERO , Even , Odd Elements Count in an Array - With Macro
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 9

int main()
{
    int i = 0, ECnt = 0, OCnt = 0, ZCnt = 0, Bill[Size] = {0};

    for(i = 0 ; i < Size ;  i++ )
    {
        printf("\n Enter Bill No %d = ", (i+1) );
        scanf("%d",&Bill[i]);

        if(Bill[i] == 0)
        {
            ZCnt++;
        }
        else if(Bill[i] % 2 == 0)
        {
            ECnt++;
        }
        else
        {
            OCnt++;
        }
    }

    _getch();
    system("cls");

    printf("\n Bills Generated Today => \n");

    for(i = 0 ; i < Size ; i++)
    {
        printf("\n Amount in Bill No %d = %d", (i+1001),Bill[i]);
    }

    printf("\n\n EVEN Bills Count in Array = %d .",ECnt );
    printf("\n\n ODD Bills Count in Array = %d .",OCnt );
    printf("\n\n Zero Bills Count in Array = %d .",ZCnt );

    _getch();
    return 0;
}
