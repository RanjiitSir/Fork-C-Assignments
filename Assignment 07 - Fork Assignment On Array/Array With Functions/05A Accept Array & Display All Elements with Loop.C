#include<stdio.h>
#include<conio.h>

int  Num[7] = {};

void  Accept_Element(int);
void  Display_Element(int);

int main()
{
            int  i = 0;

            for(i = 0; i < 7; i++)
            {
                        Accept_Element(i);
            }

            for(i = 0; i < 7; i++)
            {
                        Display_Element(i);
            }

            getch();
            return 0;
}


void  Accept_Element(int  Ele_Num)
{
            printf("\n Enter Value for Element Number %d = ", Ele_Num);
            scanf("%d", &Num[Ele_Num]);

            return;
}

void  Display_Element(int  Ele_Num)
{
            printf("\n Value of Element %d = %d .",Ele_Num+1, Num[Ele_Num]);

            return;
}
