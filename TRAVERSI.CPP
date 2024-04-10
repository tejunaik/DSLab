#include<stdio.h>
#include<conio.h>
 void main()
 {
 int arr[10],i,n;
 clrscr();
 printf("enter the number of elements array:\n",n);
 scanf("%d",&n);
 printf("enter the elements are:\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&arr[i]);
 }
 printf("entered elements are:\n");
 for(i=0;i<n;i++)
 {
 printf("%d",arr[i]);
 printf("\n");
 }
 getch();
 }
