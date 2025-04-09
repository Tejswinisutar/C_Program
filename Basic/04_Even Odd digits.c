#include <stdio.h>

int main()
{
    int No = 0, Ecnt = 0, Ocnt = 0, Dig = 0, Temp = 0;

    printf("Enter a Number: ");
    scanf("%d", &No);

    Temp = No;

    while (Temp > 0)
    {
        Dig = Temp % 10;

        if (Dig % 2 == 0 && Dig != 0)
        {
            Ecnt++;
        }
        else if (Dig % 2 != 0)
        {
            Ocnt++;
        }

        Temp = Temp / 10;
    }
    printf("Count of even digits in %d is: %d\n", No, Ecnt);
    printf("Count of odd digits in %d is: %d\n", No, Ocnt);

    return 0;
}
