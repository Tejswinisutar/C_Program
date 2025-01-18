#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int i=0,Bills[7]={0},zCnt=0,eCnt=0,oCnt=0;

    printf("\n Enter Todays Bills");

    for(i=0;i<7;i++)

    {
        printf("\n Enter Bill No %d =",i+1);
        scanf("%d",&Bills[i]);
    }
    getch();
    system("cls");

    printf("\n Bills in Array ");

    for(i=0;i<7;i++)
    {
        printf("\n\n Value Of %d Bill= %d",i+101,Bills[i]);

        if(Bills[i]==0)
        {
           zCnt++;
        }
    }
     printf("\n\n count of Zeros is = %d",zCnt);
     getch();
     return 0;
}
