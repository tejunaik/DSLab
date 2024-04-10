#include<stdio.h>
#include<conio.h>
 void main()
 {
 int i,n,arr[50],item,pos;
 clrscr();
 printf("enter the number of elements:\n");
 scanf("%d",&n);
 printf("enter the elements are:\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&arr[i]);
 }
 printf("enter the searching elements:");
 scanf("%d",&item);
 pos=-1;
 for(i=0;i<n;i++)
 {
 if(item==arr[i])
 {
 pos=i;
 break;
 }
 }
 if(pos>=0)
 {
 printf("searching element is found,%d element is found at location%d:\n",item,pos+1);
}
 else
 {
 printf("searching element is not found\n",item);
 }
 getch();
 }