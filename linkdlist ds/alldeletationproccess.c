#include<stdio.h>
#include<stdlib.h>

struct node{

int data;
struct node *next;

};
void linkedlisttravarsal(struct node *head)
{
    while(head!=NULL)
    {
       printf("element %d\n",head->data);
       head=head->next;
    }
    
}
//case:--1
struct node *deletefirstnode(struct node *head)
{
    struct node *temp=head;
    head=head->next;
    free(temp);
    return head;
}
//
//case--2
struct node *deleteatgivenindex(struct node *head,int index)
{

struct node *temp=head;
struct node *temp2= head->next;
int i;
for(i=0;i<index-1;i++)
{
    temp=temp->next;
    temp2=temp2->next;
}
temp->next= temp2->next;
free(temp2);
return head;

}
//

//case--3
struct node *deletethelastelement(struct node *head)
{
struct node *temp=head;
struct node *temp2= head->next;
while(temp2->next !=NULL)
{
    temp=temp->next;
    temp2=temp->next;
}
temp->next=NULL;
free(temp2);
return head;
}
//
//case:--4
struct node *deleteatagivenvalue(struct node *head,int value)
{

struct node *temp=head;
struct node *temp2=head->next;
while(temp2->data != value && temp2->next!=NULL)
{

temp=temp->next;
temp2=temp2->next;
}
if(temp2->data ==  value)
{
    temp->next=temp2->next;
    free(temp2);
}
return head;
}
int main()
{

struct node *head,*first,*second,*third,*fourth;
head=(struct node *)malloc(sizeof(struct node));
first=(struct node *)malloc(sizeof(struct node));
second=(struct node *)malloc(sizeof(struct node));
third=(struct node *)malloc(sizeof(struct node));
fourth=(struct node *)malloc(sizeof(struct node));

head->data=10;
head->next= first;
 
first->data=50;
first->next=second;

second->data=800;
second->next=third;

third->data=500;
third->next=fourth;

fourth->data=600;
fourth->next=NULL;

printf("linkedlist after travarsel:-\n");
linkedlisttravarsal(head);

printf("\nafter deleting the first node:-\n");

head=deletefirstnode(head);
linkedlisttravarsal(head);

printf("\nafter delete in a given index:-\n");

head= deleteatgivenindex(head,2);
linkedlisttravarsal(head);

printf("\nafter deleting the last node:-\n");

head=deletethelastelement(head);
linkedlisttravarsal(head);

printf("\nafter deleting the given value:-\n");

head=deleteatagivenvalue(head,800);
linkedlisttravarsal(head);

}