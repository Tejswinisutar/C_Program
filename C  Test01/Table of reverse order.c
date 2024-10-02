#include <stdio.h>
#include <conio.h>

int main()
{
  int No=0,Rev=0;
  printf("\n Enter a Number");
  scanf("%d",&No);
  
  for(Rev=10;Rev>0;Rev--)
    {
      printf("%d",No*Rev);
    }
  getch();
  return 0;
}