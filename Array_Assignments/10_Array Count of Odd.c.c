#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 5
int main()
{
    int i=0,Bills[7]={0},OCnt=0;

    printf("\n Enter Any Numbers");

    for(i=0;i<7;i++)

    {
        printf("\n Enter Element No %d : ",i+1);
        scanf("%d",&Bills[i]);

        if(Bills[i] % 2==1)
        {
            OCnt++;
        }

    }
    printf("\n\n==== count of odd numbers is %d.",OCnt);
    getch();
    return 0;
}
