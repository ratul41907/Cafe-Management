#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<windows.h>
#include<dos.h>
int main()
{
    char name[10],pass[10];
    screen();

    welcome();
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


    printf("                                           \t\t\t\t\t\t User ID : ");
    scanf("%d",&uid);
    printf("\n");

    printf("                     \t\t\t\t\t Password : ");
    scanf(" %d",&pass);

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
