#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0;

    printf("\n Tables 7 To 13 are => \n");

    for(i = 1; i <= 10; i++)            /// Row
    {
        for(j = 7; j <= 13; j++)        /// Column
        {
            printf(" %3d ", i*j);
        }
        printf("\n");
    }

    printf("\n ============== ***** ================== \n");

    getch();
    return 0;
}
