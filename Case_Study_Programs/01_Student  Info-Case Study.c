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

    std.Roll_No = 15;
    strcpy(std.Name,"Harry Potter");
    std.Phy = 84;
    std.Chem = 76;
    std.Maths = 66;

    std.Total = std.Phy + std.Chem +std.Maths;

    std.Per = (std.Total / 300) * 100;

    printf("\n\n Roll Number = %d",std.Roll_No);
    printf("\n\n Name        = %s",std.Name);
    printf("\n\n Total Marks = %0.0f",std.Total);
    printf("\n\n Percentage  = %0.3f",std.Per);

    printf("\n\n Thanks For Using Our Application..!");

    getch();
    return 0;
}
