#include<conio.h>
#include<stdio.h>
 void main()
  {
   int r,c,n,d;
  clrscr();
  scanf("%d",&n);
   for(c=1;c<=n;c++)
    {
     for(r=1;r<=n;r++)
      {
	if(r>n-c)
	{
	   printf("*");
      }
      else
      {
       printf(" ");
       }
      }
	   printf("\n");
    }
   getch();
  }
