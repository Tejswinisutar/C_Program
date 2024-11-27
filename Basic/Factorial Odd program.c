#include<stdio.h>
#include<conio.h>
int main()
{
   long long int  Number=0;
   int Temp=0,Dig=0,Cnt=0;

    printf("\n Enter a Number");
    scanf("%d",&Number);
    Temp=Number;
    while(Temp>0)
    {
        Dig=Temp%10;
        if(Dig %2 ==1 && Dig != 0)
        {
            (Cnt++);
        }
        Temp=Temp/10;
    }
    printf("\n Number %d And count is = %d",Number,Cnt);
     getch();
    return 0;
}