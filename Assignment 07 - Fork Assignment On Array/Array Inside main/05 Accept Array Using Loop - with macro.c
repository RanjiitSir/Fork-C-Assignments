#include<stdio.h>
#include<stdlib.h>
#define  Size  7                                              // Size is an Macro which is replaced in our program by Preprocessor with value given i.e 7

int main()
{
            int Arr[Size] = {};
            int i = 0;

            // Displaying Array Elements
            for(i = 0; i < Size; i++)
            {
                    printf("\n Value of RollNo %d = %d .",i+101,Arr[i]);
            }

            getch();

            system("cls");

            printf("\n Enter Array Elements => \n\n");

             // Accepting Array Elements
            for(i = 0; i < Size; i++)
            {
                                printf("\n Enter Element[%d] = ",i+101);
                                scanf("%d",&Arr[i]);
            }

             // Displaying New Array Elements
            for(i = 0; i < Size; i++)
            {
                    printf("\n Value of RollNo %d = %d .",i+501,Arr[i]);
            }

            printf("\n\n Press any key to continue...");

            getch();

            return 0;
}
