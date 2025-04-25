#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
   char FName[20] = {'\0'};
   char LName[20] = {};
   char FullName[40] = {""};

   printf("\n Enter A 1st Name:");
   gets(FName);
   printf("\n Enter A Last Name:");
   gets(LName);

   printf("\n\n 1st Name is = %s ..!",FName);
   printf("\n\n Last Name is = %s ***",LName);

   strcat(FullName,FName);
   strcat(FullName," ");
   strcat(FullName,LName);

   getch();

   printf("\n\n After Concat 1st Name is = %s ..!",FName);
   printf("\n\n After Concat Last Name is = %s $$$",LName);
   printf("\n\n After Concat FullName is = %s ***",FullName);

   getch();
   return 0;
}
