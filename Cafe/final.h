void finale(float money)
{
    int i,code;
    char num[12];
    char acc[20];
    printf("\t\t\t                ______________________________________________\n\n");
    printf("\t\t\t               |                 Nac Cafe                     |\n ");
    printf("\t\t\t               |______________________________________________|\n");

    printf("\n\n                           Enter How Do You Want To Pay The Bill");
    printf("\n\n                              1.Cash");
    printf("\n                              2.Online Money Transfer");
    printf("\n                              3.Through Debit or Credit Card");
    printf("\n                              Enter here : ");
    scanf(" %d",&i);
    if(i==1)
    {
        system("cls");
            printf("\t\t\t                ______________________________________________\n\n");
            printf("\t\t\t               |                 Nac Cafe                     |\n ");
            printf("\t\t\t               |______________________________________________|\n");

        printf("\n\n                                      !PAID!");
         printf("\n                                     Thanks For Choosing Nac Cafe ^__^");
                exit(1);
    }
    else if(i==2)
    {
            system("cls");
            printf("\t\t\t                ______________________________________________\n\n");
            printf("\t\t\t               |                 Nac Cafe                     |\n ");
            printf("\t\t\t               |______________________________________________|\n");

           printf("\nEnter Phone Number : ");
           scanf(" %s",&num);
           printf("Enter Pass : ");
           scanf(" %d",&code);
                       system("cls");
            printf("\t\t\t                ______________________________________________\n\n");
            printf("\t\t\t               |                 Nac Cafe                     |\n ");
            printf("\t\t\t               |______________________________________________|\n");

            printf("\n\n                              Money Has Been Transfered\n");
        printf("\n\n                                      !PAID!");
         printf("\n                                     Thanks For Choosing Nac Cafe ^__^");

            exit(1);
    }
    else if(i==3)
    {
         system("cls");
            printf("\t\t\t                ______________________________________________\n\n");
            printf("\t\t\t               |                 Nac Cafe                     |\n ");
            printf("\t\t\t               |______________________________________________|\n");

           printf("\nEnter Bank Account No : ");
           scanf(" %s",&acc);
           printf("Enter Pass : ");
           scanf(" %d",&code);
                       system("cls");
            printf("\t\t\t                ______________________________________________\n\n");
            printf("\t\t\t               |                 Nac Cafe                     |\n ");
            printf("\t\t\t               |______________________________________________|\n");

            printf("\n\n                                  Money Has Been Transfered\n");
        printf("\n\n                                      !PAID!");
         printf("\n                                     Thanks For Choosing Nac Cafe ^__^");

            exit(1);
    }
    else
    {
        printf("\n\nInvalid Number");
        Sleep(1800);
        exit(1);
    }

}
