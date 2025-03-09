#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Stud
{
    int Roll_No;
    char Name[40];
    int Phy;
    int Chem;
    int Maths;
    float Total;
    float Per;
};

int main()
{
    struct Stud std;

    printf("\n Enter Student Details \n");

    printf("\n Enter Student Roll_No :");
    scanf("%d",&std.Roll_No);

    fflush(stdin);

    printf("\n Enter Student Name:");
    gets(std.Name);

    printf("\n Enter Physics Marks :");
    scanf("%d",&std.Phy);

    printf("\n Enter Chemistry Marks :");
    scanf("%d",&std.Chem);

    printf("\n Enter Mathematics Marks :");
    scanf("%d",&std.Maths);

    std.Total = std.Phy + std.Chem +std.Maths;

    std.Per = (std.Total / 300) * 100;

    printf("\n Enter Any Key To Go ");
    getch();

    printf("\n\n Enter Student Details \n\n");

    printf("\n\n Roll Number       = %d",std.Roll_No);
    printf("\n\n Student Name      = %s",std.Name);
    printf("\n\n Physics Marks     = %d",std.Phy);
    printf("\n\n Chemistry Marks   = %d",std.Chem);
    printf("\n\n Mathematics Marks = %d",std.Maths);
    printf("\n\n Total Marks       = %0.0f",std.Total);
    printf("\n\n Percentage        = %0.3f",std.Per);

    printf("\n =====================================");

    printf("\n\n Thanks For Using Our Appilication..!");

    getch();
    return 0;
}
