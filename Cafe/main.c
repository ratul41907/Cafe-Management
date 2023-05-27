#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<windows.h>
#include<dos.h>

void screen();
void welcome(char uname[10],int pass);
void menubar();
void bill();
int main()
{
    char uname[10];
    int pass,n;
    screen();
    welcome(uname,pass);
    getch();

}
void screen() //splash screen
{

                                                         sleep(2);
                         printf("                                                              ..\n");
                                                         printf("                                                             =++=\n");
                                                         printf("                                                         :+==  ==+:\n");
                                                         printf("                                                        =+..      ..+=\n");
                                                         printf("                                                     .+=:            :=+.\n");
                                                         printf("                                                     .+================+.\n");
                                                         printf("                                                              ::\n");
                                                         printf("                                                              ::\n");
                                                         printf("                                                              ::\n");
                                                         printf("                                                     .:       ::       :.\n");
                                                         printf("                                                     .:  .....::.....  :.\n");
                                                         printf("                                                     .:  ++++++++++++  :.\n");
                                                         printf("                                                     .:  ++++++++++++  :.\n");
                                                         printf("                                                     .:       ==       :.\n");
                                                         printf("                                                     .++++-   ==   -++++.\n");
                                                         printf("                                                     .++++-   ==   -++++.\n");
                                                         printf("                                                     .:   -   ==   -   :.\n");
                                                         printf("                                                     .:   -   ==   -   :.\n");
                                                         printf("                                                     .:   -   ==   -   :.\n");
                                                         printf("                                                     .:   : ------ :   :.\n\n\n");
         printf("\t\t\t\t:-     ::    :-:     -*#*-:       -=##-:    :-.   :-------.-------\n");
                                   printf("\t\t\t\t=#     **   .##=   :*#=.-##      +##..##.  .*#:   .#######.##++++#.\n");
                                   printf("\t\t\t\t=#+    **   .##+   =#-    -     :#=    -   -#*=    #=     .#*\n");
                                   printf("\t\t\t\t=##*   **   *=:#.  #-           *#         *#:#    #=     .**\n");
                                   printf("\t\t\t\t=#-#+: **   #= #-  #:           ##         #::#*   #+::#  .*####\n");
                                   printf("\t\t\t\t=# :*#=**  -#. =#  #:           ##        +#. +*   #*++#  .*#:::\n");
                                   printf("\t\t\t\t=#   +##*  +#::=#+ #-     .     :#.       *+::*#-  #=     .**\n");
                                   printf("\t\t\t\t=#    =#* .######+ =#=   .+     :#*.   + :######+  #=     .**\n");
                                   printf("\t\t\t\t=#.    **.:#    ##: +##*##*      +######*=#    ##..#=     .*######.\n");
                                   printf("\t\t\t\t:-.    :-.--    --.  --+--.       .-==-: --.   ---:-:     .-------");


                  Sleep(1800);  //delays output
                  system("cls"); //deletes previous output



}
void welcome(char uname[10],int pass) //welcome screen
{

    printf("\t\t\t                ______________________________________________\n\n");
    printf("\t\t\t               |                 Nac Cafe                     |\n ");
    printf("\t\t\t               |______________________________________________|");


    printf("\n\n                                           \t\t User ID : ");
    gets(uname );

    printf("\n");

    printf("                     \t\t\t\t\t Password : ");
    scanf(" %d",&pass);

      if((strcmp(uname,"ratul419")==0) && (pass==123))
    {
        printf("\n\n                                                         Logged in Successfully\n");
         sleep(1);
        system("cls");
        menubar();
    }
     else
     {
        while((strcmp(uname,"ratul419")!=0) && (pass!=123))
      {
    printf("\t\t\t\t\t\tPlease Enter A Proper User Name or Password\n");
    sleep(2);
    system("cls");

    printf("\t\t\t                ______________________________________________\n\n");
    printf("\t\t\t               |                 Nac Cafe                     |\n ");
    printf("\t\t\t               |______________________________________________|");

    fflush(stdin);
    printf("                                            \t\t\t\t\t\t User ID : ");
    gets(uname);

    printf("\n");

    printf("                     \t\t\t\t\t Password : ");
    scanf(" %d",&pass);

       if((strcmp(uname,"ratul419")==0) && (pass==123))
    {
        printf("\n\n                                                         Logged in Successfully\n");
         sleep(1);
        system("cls");
        menubar();
    }

      }
     }
}

