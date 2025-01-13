#include <stdio.h>
#include <stdio.h>
int main()
{ 
  int No1=0, No2=0, Div=0;
  
  printf("Enter 1 St Number");
  scanf("%d",&No1);

  printf("Enter 2nd Number");
  scanf("%d",&No2);
  
  Div=No1/No2;
  printf("\n Division of two Number%d%d=%d",No1,No2,Div);
   return 0;
}