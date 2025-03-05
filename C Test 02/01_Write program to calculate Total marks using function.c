#include<stdio.h>
#include<conio.h>

 int main()
 {
    int Chem = 0,Phy = 0,Maths = 0,Total = 0;

    printf("\n Enter Chem Marks:");
    scanf("%d",&Chem);

    printf("\n Enter Phy Marks:");
    scanf("%d",&Phy);

    printf("\n Enter Maths Marks:");
    scanf("%d",&Maths);

    Total = Calc(Chem,Phy,Maths);

    printf("\n Total of Marks = %d And %d And %d = %d",Chem,Phy,Maths,Total);

    getch();
 }
 int Calc(int Chem,int Phy,int Maths)
{
 int Total = 0;
 Total = Chem + Phy + Maths;
 return Total;
}


