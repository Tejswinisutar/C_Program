#include <stdio.h>
#include <conio.h>
int main()
{
  int No=0;
  
  printf("\n Enter Number");
  scanf("%d",&No);
  
  if(No%2==0)
  {
    printf("\n Even Number",No);
  }
  else
  {
    printf("\n Odd Number",No);
  }
  printf("\n\n ***** Thank youu *****");
   getch();
   return 0;
}