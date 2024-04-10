#include<stdio.h>
#include<conio.h>
#define MAX 5
int front=-1,rear=-1,item,q[MAX];
void qinsert()
{
if(rear>=MAX-1)
printf("\n queue is full !!");
else
{
printf("enter an element to be inserted into queue:");
scanf("%d",&item);
if(front==-1)
front=0;
rear=rear+1;
q[rear]=item;
}
}
void qdelete()
{
int d;
if(front==-1)
printf("queue is empty !!");
else
{
d=q[front];
if(front==rear)
front=rear=-1;
else
front=front+1;
printf("\n deleted element is:%d",d);
}
}
void qdisplay()
{
int i;
if(front==1)
printf("queue is empty !!");
else
{
printf("\n content of the queue:\t");
for(i=front;i<=rear;i++)
printf("%d\t",q[i]);
}
}
void main()
{
int ch;
clrscr();
do
{
printf("\n****MENU****");
printf("\n 1.insert");
printf("\t 2.delete");
printf("\t 3.display");
printf("\t 4.exit");
printf("\n enetr your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:qinsert();
break;
case 2:qdelete();
break;
case 3:qdisplay();
break;
case 4:printf("\n exit");
break;
default:printf("\n invalid option");
break;
}
}
while(ch!=4);
getch();
}