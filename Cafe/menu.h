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
     struct list a1 ={01,"MOCHA",210,330,380};
     struct list a2,a3,a4,a5,a6,a7,a8,a9,a10;

    // struct list a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;





    /* a1.sl=01;
     strcpy(a1.item,"MOCHA");
     a1.sprice=210.0;
     a1.mprice=330.0;
     a1.lprice=380.0;
*/
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
       //bill(a1.sl,a1.item,a1.sprice,a1.mprice,a1.lprice);
}
