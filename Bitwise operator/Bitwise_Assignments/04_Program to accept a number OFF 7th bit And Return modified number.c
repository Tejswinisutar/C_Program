#include<stdio.h>
#include<conio.h>
typedef long long int LLI;

LLI OFF_7th_Bit(LLI);

int main()
{
  LLI No = 0, Ret = 0;

  printf("\n Enter A Number");
  scanf("%d",&No);

  printf("\n==========*********=========\n");

  Ret = OFF_7th_Bit(No);

  if(Ret == No)
  {
    printf("\n 7th Bit of Given Number %lld is already OFF.",No);
  }
  else
  {
    printf("\n 7th Bit of Givan Number %lld is ON,\n After 7th Bit OFF modified Number is = %lld.",No,Ret);
  }

   printf("\n==========*********=========\n");

   getch();
   return 0;
}
LLI OFF_7th_Bit(LLI Num)
{
    if((Num >> 6) & 1)
    {
        Num = ((Num)^(1 << 6));
    }
    return Num;
}
