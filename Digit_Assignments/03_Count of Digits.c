#include <stdio.h>
#include <conio.h>

int main()
{
  int No=0,Dcnt=0,Temp=0;

  printf("\n Enter a Number:");
  scanf("%d",&No);

  Temp=No;

  while(Temp>0)
  {
    Dcnt++;
    Temp=Temp/10;
  }
  printf("\n Count of digits in %d=%d",No,Dcnt);
  getch();
  return 0;
}
