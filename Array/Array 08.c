#include<stdio.h>
#include<conio.h>

int main()
{
  int Arr[5] ={};

  printf("\n Values of 101 Element = %d.",Arr[0]);
  printf("\n Values Of 102 Element = %d.",Arr[1]);
  printf("\n Values Of 103 Element = %d.",Arr[2]);
  printf("\n Values Of 104 Element = %d.",Arr[3]);
  printf("\n Values Of 105 Element = %d.",Arr[4]);

  getch ();

  printf("\n Enter Array Elements => \n\n");

  printf("\n Enter Element[0] = ");
  scanf("%d",&Arr[0]);
  printf("\n Enter Element[1] = ");
  scanf("%d",&Arr[1]);
  printf("\n Enter Element[2] = ");
  scanf("%d",&Arr[2]);
  printf("\n Enter Element[3] = ");
  scanf("%d",&Arr[3]);

  Arr[3] = 77;
  Arr[2] = 55;
  Arr[4] = 99;
  printf("\n Enter Element[4] = ");
  scanf("%d",&Arr[4]);

  printf("\n Values Of 0 Element = %d.",Arr[0]);
  printf("\n Values Of 1 Element = %d.",Arr[1]);
  printf("\n Values Of 2 Element = %d.",Arr[2]);
  printf("\n Values Of 3 Element = %d.",Arr[3]);
  printf("\n Values Of 4 Element = %d.",Arr[4]);

  printf("\n\n Press Any Key To Continue...");

  getch();
  return 0;
  }