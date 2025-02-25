#include <stdio.h>
#include<conio.h>

int main()
 {
    int i = 1, j, space;

    while (i <= 5)
        {
        space = 5 - i;
        j = 1;

        while (space > 0)
            {
            printf(" ");
            space--;
            }

        while (j <= (2 * i - 1))
            {
            printf("*");
            j++;
            }

        printf("\n");
        i++;
        }

    return 0;
}
