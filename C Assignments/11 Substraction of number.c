#include <stdio.h>
#include <stdio.h>
int main()
{ 
  int No1=0, No2=0, Sub=0;
  
  printf("Enter 1 St Number");
  scanf("%d",&No1);

  printf("Enter 2nd Number");
  scanf("%d",&No2);
  
  Sub=No1-No2;
  printf("\n Substraction of two Number%d%d=%d",No1,No2,Sub);
   return 0;
}