#include <stdio.h>
#include <conio.h>

int main()
{
  int Row=0,Col=0, N=5;
  char Ch='\0';
 
  for(Row=1;Row<=N;Row++) 
    {
      Ch='A';
      for(Col=1;Col<=N;Col++)
      {
        if(Row==1||Row==N||Col==1||Col==N)
        {
          printf(" %c ", Ch);
        }
        else
        {
          printf( "   " );
        }
        Ch++;
      }
      printf("\n");
      
    }
  getch();
  return 0;
}