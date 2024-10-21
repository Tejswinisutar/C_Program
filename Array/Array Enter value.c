#include<stdio.h>
#include<conio.h>
int main()
{
    int Num[5] ={};

    printf("\n value of element 1 <%d>",Num[0]);
    printf("\n value of element 2 <%d>",Num[1]);
    printf("\n value of element 3 <%d>",Num[2]);
    printf("\n value of element 4 <%d>",Num[3]);
    printf("\n value of element 5 <%d>",Num[4]);
    getch();
    system ("cls");

    printf("\n Enter a element 1: ");
    scanf("\n %d",&Num[0]);
    printf("\n Enter a element 2: ");
    scanf("\n %d",&Num[1]);
    printf("\n Enter a element 3: ");
    scanf("\n %d",&Num[2]);
    printf("\n Enter a element 4: ");
    scanf("\n %d",&Num[3]);
    printf("\n Enter a element 5: ");
    scanf("\n %d",&Num[4]);

    Num[2]=55;
    Num[3]=65;



    printf(" Enter a element  \n ");
    printf("\n value of element 1 <%d>",Num[0]);
    printf("\n value of element 2 <%d>",Num[1]);
    printf("\n value of element 3 <%d>",Num[2]);
    printf("\n value of element 4 <%d>",Num[3]);
    printf("\n value of element 5 <%d>",Num[4]);
    getch();
    return 0;

}