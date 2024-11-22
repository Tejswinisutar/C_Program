#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0 , i = 0 , j = 0;

    printf("\n Enter A Number ");
    scanf("%d",&No);

    printf("\n ******* L Pattern *****\n\n");

    for( i = 1 ; i <=No ;i++)
    {
        for( j = 1 ; j <=No ; j++)
        {
            if( j == 1 || i == No )
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("\n ***** Thank youhh *****");
    getch();
    return 0 ;
}