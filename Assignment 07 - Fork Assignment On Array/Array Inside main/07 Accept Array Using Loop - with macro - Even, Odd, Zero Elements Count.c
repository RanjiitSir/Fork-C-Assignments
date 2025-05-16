#include<stdio.h>
#include<stdlib.h>
#define  Size  7

int main()
{
            int Num[Size] = {}, i = 0, E_Cnt = 0, O_Cnt = 0, Z_Cnt = 0;

            printf("\n Enter Array Elements => \n\n");

            for(i = 0; i < Size; i++)
            {
                                printf("\n Enter Element[%d] = ",i+101);
                                scanf("%d",&Num[i]);
            }

            for(i = 0; i < Size; i++)
            {
                            if(Num[i] == 0)
                            {
                                ZCnt++;
                            }
                            else if( Num[i] % 2 == 0 )
                            {
                                E_Cnt++;
                            }
                            else
                            {
                                O_Cnt++;
                            }
            }

            printf("\n\n EVEN Element Count in Array is = %d.", E_Cnt);
            printf("\n\n ODD Element Count in Array is = %d.", O_Cnt);
            printf("\n\n Zero Element Count in Array is = %d.", Z_Cnt);

            printf("\n\n Thanks \n Press Any Key To Quit!!!");

            getch();
            return 0;
}
