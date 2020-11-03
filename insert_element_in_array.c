#include<stdio.h>
void insert();
int a[10],n,loc,item;
int main()
{
int i;
printf("Enter the size of an array");
scanf("%d",&n);
printf("enter the elements of array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the location of insertion");
scanf("%d",&loc);
printf("Enter the item");
scanf("%d",&item);
insert();
printf("After inserting");
for(i=0;i<n;i++)
printf("%d",a[i]);
return 0;
}
void insert()
{

    int i=n-1;
    while (i>=loc-1)
    {
        a[i+1]=a[i];
        i--;
    }
    a[loc-1]= item;
    n++;
}
