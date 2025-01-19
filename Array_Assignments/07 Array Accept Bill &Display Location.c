#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int i=0,Bills[7]={0},SrchNo=0;

    printf("\n Enter Todays Bills ");

    for(i=0;i<7;i++)
    {
        printf("\n Enter Bill No %d=",i+1);
        scanf("%d",&Bills[i]);
    }

    getch();

    printf("\n Enter Bill Amount To Search=");
    scanf("%d",&SrchNo);

    for(i=0;i<7;i++)
    {
        if(SrchNo == Bills[i])
        {
            break;
        }
    }
     if(i < 7)
     {
        printf("\n Bill %d Amount Found Location %d.",SrchNo,i+1);
     }
     else
     {
         printf("\n No Such Bill");
     }

    getch();
    return 0;
}
