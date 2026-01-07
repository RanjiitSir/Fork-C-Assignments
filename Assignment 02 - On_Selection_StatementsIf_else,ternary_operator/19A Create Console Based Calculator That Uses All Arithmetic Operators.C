#include<stdio.h>
#include<conio.h>

int main()
{
    char Opr = '\0';
    int No1 = 0, No2 = 0, Ans = 0;

    printf("\n Enter an Operator(+,-,*,/,%) : ");
    scanf("%c", &Opr);        ///Opr = getche();

    switch(Opr)
    {
        case '+':
                printf("\n Enter 2 Integers for Addition => \n");
                printf("\n Enter Number 1 : ");
                scanf("%d",&No1);
                printf("\n Enter Number 2 : ");
                scanf("%d",&No2);

                Ans = No1 + No2;
                printf("\n Addition of Given Numbers %d + %d = %d.\n", No1, No2, Ans);

                break;

        case '-':
                printf("\n Enter 2 Integers for Subtraction => \n");
                printf("\n Enter Number 1 : ");
                scanf("%d",&No1);
                printf("\n Enter Number 2 : ");
                scanf("%d",&No2);

                Ans = No1 - No2;
                printf("\n Subtraction of Given Numbers %d - %d = %d.\n", No1, No2, Ans);

                break;

        case '*':
                printf("\n Enter 2 Integers for Multiplication => \n");
                printf("\n Enter Number 1 : ");
                scanf("%d",&No1);
                printf("\n Enter Number 2 : ");
                scanf("%d",&No2);

                Ans = No1 * No2;
                printf("\n Multiplication of Given Numbers %d * %d = %d.\n", No1, No2, Ans);

                break;

        case '/':
                printf("\n Enter 2 Integers for Division => \n");
                printf("\n Enter Number 1 : ");
                scanf("%d",&No1);
                printf("\n Enter Number 2 : ");
                scanf("%d",&No2);

                Ans = No1 / No2;
                printf("\n Division of Given Numbers %d // %d = %d.\n", No1, No2, Ans);

                break;

        case '%':
                printf("\n Enter 2 Integers for Remainder => \n");
                printf("\n Enter Number 1 : ");
                scanf("%d",&No1);
                printf("\n Enter Number 2 : ");
                scanf("%d",&No2);

                Ans = No1 % No2;
                printf("\n Remainder of Given Numbers %d %% %d = %d.\n", No1, No2, Ans);

                break;

        default :
                printf("\n INVALID VALUE....");
                break;
    }

    printf("\n\n Thanks For Using Our Calculator Service...");

    getch();
    return 0;
}
