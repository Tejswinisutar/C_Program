#include <stdio.h>
#include <conio.h>
int main() 
{ 

float Rad=0.0, Area=0.0; 
const float PI=3.14;

printf("Enter Radius of circle"); 
scanf("%f", &Rad); 

Area = PI* Rad* Rad; 

printf("\n Area of circle with Radius %0.2f=%0.2f",Rad,Area); 
getch();
return 0; 
} 