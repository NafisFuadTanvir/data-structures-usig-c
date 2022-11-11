#include<stdio.h>
#include<stdlib.h>

struct node{

int data;
struct node *next;

};
//Travarsing:- 
void linkedlisttravarsal(struct node *head)
{
    while(head!=NULL)
    {
       printf("element %d\n",head->data);
       head=head->next;
    }
    
}
//

//case:--1
struct node *insertatfirst(struct node *head,int data)
{
 struct node *newnode= (struct node*)malloc(sizeof(struct node));
 newnode->data= data;
 newnode->next= head;
 return newnode;
}
//

//case:--2
struct node *insertatbetween(struct node *head,int data,int index)
{
struct node *newnode= (struct node*)malloc(sizeof(struct node));
struct node *temp= head;
int i=0;
while(i != index-1)
{
temp=temp->next;
i++;

}
newnode->data=data;
newnode->next= temp->next;
temp->next= newnode;
return head;
}
//

//case:--3
struct node *inserattheand(struct node *head,int data)
{
struct node *newnode= (struct node *)malloc(sizeof(struct node));
newnode->data=data;
struct node *temp;
temp=head;
while(temp->next != NULL)
{
    temp=temp->next;
}
temp->next=newnode;
newnode->next=NULL;
return head;
}
//

//case:--4
struct node *insertafteranode(struct node *head,struct node *prevnode,int data)
{
struct node *newnode= (struct node *)malloc(sizeof(struct node));
newnode->data=data;
newnode->next=prevnode->next;
prevnode->next=newnode;


return head;
}
//
int main()
{

struct node *head,*first,*second;
head=(struct node *)malloc(sizeof(struct node));
first=(struct node *)malloc(sizeof(struct node));
second=(struct node *)malloc(sizeof(struct node));

head->data=10;
head->next= first;
 
first->data=50;
first->next=second;

second->data=800;
second->next=NULL;

printf("\nafter travarse first:-\n");
linkedlisttravarsal(head);

printf("\nafter insert in first:-\n");
head=insertatfirst(head,700 );
linkedlisttravarsal(head);

printf("\nafter insert in between:-\n");
head=insertatbetween(head,500,2);
linkedlisttravarsal(head);

printf("\nafter insert in the end:-\n");
head= inserattheand(head,5000);
linkedlisttravarsal(head);

printf("\ninsert after a node:-\n");
head= insertafteranode(head,first,200);
linkedlisttravarsal(head);

}