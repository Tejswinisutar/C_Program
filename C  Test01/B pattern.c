
#include <stdio.h>
#include <conio.h>

int main()
{
    int Row = 0, Col = 0, N = 5;
    char Ch = 'A';
    
    for(Row = 1; Row <= N; Row++)
    {
        for(Col = 1; Col <= N; Col++)
        {
            if(Row + Col <= N + 1)
            {
                printf("%c ", Ch);
                Ch++;
            }
            else
            {
                printf("  ");
            }
        }
        Ch = 'A';
        printf("\n");
    }
    
    getch();
    return 0;
}
