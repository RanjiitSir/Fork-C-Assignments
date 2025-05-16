/// 6 Accept Array Elements from User & Then Display Index of Given Element in an Array - With Macro
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 5

int main()
{
    int i = 0, Ele = 0, Bill[Size] = {0};

    for(i = 0 ; i < Size ;  i++ )
    {
        printf("\n Enter Bill No %d = ", (i+1) );
        scanf("%d",&Bill[i]);
    }

    getch();
    system("cls");

    printf("\n Enter Element To Be Searched in Array = ");
    scanf("%d",&Ele);

    for(i = 0 ; i < Size ;  i++ )
    {
        if(Bill[i] == Ele)
        {
            break;
        }
    }

    if(i == Size)
    {
        printf("\n No Such Element Found in Array");
    }
    else
    {
        printf("\n Element %d Found at Index %d .", Ele, i );
    }

    printf("\n\n =============================================================== \n");

    getch();
    return 0;
}
