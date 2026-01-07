#include<stdio.h>
#include<conio.h>

int main()
{
    int Bill = 0, Cnt = 0, Bill_Sum = 0;

    printf("\n Enter Todays Bills => \n");

    while(1)
    {
        printf("\n Enter Bill No %d : ", Cnt+1);
        scanf("%d",&Bill);

        if(Bill <= 0)
        {
            break;
        }

        Bill_Sum = Bill_Sum + Bill;
        Cnt++;
    }

    printf("\n Sum of %d Bills is = %d.",Cnt, Bill_Sum);

    getch();
    return 0;
}
