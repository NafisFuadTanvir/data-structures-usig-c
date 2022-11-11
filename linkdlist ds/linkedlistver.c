#include<stdio.h>
#include<stdlib.h>
struct nafis
{
    int data;
    struct nafis *next;
}*head=NULL;
int main()
{
    int value,size,i;
    scanf("%d",&size);
    struct nafis *temp;
    struct nafis *newnode;
    newnode=(struct nafis *)malloc(sizeof(newnode));
    scanf("%d",&value);
    newnode->data=value;
    newnode->next= NULL;
    temp=head;
for(temp=head;temp->next !=NULL;temp=temp->next)
{
    newnode=(struct nafis *)malloc(sizeof(newnode));
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    
    while(temp->next !=NULL)
    {
        printf("the data is %d------->",temp->data);
        temp=temp->next;
    }
    temp->next=newnode;
}
}