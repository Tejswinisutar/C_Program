#include <stdio.h>
#include <conio.h>

int main()
{
  int No=0,Zcnt=0,Dig=0,Temp=0;

  printf("\n Enter a Number:");
  scanf("%d",&No);

  Temp=No;

  while (Temp>0)
  {
    Dig=Temp%10;
    if(Dig==0)
    {
      Zcnt++;
    }
    Temp=Temp/10;
  }
  printf("\n Count of zeros%d",Zcnt);
  getch();
  return 0;
}
