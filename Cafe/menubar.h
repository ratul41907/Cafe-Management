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


              switch (n)
              {

        case 1:
            system("cls");
            menu();
            break;

        case 2:
            system("cls");
            bill();
            break;

        case 3:
            exit(1);
            break;

        default:
            printf("\n\n                            Please Enter a Valid Number\n");
            Sleep(1800);
            system("cls");
            menubar();
            break;

    }


}


