#include<stdio.h>
#include<conio.h>
int main()
{
 int S1 = 0,S2 = 0,S3 = 0,Total = 0;
 float per = 0.0;

 printf("\n Enter Subject Marks\n");

 printf("\n Enter 1st Student Marks:");
 scanf("%d",&S1);

 printf("\n Enter 2nd Student Marks:");
 scanf("%d",&S2);

 printf("\n Enter 3rd Student Marks:");
 scanf("%d",&S3);

 Total = S1 + S2 + S3;
 per = (float)Total / 3;

 printf("\n Total Marks = %d + %d + %d = %d",S1,S2,S3,Total);
 printf("\n percentage = %f",per);

 getch();
 return 0;


}
