#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
  int i=0, Bills[7]={0}, Bsum=0;
  
  printf("\n\n Enter Today's Bills");
  
  for(i=0;i<7;i++)
  {
    printf("\n Enter Bill No %d=",i+1);
    scanf("%d",&Bills[i]);
    
    Bsum = Bsum + Bills[i];
  }
  getch();
  printf("\n\n Total of Today's All Bills=%",Bsum);
  getch();
  return 0;
}