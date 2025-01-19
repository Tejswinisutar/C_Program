#include<stdio.h>
#include<conio.h>

long long int Factorial(int);

int main()
{

    int No = 0;
    long long int Ans = 0;

    printf("\n Enter a +ve Number=");
    scanf("%d",&No);

    Ans=Factorial(No);

    printf("\n Factorial of %d is =%lld.",No,Ans);

    getch();
    return 0;
 }

   long long int Factorial (int Num)
   {
       long long int Fact = 0;

       for(Fact = 1;Num > 1;Num--)
       {
           Fact = Fact * Num;
       }
       return Fact;
   }
