
struct sold
{
    float price;
};



void bill() {
    struct sold s, m, l;
    s.price = 210.0;
    m.price = 330.0;
    l.price = 380.0;

    int item, i, sel, q;
    float bill=0,sum = 0;
    char size;

    printf("\t\t\t                ______________________________________________\n\n");
    printf("\t\t\t               |                 Nac Cafe                     |\n ");
    printf("\t\t\t               |______________________________________________|\n");

    printf("\n\n                                         Enter Number of Items : ");
    scanf("%d", &item);
    fflush(stdin);

    while (item <= 0) {
        printf("\n\n                                              Enter Valid Number\n");
        printf("\n\n                                         Enter Number of Items : ");
        scanf("%d", &item);
    }
           system("cls");

     printf("\t\t\t                ______________________________________________\n\n");
     printf("\t\t\t               |                 Nac Cafe                     |\n ");
     printf("\t\t\t               |______________________________________________|");

    for (i = 1; i <= item; i++) {
        printf("\n\n\n                             1. Enter Sl for Order No %d: ", i);
        scanf("%d", &sel);

        while (sel < 1 || sel > 10) {
            printf("\n                                  Please Enter Valid SL for Order\n");
            printf("\n\n\n                             1. Enter Sl for Order No %d: ", i);
            scanf("%d", &sel);
        }

        printf("\n\n\n                             2. Enter s/m/l for small, medium, or large for Order No %d: ", i);
        scanf(" %c", &size);

        while (size != 'S' && size != 'M' && size != 'L' && size != 's' && size != 'm' && size != 'l') {
            printf("\n\n                                         Please Enter Valid Keyword\n\n");
            printf("\n\n\n                             2. Enter s/m/l for small, medium, or large for Order No %d: ", i);
            scanf(" %c", &size);
        }

        printf("\n\n\n                             3. Enter Quantity for Order No %d: ", i);
        scanf(" %d", &q);

        while (q <= 0) {
            printf("\n\n                               Invalid Quantity\n");
            printf("\n\n\n                             3. Enter Quantity for Order No %d: ", i);
            scanf(" %d", &q);
        }


        switch (sel) {

            case 1:


                printf("\n\n             ------------------------------------------------------------------------------------------\n");
                printf("             | Sl |      Item Name        |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|      Bill      |\n");
                printf("             ------------------------------------------------------------------------------------------\n");
                if (size == 'S' || size == 's')
                    {
                    bill=q*s.price;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |       MOCHA           |    %c     |           |          |   %d   |%dX%.2f =%.2f  |\n", sel, size, q, q, s.price,bill);
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------\n");
                    }
                 else if (size == 'M' || size == 'm')
                {
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |       MOCHA           |           |    %c     |          |   %d   |%dX%.2f =%.2f  |\n", sel, size, q, q, m.price, q * m.price);
                    printf("             ------------------------------------------------------------------------------------------\n");
                }
                 else if (size == 'L' || size == 'l')
                {
                    printf("             ------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |       MOCHA           |           |           |     %c   |   %d   |%dX%.2f =%.2f  |\n", sel, size, q, q, l.price, q * l.price);
                    printf("             ------------------------------------------------------------------------------------------\n");
                }

}
}

}

