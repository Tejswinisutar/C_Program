#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,Ret = 0;
  
  printf("\n Enter a Number");
  scanf("%d",&No);
  
  if(((No>>4)&1)&&((No>>17)&1)) 
  {
    printf("\n 5th & 18th Bit is on");
   }
   else if((No>>17)&1) 
   {
     printf("\n 18th Bit is on & 5th is off");
   }
   else if((No>>4)&1)
   {
     printf("\n 5th Bit is on & 18th is off");
   }
   else
   {
     printf("\n Both the 5th & 18th bit  is off");
   }
   getch();
   return 0;
}