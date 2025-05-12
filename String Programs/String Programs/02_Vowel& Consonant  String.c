#include<stdio.h>
#include<conio.h>

int main()
{
  int Vcnt = 0,Ccnt = 0,i = 0;
  char cSrc[60] = {'\0'};

  printf("\n Enter A String :");
  gets(cSrc);

  while(cSrc[i] != '\0')
  {
     if(cSrc[i] == 'a' || cSrc[i] == 'e' || cSrc[i] == 'i' || cSrc[i] == 'o' || cSrc[i] == 'u' || cSrc[i] == 'A' || cSrc[i] == 'E' || cSrc[i] == 'I' || cSrc[i] == 'O' || cSrc[i] == 'U')
     {
        Vcnt++;
     }
    else if ((cSrc[i] >= 'A' && cSrc[i] <= 'Z') || (cSrc[i] >= 'a' && cSrc[i] <= 'z'))     {
         Ccnt++;
     }
     i++;
  }
  printf("\n Count of Vowels in Given String is =%d.",Vcnt);
  printf("\n Count of Consonant in Given String is =%d.",Ccnt);

  getch();
  return 0;
}
