#include <stdio.h>
#include <conio.h>
int main()
{
  int No1=0,No2=0,Div=0;
  
  printf("\n Enter 1st Number");
  scanf("%d",&No1);
  
  printf("\n Enter 2nd Number");
  scanf("%d",&No2);
  
  Div=No1/No2;
  printf("\n Division of %d & %d = %d",No1,No2,Div);
  getch();
  return 0;
}