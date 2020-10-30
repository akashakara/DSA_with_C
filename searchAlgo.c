//Binary Search

#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],n,s,it,l,e,m,i;
printf("enter the size of the array");
scanf("%d",&n);
printf("Enter the elements in sorted order");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the element for search");
scanf("%d",&it);
s=0;
l=n-1;
m=((s+l)/2);
while((l>=s) && (a[m]!=it))
{
if (it>a[m])
s=m+1;
else
l=m-1;
m=(s+l)/2;
}
if (a[m]==it)
printf("found in position %d",m+1);
else
printf("not found");
getch();
}


//Linear Search

#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],i,n,item;
printf("Enter the size of the array");
scanf("%d",&n);
printf("Enter the elements of the array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Elements for search");
scanf("%d",&item);
for(i=0;i<n;i++)
{
if(item==a[i])
{
printf("found position %d",i+1);
break;
}
}
if(i==n)
printf("not found");
getch();
}