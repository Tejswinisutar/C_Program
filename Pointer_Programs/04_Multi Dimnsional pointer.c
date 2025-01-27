#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 21;
        int  *p = &No;
        int  **q = &p;
        int  ***m = &q;
        int  ****x = &m;
        int  *****r = &x;

        printf("\n %d",&No);
        printf("\n %d",&p);
        printf("\n %d",&q);
        printf("\n %d",&m);
        printf("\n %d",&x);
        printf("\n %d",&r);

        printf("\n\n*********************************\n\n");

        getch();

        printf("\n %d",No);     ///
        printf("\n %d",&No);    ///
        printf("\n %d",&p);     ///
        printf("\n %d",*p);     ///
        printf("\n %d",**r);    ///
        printf("\n %d",**(&m)); ///
        printf("\n %d",&(***x));///
        printf("\n %d",****r);  ///

        printf("\n\n Thank you...");

        getch();
        return 0;
}
