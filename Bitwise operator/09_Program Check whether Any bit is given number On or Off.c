#include<stdio.h>
#include<conio.h>

int main()
{
  int No = 0,BNo = 0;

  printf("\n Enter A Number");
  scanf("%d",&No);
  printf("\n Enter Bit Value");
  scanf("%d",&BNo);

  if(BNo > 32 || BNo < 1)
  {
      printf("\n Invalid Bit Value");
      return -1;
  }

  printf("\n ================***************=================");

  if((No>> BNo)&1)
  {
      printf("\n %d is Bit Of Given Number %d is OFF",BNo,No);
  }
  printf("\n ================***************=================");
  getch();
  return 0;
}
