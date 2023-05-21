#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<windows.h>
#include<dos.h>
int main()
{

    screen();

    welcome();
    menu();
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
void welcome(int uid,int pass,int i) //welcome screen
{

    printf("\t\t\t                ______________________________________________\n\n");
    printf("\t\t\t               |                 Nac Cafe                     |\n ");
    printf("\t\t\t               |______________________________________________|");


    printf("\n\n                                           \t\t User ID : ");
    scanf("%d",&uid);
    printf("\n");

    printf("                     \t\t\t\t\t Password : ");
    scanf(" %d",&pass);

      if(uid==2311539 && pass==123)
    {
        printf("\n\n                                                         Logged in Successfully\n");
         sleep(1);
        system("cls");
        menu();
    }
     else
     {
        while(uid!=231539 && pass!=123)
      {
    printf("\t\t\t\t\t\tPlease Enter A Proper User Name or Password\n");
    sleep(2);
    system("cls");

    printf("\t\t\t                ______________________________________________\n\n");
    printf("\t\t\t               |                 Nac Cafe                     |\n ");
    printf("\t\t\t               |______________________________________________|");

    printf("                                            \t\t\t\t\t\t User ID : ");
    scanf("%d",&uid);
    printf("\n");

    printf("                     \t\t\t\t\t Password : ");
    scanf(" %d",&pass);

      }
     }
}
void menu()
{
      system("cls"); //used system cls as it showed output twice,deleted 1st output

    printf("\t\t\t                ______________________________________________\n\n");
    printf("\t\t\t               |                 Nac Cafe                     |\n ");
    printf("\t\t\t               |______________________________________________|");

     struct list
     {
       int sl;
       char item[20];
       float sprice;
       float mprice;
       float lprice;
     };
     struct list a1;





     a1.sl=01;
     strcpy(a1.item,"Mocha");
     a1.sprice=210.0;
     a1.mprice=330.0;
     a1.lprice=380.0;
     printf("\n\n               ----------------------------------------------------------------------------------------------\n");


     printf("               | Sl NO |                      Item Name                            | Small | Medium | Large | \n     ");
     printf("          ----------------------------------------------------------------------------------------------\n");
     printf("               |   %d   |   %s                                                   | %.2f|  %.2f| %.2f|\n",a1.sl,a1.item,a1.sprice,a1.mprice,a1.lprice);

}







