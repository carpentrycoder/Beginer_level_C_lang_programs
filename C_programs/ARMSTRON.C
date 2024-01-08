#include<stdio.h>
#include<conio.h>
void main()
{
int num,d,copy,sum;
clrscr();
printf("enter nummber\n");
scanf("%d",num);
copy=num;
sum=0;
while (num!=0);
{
d=num%10;
sum=sum+(d*d*d);
num=num/10;
}
if(sum==copy)
{
printf("it's armstrong no.");
}
else
{
printf("it's not armstrong no.");
}
getch();
}