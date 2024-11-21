#include <stdio.h>
#include <conio.h>

int main()
 {
    int Row = 0, Col = 0, N = 0;

    printf("Enter N number: ");
    scanf("%d", &N);

    for (Row = 1; Row <= N; Row++)
     {
        for (Col = 1; Col <= N; Col++)
         {
            if (Row == 1 || Row == N || Col == 1 || Col == N) 
            {
                 printf("* ");
            }
             else
              {
                printf("  ");
            }
        }
        printf("\n"); 
    }

    return 0;
}

