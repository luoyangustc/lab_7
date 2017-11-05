#include <stdio.h>  
#include <stdlib.h>  
#include <unistd.h>  
#include <time.h>  
#include "menu.h"  
void quit(int argc, char *argv[]);  
void version(int argc, char *argv[]);  
void date(int argc, char *argv[]);  
void quit(int argc, char *argv[])  
{  
    exit(0);  
}  
void version(int argc, char *argv[])  
{     
    printf("Microsoft Windows 10.0.14393\n");  
}  
void date(int argc, char *argv[])  
{  
    time_t timep;  
    struct tm *p;  
    time(&timep);  
    p=gmtime(&timep);  
    printf("%d\\",1900+p->tm_year);  
    printf("%d\\",1+p->tm_mon);  
    printf("%d\n",p->tm_mday);  
}  
int main(int argc,char* argv[])  
{  
MenuConfig("version","XXX1.0(Menu program v7.0 inside)",NULL);  
MenuConfig("quit","Quit the program",quit);  
MenuConfig("date","Show the date",date);  
ExecuteMenu();  
return 0;  
}  