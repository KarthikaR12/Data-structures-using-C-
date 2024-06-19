#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
int n;
clrscr();
printf("enter a positive  number:");
scanf("%d",&n);
printf("factorial of %d=%d",n,fact(n));
getch();
}
int fact(int n)
{
if(n>=1)
return n *fact(n-1);
else
return 1;
}
