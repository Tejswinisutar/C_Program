#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;
    long long int Fact = 0;

    printf("\n Enter a +ve Number = ");
    scanf("%d",&No);

    for(Fact = 1; No > 1; No--)
    {
        Fact = Fact * No;
    }

    printf("\n Factorial of Given Number is = %lld.", Fact);

    getch();
    return 0;
}
