#include<stdio.h>
#include<conio.h>
void toh(int,char,char,char);
void main()
{
int n;
clrscr();
printf("enter the no of disks:");
scanf("%d",&n);
toh(n,'a','b','c');
getch();
}
void toh(int n,char a,char b,char c)
{
if(n>=1)
{
toh(n-1,a,c,b);
printf("\n move disk %d from rod %c to rod %c",n,a,b);
toh(n-1,c,b,a);
}
}