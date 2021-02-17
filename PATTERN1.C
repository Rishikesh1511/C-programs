#include<conio.h>
#include<stdio.h>
 void main()
  {
   int r,c,n;
  clrscr();
  scanf("%d",&n);
   for(c=0;c<n;c++)
    {
     for(r=0;r<n-c;r++)
      {
       printf("*");
      }
      printf("\n");
    }
   getch();
  }
