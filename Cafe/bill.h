
struct sold
{
    float price;
};



void bill()
{
    struct sold s,m,l;

    int item,i,sel,q;
    float totalbill=0,sum = 0;
    char size,name[50],cname[50],yes;

    printf("\t\t\t                ______________________________________________\n\n");
    printf("\t\t\t               |                 Nac Cafe                     |\n ");
    printf("\t\t\t               |______________________________________________|\n");

     printf("\n\n\n                                         Customer's Name : ");
    fflush(stdin);
    gets(cname);

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


        switch (sel)
        {

            case 1:
                  s.price = 210.0;
                  m.price = 330.0;
                  l.price = 380.0;

                strcpy(name,"MOCHA");
                printf("\n\n             ------------------------------------------------------------------------------------------\n");
                printf("             | Sl |      Item Name        |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|      Bill      |\n");
                printf("             ------------------------------------------------------------------------------------------\n");
                if (size == 'S' || size == 's')
                    {
                    totalbill=q * s.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |       %s            |    %c     |           |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                    }
                 else if (size == 'M' || size == 'm')
                {
                    totalbill=q * m.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |       %s            |           |    %c     |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,m.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                 else if (size == 'L' || size == 'l')
                {
                    totalbill=q * l.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |       %s            |           |           |     %c   |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,l.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                break;

           case 2:
                  s.price = 260.0;
                  m.price = 360.0;
                  l.price = 400.0;


                strcpy(name,"WHITE MOCHA");
                printf("\n\n             ------------------------------------------------------------------------------------------\n");
                printf("             | Sl |      Item Name        |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|      Bill      |\n");
                printf("             ------------------------------------------------------------------------------------------\n");
                if (size == 'S' || size == 's')
                    {
                    totalbill=q * s.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |    %c     |           |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                    }
                 else if (size == 'M' || size == 'm')
                {
                    totalbill=q * m.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |    %c     |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,m.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                 else if (size == 'L' || size == 'l')
                {
                    totalbill=q * l.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |           |     %c   |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,l.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                break;

           case 3:
                  s.price = 210.0;
                  m.price = 330.0;
                  l.price = 380.0;


                strcpy(name,"FLAVORED LATTE");
                printf("\n\n             ------------------------------------------------------------------------------------------\n");
                printf("             | Sl |      Item Name        |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|      Bill      |\n");
                printf("             ------------------------------------------------------------------------------------------\n");
                if (size == 'S' || size == 's')
                    {
                    totalbill=q * s.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |    %c     |           |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                    }
                 else if (size == 'M' || size == 'm')
                {
                    totalbill=q * m.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |    %c     |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,m.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                 else if (size == 'L' || size == 'l')
                {
                    totalbill=q * l.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |           |     %c   |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,l.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                break;

           case 4:
                  s.price = 165.0;
                  m.price = 280.0;
                  l.price = 330.0;


                strcpy(name,"CAFE LATTE");
                printf("\n\n             ------------------------------------------------------------------------------------------\n");
                printf("             | Sl |      Item Name        |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|      Bill      |\n");
                printf("             ------------------------------------------------------------------------------------------\n");
                if (size == 'S' || size == 's')
                    {
                    totalbill=q * s.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |    %c     |           |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                    }
                 else if (size == 'M' || size == 'm')
                {
                    totalbill=q * m.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |    %c     |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,m.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                 else if (size == 'L' || size == 'l')
                {
                    totalbill=q * l.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |           |     %c   |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,l.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                break;

           case 5:
                  s.price = 260.0;
                  m.price = 360.0;
                  l.price = 400.0;


                strcpy(name,"HOT CHOCOLATE");
                printf("\n\n             ------------------------------------------------------------------------------------------\n");
                printf("             | Sl |      Item Name        |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|      Bill      |\n");
                printf("             ------------------------------------------------------------------------------------------\n");
                if (size == 'S' || size == 's')
                    {
                    totalbill=q * s.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |    %c     |           |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                    }
                 else if (size == 'M' || size == 'm')
                {
                    totalbill=q * m.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |    %c     |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,m.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                 else if (size == 'L' || size == 'l')
                {
                    totalbill=q * l.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |           |     %c   |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,l.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                break;

           case 6:
                  s.price = 200.0;
                  m.price = 330.0;
                  l.price = 400.0;


                strcpy(name,"CHAI LATTE");
                printf("\n\n             ------------------------------------------------------------------------------------------\n");
                printf("             | Sl |      Item Name        |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|      Bill      |\n");
                printf("             ------------------------------------------------------------------------------------------\n");
                if (size == 'S' || size == 's')
                    {
                    totalbill=q * s.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |    %c     |           |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                    }
                 else if (size == 'M' || size == 'm')
                {
                    totalbill=q * m.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |    %c     |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,m.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                 else if (size == 'L' || size == 'l')
                {
                    totalbill=q * l.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |           |     %c   |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,l.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                break;

           case 7:
                  s.price = 135.0;
                  m.price = 250.0;
                  l.price = 310.0;


                strcpy(name,"AMERICANO");
                printf("\n\n             ------------------------------------------------------------------------------------------\n");
                printf("             | Sl |      Item Name        |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|      Bill      |\n");
                printf("             ------------------------------------------------------------------------------------------\n");
                if (size == 'S' || size == 's')
                    {
                    totalbill=q * s.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |    %c     |           |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                    }
                 else if (size == 'M' || size == 'm')
                {
                    totalbill=q * m.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |    %c     |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,m.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                 else if (size == 'L' || size == 'l')
                {
                    totalbill=q * l.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |           |     %c   |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,l.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                break;

           case 8:
                  s.price = 115.0;
                  m.price = 135.0;
                  l.price = 160.0;


                strcpy(name,"ESPRESSO");
                printf("\n\n             ------------------------------------------------------------------------------------------\n");
                printf("             | Sl |      Item Name        |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|      Bill      |\n");
                printf("             ------------------------------------------------------------------------------------------\n");
                if (size == 'S' || size == 's')
                    {
                    totalbill=q * s.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |    %c     |           |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                    }
                 else if (size == 'M' || size == 'm')
                {
                    totalbill=q * m.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |    %c     |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,m.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                 else if (size == 'L' || size == 'l')
                {
                    totalbill=q * l.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |           |     %c   |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,l.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                break;

           case 9:
                  s.price = 210.0;
                  m.price = 330.0;
                  l.price = 380.0;


                strcpy(name,"CAPUCCINO");
                printf("\n\n             ------------------------------------------------------------------------------------------\n");
                printf("             | Sl |      Item Name        |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|      Bill      |\n");
                printf("             ------------------------------------------------------------------------------------------\n");
                if (size == 'S' || size == 's')
                    {
                    totalbill=q * s.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |    %c     |           |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                    }
                 else if (size == 'M' || size == 'm')
                {
                    totalbill=q * m.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |    %c     |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,m.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                 else if (size == 'L' || size == 'l')
                {
                    totalbill=q * l.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |           |     %c   |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,l.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                break;

           case 10:
                  s.price = 150.0;
                  m.price = 200.0;
                  l.price = 240.0;


                strcpy(name,"SMOOTHIE");
                printf("\n\n             ------------------------------------------------------------------------------------------\n");
                printf("             | Sl |      Item Name        |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|      Bill      |\n");
                printf("             ------------------------------------------------------------------------------------------\n");
                if (size == 'S' || size == 's')
                    {
                    totalbill=q * s.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |    %c     |           |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,s.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                    }
                 else if (size == 'M' || size == 'm')
                {
                    totalbill=q * m.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |    %c     |          |   %d    |%dX%.2f =%.2f|\n", sel,name,size,q,q,m.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                 else if (size == 'L' || size == 'l')
                {
                    totalbill=q * l.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |  %s            |           |           |     %c   |   %d    |%dX%.2f =%.2f |\n", sel,name,size,q,q,l.price,totalbill);
                    sum = sum + bill;
                    totalbill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    fflush(stdout);
                }
                break;

}
}

                  printf("\n\n\t\tDo You Wanna Have Another Cup Of A Coffee :-),Enter y for yes,n for no : ");
                  scanf(" %c",&yes);
                  fflush(stdin);

              if(yes=='y' || yes=='Y')
              {
                  bill();
              }

                  printf("\n\n\n Grand Total : %.2f\n",sum);

}

