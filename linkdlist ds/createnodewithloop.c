#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
int main()
{
struct node *head,*newnode,*temp;
head=NULL;
int choice;
while(choice)
{

newnode= (struct node *)malloc(sizeof(struct node));
printf("enter the data:- ");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(temp==NULL)
{
    temp->next=newnode;
}
else{
temp->next=newnode;
temp=newnode;
}
printf("do you want to continue?\n");
scanf("%d",&choice);
}

while(temp!=NULL)
{
    printf("%d-->",temp->data);
    temp=temp->next;
}


}