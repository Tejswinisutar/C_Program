#include<stdio.h>
#include<conio.h>

int main()
{
    int No =0;

    printf("\n Enter A Number\n");
    scanf("%d",&No);

    printf("\n====================================================\n");

    if((No >> 14) & 1)
    {
        printf("\n 15th Bit is ON.",No);
    }
    else
    {
       printf("\n 15th Bit is OFF.",No);
    }

    printf("\n====================================================\n");

    getch();
    return 0;
}

