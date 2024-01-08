#include<stdio.h>
#include<conio.h>
void main()
{
 float r,h,v;
 clrscr();
 printf("enter the radius and height of cone\n");
 scanf("%f%f",&r,&h);
 v=1.0/3.0*(3.14)*r*r*h;
 printf("the volume of cone is %f",v);
 getch();


}