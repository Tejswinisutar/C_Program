#include <stdio.h>
#include <conio.h>

int main()
{
  int Num =0;
  
  printf("\n Enter an Integer Number");
  scanf("%d",&Num);
  
  if(Num == 0)
  {
    printf ("\n Neutral Number");
  }
  else if(Num % 2== 0)
  {
    printf("\n Even Number");
  }
  else
  {
    printf("\n Odd Number");
  }
  printf("\n Thank youh");
  getch();
  return 0;
}