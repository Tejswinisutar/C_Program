#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct stud
{
    int Rno;
    char Name[20];
    float per;
};
int main()
{
    int i=0;
    struct stud std[3];

    for(i=0;i<3;i++)
    {
        printf("\n\n Enter student No %d Details=",i+1);

        printf("\n\n Enter Roll Number=");
        scanf("%d",&std[i].Rno);

        fflush(stdin);

        printf("\n Enter Name");
        gets(std[i].Name);

        printf("\n Enter percentage");
        scanf("%f",&std[i].per);
    }
    getch();
    system("cls");

    printf("\n-----------***************---------------");

    printf("\n\t Student Database\n");

    for(i=0;i<3;i++)
    {
        printf("\n\n %d student Info is",i+1);

        printf("\n Roll Number =%d.",std[i].Rno);
        printf("\n Name        =%s.",std[i].Name);
        printf("\n percentage  =%0.2f.",std[i].per);
    }
    printf("\n-----------***************---------------");

    getch();
    return 0;
}


















