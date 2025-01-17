#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stud
{

   int RollNo;
   char Name[40];
   float per;
};

int main()
{
    int Num;
    struct stud S1;

   printf("\n Size of Integer is =%d.",sizeof(int));
   printf("\n size of Structure Student object /Instance is =%d.",sizeof (struct stud));

   printf("\n size of Integer is=%d.",sizeof(Num));
   printf("\n size of structures student object /Instance is =%d.",sizeof (Num));

   getch();
   return 0;
}
