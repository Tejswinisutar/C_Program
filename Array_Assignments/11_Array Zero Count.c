#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 4
int main()
{
    int i=0,Num[Size]={},Zero=0,Even=0,Odd=0;
    printf("\n Enter Elements");
    for(i=0;i<Size;i++)

    {
        printf("\n Enter Element No %d : ",i+1);
        scanf("%d",&Num[i]);
    }
    getch();

    printf("\n You Entered Elements Are These");
    for(i=0;i<Size;i++)
    {
        printf("\n\n Value Of Element %d = %d",i+1,Num[i]);
        if(Num[i]==0)
        {
           Zero++;
        }
    }
     printf("\n\n count of Zseroes is = %d",Zero);
     getch();
     return 0;
}
