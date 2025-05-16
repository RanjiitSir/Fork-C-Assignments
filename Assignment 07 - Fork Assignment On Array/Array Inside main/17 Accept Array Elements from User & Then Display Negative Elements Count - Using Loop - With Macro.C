/// Accept Array Elements from User & Then Display Negative Elements Count

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 5

int main()
{
    int i = 0, Neg_Cnt = 0, Bill[Size] = {0};

    for(i = 0 ; i < Size ;  i++ )
    {
        printf("\n Enter Bill No %d = ", (i+1) );
        scanf("%d",&Bill[i]);

        if( Bill[i] < 0 )
        {
            Neg_Cnt++;
        }
    }

    _getch();

    printf("\n\n =============================================================== \n");

    printf("\n Negative Amounts Count is = %d.", Neg_Cnt);

    printf("\n\n =============================================================== \n");

    _getch();
    return 0;
}
