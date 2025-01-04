#include <stdio.h>
#include<conio.h>
#define size 5
int main()
{
  int i= 0, Max=0, Arr[size];

   for(i=0; i<size; i++)
   {
     printf("\n Enter Element %d =>",i+1);
     scanf("%d",&Arr[i]);
   }
 getch();


   for(i=0; i<size; i++)
   {
      if(Arr[i]>Max)
      {
        Max=Arr[i];
      }

   }

   printf("\n Maximum Number In Given Array Is : %d",Max);

 getch ();
 return 0;
}