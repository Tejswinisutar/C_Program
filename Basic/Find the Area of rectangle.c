#include <stdio.h>

int main() 
{
  float width, height, area;

  
  printf("Enter the width of the rectangle: ");
  scanf("%f", &width);

  printf("Enter the height of the rectangle: ");
  scanf("%f", &height);

  area = width * height;

  printf("The area of the rectangle is: %.2f\n", area);

   return 0;
}