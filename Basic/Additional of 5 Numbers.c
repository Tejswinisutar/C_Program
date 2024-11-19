#include<stdio.h>
#include<conio.h>
int main()
{
    int N1 = 0,N2 = 0,N3 = 0,N4 = 0,N5 = 0,Sum = 0;
    
    printf("\n Enter a Number 1= ");
    scanf("%d",&N1);
    
    printf("\n Enter a Number 2= ");
    scanf("%d",&N2);
    
    printf("\n Enter a Number 3= ");
    scanf("%d",&N3);
    
    printf("\n Enter a Number 4= ");
    scanf("%d",&N4);
    
    printf("\n Enter a Number 5= ");
    scanf("%d",&N5);

    Sum = N1 + N2 + N3 + N4 + N5;

    printf("\n Addition of %d,%d,%d,%d,%d is = %d",N1,N2,N3,N4,N5,Sum);
    getch();
    return 0;
}