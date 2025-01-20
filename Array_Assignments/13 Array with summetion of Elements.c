#include<stdio.h>
#include<conio.h>
#define size 5

    int main()
    {
        int i=0, Sum=0 , Arr[size];

            for(i=0 ; i<size ; i++)
            {
                printf("\nEnter element %d =>",i+1);
                scanf("%d",&Arr[i]);
            }

        getch();
        system("cls");


            for(i=0 ; i<size ; i++)
            {
                   Sum=Sum+Arr[i];
            }

             printf("\n Summation of given array element is => %d.",Sum);

        getch();
        return 0;
    }
