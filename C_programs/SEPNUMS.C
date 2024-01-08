#include<stdio.h>
#include<conio.h>
void main()
{
 int n,d1,d2,d3;
 clrscr();
 printf("enter 3 Digit number which want to seprate\n");
 scanf("%d",n);
 d1=n%10;
n=n/10;
d2=n%10;
n=n/10;
d3=n%10;
n=n/10;
printf("this are the seprated digits \n%d\n%d\n%d",d1,d2,d3);
getch();
}