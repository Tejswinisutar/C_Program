#include<stdio.h>
#include<conio.h>
int main()
{
  float Rad = 0.0,Circum = 0.0;
  const float PI = 3.14;

  printf("\n Enter Radius of Circle");
  scanf("%f",&Rad);

  Circum = 2 * PI * Rad;

  printf("\n Circumference of Circle %0.2f=%0.2f",Rad,Circum);
  getch();
  return 0;
}
