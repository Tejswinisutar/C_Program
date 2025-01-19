#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
   int i=0,Bills[7]={0},Max=0;

   for(i=0;i<7;i++)
   {
       printf("\n\n Enter Max No %d= ",i+1);
       scanf("%d",&Bills[i]);

       if((i==0)||(Bills[i]>Max))
       {
           Max=Bills[i];
       }
   }
   getch();

   printf("\n\n Max Number is= %d.",Max);
   getch();
   return 0;
}
