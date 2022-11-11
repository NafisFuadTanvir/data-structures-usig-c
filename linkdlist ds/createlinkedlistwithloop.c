#include<stdio.h>
#include<stdlib.h>
struct node{

int data;
struct node *next;
};
struct node *head=NULL;

void insert(int value)
{

struct node *newnode= (struct node *)malloc(sizeof(struct node));
newnode->data= value;
newnode->next=head;
head=newnode;

}
void print()
{
struct node *temp=head;
printf("list is:- ");
while(temp!=NULL)
{

printf(" %d",temp->data);
temp=temp->next;
}
printf("\n");

}


int main()
{
printf("how many numbers you want to add?\n");
int n,i,g;
scanf("%d",&n);
for(i=0;i<n;i++)
{

printf("enter the number\n");
scanf("%d",&g);
insert(g);
print();

}
    return 0;
}