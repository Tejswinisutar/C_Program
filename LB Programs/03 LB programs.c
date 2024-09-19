#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,Ret =0;
  
  printf("\n Enter a Number");
  scanf("%d",&No);
  
  if((No>>14)&1) 
  {
    printf("15th Bit is On");
  }
  else
  {
    printf("15th Bit is Off");
  }
  getch();
  return 0;
}