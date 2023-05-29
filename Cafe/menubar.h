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
       printf("\n\n                            Plesae Enter Valid Number\n");

                       system("cls");
       printf("\t\t\t                ______________________________________________\n\n");
       printf("\t\t\t               |                 Nac Cafe                     |\n ");
       printf("\t\t\t               |______________________________________________|");
       printf("\n\n                                                  Enter A valid Number\n\n");
     printf("\n\n\n\n                 Please Enter A Number Given Below\n");

        printf("\n                       1.Menu");
        printf("\n                       2.Calculate Bill");
        printf("\n                       3.Exit");
        printf("\n                    Enter Here : ");
            scanf("%d",&n);


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
                }
                }



}


