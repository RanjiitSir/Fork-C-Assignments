#include<stdio.h>
#include<conio.h>
#include<string.h>

void NameToUpper(char Name[]);

int main()
{
    char Uname[40] = "";

    printf("\n Enter Your Name : ");
    gets(Uname);

    NameToUpper(Uname);

    getch();
    return 0;
}

void NameToUpper(char Nm[])
{
    printf("\n Name in Upper Case = %s", strupr(Nm));

    return;
}
