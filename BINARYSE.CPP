#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,temp,a[10];
clrscr();
printf("enter the number of elements:");
scanf("%d",&n);
printf("enter %d integer value:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
//sort the array in ascending order using bubble sort
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
//swap a[j] and a[j+1]
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted array in ascending order:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("\n");
getch();
}