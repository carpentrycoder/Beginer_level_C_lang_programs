#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,fact=1;
float sum=0;
clrscr();
printf("enter no.\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 fact=fact*i;
 sum=sum+(1.0/fact);
 }
 printf("%f",sum);
 getch();
 }