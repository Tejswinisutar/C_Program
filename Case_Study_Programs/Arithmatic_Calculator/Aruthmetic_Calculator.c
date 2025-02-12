/// Arithmetic Calculator -Case Study

/// Arithmetic operators use as console Based calculator

///Input-Two Integral Numbers
///Output-Arithmetic Result of User Choice i.e.Addition or Subtraction or Division or Multiplication or Modulo

///Author-Frok

///////////////////////////////////////////////////////////////////////////////////////////////////
 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 #include"Helper\Calculator.c"

 int main()
  {
     int choice = 0;
     char ch = '\0';

     for(;;)
     {
       printf("\n ****** Fork Infosystem ******\n\tArithmetic Calculator\n");
       printf("===========================================================");
       printf("\n choices = \n\t 1.Addition\n\t 2.Subtraction\n\t 3.Division\n\t 4.Multiplication\n\t 5.Remainer\n\t 6.Exit\n");
       printf("===========================================================");

       printf("\n Enter Your Choice=");
       scanf("%d",&choice);

       switch(choice)
       {
        case 1:
               Add();
               getch();
               system("cls");
               getch();
               break;
        case 2:
               Subtract();
               getch();
               system("cls");
               break;
        case 3:
               Div();
               getch();
               system("cls");
               break;

        case 4:
               Multiply();
               getch();
               system("cls");
               break;

        case 5:
               Mod();
               getch();
               system("cls");
               break;

        case 6:
               fflush(stdin);
               printf("\n Are You Sure Do You Want To Exit??(Yes/No)");
               ch=getchar();

               if(ch=="y" || ch=="Y")
               {
                   goto DWN;
               }
               fflush(stdin);
               system("cls");
               break;

        default:
               printf("\n Invalid Choice");
               getch();
               system("cls");
               break;
       }

     }

     DWN:
         printf("\n\n **** Thanks For Using Fork Infosystems Calculator Services ****");
         printf("\n Press ANy Key To Exit Application!!!\n");
         getch();
         return 0;
}
