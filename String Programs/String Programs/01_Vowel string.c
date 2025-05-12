#include<stdio.h>
#include<conio.h>

int main()
{
  int Vcnt = 0,i = 0;
  char cSrc[60] = {'\0'};

  printf("\n Enter A String :");
  gets(cSrc);

  while(cSrc[i] != '\0')
  {
     if(cSrc[i] == 'a' || cSrc[i] == 'e' || cSrc[i] == 'i' || cSrc[i] == 'o' || cSrc[i] == 'u' || cSrc[i] == 'A' || cSrc[i] == 'E' || cSrc[i] == 'I' || cSrc[i] == 'O' || cSrc[i] == 'U')
     {
        Vcnt++;
     }
     i++;
  }
  printf("\n Count of Vowels in Given String is =%d.",Vcnt);

  getch();
  return 0;
}
