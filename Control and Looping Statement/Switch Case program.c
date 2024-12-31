#include<conio.h>
#include<stdio.h>
int main()
{
  char ch = '\0';
  printf("\n Enter A Character");
  scanf("%c",&ch);
  switch(ch)
  {
    case'a':
    case'A':
             printf ("\n welcome");
             break ;

   case'b':
   case'B':
           printf("\n Good Bye");
           break;

  case 'c':
  case 'C':
          printf("\nHave Nice Day");
          break;

 case 'd' :
 case 'D' :
        printf("\n Good Day");
        break;

 default :
     printf("\n Invalid Input");
      break ;
      }
  getch ();
  return 0;
}