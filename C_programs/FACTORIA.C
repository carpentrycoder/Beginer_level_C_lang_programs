#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n;
 clrscr();
 printf("enter the number whose factorial you want\n");
 scanf("%d",&n);
 for(i=(n-1);i>=n;i--)
 {
  n=n*i;
 }
 printf("the answer is %d\n");
 getch();
}