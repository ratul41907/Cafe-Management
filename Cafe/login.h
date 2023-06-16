//void menubar(void);
void welcome(char uname[10],int *pass) //welcome screen
{

    printf("\t\t\t                ______________________________________________\n\n");
    printf("\t\t\t               |                 Nac Cafe                     |\n ");
    printf("\t\t\t               |______________________________________________|");


    printf("\n\n                                           \t\t User ID : ");
    gets(uname );

    printf("\n");

    printf("                     \t\t\t\t\t Password : ");
    scanf(" %d",pass);

      if((strcmp(uname,"ratul419")==0) && (*pass==123))
    {
        printf("\n\n                                                         Logged in Successfully\n");
         sleep(1);
        system("cls");
        menubar();
    }
     else
     {
        while((strcmp(uname,"ratul419")!=0) || (*pass!=123))
      {
    printf("\t\t\t\t\t\tPlease Enter A Proper User Name or Password\n");
    sleep(2);
    system("cls");

    printf("\t\t\t                ______________________________________________\n\n");
    printf("\t\t\t               |                 Nac Cafe                     |\n ");
    printf("\t\t\t               |______________________________________________|");

    fflush(stdin);
    printf("\n\n                                           \t\t User ID : ");
    gets(uname);

    printf("\n");

    printf("                     \t\t\t\t\t Password : ");
    scanf(" %d",pass);

       if((strcmp(uname,"ratul419")==0) && (*pass==123))
    {
        printf("\n\n                                                         Logged in Successfully\n");
         sleep(1);
        system("cls");
        menubar();
    }

      }
     }
}
