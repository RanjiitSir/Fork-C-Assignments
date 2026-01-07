#include<stdio.h>
#include<conio.h>

int main()
{
    int Bill = 0, Cnt = 0, Min_Bill = 0, Max_Bill = 0;

    printf("\n Enter All 7 Bills => \n");

    while( Cnt < 7 )
    {
        printf("\n Enter Bill No %d : ",Cnt+1);
        scanf("%d",&Bill);

        if((Cnt == 0) || (Bill < Min_Bill) )
        {
            Min_Bill = Bill;
        }

        if((Cnt == 0) || (Bill > Max_Bill) )
        {
            Max_Bill = Bill;
        }

        Cnt++;
    }

    printf("\n Minimum from 7 Bills is = %d.", Min_Bill);
    printf("\n Maximum from 7 Bills is = %d.", Max_Bill);

    getch();
    return 0;
}
