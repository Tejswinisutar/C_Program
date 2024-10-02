#include <stdio.h>
#include <conio.h>

int main()
{
  int No=0,Temp=0,i=0,Sum=0;
  
  printf("\n Enter a number");
  scanf("%d",&No);
  for(i=1;i<=No;i++)
  {
    printf("\n Enter %d number",i);
    scanf("%d",&Temp);
    
    Sum=Sum+Temp;
  }
   printf("\n Sum of %d Number=%d",No,Sum);
  getch();
  return 0;
}