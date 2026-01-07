#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0;

    printf("\n Tables 27 To 19 are => \n");

    for(i = 1; i <= 10; i++)            /// Row
    {
        for(j = 27; j >= 19; j--)        /// Column
        {
            printf(" %3d ", i*j);
        }
        printf("\n");
    }

    printf("\n ============== ***** ================== \n");

    getch();
    return 0;
}
