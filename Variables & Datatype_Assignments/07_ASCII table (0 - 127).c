#include<stdio.h>
#include<conio.h>
int main()
{
    int ch;

    printf("\n Enter a Value(0 - 127): ");
    scanf("%d",&ch);

     if(ch >= 0 && ch <= 127)
        {
            printf("\n The ASCII value of '%d' is %d \n", ch, ch);
        }
     else
        {
           printf("\n Invalid ASCII Value..!");
        }
    return 0;
}
