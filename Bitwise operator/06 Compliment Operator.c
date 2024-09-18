#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,Res = 0;
  
  printf("\n Enter a Number");
  scanf("%d",&No);
  
  printf("-------*********------");
  
  Res = ~ No;
  
  printf("Res %d ~ %d",No,Res);
  
  printf("------*********------");
  getch();
  return 0;
}