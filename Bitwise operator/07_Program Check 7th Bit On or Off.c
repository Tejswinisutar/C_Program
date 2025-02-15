#include<stdio.h>
#include<conio.h>

int main()
{
  int No = 0;

  printf("\n Enter A Number\n");
  scanf("%d",&No);

  printf("\n=======================================================");

  if((No >> 6) & 1)
  {
    printf("\n 7th Bit is ON.",No);
  }
  else
  {
    printf("\n &th Bit is OFF.",No);
  }

  printf("\n=======================================================");

  getch();
  return 0;
}
