#include <stdio.h>
#include <conio.h>
int main()
{
  int No1=0,No2=0,No3=0,Mult=0;
  
  printf("\n Enter 1st Number");
  scanf("%d",&No1);
  
  printf("\n Enter 2nd Number");
  scanf("%d",&No2);
  
  printf("\n Enter 3rd Number");
  scanf("%d",&No3);
  
  Mult=No1*No2*No3;
  
  printf("\n Multiplication of %d & %d & %d = %d",No1,No2,No3,Mult);
  getch();
  return 0;
}