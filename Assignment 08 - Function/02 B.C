#include<stdio.h>
#include<conio.h>

float GetTempVal();

int main()
{
    float Cel = 0.0;

    Cel = GetTempVal();

    printf("\n Temperature is = %f Celsius", Cel);

    getch();
    return 0;
}

float GetTempVal()
{
    char ch = '/0';
    float Temp = 0.0;

    printf("\n Do you have temperature in Celsius or Fahrenheit ?? \n");
    printf("\n 1. Celsius ");
    printf("\n 2. Fahrenheit ");

    AcceptTemp:
    printf("\n\n Choice (1/2) : ");
    ch = getche();

    if(ch != '1'  && ch != '2')
    {
        printf("\n Invalid Choice\n");
        goto AcceptTemp;
    }

    printf("\n\n Enter Temperature : ");
    scanf("%f", &Temp);

    if(ch == '2')
    {
        Temp = (Temp - 32.0) * (5.0/9.0);
    }

    return Temp;
}
