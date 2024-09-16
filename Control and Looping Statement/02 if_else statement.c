#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0;
  
  printf("\n Enter a Numbers");
  scanf("%d",&No);
  
  if(No > 0)
  {
    printf("\n Positive Number");
  }
  else
  {
    printf("\n Negative Number");
  }
  printf("\n Thank youh");
  getch();
  return 0;
}