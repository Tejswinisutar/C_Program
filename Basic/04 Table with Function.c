#include<stdio.h>
#include<conio.h>

void printTable();                //Function Declaration

int main()
{
    printfTable();

    getch();
    return 0;
}

void printfTable()               //Function Declaration
{
    int No = 7,i = 1;

    printf("\n Table of %d is =",No);

    while( i <= 10 )
    {
        printf("\n %3d * %3d = %3d.",No,i,(i*No));
        i++;
    }
    return 0;
}
