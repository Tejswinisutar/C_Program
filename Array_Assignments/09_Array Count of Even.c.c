#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int i=0,Bills[7]={0},ECnt=0;

    printf("\n Enter Any Numbers");

    for(i=0;i<7;i++)

    {
        printf("\n Enter Element No %d : ",i+1);
        scanf("%d",&Bills[i]);
    }

     getch();

    for(i=0;i<7;i++)
    {
        if((Bills[i] !=0) && (Bills[i]%2==0))
        {
            ECnt++;
        }

    }
    printf("\n\n Even Amount Count =%d.",ECnt);

    getch();
    return 0;
}
