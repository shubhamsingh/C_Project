#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void display(struct node *head);
void interbug(struct node **head,int data);
void main()
{
typedef struct nodetype
{
struct nodetype *next;
}node;
node *head;
int i,data;
for(i=1;i<=3;i++)
{
insertbug(*head,i);
}
display (*head);
getch();
}

void interbug(struct node**head,int data);
{
node *ptr;
ptr=(struct node*)malloc(sizeof(node));
ptr->info=data;
if(*head==NULL)
{
ptr->next=NULL;
*head=ptr;
}
else
ptr->next=*head;
*head=ptr;
}

void display(node *head)
{
while(head !=NULL)
{
printf("%d",head->info);
head=head->next;
}
}