void menubar()
{

      int n;
    printf("\t\t\t                ______________________________________________\n\n");
    printf("\t\t\t               |                 Nac Cafe                     |\n ");
    printf("\t\t\t               |______________________________________________|");


   printf("\n\n\n\n                 Please Enter A Number Given Below\n");

        printf("\n                       1.Menu");
        printf("\n                       2.Calculate Bill");
        printf("\n                       3.Exit");
        printf("\n                    Enter Here : ");
            scanf("%d",&n);

             //  while(n!=1 |\ n!=2 || n!=3)


               if(n==1)
               {
                  system("cls");
                   menu();


               }
               else if(n==2)
               {
                   system("cls");
                   bill();
               }
               else if(n==3)
               {
                   exit(1);
               }

               else
                {
                     while(n!=1 || n!=2 || n!=3)
                     {



       printf("\t\t\t                ______________________________________________\n\n");
       printf("\t\t\t               |                 Nac Cafe                     |\n ");
       printf("\t\t\t               |______________________________________________|");

     printf("\n\n\n\n                 Please Enter A Number Given Below\n");

        printf("\n                       1.Menu");
        printf("\n                       2.Calculate Bill");
        printf("\n                       3.Exit");
        printf("\n                    Enter Here : ");
            scanf("%d",&n);

                }
                }



}
    struct list
     {
       int sl;
       char item[20];
       float sprice;
       float mprice;
       float lprice;
     };
void menu()
{

    int num;

     struct list a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;





     a1.sl=01;
     strcpy(a1.item,"MOCHA");
     a1.sprice=210.0;
     a1.mprice=330.0;
     a1.lprice=380.0;

     a2.sl=02;
     strcpy(a2.item,"WHITE MOCHA");
     a2.sprice=260.0;
     a2.mprice=360.0;
     a2.lprice=400.0;

     a3.sl=03;
     strcpy(a3.item,"FLAVORED LATTE");
     a3.sprice=210.0;
     a3.mprice=330.0;
     a3.lprice=380.0;

     a4.sl=04;
     strcpy(a4.item,"CAFE LATTE");
     a4.sprice=165.0;
     a4.mprice=280.0;
     a4.lprice=330.0;

     a5.sl=05;
     strcpy(a5.item,"HOT CHOCOLATE");
     a5.sprice=250.0;
     a5.mprice=360.0;
     a5.lprice=400.0;

     a6.sl=06;
     strcpy(a6.item,"CHAI LATTE");
     a6.sprice=200.0;
     a6.mprice=330.0;
     a6.lprice=400.0;


     a7.sl=07;
     strcpy(a7.item,"AMERICANO");
     a7.sprice=135.0;
     a7.mprice=250.0;
     a7.lprice=310.0;

     a8.sl=8;
     strcpy(a8.item,"ESPRESSO");
     a8.sprice=115.0;
     a8.mprice=135.0;
     a8.lprice=160.0;

     a9.sl=9;
     strcpy(a9.item,"CAPPUCINO");
     a9.sprice=210.0;
     a9.mprice=330.0;
     a9.lprice=380.0;

     a10.sl=10;
     strcpy(a10.item,"SMOOTHIE");
     a10.sprice=150.0;
     a10.mprice=200.0;
     a10.lprice=240.0;



     printf("\t\t\t                ______________________________________________\n\n");
     printf("\t\t\t               |                 Nac Cafe                     |\n ");
     printf("\t\t\t               |______________________________________________|");
     printf("\n\n               ----------------------------------------------------------------------------------------------\n");


     printf("               | Sl NO |                      Item Name                            | Small | Medium | Large | \n     ");
     printf("          ----------------------------------------------------------------------------------------------\n");
     printf("               |   %d   |   %s                                                   | %.2f|  %.2f| %.2f|\n",a1.sl,a1.item,a1.sprice,a1.mprice,a1.lprice);
     printf("               ----------------------------------------------------------------------------------------------\n");
     printf("               |   %d   |   %s                                             | %.2f|  %.2f| %.2f|\n",a2.sl,a2.item,a2.sprice,a2.mprice,a2.lprice);
     printf("               ----------------------------------------------------------------------------------------------\n");
     printf("               |   %d   |   %s                                          | %.2f|  %.2f| %.2f|\n",a3.sl,a3.item,a3.sprice,a3.mprice,a3.lprice);
     printf("               ----------------------------------------------------------------------------------------------\n");
     printf("               |   %d   |   %s                                              | %.2f|  %.2f| %.2f|\n",a4.sl,a4.item,a4.sprice,a4.mprice,a4.lprice);
     printf("               ----------------------------------------------------------------------------------------------\n");
     printf("               |   %d   |   %s                                           | %.2f|  %.2f| %.2f|\n",a5.sl,a5.item,a5.sprice,a5.mprice,a5.lprice);
     printf("               ----------------------------------------------------------------------------------------------\n");
     printf("               |   %d   |   %s                                              | %.2f|  %.2f| %.2f|\n",a6.sl,a6.item,a6.sprice,a6.mprice,a6.lprice);
     printf("               ----------------------------------------------------------------------------------------------\n");
     printf("               |   %d   |   %s                                               | %.2f|  %.2f| %.2f|\n",a7.sl,a7.item,a7.sprice,a7.mprice,a7.lprice);
     printf("               ----------------------------------------------------------------------------------------------\n");
     printf("               |   %d   |   %s                                                | %.2f|  %.2f| %.2f|\n",a8.sl,a8.item,a8.sprice,a8.mprice,a8.lprice);
     printf("               ----------------------------------------------------------------------------------------------\n");
     printf("               |   %d   |   %s                                               | %.2f|  %.2f| %.2f|\n",a9.sl,a9.item,a9.sprice,a9.mprice,a9.lprice);
     printf("               ----------------------------------------------------------------------------------------------\n");
     printf("               |   %d   |  %s                                                 | %.2f|  %.2f| %.2f|\n",a10.sl,a10.item,a10.sprice,a10.mprice,a10.lprice);
     printf("               ----------------------------------------------------------------------------------------------\n");

               printf("\n                  1.Go Back");
               printf("\n                  2.Exit");
               printf("\n                  Enter A Number : ");


     scanf("%d",&num);

     switch(num)          // to exit or go back from menu
     {
     case 1:
       {
        system("cls");
        menubar();
        break;
       }
     case 2:
        {
            exit(1);
        }
     default:
        {
            while(num!=1 || num!=2)
            {
              system("cls");

     printf("\t\t\t                ______________________________________________\n\n");
     printf("\t\t\t               |                 Nac Cafe                     |\n ");
     printf("\t\t\t               |______________________________________________|");

    printf("\n                      Please Enter Any Number Between 1 and 2 : \n\n");
    printf("\n                                     1.Go Back");
    printf("\n                                     2.Exit");
    printf("\n                                     Enter A Number : ");
            scanf("%d",&num);
             switch(num)
             {
                 case 1:
       {
        system("cls");
        menubar();
        break;
       }
     case 2:
        {
            exit(1);
        }
             }

            }
        }
     }

}

