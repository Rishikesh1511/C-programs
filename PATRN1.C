#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;               //print * in diagonal by help of 2 d array
int a[16][16];
clrscr();
for(i=1;i<=12;i++)
{
 for(j=1;j<=i;j++)
 {
printf("* ");
  }
  printf("\n");
    }
getch();
}