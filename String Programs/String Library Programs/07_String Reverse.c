#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
   char cSrc[20] = {'\0'};

   printf("\n Enter A String :");
   gets(cSrc);

   printf("\n\n Given String Before is = %s",cSrc);

   strrev(cSrc);

   printf("\n\n Given String After  is = %s",cSrc);

   getch();
   return 0;
}
