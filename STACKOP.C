#include<stdio.h>
#include<conio.h>
#define max 4
int top=-1;
int stack[20];
void push();
void pop();
void display();
void main()
{
int abc=1,ch;
clrscr();
while (abc)
{
printf("stack\n");
printf("1.push\n");
printf("2.pop\n");
printf("3.display\n");
printf("enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
default:printf("invalid choice");
break;
}
printf("continue?1/0(yes/no):");
scanf("%d",&abc);
}
getch();
}
void push()
{
int x;
printf("enter the elements to be inserted:");
scanf("%d",&x);
if(top>=max-1)
{
printf("OVERFLOW\n");
return;
}
else
{
top=top+1;
stack[top]=x;
}
}
void pop()
{
int x;
if(top<0)
{
printf("UNDERFLOW\n");
return;
}
else
{
x=stack[top];
top=top-1;
printf("deleted elements is :%d\n",x);
}
}
void display()
{
int i;
if(top==-1)
{
printf("no elements\n");
return;
}
for(i=top;i>=0;i--)
printf("%d\t",stack[i]);
}