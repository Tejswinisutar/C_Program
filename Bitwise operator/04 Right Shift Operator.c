#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,Res = 0;
  
  printf("\n Enter a Number");
  scanf("%d",&No);
  
  printf("\n -------*******-----");
  
  Res = No>>5;
  
  printf("\n Result = %d >>5 = %d",No,Res);
  
  printf("\n -------*******-----");
  getch();
  return 0;
}