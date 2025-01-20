#include<stdio.h>
#include<conio.h>

void printTable(int);                //Function Declaration

int main()
{
    int No = 0;

    printf("\n Enter a Number =");
    scanf("%d",&No);

    printfTable(No);

    getch();
    return 0;
}

void printfTable(int Num)               //Function Declaration
{
    int i = 1;
    printf("\n Table of %d is =",Num);

    while( i <= 10 )
    {
        printf("\n %3d * %3d = %3d.",Num,i,(i*Num));
        i++;
    }
    return 0;
}
