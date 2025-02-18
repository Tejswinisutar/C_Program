#include <stdio.h>
#include <conio.h>
int main()
{
  int i,j,n;

  printf("\n Enter size of n");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
    for(j=0;j<2*n-1;j++)
    {
      if(j==0||j==2*n-2||j==i||j==2*n-2-i)
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
  getch();
  return 0;
}
