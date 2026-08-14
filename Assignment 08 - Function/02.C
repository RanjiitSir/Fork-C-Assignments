#include<stdio.h>
#include<conio.h>

float GetPIVal();

int main()
{
    float PI = 0.0;

    PI = GetPIVal();

    printf("\n Value = %f", PI);

    getch();
    return 0;
}

float GetPIVal()
{
    return 3.14;
}
