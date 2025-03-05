#include<stdio.h>
#include<conio.h>

int main()
{
    int N1 = 0,N2 = 0,N3 = 0;

    printf("\nEnter 1st Number:");
    scanf("%d",&N1);

    printf("\nEnter 2nd Number:");
    scanf("%d",&N2);

    printf("\nEnter 3rd Number:");
    scanf("%d",&N3);

    printf("\nBefore Swapping\n Number 1= %d,Number 2 = %d,Number 3 = %d.",N1,N2,N3);

    swap(&N1,&N2,&N3);

    getch();

    printf("\n After Swapping\n Number 1 = %d,Number 2 = %d,Number 3 = %d.",N1,N2,N3);

    getch();
    return 0;
}
void swap(int *a,int *b,int *c)
{
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}


