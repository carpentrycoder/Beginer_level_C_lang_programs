#include<stdio.h>
#include<conio.h>
void readarray(int a[50],int n)
{
 int i;
 printf("\nEnter elemtns in array...\n");
 for(i=0;i<n;i++)
 {
  printf("enter value a[%d]=",i);
  scanf("%d",&a[i]);
 }

 }


void insertionsort(int a[50], int n)
{
 int j,curr,key;
 for(j=1;j<n;j++)
 {
  key = a[j];
  for(curr = j-1;(curr>=0) && (a[curr]>key); curr--)
  {
   a[curr+1]= a[curr];
  }
  a[curr+1] = key;
 }
}

void printarray(int a[50] , int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  printf("a[%d] = %d\n",i,a[i]);
 }
 printf("\n");
}

void main()
{
 int x[50],n;
 clrscr();
 printf("********INSERTION SORT********");
 printf("enter elements to be sorted...\n");
 scanf("%d",&n);
 readarray(x,n);
 insertionsort(x,n);
 printf("SORETED ARRAY IS HERE ");
 printarray(x,n);
 getch();
}
