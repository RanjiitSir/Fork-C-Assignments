#include<stdio.h>
#include<conio.h>

int main()
{
    int Bill = 0, Cnt = 0, Bill_Sum = 0, Bill_Cnt = 0;

    printf("\n Enter How Many Bills Do You Have : ");
    scanf("%d",&Bill_Cnt);

    printf("\n Enter All %d Bills => \n", Bill_Cnt);

    for( Cnt = 1; Cnt <= Bill_Cnt ; Cnt++ )
    {
        printf("\n Enter Bill No %d : ", Cnt);
        scanf("%d",&Bill);

        Bill_Sum = Bill_Sum + Bill;
    }

    printf("\n Sum of %d Bills is = %d.",Bill_Cnt, Bill_Sum);

    getch();
    return 0;
}
