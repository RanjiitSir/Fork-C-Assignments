#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, sPt = 0, ePt = 0;

    printf("\n Enter Starting Number : ");
    scanf("%d",&sPt);
    printf("\n Enter Ending Number : ");
    scanf("%d",&ePt);

    if(sPt > ePt)
    {
        sPt = sPt + ePt;
        ePt = sPt - ePt;
        sPt = sPt - ePt;
    }

    printf("\n Tables %d To %d are => \n\n", sPt, ePt);

    for(i = 1; i <= 10; i++)            /// Row
    {
        for(j = sPt; j <= ePt; j++)        /// Column
        {
            printf(" %3d ", i*j);
        }
        printf("\n");
    }


    printf("\n ============== ***** ================== \n");

    getch();
    return 0;
}
