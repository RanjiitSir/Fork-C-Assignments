/// Accept Array Elements from User & Then Find Out User Entered Elements Count.C

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 7

int main()
{
    int i = 0, No = 0 ,Cnt = 0, Value[Size] = {0};

    for(i = 0 ; i < Size ;  i++ )
    {
        printf("\n Enter Value No %d = ", (i+1) );
        scanf("%d",&Value[i]);
    }

    _getch();
    ///system("cls");

    printf("\n Enter Element whose Count in Array Wish to Display = ");
    scanf("%d",&No);

    for(i = 0; i < Size; i++)
    {
        if(Value[i] == No)
        {
            Cnt++;
        }
    }

    printf("\n\n =============================================================== \n");

    printf("\n Count of %d in array is = %d.", No ,Cnt);

    printf("\n\n =============================================================== \n");

    _getch();
    return 0;
}
