#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,Res = 0;
  
  printf("\n Enter a Number");
  scanf("%d",&No);
  
  printf("\n ******************");
  
  Res = No<<4;
  
  printf("\n Results =%d<<4=%d",No,Res);
  
  printf("\n ******************");
  getch();
  return 0;
}