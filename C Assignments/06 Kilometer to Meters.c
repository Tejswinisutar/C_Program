#include <stdio.h>
#include <conio.h>
int main() 
{ 

float KM=0.0, Meters=0.0; 

printf("Enter Length in Kilometers"); 
scanf("%f", &KM); 

Meters=KM*1000;

printf("\n\n %0.2f KM=%0.2f Meters",KM,Meters);
 getch();
 return 0; 
}