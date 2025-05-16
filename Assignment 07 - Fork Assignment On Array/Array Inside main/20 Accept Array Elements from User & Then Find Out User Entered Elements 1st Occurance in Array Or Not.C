/// Accept Array Elements from User & Then Find Out User Entered Elements 1st Occurrence in Array Or Not

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 7

int main()
{
    int i = 0, No = 0, Value[Size] = {0};

    for(i = 0 ; i < Size ;  i++ )
    {
        printf("\n Enter Value No %d = ", (i+1) );
        scanf("%d",&Value[i]);
    }

    _getch();
    printf("\n Enter Element You want to check in Array = ");
    scanf("%d",&No);

    for(i = 0; i < Size; i++)
    {
        if(Value[i] == No)
        {
            break;
        }
    }

    printf("\n\n =============================================================== \n");

    if( i < Size )
    {
        printf("\n 1st Occurrence of %d in Array at Index = %d.", No, i );
    }
    else
    {
        printf("\n No Such Element Present in Array");
    }

    printf("\n\n =============================================================== \n");

    _getch();
    return 0;
}
