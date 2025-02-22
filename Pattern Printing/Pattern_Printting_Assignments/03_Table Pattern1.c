#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0,j = 0,R = 0,C = 0,k = 0,No = 0;

    printf("\n Enter Row Size:");
    scanf("%d",&R);

    printf("\n Enter Column Size:");
    scanf("%d",&C);

    printf("\n Enter Number to its:");
    scanf("%d",&No);

    for(i=1,k=1;i<=R;i++)
    {
      for(j=1,k=No;j<=C;j++)
      {
        printf("%3d",k);
        k=k+No;
      }
      printf("\n");
    }
    getch();
    return 0;
}
