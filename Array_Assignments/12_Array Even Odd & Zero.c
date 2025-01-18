#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int i=0,Bills[7]={0},zCnt=0,eCnt=0,oCnt=0;

    printf("\n Enter Todays Bills");

    for(i=0;i<7;i++)

    {
        printf("\n Enter Element No %d : ",i+1);
        scanf("%d",&Bills[i]);

        if(Bills[i]==0)
        {
           zCnt++;
        }
        else if(Bills[i]%2==1)
        {
            oCnt++;
        }
        else
        {
            eCnt++;
        }
    }
    printf("\n\n count of Zero is = %d",zCnt);
    printf("\n\n count of Even Number is = %d",eCnt);
    printf("\n\n count of Odd Number is = %d",oCnt);
    getch();
    return 0;
}
