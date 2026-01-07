#include<stdio.h>
#include<conio.h>

int main()
{
    int Values[7] = {}, i = 0;

    printf("\n Enter All 7 Elements => \n");

    for(i = 0; i < 7; i++)
    {
        printf("\n Enter Element No %d : ", i+1);
        scanf("%d",&Values[i]);
    }

    printf("\n Enter Any Key To See All Values => \n");
    getch();

    for(i = 0; i < 7; i++)
    {
        printf("\n Value Of Element No %d = %d.",i+101,Values[i]);
    }

    getch();
    return 0;
}
