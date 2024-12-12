#include <stdio.h>
#include <conio.h>
int main()
 {
    int Num1, Num2;
    printf("Enter A first number");
    scanf("%d", &Num1);

    printf("Enter the second number: ");
    scanf("%d", &Num2);

    printf("Output\n");
    for (int i = 0; i < Num2; i++) 
    {
        printf("%d ",Num1);
    }

    return 0;
}