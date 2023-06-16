#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<windows.h>
#include<dos.h>
#include<string.h>
#include "splash.h"
#include "login.h"
#include "menubar.h"
#include "menu.h"
#include "bill.h"
void screen();
void welcome(char uname[10],int *pass);
void menubar();

int main()
{

    FILE *file;
    file = fopen("cse115","w");
    fclose(file);

    char uname[10];
    int pass,n;
    screen();
    welcome(uname,&pass);


    getch();

}








