#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Count 3

struct stud
{
       int Roll_No;
       char Name[60];
       long long int Mob_No;
       float per;
};

int main()
{
    struct stud std[Count];
    int i=0;

    printf("\nEnter Students Details=");

    for(i=0;i<Count;i++)
    {
         printf("\n\nEnter Details of student for Roll No = %d \n",i+101);
         std[i].Roll_No=i+101;

         fflush(stdin);

         printf("\n Enter Student Name=");
         scanf("%[^\n]",&std[i].Name);

         fflush(stdin);

         printf("\n Enter Student Mobile No=");
         scanf("%lld",&std[i].Mob_No);

         printf("\n Enter Student percentage=");
         scanf("%f",&std[i].per);
    }

    getch();
    system("cls");

    printf("\n\n\t\t Student Details Entered Are=\n");

    for(i=0;i<Count;i++)
    {
        printf("\n\n %d Student Details Are=",i+1);

        printf("\n Student Roll No    =%d.",std[i].Roll_No);
        printf("\n Student Name       =%s.",std[i].Name);
        printf("\n Student Mob No     =%lld.",std[i].Mob_No);
        printf("\n Student percentage =%0.2f.",std[i].per);
    }
    getch();
    return 0;
}
