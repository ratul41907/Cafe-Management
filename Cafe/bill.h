void bill()
{

    struct sold
    {
      float price;
    };
    struct sold s,m,l;
    s.price=210.0;
    m.price=330.0;
    l.price=380;
    int sel,q,item,i;
    float bill=0,sum,totalsum,price,mul;
    sum=0;
    char size,name[50],iname[50];
     printf("\t\t\t                ______________________________________________\n\n");
     printf("\t\t\t               |                 Nac Cafe                     |\n ");
     printf("\t\t\t               |______________________________________________|");

    /*printf("\n\n\n                                                        CASH MEMO                       \n");

    printf("\n\n             ------------------------------------------------------------------------------------------------------\n");


     printf("             | Sl NO |          Item Name             |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|  Bill  |\n     ");
     printf("        ------------------------------------------------------------------------------------------------------\n");
     printf("              SL:  ");
     scanf("%d",&s);
     system("cls");//deletes output and update aftwerwards
     printf("\t\t\t                ______________________________________________\n\n");
     printf("\t\t\t               |                 Nac Cafe                     |\n ");
     printf("\t\t\t               |______________________________________________|");

    printf("\n\n\n                                                        CASH MEMO                       \n");

     printf("\n\n             ------------------------------------------------------------------------------------------------------\n");


     printf("             | Sl NO |          Item Name             |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|  Bill  |\n     ");
     printf("        ------------------------------------------------------------------------------------------------------\n");


    */
       printf("\n\n\n                                         Customer's Name : ");
       fflush(stdin);
       gets(name);

       printf("\n\n                                         Enter Number of Items : ");
       scanf(" %d",&item);
       system("cls");

     printf("\t\t\t                ______________________________________________\n\n");
     printf("\t\t\t               |                 Nac Cafe                     |\n ");
     printf("\t\t\t               |______________________________________________|");


          while(item<=0)
          {
              system("cls");
        printf("\t\t\t                ______________________________________________\n\n");
        printf("\t\t\t               |                 Nac Cafe                     |\n ");
        printf("\t\t\t               |______________________________________________|");

              printf("\n\n                                              Enter Valid Number\n");
              sleep(2);
              system("cls");
        printf("\t\t\t                ______________________________________________\n\n");
        printf("\t\t\t               |                 Nac Cafe                     |\n ");
        printf("\t\t\t               |______________________________________________|");

              printf("\n\n                                           Enter Number of Items : ");
              scanf(" %d",&item);
              system("cls");

          }

          if(item>0)
          {

             //one should choose 2 items if he want to take same item within different quantity
           for(i=1;i<=item;i++)

       {


               printf("\n\n\n                             1.Enter Sl for Order No %d: ",i);
               scanf("%d",&sel);
               while(sel<1 || sel>10)
               {
                   system("cls");
                          printf("\t\t\t                ______________________________________________\n\n");
                          printf("\t\t\t               |                 Nac Cafe                     |\n ");
                          printf("\t\t\t               |______________________________________________|");

                        printf("\n                                  Please Enter Valid SL for Order\n");
                         printf("\n\n\n                             1.Enter Sl for Order No %d: ",i);
                        scanf("%d",&sel);

               }
               printf("\n\n\n                             2.Enter s/m/l for small,medium & large for Order No %d: ",i);
               scanf(" %c",&size);

              while(size!='S' && size!='M' && size!='L' && size!='s' && size!='m' && size!='l')
               {
                          system("cls");
                          printf("\t\t\t                ______________________________________________\n\n");
                          printf("\t\t\t               |                 Nac Cafe                     |\n ");
                          printf("\t\t\t               |______________________________________________|");

               printf("\n\n                                         Please Enter Valid Keyword\n\n");
               printf("\n\n\n                             2.Enter s/m/l for small,medium & large for Order No %d: ",i);
               scanf(" %c",&size);


               }

               printf("\n\n\n                             3.Enter Quantity for Order No %d: ",i);
               scanf(" %d",&q);




               while(q<=0)
               {
                   printf("\n\n\n                               Invalid Quantity\n");
                   system("cls");
            printf("\t\t\t                ______________________________________________\n\n");
            printf("\t\t\t               |                 Nac Cafe                     |\n ");
            printf("\t\t\t               |______________________________________________|");

                printf("\n\n\n                             3.Enter Quantity for Order No %d: ",i);
               scanf(" %d",&q);

               }



          }
          }
          switch(sel)
          {
           for(int i=1;i<=item;i++)
                {
          case 1:
            {



                 printf("\n\n             ------------------------------------------------------------------------------------------------------\n");
                printf("             | Sl |      Item Name        |Small(s/S)|Medium(m/M)|Large(l/L)|Quantity|      Bill      |\n");
                printf("             ------------------------------------------------------------------------------------------------------\n");
                if (size == 'S' || size == 's')
                    {
                    bill=q*s.price;
                    printf("             ------------------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |       MOCHA           |    %c     |           |          |   %d   |%dX%.2f =%.2f  |\n", sel, size, q, q, s.price,bill);
                    bill=0;
                    printf("             ------------------------------------------------------------------------------------------------------\n");
                }
                else if (size == 'M' || size == 'm')
                {
                    printf("             ------------------------------------------------------------------------------------------------------\n");
                    printf("             |%d  |       MOCHA           |           |    %c     |          |   %d   |%dX%.2f =%.2f  |\n", sel, size, q, q, m.price, q * m.price);
                    printf("             ------------------------------------------------------------------------------------------------------\n");
                }
                break;
                }



            case 2:
            {
                iname[50]="WHITE MOCHA";
                if(size=='s' || size== 's')
                {
                    item = 260.0;
                }
                else if(size=='m' || size=='M')
                {
                    item = 360.0;
                }
                else if(size=='l' || size=='L')
                {
                    item =400.0;
                }
                break;
            }
            case 3:
            {
                iname[50]="FLAVORED LATTE";
                if(size=='s' || size== 's')
                {
                    item = 210.0;
                }
                else if(size=='m' || size=='M')
                {
                    item = 330.0;
                }
                else if(size=='l' || size=='L')
                {
                    item =380.0;
                }
                break;
            }
            case 4:
            {
                iname[50]="CAFE LATTE";
                if(size=='s' || size== 's')
                {
                    item = 165.0;
                }
                else if(size=='m' || size=='M')
                {
                    item = 280.0;
                }
                else if(size=='l' || size=='L')
                {
                    item =330.0;
                }
                break;
            }
            case 5:
            {
                iname[50]="HOT CHOCOLATE";
                if(size=='s' || size== 's')
                {
                    item = 250.0;
                }
                else if(size=='m' || size=='M')
                {
                    item = 360.0;
                }
                else if(size=='l' || size=='L')
                {
                    item =400.0;
                }
                break;
            }
              case 6:
            {
                iname[50]="CHAI LATTE";
                if(size=='s' || size== 's')
                {
                    item = 200.0;
                }
                else if(size=='m' || size=='M')
                {
                    item = 330.0;
                }
                else if(size=='l' || size=='L')
                {
                    item =400.0;
                }
                break;
            }

            case 7:
            {
                iname[50]="AMERICANO";
                if(size=='s' || size== 's')
                {
                    item = 135.0;
                }
                else if(size=='m' || size=='M')
                {
                    item = 250.0;
                }
                else if(size=='l' || size=='L')
                {
                    item =310.0;
                }
                break;
            }
            case 8:
            {
                iname[50]="ESPRESSO";
                if(size=='s' || size== 's')
                {
                    item = 115;
                }
                else if(size=='m' || size=='M')
                {
                    item = 135.0;
                }
                else if(size=='l' || size=='L')
                {
                    item =160.0;
                }
                break;
            }
              case 9:
            {
                iname[50]="CAPPUCINO";
                if(size=='s' || size== 's')
                {
                    item = 210.0;
                }
                else if(size=='m' || size=='M')
                {
                    item = 330.0;
                }
                else if(size=='l' || size=='L')
                {
                    item =380.0;
                }
                break;
            }
             case 10:
            {
                iname[50]="SMOOTHIE";
                if(size=='s' || size== 's')
                {
                    item = 150.0;
                }
                else if(size=='m' || size=='M')
                {
                    item = 200.0;
                }
                else if(size=='l' || size=='L')
                {
                    item =240.0;
                }
                break;
            }

             default:
                printf("\n\n                             Provide Valid Valuen");

          }
          }


}








