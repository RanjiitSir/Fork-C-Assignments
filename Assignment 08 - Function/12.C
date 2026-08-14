#include<stdio.h>
#include<conio.h>

float CalcArea(float R);
float CalcCircum(float R);

int main()
{
    float Rad = 0.0;

    printf("\n Enter a Radius of Circle : ");
    scanf("%f",&Rad);

    printf("\n Area of Circle is = %0.2f.", CalcArea(Rad));
    printf("\n Circumference of Circle is = %0.2f.", CalcCircum(Rad));

    getch();
    return 0;
}

float CalcArea(float Rd)
{
    float Area = 0.0;

    Area = 3.14 * Rd * Rd;

    return Area;
}

float CalcCircum(float Rd)
{
    float Circ = 0.0;

    Circ = 2 * 3.14 * Rd;

    return Circ;
}
