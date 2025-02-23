#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,Dig = 0,DigSum = 0,temp = 0;

  printf("\n Enter a Number");
  scanf("%d",&No);

  temp = No;
  while(temp > 0)
  {
    Dig = temp % 10;
    DigSum = DigSum + Dig;
    temp = temp / 10;
  }
  printf("\n Sum of Digits in%d is = %d",No,DigSum);
  getch();
  return 0;
}
