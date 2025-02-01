#include <stdio.h>
#include <conio.h>

void swap(int*,int*);

int main()
{
  int N1=0,N2=0;
  
  printf("\n Enter a Numbers");
  scanf("%d",&N1);
  
  printf("\n Enter 2nd Numbers");
  scanf("d%"&N2);
  
  swap(N1,N2);
  
  printf("\n Swapping number =%d%d",No1,No2,);
  getch();
  return 0;
}

void swap(int *p1, *p2)
{
int temp=0;

  Temp=*p1;
  *p1=*p2;
  *p2=temp;
}