#include <stdio.h>
#include <conio.h>

int main()
{
  int No1 = 0,No2 = 0,No3 = 0;
  
  printf("\n Enter 3 Integer Numbers");
  scanf("%d%d%d",&No1,&No2,&No3);
  
  if((No1 == No2) && (No2 == No3)) 
  {
    printf("\n All 3 Number are Equal");
  }
  else if((No1 >= No2) && (No1 >=No3)) 
  {
    printf("\n Max is =%d",No1);
   }
   else if((No2 >= No1) && (No2 >=No3)) 
   {
     printf("\n Max is =% d",No2);
   }
   else
   {
     printf("\n Max is =%d",No3);
   }
   printf("\n Thank yoh");
   getch();
  return 0;
}