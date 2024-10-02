#include <stdio.h>
#include <conio.h>

int main()
{
  int No1=0,No2=9,No3=0,Temp=0;
  
  printf("\n Enter a Numbers");
  scanf("%d%d%d",&No1,&No2,&No3);
  
  Temp=No1;
  No1=No3;
  No3=No2;
  No2=Temp;
  
  printf("\n Swapping number =%d=%d=%d",No1,No2,No3);
  getch();
  return 0;
}