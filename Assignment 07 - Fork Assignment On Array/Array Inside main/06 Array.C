#include<stdio.h>
#include<conio.h>

int main()
{
    int Values[5] = {21, 55, 15};

    printf("\n Value Of 1st Element = %d",Values[0]);
    printf("\n Value Of 2nd Element = %d",Values[1]);
    printf("\n Value Of 3rd Element = %d",Values[2]);
    printf("\n Value Of 4th Element = %d",Values[3]);
    printf("\n Value Of 5th Element = %d",Values[4]);

    _getch();

    Values[4] = 50;
    Values[2] = 101;
    Values[0] = Values[4] + Values[3];

    printf("\n\n New Values => \n\n");

    printf("\n Value Of 101 Element = %d",Values[0]);
    printf("\n Value Of 102 Element = %d",Values[1]);
    printf("\n Value Of 103 Element = %d",Values[2]);
    printf("\n Value Of 104 Element = %d",Values[3]);
    printf("\n Value Of 105 Element = %d",Values[4]);

    getch();
    return 0;
}
