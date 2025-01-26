#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo=21,iNum=55;
    int *iptr1=&iNo;
    int *iptr2=&iNum;

    printf("\n value of iNo=%d",iNo);   ///21
    printf("\n Address of iNo=%d",&iNo);    ///092
    printf("\n value of iNo using its pointer iptr1=%d",*iptr1);  ///21
    printf("\n Address of iNo using iptr1=%d",iptr1);     ///092
    printf("\n Address of iptr1=%d",&iptr1); //080

    getch();

    printf("\n\n value of iNum=%d",iNum);  ///55
    printf("\n Address of iNum=%d",&iNum);    ///088
    printf("\n value of variable using its pointer iptr2=%d",*iptr2);  ///55
    printf("\n Address of variable using iptr2=%d",iptr2);    ///088
    printf("\nAddress of iptr2=%d",&iptr2);              ///072

    getch();

    printf("\n\n value=%d",&(*iptr1));   ///092
    printf("\n\n value=%d",&(*iptr2));     ///088

    getch();

    iptr1=&iNum;

    *iptr1=570;

    printf("\n\n value of iNo=%d",iNo);  ///21
    printf("\n Address of iNo=%d",&iNo);    ///092
    printf("\n value of iNo using its pointer iptr1=%d",*iptr1);  ///570
    printf("\n Address of iNo using iptr1=%d",iptr1);      ///088
    printf("\n Address of iptr1=%d",&iptr1);             ///080

    printf("\n\n value of iNum=%d",iNum);       ///570
    printf("\n Address of iNum=%d",&iNum);          ///088
    printf("\n value of variable using its pointer iptr2=%d",*iptr2);     ///570
    printf("\n Address of variable using iptr2=%d",iptr2);    ///088
    printf("\n Address of iptr2=%d",&iptr2);         ///072

    getch();
    return 0;
}
