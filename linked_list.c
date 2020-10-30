#include<stdio.h>
#include<conio.h>
#include<stdlib.h>>
int main()
{
struct node
{
int info;
struct node * link;
} *start=NULL,*temp,*ptr;
int ch,item;
while(1)
{
printf("\n 1 for inser 1st 2 for delete 3 for display");
printf("\n choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter the element");
scanf("%d",&item);
temp=(struct node *) malloc (sizeof (struct node));
temp->info=item;
temp->link=start;
start=temp;
printf("%d is inserted",item);
break;
case 2:
if(start==NULL)
printf("Empty");
else
{
ptr=start;
item=ptr->info;
start=start->link;
printf("%d is deleted",item);
}
break;
case 3:
ptr=start;
if(ptr==NULL)
printf("empty");
else
{
int i=1;
while(ptr!=NULL)
{
printf(" %d| %d| %d| %d|| ",i,ptr,ptr->info,ptr->link);
ptr=ptr->link;
i++;
}
}
break;
case 4:
exit(0);
}
}
return 0;
getch();
}