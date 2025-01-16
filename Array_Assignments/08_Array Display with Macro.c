#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define BillCnt 5

int main()
{
   int i = 0, Bills[BillCnt] = {0}, Billsum = 0;

   printf("\n Enter Todays Bills \n");

   for(i = 0;i < BillCnt;i++)
   {
       printf("\n Enter Bill No %d=",i+1);
       scanf("%d",&Bills[i]);

       Billsum=Billsum+Bills[i];
   }
   getch();

   printf("\n\n Bills in Array are \n\n");

   for(i = 0; i < BillCnt; i++)
   {
       printf("\n value of %d Bill=%d",i+101,Bills[i]);
   }
   printf("\n\n Addition of Todays All Bills =%d.",Billsum);
   getch();
   return 0;
}
