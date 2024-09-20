#include <stdio.h>
#include <conio.h>

int main()
{
  int R = 0,C = 0;
  printf("\n ***** Pattern *** \n\n");
  
  for(R=1;R<=7;R++)
  {
    for(C=1;C<=4;C++)
    {
      printf(" * ");
    }
    printf("\n");
  }
  printf("\n Thank youu");
  getch();
  return 0;
}