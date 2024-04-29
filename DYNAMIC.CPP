#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void exit(int status);
void main()
{
int n,i;
int* data,min,max;
clrscr();
printf("enter the number of elements:");
scanf("%d",&n);
data=(int*)calloc(n,sizeof(int));
if(data==NULL)
{
printf("error!!!memory not allowed");
exit(0);
}
for(i=0;i<n;i++)
{
printf("enetr number %d:",i+1);
scanf("%d",data+i);
}
min=max=data[0];
for(i=0;i<n;i++)
{
if(data[i]<min)
{
min=data[i];
}
if(data[i]>max)
{
max=data[i];
}
}
printf("smallest number is:%d\n",min);
printf("largest number is:%d\n",max);
free(data);
getch();
}