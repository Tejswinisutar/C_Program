#include<stdio.h>
#include<conio.h>

struct stud1
{
      char Nm[7];
      char city[10];
      int Rno;
      long int Mno;
      float per;
};
struct stud2
{
      int Rno;
      char Nm[7];
      long int Mno;
      char city[10];
      float per;
};
struct stud3
{
      char Nm[7];
      int Rno;
      char city[10];
      long int Mno;
      float per;
};

int main()
{

    struct stud1 std1;
    struct stud2 std2;
    struct stud3 std3;

    printf("\n size of 1st structure object %d",sizeof(std1));
    printf("\n size of 2nd structure object %d",sizeof(std2));
    printf("\n size of 3rd structure object %d",sizeof(std3));

     getch();
     return 0;
}





