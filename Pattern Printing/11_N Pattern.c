#include<stdio.h>
#include<conio.h>
int main()
{
    int R=0, C=0,X=0;
    printf("\n Enter Row And Column Size: ");
    scanf("%d",&X);
    printf("\n \n*********Pattern*********\n\n");
    for(R=1;R<=X;R++)
    {
        for(C=1;C<=X;C++)
        {
            if(C==1 || C==X || R==C)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");

    }
    printf("\n\n________Tejuu_______\n\n");
    getch();
    return 0;
}
