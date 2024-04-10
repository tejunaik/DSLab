#include <stdio.h>
#include <conio.h>
void main()
{
int arr[50],i,j,n,temp;
clrscr();
printf("enter the number of elements:\n",n);
scanf("%d",&n);
printf("the elememts are:\n");
for (i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=1;i<n;i++)
{
temp=arr[i];
j=i-1;
while(j>=0&&arr[j]>temp)
{
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=temp;
}
printf("sorted elements are:\n");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
printf("\n");
}
getch();
}