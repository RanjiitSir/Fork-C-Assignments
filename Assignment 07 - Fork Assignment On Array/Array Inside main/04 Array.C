#include<stdio.h>
#include<conio.h>

int main()
{
    int Values[1200] = {};

    printf("\n Enter All 7 Elements => \n");

    printf("\n Enter Element No 1 : ");
    scanf("%d",&Values[0]);
    printf("\n Enter Element No 2 : ");
    scanf("%d",&Values[1]);
    printf("\n Enter Element No 3 : ");
    scanf("%d",&Values[2]);
    printf("\n Enter Element No 4 : ");
    scanf("%d",&Values[3]);
    printf("\n Enter Element No 5 : ");
    scanf("%d",&Values[4]);
    printf("\n Enter Element No 6 : ");
    scanf("%d",&Values[5]);
    printf("\n Enter Element No 7 : ");
    scanf("%d",&Values[6]);

    printf("\n Enter Any Key To See All Values => \n");
    getch();

    printf("\n Value Of 1st Element = %d",Values[0]);
    printf("\n Value Of 2nd Element = %d",Values[1]);
    printf("\n Value Of 3rd Element = %d",Values[2]);
    printf("\n Value Of 4th Element = %d",Values[3]);
    printf("\n Value Of 5th Element = %d",Values[4]);
    printf("\n Value Of 6th Element = %d",Values[5]);
    printf("\n Value Of 7th Element = %d",Values[6]);

    getch();
    return 0;
}
