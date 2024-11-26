#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0 , No = 0 ,max = 0;

    printf("\n\t Enter a Number");

    for(Cnt = 1 ; Cnt <=10;Cnt++)
    {
        printf("\n\tEnter %d number =",Cnt);
        scanf("%d ",&No);

        if(No>max)
        {
            max = No;
        }
    }
    printf("\n Maximum number");
    getch();
    printf("\n The maximum number = %d",max);
    printf("\n\n ***** Thanks...*****");
    getch();
    return 0;
}