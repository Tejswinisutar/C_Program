#include<stdio.h>
#include<conio.h>
#define size 5

    int main()
    {
        int i=0,Max=0,S_Max=0,flag=0,Arr[size];

            for(i=0 ; i<size ; i++)
                {
                    printf("\nEnter element %d =>",i+1);
                    scanf("%d",&Arr[i]);
                }

            for(i=0 ; i<size ; i++)
            {
                   if((i==0)||(Arr[i]>Max) )
                       {
                            Max=Arr[i];
                       }
            }

            for(i=0 ; i<size ; i++)
            {
                    if(Arr[i]==Max)
                    {
                        continue;
                    }

                    if((flag==0) || (Arr[i]>S_Max))
                    {
                        S_Max=Arr[i];
                        flag=1;
                    }
            }
             printf("\nMaximum number in given array is : %d.",Max);
             printf("\nSecond Maximum number in given array is : %d.",S_Max);

        getch();
        return 0;
    }
