#include <stdio.h>
int main()
{
int m1=60,m2=30,m3=60;

float percentage;

printf("Enter the marks of m1\n");
scanf("%d",&m1);

printf("Enter the marks of m2\n");
scanf("%d",&m2);

printf("Enter the marks of m3\n");
scanf("%d",&m3);

percentage=(m1+m2+m3)/3;

printf("percentage=%f\n",percentage);

if(percentage>75)
{
    printf("DISTINCTION");
}
else if(percentage>61&&percentage<=75)
{
    printf("GRADE A");
}
else if(percentage>51&&percentage<=60)
{
    printf("GRADE B");
}
else if (percentage>41&&percentage<=50)
{
printf("GRADE C");
}
else
{
    printf("FAIL");
}
return 0;
}
