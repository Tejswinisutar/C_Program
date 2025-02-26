#include <stdio.h>

int main()
{
    int Num = 0, MinDig = 9, Dig = 0, temp = 0;

    printf("\n Enter an integer number: ");
    scanf("%d", &Num);

    temp = Num;

    while (temp > 0)
    {
        Dig = temp % 10;

        if (Dig < MinDig)
        {
            MinDig = Dig;
        }

        temp = temp / 10;
    }
    printf("\nThe minimum digit in %d is: %d\n", Num, MinDig);
     return 0;
}
