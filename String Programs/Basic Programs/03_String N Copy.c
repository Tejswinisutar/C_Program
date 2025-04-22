#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
   char FName[10] = {'\0'};
   char LName[10] = {};

   printf("\n Enter a 1st Name :");
   gets(FName);

   printf("\n Enter Last Name :");
   gets(LName);

   printf("\n 1st Name is = %s..!",FName);

   printf("\n\n Last Name is = %s..!",LName);

   strncpy(FName,LName,2);

   getch();

   printf("\n\n After Copy 1st Name is = %s ..!",FName);

   printf("\n\n After Copy Last Name is = %s $$$",LName);

   getch();
   return 0;
}
