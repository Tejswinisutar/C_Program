#include <stdio.h>
#include <conio.h>

int main()
{
  int No=0,Dig=0,Digsum=0,Temp=0;
  
  printf("\n Enter a Number");
  scanf("%d",&No);
  
  Temp=No;
  while(Temp>0)
     {
        Dig=Temp%10;
        Digsum=Digsum+Dig;
        Temp=Temp/10;
     }
     
   printf("\n sum of digit=%d=%d",No,Digsum);
   getch();
  return 0;
}