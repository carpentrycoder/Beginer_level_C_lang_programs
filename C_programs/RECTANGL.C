#include<stdio.h>
#include<conio.h>
void main()
{
 int length,breadth,area,perimeter;
clrscr();
printf("enter the length and breadth of rectangle\n");
scanf("%f%f",&length,&breadth);
area=length*breadth;
perimeter=2.0*(length+breadth);
printf("area is %f\n",area);
printf("perimeter is %f\n",perimeter);
getch();
}







