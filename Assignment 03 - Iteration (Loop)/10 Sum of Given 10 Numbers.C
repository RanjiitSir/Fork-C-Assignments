#include<stdio.h>
#include<conio.h>

int main()
{
    int Bill = 0, Cnt = 0, Bill_Sum = 0;

    printf("\n Enter All 7 Bills => \n");

    while( Cnt < 7 )
    {
        printf("\n Enter Bill No %d : ",Cnt+1);
        scanf("%d",&Bill);

        Bill_Sum = Bill_Sum + Bill;
        Cnt++;
    }

    printf("\n Sum of 7 Bills is = %d.", Bill_Sum);

    getch();
    return 0;
}
