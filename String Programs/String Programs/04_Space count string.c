#include<stdio.h>
#include<conio.h>

int main()
{
  int Scnt = 0,i = 0;
  char cSrc[60] = {'\0'};

  printf("\n Enter A String :");
  gets(cSrc);

  while(cSrc[i] != '\0')
  {
     if(cSrc[i] == ' ')
     {
        Scnt++;
     }
     i++;
  }
  printf("\n Count of Space in Given String is =%d.",Scnt);
  getch();
  return 0;
}
