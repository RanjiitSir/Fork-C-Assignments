#include<stdio.h>
#include<conio.h>

int main()
{
    char Div = '\0';

    printf("\n Enter Your Division (A/B/C/D/E/J/K) : ");
    Div = getche();

    switch(Div)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
                printf("\n\n Exam of division A/E at 10 AM.");
                break;

        case 'B':
        case 'b':
                printf("\n\n Exam of division B at 10:30 AM.");
                break;

        case 'C':
        case 'c':
        case 'J':
        case 'j':
        case 'k':
        case 'K':
                printf("\n\n Exam of division C/J/K at 1 PM.");
                break;

        case 'D':
        case 'd':
                printf("\n\n Exam of division D at 1:30 PM.");
                break;

        default :
                printf("\n INVALID DIVISION....");
                break;
    }

    printf("\n\n Thanks For Using Our EXAM Service...");

    getch();
    return 0;
}
