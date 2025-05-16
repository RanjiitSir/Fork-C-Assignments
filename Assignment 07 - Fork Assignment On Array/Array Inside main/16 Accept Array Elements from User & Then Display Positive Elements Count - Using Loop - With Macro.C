/// Accept Array Elements from User & Then Display Zero's Count

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 5

int main()
{
    int i = 0, Pos_Cnt = 0, Bill[Size] = {0};

    for(i = 0 ; i < Size ;  i++ )
    {
        printf("\n Enter Bill No %d = ", (i+1) );
        scanf("%d",&Bill[i]);

        if( Bill[i] > 0 )
        {
            Pos_Cnt++;
        }
    }

    _getch();

    printf("\n\n =============================================================== \n");

    printf("\n Positive Amounts Count is = %d.", Pos_Cnt);

    printf("\n\n =============================================================== \n");

    _getch();
    return 0;
}
