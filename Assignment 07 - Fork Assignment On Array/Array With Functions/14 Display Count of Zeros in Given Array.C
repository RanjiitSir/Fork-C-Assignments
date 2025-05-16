//  Accept Array & Display All Elements with Loop ,  Use Macro  To set Size of Array
//  Display Count of Zeros in Given Array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define  Size  5

void  Accept_Elements(int[]);
void  Display_Elements(int[]);
int  Count_Of_Zeros(int[]);

int main()
{
            int  Num[Size] = {} , ZCnt = -1;

            Accept_Elements(Num);
            system("cls");
            Display_Elements(Num);

            getch();

            ZCnt = Count_Of_Zeros(Num);

            printf("\n OUTPUT : Count of  Zeros in Given Array is  = %d.", ZCnt );

            getch();
            return 0;
}

int  Count_Of_Zeros(int  Arr[])
{
            int  i = 0, Cnt = 0;

            for(i = 0; i < Size; i++)
            {
                        if(0 == Arr[i])
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
