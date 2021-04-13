	/* Swapping two number without using third variable using XOR operator */

#include<conio.h>
#include<stdio.h>
main()
{
int n1,n2;
clrscr();
scanf("%d%d",&n1,&n2);
n1 = n1^n2;
n2 = n1^n2;
n1 =n1^n2;
printf("n1 = %d\nn2 = %d",n1,n2);

getch();
}
