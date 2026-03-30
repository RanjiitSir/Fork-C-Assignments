#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, j;

    printf("\n Enter number of rows (Pyramid): ");
    scanf("%d", &n);    // 11

    printf("\n Pattern is => \n\n");

    // Upper half
    for(i = 1; i <= n/2 + 1  ; i++)
    {
        for(j = 1; j <= (n/2 + 1) - i; j++)
        {
            printf("   ");
        }
        for(j = 1; j <= (2 * i) - 1; j++)
        {
                printf(" * ");
        }
        printf("\n");
    }

    return 0;
}
