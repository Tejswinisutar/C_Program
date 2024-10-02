#include <stdio.h>
#include <conio.h>

int main()
{
  int R=0,C=0,Num=2;
  
  
  for(R=0;R<5;R++)
   {
      for(C=0;C<5;C++)
        {
           if(R>=C)
            {
              printf("%d ", Num);
              Num=Num+2;
            }
          else
            {
              printf("  ");
            }
      
         }
         printf("\n");
         
    }
  getch();
  return 0;
}