#include <stdio.h>

int main()
{
  int Num = 0, MaxDig = 0, Dig = 0, temp = 0;

  printf("\nEnter an integer number: ");
  scanf("%d",&Num);

  temp = Num;

  while (temp > 0)
  {
    Dig = temp % 10;

    if (Dig > MaxDig)
    {
      MaxDig= Dig;
    }

    temp = temp / 10;
  }
  printf("\nThe Maximum Dig in %d is: %d\n", Num,MaxDig);
  return 0;
}
