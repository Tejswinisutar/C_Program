#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Calculate(int,int,int,int*,float*);

int main()
{
    int Phy = 0,Chem = 0,Maths = 0,T_Marks = 0;
    float percent = 0.0;

    printf("\n Enter Physics Marks:");
    scanf("%d",&Phy);

    printf("\n Enter Chemistry Marks:");
    scanf("%d",&Phy);

    printf("\n Enter Mathematics Marks:");
    scanf("%d",&Phy);

    Calculate(Phy,Chem,Maths,&T_Marks,&percent);

    printf("\n ==============================");

    printf("\n Physics = %d",Phy);
    printf("\n Chemistry = %d",Chem);
    printf("\n Mathematics = %d",Maths);
    printf("\n ==============================");
    printf("\n Total Marks = %d",T_Marks);
    printf("\n Percentage = %2.0f",percent);

    getch();
    return 0;
}

void Calculate(int P,int C,int M,int *Tot,float *per)
{
    *Tot = P + C + M;

    *per =( (float)(*Tot))/ 3;

    return ;
}


