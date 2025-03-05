using namespace std;
#include<iostream>>
#include<conio.h>
#include<stdlib.h>

void Calculate(int,int,int,int&,float&);

int main()
{
    int Phy = 0,Chem = 0,Maths = 0,T_Marks = 0;
    float percent = 0.0;

    cout <<"\n Enter Physics Marks:\n";
    cin >>Phy;

    cout <<"\n Enter Chemistry Marks:\n";
    cin >>Chem;

    cout <<"\n Enter Mathematics Marks:\n";
    cin >>Maths;

    Calculate(Phy,Chem,Maths,T_Marks,percent);

    printf("\n ==============================");

    cout <<"\n Physics = " <<Phy;
    cout <<"\n Chemistry = " << Chem;
    cout <<"\n Mathematics = " << Maths;
    printf("\n ==============================");
    cout <<"\n Total Marks = " << T_Marks;
    cout <<"\n Percentage = " << percent;

    getch();
    return 0;
}

void Calculate(int P,int C,int M,int &Tot,float &per)
{
    Tot = P + C + M;

    per =( (float)(Tot) )/ 3;

    return ;
}
