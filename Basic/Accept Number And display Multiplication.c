#include <stdio.h>

int main() 
{
    int Num, i;
    
    long long product = 1; 
    
    printf("Enter a number: ");
    scanf("%d", &Num);

    if (Num <= 0) 
    {
        printf(" Enter a positive integer \n");
        return 1;
    }

    printf("Factors of %d are: ", Num);
    
    for (i = 1; i <= Num; i++) 
    {
        if (Num % i == 0) 
        {
            printf("%d ", i);
            product *= i;
        }
    }
    printf("\nMultiplication of factors: %llu\n", product);
    return 0;
}