void bill()
{

    struct list a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
    int sel,q,item,i;
    float sum,totalsum,price;
    sum=0;
    char size,name[50],iname[50];
     printf("\t\t\t                ______________________________________________\n\n");
     printf("\t\t\t               |                 Nac Cafe                     |\n ");
     printf("\t\t\t               |______________________________________________|");

    /*printf("\n\n\n                                                        CASH MEMO                       \n");

    printf("\n\n             ------------------------------------------------------------------------------------------------------\n");


     printf("             | Sl NO |          Item Name             |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|  Bill  |\n     ");
     printf("        ------------------------------------------------------------------------------------------------------\n");
     printf("              SL:  ");
     scanf("%d",&s);
     system("cls");//deletes output and update aftwerwards
     printf("\t\t\t                ______________________________________________\n\n");
     printf("\t\t\t               |                 Nac Cafe                     |\n ");
     printf("\t\t\t               |______________________________________________|");

    printf("\n\n\n                                                        CASH MEMO                       \n");

     printf("\n\n             ------------------------------------------------------------------------------------------------------\n");


     printf("             | Sl NO |          Item Name             |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|  Bill  |\n     ");
     printf("        ------------------------------------------------------------------------------------------------------\n");


    */
       printf("\n\n\n                                         Customer's Name : ");
       fflush(stdin);
       gets(name);

       printf("\n\n                                         Enter Number of Items : ");
       scanf(" %d",&item);
       system("cls");

     printf("\t\t\t                ______________________________________________\n\n");
     printf("\t\t\t               |                 Nac Cafe                     |\n ");
     printf("\t\t\t               |______________________________________________|");


          while(item<=0)
          {
              system("cls");
        printf("\t\t\t                ______________________________________________\n\n");
        printf("\t\t\t               |                 Nac Cafe                     |\n ");
        printf("\t\t\t               |______________________________________________|");

              printf("\n\n                                              Enter Valid Number\n");
              sleep(2);
              system("cls");
        printf("\t\t\t                ______________________________________________\n\n");
        printf("\t\t\t               |                 Nac Cafe                     |\n ");
        printf("\t\t\t               |______________________________________________|");

              printf("\n\n                                           Enter Number of Items : ");
              scanf(" %d",&item);
              system("cls");

          }

          if(item>0)
          {

            for(i=1;i<=item;i++) //one should choose 2 items if he want to take same item within different quantity
            {
               printf("\n\n\n                             1.Enter Sl for Order No %d: ",i);
               scanf("%d",&sel);
               while(sel<1 || sel>10)
               {
                   system("cls");
                          printf("\t\t\t                ______________________________________________\n\n");
                          printf("\t\t\t               |                 Nac Cafe                     |\n ");
                          printf("\t\t\t               |______________________________________________|");

                        printf("\n                                  Please Enter Valid SL for Order\n");
                         printf("\n\n\n                             1.Enter Sl for Order No %d: ",i);
                        scanf("%d",&sel);

               }
               printf("\n\n\n                             2.Enter s/m/l for small,medium & large for Order No %d: ",i);
               scanf(" %c",&size);

              while(size!='S' && size!='M' && size!='L' && size!='s' && size!='m' && size!='l')
               {
                          system("cls");
                          printf("\t\t\t                ______________________________________________\n\n");
                          printf("\t\t\t               |                 Nac Cafe                     |\n ");
                          printf("\t\t\t               |______________________________________________|");

               printf("\n\n                                         Please Enter Valid Keyword\n\n");
               printf("\n\n\n                             2.Enter s/m/l for small,medium & large for Order No %d: ",i);
               scanf(" %c",&size);


               }

               printf("\n\n\n                             3.Enter Quantity for Order No %d: ",i);
               scanf(" %d",&q);




               while(q<=0)
               {
                   printf("\n\n\n                               Invalid Quantity\n");
                   system("cls");
            printf("\t\t\t                ______________________________________________\n\n");
            printf("\t\t\t               |                 Nac Cafe                     |\n ");
            printf("\t\t\t               |______________________________________________|");

                printf("\n\n\n                             3.Enter Quantity for Order No %d: ",i);
               scanf(" %d",&q);

               }

            }

          }
          switch(sel)
          {
          case 1:
            {
                iname[50]="MOCHA";
                if(size=='s' || size== 's')
                {
                    item = 210.0;
                }
                else if(size=='m' || size=='M')
                {
                    item = 330.0;
                }
                else if(size=='l' || size=='L')
                {
                    item =380.0;
                }
                break;
            }
            case 2:
            {
                iname[50]="WHITE MOCHA";
                if(size=='s' || size== 's')
                {
                    item = 260.0;
                }
                else if(size=='m' || size=='M')
                {
                    item = 360.0;
                }
                else if(size=='l' || size=='L')
                {
                    item =400.0;
                }
                break;
            }
            case 3:
            {
                iname[50]="FLAVORED LATTE";
                if(size=='s' || size== 's')
                {
                    item = 210.0;
                }
                else if(size=='m' || size=='M')
                {
                    item = 330.0;
                }
                else if(size=='l' || size=='L')
                {
                    item =380.0;
                }
                break;
            }
            case 4:
            {
                iname[50]="CAFE LATTE";
                if(size=='s' || size== 's')
                {
                    item = 165.0;
                }
                else if(size=='m' || size=='M')
                {
                    item = 280.0;
                }
                else if(size=='l' || size=='L')
                {
                    item =330.0;
                }
                break;
            }
            case 5:
            {
                iname[50]="HOT CHOCOLATE";
                if(size=='s' || size== 's')
                {
                    item = 250.0;
                }
                else if(size=='m' || size=='M')
                {
                    item = 360.0;
                }
                else if(size=='l' || size=='L')
                {
                    item =400.0;
                }
                break;
            }
              case 6:
            {
                iname[50]="CHAI LATTE";
                if(size=='s' || size== 's')
                {
                    item = 200.0;
                }
                else if(size=='m' || size=='M')
                {
                    item = 330.0;
                }
                else if(size=='l' || size=='L')
                {
                    item =400.0;
                }
                break;
            }

            case 7:
            {
                iname[50]="AMERICANO";
                if(size=='s' || size== 's')
                {
                    item = 135.0;
                }
                else if(size=='m' || size=='M')
                {
                    item = 250.0;
                }
                else if(size=='l' || size=='L')
                {
                    item =310.0;
                }
                break;
            }
            case 8:
            {
                iname[50]="ESPRESSO";
                if(size=='s' || size== 's')
                {
                    item = 115;
                }
                else if(size=='m' || size=='M')
                {
                    item = 135.0;
                }
                else if(size=='l' || size=='L')
                {
                    item =160.0;
                }
                break;
            }
              case 9:
            {
                iname[50]="CAPPUCINO";
                if(size=='s' || size== 's')
                {
                    item = 210.0;
                }
                else if(size=='m' || size=='M')
                {
                    item = 330.0;
                }
                else if(size=='l' || size=='L')
                {
                    item =380.0;
                }
                break;
            }
             case 10:
            {
                iname[50]="SMOOTHIE";
                if(size=='s' || size== 's')
                {
                    item = 150.0;
                }
                else if(size=='m' || size=='M')
                {
                    item = 200.0;
                }
                else if(size=='l' || size=='L')
                {
                    item =240.0;
                }
                break;
            }
             default:
                printf("\n\n                             Provide Valid Valuen");

          }

}








