#include<stdio.h>
#include<conio.h>
void main()
{
int i,ans=1,n;
clrscr();
printf("enter the number for table\n");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
ans=n*i;
}
printf("%d\n",ans);
getch();
}