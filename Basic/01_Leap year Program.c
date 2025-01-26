#include<stdio.h>
#include<conio.h>

int main()
{
      int year = 0;

      printf( " \n \n Enter Any Year" );
      scanf( "%d",&year );

      if( year % 4 == 0 )
      {
           printf( " \n The Year is Leap Year" );
      }

      else
      {
           printf( " \n The Year is Not Leap Year" );
      }

       getch();
       return 0;
}
