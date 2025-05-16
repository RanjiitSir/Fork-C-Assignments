//  Accept Array & Display All Elements with Loop ,  Use Macro  To set Size of Array
//  Display Count of Odd Numbers in Given Array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define  Size  5

void  Accept_Elements(int[]);
void  Display_Elements(int[]);
int  Count_Of_Odds(int[]);

int main()
{
            int  Num[Size] = {} , OCnt = -1;

            Accept_Elements(Num);
            system("cls");
            Display_Elements(Num);

            getch();

            OCnt = Count_Of_Odds(Num);

            printf("\n OUTPUT : Count of  Odd Numbers in Given Array is  = %d.", OCnt );

            getch();
            return 0;
}

int  Count_Of_Odds(int  Arr[])
{
            int  i = 0, Cnt = 0;

            for(i = 0; i < Size; i++)
            {
                        if(Arr[i] % 2 == 1 )
                        {
                                    Cnt++;
                        }
            }

            return  Cnt;
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
