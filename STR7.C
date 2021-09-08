#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
static char s[] = "C smart !!";
int i;
clrscr();

for(i=0;s[i];i++)
   printf("%c%c%c%c\n",s[i],*(s+i),i[s],*(i+s));
getch();
}
 