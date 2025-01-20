#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int i=0,Bills[7]={},Max=0,Min=0;

    printf("\n Enter Todays Bills...");

    for(i=0;i<7;i++)

    {
        printf("\n Enter Bill No %d=",i+1);
        scanf("%d",&Bills[i]);
    }
    getch();
    printf("\n Bills in Array Are...");

    for(i=0;i<7;i++)
    {
        printf("\n value of %d Bill =%d",i+101,Bills[i]);

        if(i==0)
           {
               Max = Bills[i];
               continue;
           }

        if(Bills[i]>Max)
        {
            Max = Bills[i];
        }

        {
            Min = Bills[i];
               continue;
        }

        if(Bills[i]<Min)
        {
              Min = Bills[i];
        }
    printf("\n 1st Max Number and =%d.",Max);
    printf("\n 1st Min Number and =%d.",Min);
    getch();
    return 0;
}
}
