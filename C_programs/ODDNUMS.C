#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,ans;
 clrscr();
 printf("enter a number\n");
 scanf("%d",n);
 for(i=1;i<=n;i++)
 {
  ans=(2*i-1);
  printf("%d\n",ans);
 }
getch();
}