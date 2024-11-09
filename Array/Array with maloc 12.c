#include <stdio.h>
#include <conio.h>
#define BillCount 12
int main()
{
  int i=0, Bills[BillCount]={0};
  
  printf("\n Enter Today's Bills \n");
  
  for(i=0;i<BillCount;i++)
  {
    printf("\n Enter Bill No%d",i+1);
    scanf("%d",Bills[i]);
  }
  getch();
  
  system ("cls");
  printf("\n\n Bills on Array are \n\n ");
  
   for(i=0;i<BillCount;i++)
    {
      printf("\n value of%d Bills=%d",i+101,Bills[i]);
    }
    getch();
  return 0;
}