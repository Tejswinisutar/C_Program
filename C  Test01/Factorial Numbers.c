#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0,Temp = 0,fact = 0;
 
  printf("\n Enter a Number");
  scanf("%d",&No);
  
  if(No<=0) 
    {
        printf("\n Invalide Input Number");
    }
  for(Temp=No,fact=1;Temp>1;Temp--) 
    {
      fact=fact*Temp;
    }
     
     printf("\n factorial %d =",No,fact);
     printf("\n Thank youu");
  getch();
  return 0;
}