#include <stdio.h>
#include <conio.h>

int main()
{
int S1=0,S2=0,S3=0,Total=0;
float per=0.0;

printf("\n Enter 3 Subjects Marks");

printf("Enter 1St Subject Marks");
scanf("%d",&S1);

printf("Enter 2nd Subject Marks");
scanf("%d",&S2);

printf("Enter 3rd Subject Marks");
scanf("%d",&S3);


Total=S1+S2+S3;
per = (float)Total/3;

printf("\n Total Marks =%d+%d+%d=%d",S1,S2,S3,Total);
printf("\n percentage=%f",per);
return 0;
}