#include<stdio.h>
#include<conio.h>
			/* bubble sort in c */
void main()
{
int a[5] = {12,3,56,78,1};
clrscr();

for(int i=4;i>=0;i--)
{
 for(int j=0;j<i;j++)
 {
   if(a[j]>a[j+1])
   {
     int temp = a[j];
     a[j] = a[j+1];
     a[j+1] = temp;
   }
 }
}

for(int k=0;k<5;k++)
{
 printf("%d ",a[k]);
}

getch();
}
