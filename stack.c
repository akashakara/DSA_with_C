#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
int main()
{
int a[MAX],item,ch,i,TOP=-1;
while(1)
{
printf(" \n 1 for PUSH \n 2 for POP \n 3 for DISPLAY \n 4 for exit\n");
printf("\nChoice?\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
if(TOP==MAX-1)
printf("\n Full\n");
else
{
printf("\n Enter the element\n");
scanf("%d",&item);
TOP=TOP+1;
a[TOP]=item;
printf("%d is inserted",item);
}
break;
case 2:
if (TOP==-1)
printf("\n Empty \n");
else
{
item=a[TOP];
TOP=TOP-1;
printf("%d is deleted",item);
}
break;
case 3:
if(TOP==-1)
printf("\nEmpty\n");
else
{
printf("Elements are");
for(i=TOP;i>=0;i--)
printf("\n%d",a[i]);
}
break;
case 4:
exit(0);
default:
printf("Wrong choice");
}
}
getch();
return 0;
}
