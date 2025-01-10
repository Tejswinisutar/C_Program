#include <stdio.h>
#include <conio.h>
int main() 
{ 

float Rad=0.0, Circum=0.0; 
const float PI=3.14;

printf("Enter Radius of circle"); 
scanf("%f", &Rad); 

Circum= 2 * PI * Rad; 

printf("\n circumference of Circle with radius%0.2f=%0.2f",Rad,Circum); 
getch();
return 0; 
}