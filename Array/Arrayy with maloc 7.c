#include <stdio.h>
#include <conio.h>
#define  BillCount 7
int main()
{
  int i=0,Bills[BillCount]={0};
  
  printf("\n Enter Todays Bills \n");
  for(i=0;i<BillCount;i++)
  {
    printf("\n Enter Bill No %d",i+1);
    scanf("%d",Bills[i]);
  }
  getch();
  system ("cls");
  printf("\n\n Bills on Array Are \n\n");
  for(i=0;i<BillCount;i++)
   {
     printf("\n Value of %d Bill = %d",i+101,Bills[i]);
   }
   getch();
   return 0;
}