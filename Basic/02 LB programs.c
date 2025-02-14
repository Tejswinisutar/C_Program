#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,Ret = 0;
  
  printf("\n Enter a Number");
  scanf("%d",&No);
  if(1<<6)
  {
    Ret = 1;
  }
    if(Ret ==1)
     {
        printf("\n 7th Bit is on");
     }
   else
  {
    printf("\n 7th Bit is off");
  }
  getch();
  return 0;
}