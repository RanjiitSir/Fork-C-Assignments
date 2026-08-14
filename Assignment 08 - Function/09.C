#include<stdio.h>
#include<conio.h>

int CalcSquare(int);
int CalcCube(int);

int main()
{
    int No = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    printf("\n Square of %d is = %d.", No, CalcSquare(No));
    printf("\n Cube of %d is = %d.", No, CalcCube(No));

    getch();
    return 0;
}

int CalcSquare(int N)
{
    int Sqr = 0;

    Sqr = N * N;

    return Sqr;
}

int CalcCube(int N)
{
    int Cub = 0;

    Cub = N * N * N;

    return Cub;
}
