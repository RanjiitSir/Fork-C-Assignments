#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char Grade = '\0';
    int RNo = 0;
    int Tot = 0;
    float Per = 0.0;
    char Name[40] = "\0", City[20] = "\0", Course[20] = "\0";

    printf("\n Enter Roll No     : ");
    scanf("%d",&RNo);

    fflush(stdin);

    printf("\n Enter Name        : ");
    gets(Name);         ///scanf("%s",&Name);

    fflush(stdin);

    printf("\n Enter City        : ");
    gets(City);         ///scanf("%s",&City);

    fflush(stdin);

    printf("\n Enter Course      : ");
    gets(Course);       ///scanf("%s",&Course);

    printf("\n Enter Total Marks : ");
    scanf("%d",&Tot);

    printf("\n Enter Percentage  : ");
    scanf("%f",&Per);

    fflush(stdin);

    printf("\n Enter Grade       : ");
    Grade = getche();           ///scanf("%c",&Grade);

    printf("\n Enter a Key To Move Ahead...");

    getch();

    printf("\n Entered Student Details are =>\n");

    printf("\n Roll No    : %d.", RNo);
    printf("\n Name       : %s.", Name);
    printf("\n City       : %s.", City);
    printf("\n Course     : %s.", Course);
    printf("\n Total      : %d.", Tot);
    printf("\n Percentage : %0.2f.", Per);
    printf("\n Grade      : %c.", Grade);

    getch();
    return 0;
}
