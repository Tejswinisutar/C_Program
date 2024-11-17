#include <stdio.h>
#include <conio.h>

int main()
{
  int i=0,j=0,R = 0,C = 0;
  
  printf("\nEnter Row Size");
  scanf("%d",&R);
  
  printf("\nEnter Column Size");
  scanf("%d",&C);
  
  printf("\n ***** Pattern *** \n\n");
  
  for(i=1;i<=R;i++)
  {
    for(j=1;j<=C;j++)
    {
      printf(" * ");
    }
    printf("\n");
  }
  printf("\n Thank youu");
  getch();
  return 0;
}