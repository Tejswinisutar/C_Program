#include <stdio.h>
#include <conio.h>
int main()
{
    int Number =0, Square = 0;
    
    printf("\n Enter a Number");
    scanf("%d",&Number);
    
    Square = Number * Number;
    printf("\n Square of %d is = %d",Number,Square);
    printf("\n ****Thank you..****");
    getch();
    return 0;
}