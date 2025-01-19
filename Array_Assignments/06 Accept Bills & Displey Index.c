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
        printf("\n Bill %d Amount Found Index %d.",SrchNo,i);
     }
     else
     {
         printf("\n No Such Bill");
     }
    printf("\n*************Thank you*************");
    getch();
    return 0;
}
