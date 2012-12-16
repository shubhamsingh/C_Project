#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
int data;
struct node *link;
};
void main()
{
struct node *q;
q=NULL;

void addatbeg(struct node*q,int num)
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=num;
temp->link=*q;
*q=temp;
}


void display(struct node *q)
{
while(q !=NULL)
{
printf("%d",q->data);
q=q->link;
}
printf("\n");
}
getch();
}