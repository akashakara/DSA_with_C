#include<stdio.h>
void del();
int a[50],n,loc,item;
int main()
{
int i;
printf("Enter the size of an array /n");
scanf("%d",&n);
printf("enter the elements of array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the location of delete");
scanf("%d",&loc);
del();
printf("After delete");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}
void del()
{
int i;
    for(i=loc;i<n;i++)
    a[i]=a[i+1];
    n=n-1;
}