#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;               //print * in diagonal by help of 3 d array
int a[5][5][5];
clrscr();
for(i=1;i<=3;i++)
{
 for(j=1;j<=6;j++)
 {
  for(k=1;k<=9;k++)
  {
printf("* ");
  }
  printf("\n");
  }
   printf("\n");
    }
getch();
}