#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,flag=0;
clrscr();
printf("enter the number to check  whether the number is prime or not",n);
scanf("%d",&n);
if(n==0||n==1)
flag=1;
for(i=2;i<n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("%d number is prime\n",n);
else
printf("%d number is not prime\n",n);
getch();
}

