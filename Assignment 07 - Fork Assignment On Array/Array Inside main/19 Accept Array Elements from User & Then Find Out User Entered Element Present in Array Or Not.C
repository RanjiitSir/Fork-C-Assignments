/// Accept Array Elements from User & Then Find Out User Entered Element Present in Array Or Not

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 7

int main()
{
    int i = 0, No = 0, Value[Size] = {0};
    bool Flag = 0;

    for(i = 0 ; i < Size ;  i++ )
    {
        printf("\n Enter Value No %d = ", (i+1) );
        scanf("%d",&Value[i]);
    }

    _getch();
    printf("\n Enter Element which You want to check in Array = ");
    scanf("%d",&No);

    for(i = 0; i < Size; i++)
    {
        if(Value[i] == No)
        {
            Flag = 1;
            break;
        }
    }

    printf("\n\n =============================================================== \n");

    if(Flag == 1 )
    {
        printf("\n Given Element %d Present in Array", No);
    }
    else
    {
        printf("\n No Such Element Present in Array");
    }

    printf("\n\n =============================================================== \n");

    _getch();
    return 0;
}
