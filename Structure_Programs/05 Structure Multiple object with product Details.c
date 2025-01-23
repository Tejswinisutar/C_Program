#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define pcnt 5

struct Product
{
    int P_Id;
    char P_Name[12];
    float P_P_Price;
    float P_S_Price;
};
int main()
{
    int i=0;
    struct Product Prod(Pcnt);

    printf("\n Accept Product Details");

    for(i=0;i<Pcnt; i++)
    {
         printf("\n Enter Product Id");
         scanf("%d",&Prod[i].P_Id);

         fflush(stdin);

         printf("\n Enter Product Name");
         gets(Prod[i].P_Name);

         printf("\n Enter Product Purchase Price");
         scanf("%d",&Prod[i].P_P_Price);

         printf("\n Enter Product Sale Price");
         scanf("%d",&Prod[i].S_P_Price);
    }
    getch();
    system("c");

    printf("\n\n *******************************");

    printf("\n Display Product Details");

    for(i=0;i<Pcnt;i++)
    {
        printf("\n %d Product Details",i+1);

        printf("\n Id =%d.",Prod[i].P_Id);
        printf("\n Name =%s.",Prod[i].P_Name);
        printf("\n Purchase Price =%0.2f\n",Prod[i].P_P_Price);
        printf("\n Sale Price =%0.2f\n",Prod[i].S_P_Price);

        printf("\n******Thank You*******");
        getch();
        return 0;
    }
}










