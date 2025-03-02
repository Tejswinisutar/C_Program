#include<stdio.h>
#include<conio.h>
int main()
{
  int No1 = 0,No2 = 0,Mult = 0;

  printf("\n Enter 1st Number:");
  scanf("%d",&No1);

  printf("\n Enter 2nd Number:");
  scanf("%d",&No2);

  Mult = No1 * No2;

  printf("\n multiplication of Number %d is %d = %d",No1,No2,Mult);
  getch();
  return 0;
}
