/// Accept Array Elements from User & Then Display SUM All Elements - Using Loop - With Macro

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 7

int main()
{
    int i = 0, Bill_Sum = 0, Bill[Size] = {0};

    for(i = 0 ; i < Size ;  i++ )
    {
        SameBill:
            printf("\n Enter Bill No %d = ", (i+1) );
            scanf("%d",&Bill[i]);

            if(Bill[i] <= 0)
            {
                printf("\n Invalid Amount...");
                goto SameBill;
            }

            Bill_Sum += Bill[i];                       /// Bill_Sum = Bill_Sum + Bill[i];
    }

    _getch();
    system("cls");

    printf("\n Bills Generated Today => \n");

    for(i = 0 ; i < Size ; i++)
    {
        printf("\n Amount in Bill No %d = %d", (i+1001),Bill[i]);
    }

    printf("\n\n =============================================================== \n");

    printf("\n Total Amount Received Today = %d.", Bill_Sum);

    printf("\n\n =============================================================== \n");

    _getch();
    return 0;
}
