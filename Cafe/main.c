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
#include "menu1.h"
void screen();
void welcome(char uname[10],int *pass);
void bill(FILE *file);
void menubar();
void memo();
int main()
{

    FILE *file;
    file = fopen("cse115.txt","a");
    fclose(file);

    char uname[10],name[50];
    int pass,n;
    screen();
    welcome(uname,&pass);



    memo(file);
    getch();

}








