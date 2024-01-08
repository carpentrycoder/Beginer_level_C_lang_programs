#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,max,c;
clrscr();
printf("enter three no.\n");
scanf("%d%d%d",&a,&b,&c);
max=(a>b&&a>c)?a:(b>a&&b>c)?b:c;
printf("the maximum value is %d\n",max);
getch();
}