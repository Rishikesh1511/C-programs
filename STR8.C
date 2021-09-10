#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
static char s[] = "Oinks Grunts and Guffaws";
int i;
clrscr();

printf("%c\n",*(&s[2]));
printf("%s\n",s+5);
printf("%s\n",s);
printf("%c\n",*(s+2));
printf("%d\n",s);
getch();
}
 