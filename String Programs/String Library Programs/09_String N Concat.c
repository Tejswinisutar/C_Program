#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
   char FName[20] = {'\0'};
   char NickName[40] = {""};

   printf("\n Enter A 1st Name:");
   gets(FName);

   printf("\n\n 1st Name is = %s..!",FName);

   strncat(NickName,FName,2);

   getch();

   printf("\n\n After NConcat 1st Name is = %s ..!",FName);
   printf("\n\n After NConcat Nick Name is = %s $$$",NickName);

   getch();
   return 0;
}
