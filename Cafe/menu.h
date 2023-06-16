//void menubar(void);
void menu()
{

    int num;
struct list
     {
       int sl;
       char item[20];
       float sprice;
       float mprice;
       float lprice;
     };
     struct list a1 = {01,"MOCHA",210.0,330.0,380.0};
     struct list a2 = {02,"WHITE MOCHA",260.0,360.0,400.0};
     struct list a3 = {03,"FLAVORED LATTE",210.0,330.0,380.0};
     struct list a4 = {04,"CAFE LATTE",165.0,280.0,330.0};
     struct list a5 = {05,"HOT CHOCOLATE",250.0,360.0,400.0};
     struct list a6 = {06,"CHAI LATTE",200.0,330.0,400.0};
     struct list a7 = {07,"AMERICANO",135.0,250.0,310.0};
     struct list a8 = {8,"ESPRESSO",115.0,135.0,160.0};
     struct list a9 = {9,"CAPPUCINO",210.0,330.0,380.0};
     struct list a10 = {10,"SMOOTHIE",150.0,200.0,240.0};



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
     printf("               |   %d  |   %s                                                | %.2f|  %.2f| %.2f|\n",a10.sl,a10.item,a10.sprice,a10.mprice,a10.lprice);
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
