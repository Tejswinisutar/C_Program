#include <stdio.h>
#include <conio.h>

int main()
{
  char Ch='0';
  
  printf("\n Enter a Character");
  scanf("%c",&Ch);
  
  if(Ch>='A' && Ch<='Z')
  {
    printf("\n Uppercase",Ch);
  }
  else if(Ch>='a' && Ch<='z')
  {
    printf("\n Lowercase",Ch);
  }
  else
  {
    printf("\n Not Upper & Lowercase",Ch);
  }
  getch();
  return 0;
}