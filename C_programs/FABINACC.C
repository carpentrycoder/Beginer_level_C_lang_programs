#include<stdio.h>
#include<conio.h>
void main()
{
 int a=0,b=1,c,n,i;
 clrscr();
 printf("enter number\n");
 scanf("%d",&n);
 printf("fibonacci series\n");
 for (i=1;i<=n;i++)
 {
  printf("%d\n",a);
  c=a+b;
  a=b;
  b=c;
  }
  getch();
  }