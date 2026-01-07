#include<stdio.h>
#include<conio.h>

int main()
{
    char Div = '\0';

    printf("\n Enter Your Division (A/B/C/D) : ");
    Div = getche();

    if(Div == 'A' || Div == 'a')
    {
        printf("\n\n Exam of division A at 10 AM.");
    }
    else if(Div == 'B' || Div == 'b')
    {
        printf("\n\n Exam of division B at 10:30 AM.");
    }
    else if(Div == 'C' || Div == 'c')
    {
        printf("\n\n Exam of division C at 1 PM.");
    }
    else if(Div == 'D' || Div == 'd')
    {
        printf("\n\n Exam of division D at 1:30 PM.");
    }
    else
    {
        printf("\n\n INVALID DIVISION. ");
    }

    printf("\n\n Thanks For Using Our EXAM Service...");

    getch();
    return 0;
}
