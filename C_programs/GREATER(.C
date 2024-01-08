#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,n3,great,greater;
clrscr();
printf("enter three numbers\n");
scanf("%d%d%d",&n1,&n2,&n3);
great=(n1>n2)?n1:n2;
greater=(great>n3)?great:n3;
printf("the biggest value is %d",greater);
getch();
}