/// Accept Array Elements from User & Then Display EVEN Bills Count in an Array - With Macro
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 5

int main()
{
    int i = 0, ECnt = 0, Bill[Size] = {0};

    for(i = 0 ; i < Size ;  i++ )
    {
        printf("\n Enter Bill No %d = ", (i+1) );
        scanf("%d",&Bill[i]);

        if(Bill[i] % 2 == 0 && Bill[i] != 0)
        {
            ECnt++;
        }
    }

    _getch();
    system("cls");

    printf("\n Bills Generated Today => \n");

    for(i = 0 ; i < Size ; i++)
    {
        printf("\n Amount in Bill No %d = %d", (i+1001),Bill[i]);
    }

    printf("\n\n Even Bills Count in Array = %d .",ECnt );

    _getch();
    return 0;
}
