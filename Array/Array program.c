#include <stdio.h>
#include<conio.h>
#define size 5
int main()
{
    int  i=0,cnt =0,Arr[size];

        for(i=0 ; i<size; i++)
        {
          printf("\n Enter Element %d =>",i+1);
          scanf("%d",&Arr[i]);
        }

 getch();

       for(i=0 ; i<size; i++)
       {
         if(Arr[i]%2==0)
           {
              cnt++;
            }
       }

       printf("\nCount Of Even in Given Array is : %d.",cnt);

  getch ();
  return 0;

}