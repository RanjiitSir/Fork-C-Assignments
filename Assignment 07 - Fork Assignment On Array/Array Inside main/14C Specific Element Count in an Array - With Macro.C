/// Accept Array Elements from User & Then Display Zero Bills Count in an Array - With Macro
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 5

int main()
{
    int i = 0, bCnt = 0, Bill[Size] = {0};

    for(i = 0 ; i < Size ;  i++ )
    {
        printf("\n Enter Bill No %d = ", (i+1) );
        scanf("%d",&Bill[i]);

        if(Bill[i] == 100)
        {
            bCnt++;
        }
    }

    printf("\n\n 100 Bill Amount Count is = %d .",bCnt);

    getch();
    return 0;
}
