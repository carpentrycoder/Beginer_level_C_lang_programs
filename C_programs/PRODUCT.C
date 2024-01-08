#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,product;
 clrscr();
 printf("enter number for product on screen\n");
 scanf("%d",n);
 product=1;
 for(i=1;i<=n;i++)
 {
  product=product*i
 }
 printf("answer is %d",product);
 getch();
}