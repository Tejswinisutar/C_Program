#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char Name[10]={};
    int Rno=0;
    char City[10]={};
    char Course[10]={};

    fflush(stdin);
    printf("\n Enter A Name:");
    scanf("%s",&Name);

    printf("\n Enter A Roll No:");
    scanf("%d",&Rno);

    fflush(stdin);
    printf("\n Enter A City:");
    scanf("%s",&City);

    fflush(stdin);
    printf("\n Enter A Course:");
    scanf("%s",&Course);
    getch ();
    return 0;
}
