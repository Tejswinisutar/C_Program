#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void Accept_Student_Details();
void Display_Student_Details();

struct Stud
{
            int  Roll_No;
            char  Name[40];
            int Phy;
            int Chem;
            int Maths;
            float Total;
            float  Per;
};

int main()
{
            struct Stud Std[3];

            for(int i = 0; i < 3; i++)
            {
                printf("\n Enter Student %d Details \n ", i+1);

                Accept_Student_Details(&Std[i]);
            }

            printf("\n Enter Any Key To Go ");
            getch();

            printf("\n ========================================= ");

            printf("\n\n Enter Students Details \n\n");

            for(int i = 0; i < 3; i++)
            {
                printf("\n\n %d Student Details \n ", i+1);

                Display_Student_Details(&Std[i]);
            }

            printf("\n\n Thanks For Using Our Application..!");

            getch();
            return 0;
}

void Accept_Student_Details(struct Stud *sPtr)
{
            printf("\n Enter Student Roll No : ");
            scanf("%d", &sPtr->Roll_No);

            fflush(stdin);

            printf("\n Enter Student Name :");
            gets(sPtr->Name);

            printf("\n Enter Physics Marks :");
            scanf("%d", &sPtr->Phy);

            printf("\n Enter Chemistry Marks :");
            scanf("%d", &sPtr->Chem);

            printf("\n Enter Mathematics Marks :");
            scanf("%d", &sPtr->Maths);

            sPtr->Total = sPtr->Phy + sPtr->Chem + sPtr->Maths;

            sPtr->Per = (sPtr->Total / 300) * 100;

            return;
}

void Display_Student_Details(struct Stud *sPtr)
{
            printf("\n\t\t Roll Number       = %d", sPtr->Roll_No);
            printf("\n\t\t Student Name      = %s", sPtr->Name);
            printf("\n\t\t Physics Marks     = %d", sPtr->Phy);
            printf("\n\t\t Chemistry Marks   = %d", sPtr->Chem);
            printf("\n\t\t Mathematics Marks = %d", sPtr->Maths);
            printf("\n\t\t Total Marks       = %0.0f", sPtr->Total);
            printf("\n\t\t Percentage        = %0.3f", sPtr->Per);

            printf("\n\n ==================Thank You======================= ");

            getch();
            return;
}
