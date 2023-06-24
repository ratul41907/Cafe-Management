
struct sold
{
    float price;
};



void bill(FILE *file)
{
     struct sold s[3];

    int item,i,sel,q;
    float bill=0,sum = 0;
    char size,name[50],cname[50],yes,code[10];

    printf("\t\t\t                ______________________________________________\n\n");
    printf("\t\t\t               |                 Nac Cafe                     |\n ");
    printf("\t\t\t               |______________________________________________|\n");

     printf("\n\n\n                                         Customer's Name : ");
    fflush(stdin);
    gets(cname);

    printf("\n\n                                         Enter Voucher If You Have Any : ");
    scanf("%s", &code);
    if((strcmp("cgpa",code))==0)
    {
        printf("\n\n                                        VOUCHER Activated!");
    }
    else
        printf("\n\n                                             SORRY,Voucher Expired");

    printf("\n\n                                         Enter Number of Items : ");
    scanf("%d", &item);
    fflush(stdin);

    while (item <= 0)
        {
        printf("\n\n                                              Enter Valid Number\n");
        printf("\n\n                                         Enter Number of Items : ");
        scanf("%d", &item);
        }
           system("cls");

     printf("\t\t\t                ______________________________________________\n\n");
     printf("\t\t\t               |                 Nac Cafe                     |\n ");
     printf("\t\t\t               |______________________________________________|");

    for (i = 1; i <= item; i++)
        {

        printf("\n\n\n                             1. Enter Sl for Order No %d: ",i);
        scanf("%d", &sel);

        while (sel < 1 || sel > 10)
            {
            printf("\n                                  Please Enter Valid SL for Order\n");
            printf("\n\n\n                             1. Enter Sl for Order No %d: ",i);
            scanf("%d", &sel);
            }

        printf("\n\n\n                             2. Enter s/m/l for small, medium, or large for Order No %d: ",i);
        scanf(" %c", &size);

        while (size != 'S' && size != 'M' && size != 'L' && size != 's' && size != 'm' && size != 'l')
            {
            printf("\n\n                                         Please Enter Valid Keyword\n\n");
            printf("\n\n\n                             2. Enter s/m/l for small, medium, or large for Order No %d: ", i);
            scanf(" %c", &size);
           }

        printf("\n\n\n                             3. Enter Quantity for Order No %d: ",i);
        scanf(" %d", &q);

        while (q <= 0)
            {
            printf("\n\n                               Invalid Quantity\n");
            printf("\n\n\n                             3. Enter Quantity for Order No %d: ",i);
            scanf(" %d", &q);
           }

          file = fopen("cse115.txt","a");
          fprintf(file,"\n");
          fputs(cname,file);
        switch (sel)
        {

            case 1:
                  s[0].price = 210.0;
                  s[1].price = 330.0;
                  s[2].price = 380.0;

                strcpy(name,"MOCHA");

                fprintf(file,"                        ");
                fprintf(file,name);
                fprintf(file,"                                ");
                fprintf(file,"%d",q);
                printf("\n\n             ------------------------------------------------------------------------------------------\n");
                printf("             | Sl |      Item Name        |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|      Bill      |\n");
                printf("             ------------------------------------------------------------------------------------------\n");
                if (size == 'S' || size == 's')
                    {
                    bill=q * s[0].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |       %s            |    %c     |           |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[0].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);

                    }
                 else if (size == 'M' || size == 'm')
                {
                    bill=q *s[1].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |       %s            |           |    %c     |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[1].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                 else if (size == 'L' || size == 'l')
                {
                    bill=q *s[2].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |       %s            |           |           |     %c   |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[2].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }

                break;

           case 2:
                  s[0].price = 260.0;
                  s[1].price = 360.0;
                  s[2].price = 400.0;


                strcpy(name,"WHITE MOCHA");
                fprintf(file,"                        ");
                fprintf(file,name);
                fprintf(file,"                            ");
                fprintf(file,"%d",q);

                printf("\n\n             ------------------------------------------------------------------------------------------\n");
                printf("             | Sl |      Item Name        |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|      Bill      |\n");
                printf("             ------------------------------------------------------------------------------------------\n");
                if (size == 'S' || size == 's')
                    {
                    bill=q * s[0].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |    %c     |           |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[0].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                    }
                 else if (size == 'M' || size == 'm')
                {
                    bill=s[1].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |    %c     |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[1].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                 else if (size == 'L' || size == 'l')
                {
                    bill=s[2].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |           |     %c   |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[2].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                break;

           case 3:
                  s[0].price = 210.0;
                  s[1].price = 330.0;
                  s[2].price = 380.0;


                strcpy(name,"FLAVORED LATTE");

                fprintf(file,"                        ");
                fprintf(file,name);
                fprintf(file,"                         ");
                fprintf(file,"%d",q);
                printf("\n\n             ------------------------------------------------------------------------------------------\n");
                printf("             | Sl |      Item Name        |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|      Bill      |\n");
                printf("             ------------------------------------------------------------------------------------------\n");
                if (size == 'S' || size == 's')
                    {

                    bill=q * s[0].price;

                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |    %c     |           |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[0].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                    }
                 else if (size == 'M' || size == 'm')
                {
                    bill=q * s[1].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);

                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |    %c     |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[1].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                 else if (size == 'L' || size == 'l')
                {
                    bill=q * s[2].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);

                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |           |     %c   |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[2].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                break;

           case 4:
                  s[0].price = 165.0;
                  s[1].price = 280.0;
                  s[2].price = 330.0;


                strcpy(name,"CAFE LATTE");
                fprintf(file,"                        ");
                fprintf(file,name);
                fprintf(file,"                             ");
                fprintf(file,"%d",q);

                printf("\n\n             ------------------------------------------------------------------------------------------\n");
                printf("             | Sl |      Item Name        |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|      Bill      |\n");
                printf("             ------------------------------------------------------------------------------------------\n");
                if (size == 'S' || size == 's')
                    {
                    bill=q * s[0].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);

                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |    %c     |           |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[0].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                    }
                 else if (size == 'M' || size == 'm')
                {
                    bill=q * s[1].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);

                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |    %c     |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[1].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                 else if (size == 'L' || size == 'l')
                {
                    bill=q * s[2].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);

                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |           |     %c   |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[2].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                break;

           case 5:
                  s[0].price = 260.0;
                  s[1].price = 360.0;
                  s[2].price = 400.0;


                strcpy(name,"HOT CHOCOLATE");
                fprintf(file,"                        ");
                fprintf(file,name);
                fprintf(file,"                          ");
                fprintf(file,"%d",q);

                printf("\n\n             ------------------------------------------------------------------------------------------\n");
                printf("             | Sl |      Item Name        |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|      Bill      |\n");
                printf("             ------------------------------------------------------------------------------------------\n");
                if (size == 'S' || size == 's')
                    {
                    bill=q * s[0].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);

                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s         |    %c     |           |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[0].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                    }
                 else if (size == 'M' || size == 'm')
                {
                    bill=q * s[1].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);

                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s         |           |    %c     |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[1].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                 else if (size == 'L' || size == 'l')
                {
                    bill=q * s[2].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);

                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s         |           |           |     %c   |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[2].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                break;

           case 6:
                  s[0].price = 200.0;
                  s[1].price = 330.0;
                  s[2].price = 400.0;


                strcpy(name,"CHAI LATTE");
                 fprintf(file,"                        ");
                fprintf(file,name);
                fprintf(file,"                             ");
                fprintf(file,"%d",q);

                printf("\n\n             ------------------------------------------------------------------------------------------\n");
                printf("             | Sl |      Item Name        |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|      Bill      |\n");
                printf("             ------------------------------------------------------------------------------------------\n");
                if (size == 'S' || size == 's')
                    {
                    bill=q * s[0].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);

                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |    %c     |           |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[0].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                    }
                 else if (size == 'M' || size == 'm')
                {
                    bill=q * s[1].price;

                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |    %c     |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[1].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                 else if (size == 'L' || size == 'l')
                {
                    bill=q * s[2].price;

                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |           |     %c   |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[2].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                break;

           case 7:
                  s[0].price = 135.0;
                  s[1].price = 250.0;
                  s[2].price = 310.0;


                strcpy(name,"AMERICANO");
                fprintf(file,"                        ");
                fprintf(file,name);
                fprintf(file,"                              ");
                fprintf(file,"%d",q);

                printf("\n\n             ------------------------------------------------------------------------------------------\n");
                printf("             | Sl |      Item Name        |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|      Bill      |\n");
                printf("             ------------------------------------------------------------------------------------------\n");
                if (size == 'S' || size == 's')
                    {
                    bill=q * s[0].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);

                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |    %c     |           |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[0].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                    }
                 else if (size == 'M' || size == 'm')
                {
                    bill=q * s[1].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);

                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |    %c     |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[1].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                 else if (size == 'L' || size == 'l')
                {
                    bill=q * s[2].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);

                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |           |     %c   |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[2].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                break;

           case 8:
                  s[0].price = 115.0;
                  s[1].price = 135.0;
                  s[2].price = 160.0;


                strcpy(name,"ESPRESSO");
                fprintf(file,"                        ");
                fprintf(file,name);
                fprintf(file,"                               ");
                fprintf(file,"%d",q);

                printf("\n\n             ------------------------------------------------------------------------------------------\n");
                printf("             | Sl |      Item Name        |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|      Bill      |\n");
                printf("             ------------------------------------------------------------------------------------------\n");
                if (size == 'S' || size == 's')
                    {
                    bill=q * s[0].price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |    %c     |           |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[0].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                    }
                 else if (size == 'M' || size == 'm')
                {
                    bill=q * s[1].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);

                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |    %c     |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[1].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                 else if (size == 'L' || size == 'l')
                {
                    bill=q * s[2].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);

                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |           |     %c   |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[2].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                break;

           case 9:
                  s[0].price = 210.0;
                  s[1].price = 330.0;
                  s[2].price = 380.0;


                strcpy(name,"CAPUCCINO");
                fprintf(file,"                        ");
                fprintf(file,name);
                fprintf(file,"                              ");
                fprintf(file,"%d",q);

                printf("\n\n             ------------------------------------------------------------------------------------------\n");
                printf("             | Sl |      Item Name        |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|      Bill      |\n");
                printf("             ------------------------------------------------------------------------------------------\n");
                if (size == 'S' || size == 's')
                    {
                    bill=q * s[0].price;

                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |    %c     |           |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[0].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                    }
                 else if (size == 'M' || size == 'm')
                {
                    bill=q * s[1].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);

                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |    %c     |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[1].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                 else if (size == 'L' || size == 'l')
                {
                    bill=q * s[2].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);

                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |           |     %c   |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[2].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                break;

           case 10:
                  s[0].price = 150.0;
                  s[1].price = 200.0;
                  s[2].price = 240.0;


                strcpy(name,"SMOOTHIE");
                fprintf(file,"                        ");
                fprintf(file,name);
                fprintf(file,"                               ");
                fprintf(file,"%d",q);

                printf("\n\n             ------------------------------------------------------------------------------------------\n");
                printf("             | Sl |      Item Name        |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|      Bill      |\n");
                printf("             ------------------------------------------------------------------------------------------\n");
                if (size == 'S' || size == 's')
                    {
                    bill=q * s[0].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);

                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |    %c     |           |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[0].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                    }
                 else if (size == 'M' || size == 'm')
                {
                    bill=q * s[1].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);

                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |    %c     |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s[1].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                 else if (size == 'L' || size == 'l')
                {
                    bill=q * s[2].price;
                    fprintf(file,"                              %c",size);
                    fprintf(file,"            %.2f",bill);

                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |           |     %c   |   %d    |%dX%.2f =%.2f |\n", sel,name,size,q,q,s[2].price,bill);
                    sum = sum + bill;
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                break;
           default:
            {
                printf("\n\t\t\t\t\tEnter Valid Keyword");
                exit(1);
            }
    fclose(file);
}

}

                  printf("\n\n\t\tDo Wanna Buy Some More Staffs? :-),Enter y for yes,n for no : ");
                  scanf(" %c",&yes);
                  fflush(stdin);


         if(yes=='y' || yes=='Y')
         {
                system("cls");
                memo();



         }




         else if(yes=='n' || yes=='N')
         {
             exit(1);
         }





}

