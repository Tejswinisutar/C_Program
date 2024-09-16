#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0;
  
  printf("\n Enter a Positive Number");
  scanf("%d",&No);
  
  if(No > 0)
  {
    printf("\n Positive Number");
  }
  printf("\n Thank you");
  getch();
  return 0;
}