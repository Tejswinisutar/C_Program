#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

#define Count 3

struct stud
{
    int Rno;
    char Name[20];
    float per;
};
int main()
{
    int i=0;
    struct stud std[Count];

    for(i=0;i<Count;i++)
    {
        printf("\n\n Enter student No %d Details=",i+1);

        printf("\n\n Enter Roll Number=");
        scanf("%d",&std[i].Rno);

        fflush(stdin);

        printf("\n Enter Name=");
        gets(std[i].Name);

        printf("\n Enter percentage=");
        scanf("%f",&std[i].per);
    }
    getch();
    system("cls");

    printf("\n-----------*************----------");

    printf("\n\t Students Database\n");

    for(i=0;i<3;i++)
    {
        if((i+1)%10 == 1 && (i+1)!= 11)
        {
            printf("\n\n %dSt student Info is",i+1);
        }
        else if((i+1)%10 == 2 && (i+1)!= 12)
        {
          printf("\n\n %dnd student Info is",i+1);
        }
        else if((i+1)%10 == 3 && (i+1)!= 13)
        {
          printf("\n\n %drd student Info is",i+1);
        }
        else
        {
            printf("\n\n %dth student Info is",i+1);
        }

        printf("\n Roll Number =%d.",std[i].Rno);
        printf("\n Name        =%s.",std[i].Name);
        printf("\n percentage  =%0.2f.",std[i].per);
    }

    printf("\n\n-----------*************------------");
    getch();
    return 0;
}
