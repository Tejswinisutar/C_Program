#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
  char Name[10] ={};
  int Rno=0;
  char Course[10] ={};
  char City[10]={};
  
  fflush(stdin);
  printf("Enter Name");
  scanf("%s",&Name);

  printf("Enter Roll No");
  scanf("%d",&Rno);
  
  fflush(stdin);
  printf("Enter Course");
  scanf("%s",&Course);

  fflush(stdin);
  printf("Enter City");
  scanf("%s",&City);
 
  return 0;
}