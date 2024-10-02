#include <stdio.h>
#include <conio.h>

int main()
{
  int A = 0,B = 0;
  printf("\n Enter a Numbers");
  scanf("%d",&A);
  
  printf("\n Enter a Numbers");
  scanf("%d",&B);
  
  A=A+B;
  B=A-B;
  A=A-B;
  
  printf("\n Swapping Number =%d =%d",A,B);
  return 0;
}