#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
int main()
{
int q[max],r=-1,f=-1,i,item,ch;
while(1)
{
printf("\n1 for insert \n2 for delete \n3 for display");
printf("\nchoice?");
scanf("%d",&ch);
switch(ch)
{
case 1:
if (r==max-1)
printf("full");
else
{
printf("\nEnter the element");
scanf("%d",&item);
if(r==-1 && f==-1)
{
r=0;
f=0;
}
else
r++;
q[r]=item;
printf("\n%d is inserted",item);
}
break;
case 2:
if (f==-1)
printf("Empty");
else
{
item=q[f];
if(f==r)
{
f=-1;
r=-1;
}
else
f=f+1;
printf("\n%d is deleted",item);
}
break;
case 3:
if (f==-1)
printf("\nEmpty");
else
{
printf("\nElements are");
for(i=f;i<=r;i++)
printf("\t%d",q[i]);
}
break;
case 4:
exit(0);

default:
printf("Wrong choice");
}
}
return 0;
getch();
}
