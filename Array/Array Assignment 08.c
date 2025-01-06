#include<stdio.h>
#include<conio.h>
#define size 5
int main()
{
        int i=0, srh=0, Arr[size];

           for(i=0; i<size; i++)
           {
               printf("\n Enter Element %d =>",i+1);
               scanf("%d",&Arr[i]);
           }
   getch ();


  printf("Enter Element To Be Searched :");
  scanf("%d",&srh);

         for(i=0; i<size; i++)
         {
             if(srh==Arr[i])
             {
               break;
             }
         }
         if(i==size)
         {
           printf("\n Enter Element Not Found In Given Array.");

         }
         else
         {
           printf("\n Enter Element Found At Location => %d",i+1);
         }

  getch();
  return 0;

}