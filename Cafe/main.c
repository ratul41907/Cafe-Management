#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<windows.h>
#include<dos.h>
#include "screen.h"
#include "welcome.h"
#include "menubar.h"
#include "bill.h"
void screen();
void welcome(char uname[10],int pass);
void menubar();
void bill();
int main()
{

    char uname[10];
    int pass,n;
    screen();
    welcome(uname,pass);
    getch();

}








