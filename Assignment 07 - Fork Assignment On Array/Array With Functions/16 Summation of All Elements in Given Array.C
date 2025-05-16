//  Accept Array & Display All Elements with Loop ,  Use Macro  To set Size of Array
//  Summation of All Elements in Given Array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define  Size  7

void  Accept_Elements(int[]);
void  Display_Elements(int[]);
int  Sum_Of_Elements(int[]);

int main()
{
            int  Num[Size] = {} , Sum = 0;

            Accept_Elements(Num);
            system("cls");
            Display_Elements(Num);

            getch();

            Sum = Sum_Of_Elements(Num);

            printf("\n OUTPUT : Sum of  All Elements in Given Array is  = %d.", Sum );

            getch();
            return 0;
}

int  Sum_Of_Elements(int  Arr[])
{
            int  i = 0, Sum = 0;

            for(i = 0; i < Size; i++)
            {
                        Sum = Sum + Arr[i];
            }

            return  Sum;
}

void  Accept_Elements(int  Arr[])
{
            int  i = 0;

            printf("\n Enter Elements To be placed in Array => \n");

            for(i = 0; i < Size; i++)
            {
                    printf("\n Enter Value for Element Number %d = ", i+101);
                    scanf("%d", &Arr[i]);
            }

            return;
}

void  Display_Elements(int  Fun[])
{
            int  i = 0;

            printf("\n ===============********===============\n");
            printf("\n Elements in Given Array are => \n");

            for(i = 0; i < Size; i++)
            {
                        printf("\n Value of Element %d = %d .",i +1, Fun[i]);
            }

            printf("\n ===============********===============\n");

            return;
}
