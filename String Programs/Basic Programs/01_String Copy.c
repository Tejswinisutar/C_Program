#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cSrc[10] = {'\0'};
    char cDest[10] = {};

    printf("\n Enter a String :");
    gets(cSrc);

    printf("\n Source String is = %s..!",cSrc);

    printf("\n\n Destination String is = %s$$$",cDest);

    strcpy(cDest,cSrc);

    printf("\n\n Givan String is = %s..!",cSrc);

    printf("\n\n Copy to New String is = %s..!",cDest);

    getch();
    return 0;
}
