#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int i=0,Bills[4],Min=0;

    printf("\n Enter Any Numbers");

    for(i=0;i<4;i++)
    {
        printf("\n Enter Value No %d = ",i+1);
        scanf("%d",&Bills[i]);

        if( (i==0)||(Bills[i]<Min))
        {
            Min=Bills[i];
        }
    }
    printf("\n\nMin Bill Number=%d.",Min);
    getch();
    return 0;
}
