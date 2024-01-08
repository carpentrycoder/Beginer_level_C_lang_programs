/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define max 5
int st[max];
int top = -1;
void push();
void pop();
void display();

int main()
{
    int ch;
  do
    {
        printf("\n1.push\n 2.pop\n 3.display\n 4.end\n");
    
        printf("enter choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:printf("end\n");
            break;
            default:printf("bad choice\n");
            break;
        }
    }
    while(ch!=4);
    return 0;
}

void push()
{
    if(top==max-1)
    {
        printf("full\n");
    }
    else
    {
        top++;
        printf("enter number\n");
        scanf("%d",&st[top]);
    }
}

void pop()
{
    if(top==-1)
    {
        printf("empty\n");
    }
    else
    {
        top--;
    }
}

void display()
{
    int i;
    if( top==-1)
    {
    printf("empty\n");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("%d \n",st[i]);
        }
    }
}



