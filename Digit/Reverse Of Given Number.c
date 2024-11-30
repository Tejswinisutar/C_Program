#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0, Temp = 0, Rev = 0; 
  
  printf("\n Enter A Number ");
  scanf("%d",&No);
  
  for (Temp = No; Temp > 0; Temp /= 10)
  {
    Rev = Rev * 10 + Temp % 10;
  }
  
  printf("\n Reverse Number=%d",No,Rev);
  
  return 0;
}