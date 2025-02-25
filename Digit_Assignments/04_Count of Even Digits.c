#include <stdio.h>
#include <conio.h>

int main()
{
  int No=0,Ecnt=0,Dig=0,Temp=0;

  printf("\n Enter a Number");
  scanf("%d",&No);

  Temp=No;

  while(Temp>0)
  {
    Dig=Temp%10;
    if((Dig%2==0)&&(Dig!=0))
    {
      Ecnt++;
    }
    Temp=Temp/10;
  }
  printf("\n Count of even Digit %d is=%d",No,Ecnt);
  getch();
  return 0;
}
