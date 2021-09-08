#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
 char str[] = "Rendezvous !";
clrscr();
 printf("%s",*(str+strlen(str)));
getch();
}
 