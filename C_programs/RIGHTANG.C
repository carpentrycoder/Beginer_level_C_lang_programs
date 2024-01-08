#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j;
 for (i=1;i<=8;i++)
{
 for(j=1;j<=(8-i);j++)
{
 printf("A");
}
printf("\n");
}
getch();
}