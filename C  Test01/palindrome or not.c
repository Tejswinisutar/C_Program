#include <stdio.h>
#include <conio.h>

int main()
{
    int No = 0, Dig = 0, Rev = 0,Temp=0;

    printf("\nEnter a Number: ");
    scanf("%d", &No);

    Temp = No;

    while (Temp > 0)
    {
        Dig = Temp % 10;
        Rev = (Rev * 10) + Dig;
        Temp = Temp / 10;
    }

    if (No == Rev)  
    {
        printf("\nNumber is a palindrome");
    }
    else
    {
        printf("\nNumber is Not a palindrome");
    }

    getch();
    return 0;
}