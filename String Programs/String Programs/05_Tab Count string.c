#include<stdio.h>
#include<conio.h>

int main()
{
  int Tcnt = 0,i = 0;
  char cSrc[60] = {'\0'};

  printf("\n Enter A String :");
  gets(cSrc);

  while(cSrc[i] != '\0')
  {
     if(cSrc[i] == '\t')
     {
        Tcnt++;
     }
     i++;
  }
  printf("\n Count of Tab in Given String is =%d.",Tcnt);
  getch();
  return 0;
}
